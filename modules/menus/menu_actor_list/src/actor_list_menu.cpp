#include <cstdio>
#include "menus/menu_actor_list/include/actor_list_menu.h"
#include "memory_editor.h"
#include "settings.h"
#include "libtp_c/include/d/com/d_com_inf_game.h"
#include "libtp_c/include/f_op/f_op_draw_tag.h"
#include "libtp_c/include/d/d_procname.h"
#include "gz_flags.h"
#include "rels/include/defines.h"
#include "menus/utils/menu_mgr.h"
#include "fs.h"
#include "boot/include/collision_view.h"
#include "libtp_c/include/m_Do/m_Do_printf.h"

#ifdef GCN_PLATFORM
#define CONTROLLER_RIGHT GZPad::DPAD_RIGHT
#define CONTROLLER_LEFT GZPad::DPAD_LEFT
#define CONTROLLER_Z GZPad::Z
#define CONTROLLER_A GZPad::A
#define MEM_SWITCH_BTN GZPad::Y
#define CONTROL_TEXT "Y"
#define DELETE_TEXT "START"
#define DELETE_BUTTON GZPad::START
#endif
#ifdef WII_PLATFORM
#define CONTROLLER_RIGHT GZPad::DPAD_RIGHT
#define CONTROLLER_LEFT GZPad::DPAD_LEFT
#define CONTROLLER_Z GZPad::Z
#define CONTROLLER_A GZPad::A
#define MEM_SWITCH_BTN GZPad::C
#define CONTROL_TEXT "C"
#define DELETE_TEXT "PLUS"
#define DELETE_BUTTON GZPad::PLUS
#endif

// used in gizmo drawing
fopAc_ac_c* current_actor;

namespace ActorGizmo {
typedef void (*drawCallback)(fopAc_ac_c*);
void searchActorForCallback(fopAc_ac_c* actor, drawCallback callback) {
    node_class* node = g_fopAcTg_Queue.mpHead;

    for (int i = 0; i < g_fopAcTg_Queue.mSize; i++) {
        if (node != NULL) {

            if (actor != NULL && callback != NULL) {
                callback(actor);
            }
        }
        node = node->mpNextNode;
    }
}

void drawGizmo(fopAc_ac_c* actor) {
    // Gizmo cube size and angle
    cXyz cube_size = {10.0f, 10.0f, 10.0f};
    csXyz cube_angle = {0, 0, 0};

    // Colors for the gizmo's axis lines and cube
    GXColor red = {255, 0, 0, 255};
    GXColor green = {0, 255, 0, 255};
    GXColor blue = {0, 0, 255, 255};
    GXColor white = {255, 255, 255, 255};

    // length of the gizmo's axis grid lines to draw
    f32 grid_line_length = 200.0f;

    // width of the gizmo's axis grid lines to draw
    u8 line_width = 20;

    // Draw a cube at the position of the actor
    dDbVw_drawCubeXlu(actor->current.pos, cube_size, cube_angle, white);

    // Gizmo axis line points
    cXyz point_x_a = {actor->current.pos.x + grid_line_length, actor->current.pos.y, actor->current.pos.z};
    cXyz point_x_b = {actor->current.pos.x - grid_line_length, actor->current.pos.y, actor->current.pos.z};
    cXyz point_y_a = {actor->current.pos.x, actor->current.pos.y + grid_line_length, actor->current.pos.z};
    cXyz point_y_b = {actor->current.pos.x, actor->current.pos.y - grid_line_length, actor->current.pos.z};
    cXyz point_z_a = {actor->current.pos.x, actor->current.pos.y, actor->current.pos.z + grid_line_length};
    cXyz point_z_b = {actor->current.pos.x, actor->current.pos.y, actor->current.pos.z - grid_line_length};
    

    // Gizmo axis lines
    dDbVw_drawLineXlu(point_x_a, point_x_b, red, 1, line_width);
    dDbVw_drawLineXlu(point_y_a, point_y_b, green, 1, line_width);
    dDbVw_drawLineXlu(point_z_a, point_z_b, blue, 1, line_width);

    // Move camera to offset from actor position
    matrixInfo.matrix_info->pos = actor->current.pos + cXyz{100.0f,300.0f,100.0f};

    // Focus camera on actor position
    matrixInfo.matrix_info->target = actor->current.pos;
}

KEEP_FUNC void execute() {
    // Draw the gizmo for the current actor
    searchActorForCallback(current_actor, drawGizmo);
}
}  // namespace ActorGizmo

