#include <main.h>
#include "menus/menu_equipment/include/equipment_menu.h"
#include "events/draw_listener.h"
#include "menus/utils/menu_mgr.h"
#include "utils/draw.h"

void onCreate();
void onLoad();
void onDraw();
void onUnload();
void onDelete();

EquipmentMenu* l_menu;

namespace tpgz::modules {
void main() {
    g_menuMgr->setCreateHook(onCreate);
    g_menuMgr->setLoadHook(onLoad);
    g_menuMgr->setUnloadHook(onUnload);
    g_menuMgr->setDeleteHook(onDelete);
}
void exit() {
    g_menuMgr->setCreateHook(nullptr);
    g_menuMgr->setLoadHook(nullptr);
    g_menuMgr->setUnloadHook(nullptr);
    g_menuMgr->setDeleteHook(nullptr);
}
}  // namespace tpgz::modules

void onCreate() {
    g_menuMgr->setPersistentData(new EquipmentData);
    if (!g_menuMgr->getPermanentData<Cursor>()) {
        g_menuMgr->setPermanentData(new Cursor);
    }
}

void onLoad() {
    equipmentData = g_menuMgr->getPersistentData<EquipmentData>();
    l_menu = new EquipmentMenu(*g_menuMgr->getPermanentData<Cursor>());
    g_drawListener->addListener(onDraw);
}

void onDraw() {
    l_menu->draw();
}

void onUnload() {
    g_drawListener->removeListener(onDraw);
    delete l_menu;
}

void onDelete() {
    auto data = g_menuMgr->getPersistentData<EquipmentData>();
    delete data;
    g_menuMgr->setPersistentData<EquipmentData>(nullptr);
}
