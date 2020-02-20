#include "libtp_c/include/tp.h"
#include "libtp_c/include/controller.h"
#include "menu.h"
#include "controller.h"
#include "utils.h"
#define LINES 6

static int cursor = 0;
static bool ddown_held_last_frame;
static bool dup_held_last_frame;

void transition_into(){};

void MainMenu::render(Font& font) {
    Line lines[LINES] = {
        {"inventory", 0},
        {"cheats", 1},
        {"warping", 2},
        {"memory", 3},
        {"practice", 4},
        {"settings", 5},
    };

    if (button_is_down(Controller::B)) {
        mm_visible = false;
        return;
    };

    if (!button_is_down(Controller::DPAD_DOWN)) {
        ddown_held_last_frame = false;
    };

    if (!button_is_down(Controller::DPAD_UP)) {
        dup_held_last_frame = false;
    };

    if (button_is_down(Controller::DPAD_DOWN) && ddown_held_last_frame == false) {
        if (cursor < LINES - 1) {
            cursor++;
        }
        ddown_held_last_frame = true;
    };

    if (button_is_down(Controller::DPAD_UP) && dup_held_last_frame == false) {
        if (cursor > 0) {
            cursor--;
        }
        dup_held_last_frame = true;
    };

    if (button_is_down(Controller::A)) {
        switch (cursor) {
            case MEMORY_INDEX: {
                // go to memory menu
                return;
            }
            case INVENTORY_INDEX: {
                //transition(MenuState::InventoryMenu);
                return;
            }
            case CHEAT_INDEX: {
                //transition(MenuState::CheatMenu);
                return;
            }
            case SETTINGS_INDEX: {
                //transition(MenuState::Settings);
                return;
            }
            case WARPING_INDEX: {
                //transition(MenuState::Warp);
                return;
            }
            case PRACTICE_INDEX: {
                prac_visible = true;
                mm_visible = false;
                return;
            }
        }
    }
    font.renderChars("tpgz v0.1", 13.0f, 15.0f, 0x008080FF);

    for (int i = 0; i < LINES; i++) {
        float offset = (60.0f + (float)i * 20.0f);
        int cursor_color = 0xFFFFFF00;
        int description_color = 0xFFFFFF00;
        int cursor_alpha = 0xFF;
        int description_alpha = 0xFF;
        if (lines[i].idx != cursor) {
            cursor_alpha = 0x80;
        }
        if (lines[i].idx != cursor) {
            description_alpha = 0x00;
        }
        cursor_color |= cursor_alpha;
        description_color |= description_alpha;
        font.renderChars(lines[i].line, 15.0f, offset, cursor_color);
        font.renderChars(lines[i].description, 15.0f, 440.f, description_color);
    };
};