KEEP_FUNC ActorListMenu::ActorListMenu(Cursor& cursor, ActorListData& data)
    : Menu(cursor),
      l_index(data.l_index), 
      l_dataLoaded(data.l_dataLoaded), 
      l_procNameBuffer(data.l_procNameBuffer), 
      lines{
        {"", ACTOR_NAME_INDEX, "Z+A: freeze actor, Z+" DELETE_TEXT ": delete actor, " CONTROL_TEXT " view memory", false},
        {"", ACTOR_POSITION_X_INDEX, "dpad: +/-10.0, Z+dpad: +/-100.0", false},
        {"", ACTOR_POSITION_Y_INDEX, "dpad: +/-10.0, Z+dpad: +/-100.0", false},
        {"", ACTOR_POSITION_Z_INDEX, "dpad: +/-10.0, Z+dpad: +/-100.0", false},
        {"", ACTOR_ANGLE_X_INDEX, "dpad: +/-10, Z+dpad: +/-100", false},
        {"", ACTOR_ANGLE_Y_INDEX, "dpad: +/-10, Z+dpad: +/-100", false},
        {"", ACTOR_ANGLE_Z_INDEX, "dpad: +/-10, Z+dpad: +/-100", false},
      } {

        // track these so we can set them back when the menu exits
        l_cameraPlay = dComIfGp_getEventManager().mCameraPlay;
        l_halt = dComIfGp_getEvent().mHalt;
        
        // Freeze the game
        if (l_halt != 1)
            dComIfGp_getEvent().mHalt = 1;

        // Lock the camera to allow for its movement
        if (l_cameraPlay != 1)
            dComIfGp_getEventManager().mCameraPlay = 1;

      }

ActorListMenu::~ActorListMenu() {
        if (l_halt != dComIfGp_getEvent().mHalt)
            dComIfGp_getEvent().mHalt = l_halt;

        if (l_cameraPlay != dComIfGp_getEventManager().mCameraPlay)
            dComIfGp_getEventManager().mCameraPlay = l_cameraPlay;
}

template <typename T>
void updatePositionOrAngle(T* value, f32 smallChange, f32 largeChange, bool increase, bool largeIncrement) {
    if (value != NULL) {
        *value += (increase ? 1 : -1) * (largeIncrement ? largeChange : smallChange);
    }
}

void ActorListMenu::updateActorData() {
    node_class* node = g_fopAcTg_Queue.mpHead;
    fopAc_ac_c* actorData = NULL;

    for (int i = 0; i < g_fopAcTg_Queue.mSize; i++) {
        if (i == l_index && node != NULL) {
            create_tag_class* tag = (create_tag_class*)node;
            actorData = (fopAc_ac_c*)tag->mpTagData;
            break;
        }

        node = node->mpNextNode;
    }

    l_currentActor = actorData;
    current_actor = actorData;
}

void ActorListMenu::loadActorName() {
    if (l_currentActor) {
        int offset = (l_currentActor->mBase.mProcName*64)+32;
        int size = 32;
        loadFile("tpgz/procs.bin", l_procNameBuffer, size, offset);
    }
}

