#ifndef D_BG_D_BG_S_H
#define D_BG_D_BG_S_H

#include "../../SSystem/SComponent/c_bg_s_gnd_chk.h"
#include "../../SSystem/SComponent/c_bg_s_lin_chk.h"
#include "../bg/d_bg_w.h"

class fopAc_ac_c;

class cBgS_ChkElm {
public:
    /* 0x00 */ dBgW_Base* m_bgw_base_ptr;
    /* 0x04 */ bool m_used;
    /* 0x08 */ u32 field_0x8;
    /* 0x0C */ fopAc_ac_c* m_actor_ptr;
    /* 0x10 */ void* vtable;

    bool ChkUsed() const { return m_used; }
};  // Size = 0x14

static_assert(sizeof(cBgS_ChkElm) == 0x14);

class cBgS {
public:
    /* 0x0000 */ cBgS_ChkElm m_chk_element[256];
    /* 0x1400 */ void* vtable;
};  // Size = 0x1404

static_assert(sizeof(cBgS) == 0x1404);

class dBgS_HIO {
    /* 0x00 */ u8 vtable[4];
    /* 0x04 */ u8 field_0x4[2];
    /* 0x06 */ u16 field_0x6;
    /* 0x08 */ u16 field_0x8;
    /* 0x0A */ u8 field_0xa[2];
    /* 0x0C */ cXyz field_0xc;
    /* 0x18 */ cXyz field_0x18;
    /* 0x24 */ cXyz field_0x24;
    /* 0x30 */ u8 field_0x30[4];
};

class dBgS_Acch;
class dBgS : public cBgS {};

#endif /* D_BG_D_BG_S_H */
