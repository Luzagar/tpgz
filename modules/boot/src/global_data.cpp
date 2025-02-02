#include "global_data.h"
#include "trigger_view.h"
#include "features/projection_view/include/projection_view.h"
#include "rels/include/defines.h"

KEEP_VAR bool g_freeCamEnabled;
KEEP_VAR bool g_moveLinkEnabled;
KEEP_VAR u8 g_geometryOpacity = 0x80;
KEEP_VAR u16 g_collisionRange = 100;
KEEP_VAR u8 g_collisionRaise = 1;

KEEP_VAR fopAc_ac_c* g_currentActor;
KEEP_VAR bool g_actorViewEnabled;

KEEP_VAR TriggerViewItem g_triggerViewFlags[TRIGGER_VIEW_MAX] = {
    {VIEW_LOAD_ZONES, false},
    {VIEW_MIDNA_STOPS, false},
    {VIEW_SWITCH_AREAS, false},
    {VIEW_EVENT_AREAS, false},
    {VIEW_TW_GATES, false},
    {VIEW_PATHS, false},
    {VIEW_CHG_RESTARTS, false},
    {VIEW_TRANSFORM_DISTS, false},
    {VIEW_ATTN_DISTS, false},
    {VIEW_MIST_AVOID, false},
    {VIEW_LEEVER_RANGE, false},
};

KEEP_VAR ProjectionLine g_ljaProjectionLine;
KEEP_VAR ProjectionLine g_midnaChargeProjectionLine;

KEEP_VAR ProjectionViewItem g_projectionViewFlags[PROJECTION_VIEW_MAX] = {
    {VIEW_LJA_PROJECTION, false},
    {VIEW_MIDNA_CHARGE_PROJECTION, false},
};

KEEP_VAR bool g_transformIndicatorEnabled;