void ActorListMenu::draw() {
    cursor.setMode(Cursor::MODE_LIST);

    if (GZ_getButtonTrig(BACK_BUTTON)) {
        g_menuMgr->pop();
        OSReport("got here");
        return;
    }

    if (!l_dataLoaded) {
        updateActorData();
        loadActorName();
        l_dataLoaded = true;
    }

    bool rightPressed = GZ_getButtonRepeat(CONTROLLER_RIGHT,1);
    bool leftPressed = GZ_getButtonRepeat(CONTROLLER_LEFT,1);
    bool zPressed = GZ_getButtonPressed(CONTROLLER_Z);

    f32 smallPosChange = 10.0f, largePosChange = 100.0f;
    int smallAngleChange = 100, largeAngleChange = 1000;

    switch (cursor.y) {
    case ACTOR_NAME_INDEX:
        if (GZ_getButtonRepeat(CONTROLLER_RIGHT) && l_index < g_fopAcTg_Queue.mSize) {
            l_index++;
            updateActorData();
            loadActorName();
        } else if (GZ_getButtonRepeat(CONTROLLER_LEFT) && l_index > 0) {
            l_index--;
            updateActorData();
            loadActorName();
        }
        
        if (GZ_getButtonPressed(CONTROLLER_Z) && GZ_getButtonPressed(DELETE_BUTTON)) {
            if (l_currentActor) {
                if (l_currentActor->mBase.mProcName != PROC_ALINK) {
                    fopAcM_delete(l_currentActor);
                }
            }
        }

        if (GZ_getButtonPressed(CONTROLLER_Z) && GZ_getButtonPressed(CONTROLLER_A)) {
            if (l_currentActor) {
                l_currentActor->mBase.mPauseFlag = !l_currentActor->mBase.mPauseFlag;
            }
        }

        if (GZ_getButtonTrig(MEM_SWITCH_BTN)) {
                switch (cursor.y) {
                case ACTOR_NAME_INDEX:
                    g_memoryEditor_addressIndex = (uint32_t)l_currentActor;
                    g_menuMgr->push(MN_MEMORY_EDITOR_INDEX);
                    return;
                }
            }

        if (l_index > g_fopAcTg_Queue.mSize - 1)
            l_index = g_fopAcTg_Queue.mSize - 1;

        break;
    case ACTOR_POSITION_X_INDEX:
        if (rightPressed || leftPressed) {
            updatePositionOrAngle(&l_currentActor->current.pos.x, smallPosChange, largePosChange, rightPressed, zPressed);
        }
        break;
    case ACTOR_POSITION_Y_INDEX:
        if (rightPressed || leftPressed) {
            updatePositionOrAngle(&l_currentActor->current.pos.y, smallPosChange, largePosChange, rightPressed, zPressed);
        }
        break;
    case ACTOR_POSITION_Z_INDEX:
        if (rightPressed || leftPressed) {
            updatePositionOrAngle(&l_currentActor->current.pos.z, smallPosChange, largePosChange, rightPressed, zPressed);
        }
        break;
    case ACTOR_ANGLE_X_INDEX:
        if (rightPressed || leftPressed) {
            updatePositionOrAngle(&l_currentActor->shape_angle.x, smallAngleChange, largeAngleChange, rightPressed, zPressed);
        }
        break;
    case ACTOR_ANGLE_Y_INDEX:
        if (rightPressed || leftPressed) {
            updatePositionOrAngle(&l_currentActor->shape_angle.y, smallAngleChange, largeAngleChange, rightPressed, zPressed);
        }
        break;
    case ACTOR_ANGLE_Z_INDEX:
        if (rightPressed || leftPressed) {
            updatePositionOrAngle(&l_currentActor->shape_angle.z, smallAngleChange, largeAngleChange, rightPressed, zPressed);
        }
        break;
    }

    if (l_currentActor) {
        lines[ACTOR_NAME_INDEX].printf("name:  <%s>", l_procNameBuffer);
        lines[ACTOR_POSITION_X_INDEX].printf("pos-x: <%.1f>", l_currentActor->current.pos.x);
        lines[ACTOR_POSITION_Y_INDEX].printf("pos-y: <%.1f>", l_currentActor->current.pos.y);
        lines[ACTOR_POSITION_Z_INDEX].printf("pos-z: <%.1f>", l_currentActor->current.pos.z);
        lines[ACTOR_ANGLE_X_INDEX].printf("rot-x: <%d>", l_currentActor->shape_angle.x);
        lines[ACTOR_ANGLE_Y_INDEX].printf("rot-y: <%d>", l_currentActor->shape_angle.y);
        lines[ACTOR_ANGLE_Z_INDEX].printf("rot-z: <%d>", l_currentActor->shape_angle.z);
    }

    cursor.move(0, ACTOR_LIST_LINE_COUNT);
    GZ_drawMenuLines(lines, cursor.y, ACTOR_LIST_LINE_COUNT);
}
