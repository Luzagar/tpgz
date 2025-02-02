#include "menus/menu_tools_checkers/include/tools_checkers_menu.h"
#include "menus/utils/menu_mgr.h"

const char l_descTemplates[CHECKERS_COUNT][100] = {
#ifdef WII_PLATFORM
    "use %s to warp to ordon bridge",
#endif
    "show frame info when doing coro td",
    "show frame info when doing elevator escape",
    "use %s to warp to kakariko gorge",
    "ladder freezard cancel checker",
    "display A/B button mashing speeds",
    "frame counter for chaining rolls",
    "practice snowpeak universal map delay timing",
};

KEEP_FUNC CheckersMenu::CheckersMenu(CheckersData& data)
    : Menu(data.cursor), lines{
#ifdef WII_PLATFORM
            {"bit", BIT_INDEX, "use " BACK_IN_TIME_TEXT " to warp to ordon bridge", true,
             ACTIVE_FUNC(STNG_TOOLS_BIT)},
#endif
            {"coro td", COROTD_INDEX, "show frame info when doing coro td", true,
             ACTIVE_FUNC(STNG_TOOLS_COROTD)},
            {"elevator escape", ELEVATOR_ESCAPE_INDEX, "show frame info when doing elevator escape",
             true, ACTIVE_FUNC(STNG_TOOLS_ELEVATOR_ESCAPE)},
            {"gorge void", GORGE_INDEX, "use " GORGE_VOID_TEXT " to warp to kakariko gorge",
             true, ACTIVE_FUNC(STNG_TOOLS_GORGE)},
            {"ladder freezard cancel", LFC_INDEX, "ladder freezard cancel checker",
             true, ACTIVE_FUNC(STNG_TOOLS_LFC)},
            {"a/b mash rate", MASH_CHECKER_INDEX, "display A/B button mashing speeds", true,
             ACTIVE_FUNC(STNG_TOOLS_MASH_CHECKER)},
            {"rolling", ROLL_INDEX, "frame counter for chaining rolls", true,
             ACTIVE_FUNC(STNG_TOOLS_ROLL)},
            {"universal map delay", UMD_INDEX, "practice snowpeak universal map delay timing", true,
             ACTIVE_FUNC(STNG_TOOLS_UMD)}} {
}

CheckersMenu::~CheckersMenu() {}

GZSettingID l_mapping[] = {
#ifdef WII_PLATFORM
    STNG_TOOLS_BIT,
#endif
    STNG_TOOLS_COROTD,      
    STNG_TOOLS_ELEVATOR_ESCAPE,
    STNG_TOOLS_GORGE,
    STNG_TOOLS_LFC,
    STNG_TOOLS_MASH_CHECKER,
    STNG_TOOLS_ROLL,
    STNG_TOOLS_UMD,
};

#define set_active(id, status)                                                                     \
    ({                                                                                             \
        auto* stng = GZStng_get(id);                                                        \
        if (stng)                                                                                  \
            *(bool*)stng->data = status;                                                           \
    })

void CheckersMenu::draw() {
    if (GZ_getButtonTrig(BACK_BUTTON)) {
        g_menuMgr->pop();
        return;
    }

    cursor.move(0, MENU_LINE_NUM);

    if (GZ_getButtonTrig(SELECTION_BUTTON)) {
        GZSettingEntry* stng = nullptr;

        stng = GZStng_get(l_mapping[cursor.y]);
        
        if (!stng) {
            stng = new GZSettingEntry{l_mapping[cursor.y], sizeof(bool), new bool};
            g_settings.push_back(stng);
        }

        if (stng)
            *(bool*)stng->data = !*(bool*)stng->data;
    }

    char buf[100];
    switch (cursor.y) {
    case GORGE_INDEX: {
        uint16_t combo = GZStng_getData<uint16_t>(STNG_CMD_GORGE_VOID, GORGE_VOID_BUTTONS);
        char* comboStr = new char[GZCmd_getComboLen(combo) + 1];
        GZCmd_comboToStr(combo, comboStr);
        snprintf(buf, sizeof(buf), l_descTemplates[cursor.y], comboStr);
        delete[] comboStr;
        break;
    }
#ifdef WII_PLATFORM
    case BIT_INDEX: {
        uint16_t combo = GZStng_getData<uint16_t>(STNG_CMD_BIT, BACK_IN_TIME_BUTTONS);
        char* comboStr = new char[GZCmd_getComboLen(combo) + 1];
        GZCmd_comboToStr(combo, comboStr);
        snprintf(buf, sizeof(buf), l_descTemplates[cursor.y], comboStr);
        delete[] comboStr;
        break;
    }
#endif
    default: {
        snprintf(buf, sizeof(buf), l_descTemplates[cursor.y]);
        break;
    }
    }

    strncpy(lines[cursor.y].description, buf, sizeof(lines[cursor.y].description));
    GZ_drawMenuLines(lines, cursor.y, MENU_LINE_NUM);
}
