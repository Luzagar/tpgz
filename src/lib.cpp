#include "libtp_c/include/controller.h"
#include "libtp_c/include/tp.h"
#include "utils/hook.h"
#include "utils/link.hpp"
#include "utils/memory.hpp"
#include "utils/card.hpp"
#include "fonts/consolas.h"
#include "fifo_queue.h"
#include "font.h"
#include "menu.h"
#include "menus/main_menu.h"
#include "menus/position_settings_menu.h"
#include "menus/tools_menu.h"
#include "gz_flags.h"
#include "input_viewer.h"
#include "utils/draw.h"
#include "timer.h"
#include "free_cam.h"
#include "movelink.h"

_FIFOQueue Queue;
bool card_load = true;
Font default_font;

extern "C" {

#define main_tampoline ((void(*)(void))0x803737b4)
void apply_lib_hooks() {
    Hook::apply_hooks();
    main_tampoline();
}

void init() {
    default_font = Font(f_Consolas, consolas_bytes);
    PosSettingsMenu::initDefaults();
    Draw::init();
    fifo_visible = true;
}

void game_loop() {
    using namespace Controller::Pad;
    
    // Button combo to bypass the automatic loading of the save file
    // in case of crash cause by the load.
    if (tp_mPadStatus.sval == (L | R | B) && card_load) {
        card_load = false;
    }

    // check and load gz settings card if found
    Utilities::load_gz_card(card_load);

    if (tp_mPadStatus.sval == (L | R | DPAD_DOWN) && tp_fopScnRq.isLoading != 1 && !move_link_active) {
        MenuRendering::set_menu(MN_MAIN_MENU_INDEX);
        fifo_visible = false;
    }
    if (tp_fopScnRq.isLoading == 1) {
        MenuRendering::close_active_menus();
    }

    GZFlags::apply_active_flags();
    FreeCam::handle_free_cam();
    MoveLink::move_link();
}

void draw() {
    default_font.setupRendering();
    //Consolas.setupRendering();
    if (fifo_visible) {
        FIFOQueue::renderItems(Queue, default_font);
    }
    if (ToolItems[Tools::LINK_DEBUG_INDEX].active) {
        Utilities::show_link_debug_info(default_font);
    }
    if (ToolItems[Tools::INPUT_VIEWER_INDEX].active) {
        InputViewer::render(default_font);
    }
    if (ToolItems[Tools::TIMER_INDEX].active || ToolItems[Tools::LOAD_TIMER_INDEX].active || ToolItems[Tools::IGT_TIMER_INDEX].active) {
        Timer::render(default_font);
    }
    if (move_link_active) {
        MoveLink::render_info_input(default_font);
	}
    MenuRendering::render_active_menus(default_font);
    Utilities::render_active_watches(default_font);
}
}