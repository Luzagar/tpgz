#ifndef D_PROCNAME_H
#define D_PROCNAME_H

enum {
    PROC_OVERLAP0          = 0x0000,
    PROC_OVERLAP1          = 0x0001,
    PROC_OVERLAP3          = 0x0002,
    PROC_OVERLAP6          = 0x0003,
    PROC_OVERLAP7          = 0x0004,
    PROC_OVERLAP8          = 0x0005,
    PROC_OVERLAP9          = 0x0006,
    PROC_OVERLAP10         = 0x0007,
    PROC_OVERLAP11         = 0x0008,
    PROC_LOGO_SCENE        = 0x0009,
    PROC_MENU_SCENE        = 0x000A,
    PROC_PLAY_SCENE        = 0x000B,
    PROC_OPENING_SCENE     = 0x000C,
    PROC_NAME_SCENE        = 0x000D,
    PROC_NAMEEX_SCENE      = 0x000E,
    PROC_WARNING_SCENE     = 0x000F,
    PROC_WARNING2_SCENE    = 0x0010,
    PROC_OVERLAP2          = 0x0011,
    PROC_ROOM_SCENE        = 0x0012,
    PROC_KANKYO            = 0x0013,
    PROC_ALLDIE            = 0x0014,
    PROC_ENVSE             = 0x0015,
    PROC_Obj_Swpush        = 0x0016,
    PROC_Obj_Swpush2       = 0x0017,
    PROC_Obj_Swpush5       = 0x0018,
    PROC_Tag_Gstart        = 0x0019,
    PROC_NO_CHG_ROOM       = 0x001A,
    PROC_Obj_Lv6ElevtA     = 0x001B,
    PROC_OBJ_SO            = 0x001C,
    PROC_Obj_Movebox       = 0x001D,
    PROC_Obj_SwTurn        = 0x001E,
    PROC_Obj_Lv6SwTurn     = 0x001F,
    PROC_OBJ_SEKIZOA       = 0x0020,
    PROC_OBJ_GRA           = 0x0021,
    PROC_TAG_GRA           = 0x0022,
    PROC_TAG_YAMI          = 0x0023,
    PROC_Obj_Ladder        = 0x0024,
    PROC_OBJ_BEF           = 0x0025,
    PROC_OBJ_FMOBJ         = 0x0026,
    PROC_OBJ_LBOX          = 0x0027,
    PROC_OBJ_WEB0          = 0x0028,
    PROC_OBJ_WEB1          = 0x0029,
    PROC_OBJ_CB            = 0x002A,
    PROC_OBJ_MAKI          = 0x002B,
    PROC_OBJ_BRG           = 0x002C,
    PROC_OBJ_GB            = 0x002D,
    PROC_OBJ_GM            = 0x002E,
    PROC_OBJ_TOBY          = 0x002F,
    PROC_OBJ_TP            = 0x0030,
    PROC_TREESH            = 0x0031,
    PROC_Obj_ZDoor         = 0x0032,
    PROC_Obj_Pillar        = 0x0033,
    PROC_Obj_Cdoor         = 0x0034,
    PROC_GRDWATER          = 0x0035,
    PROC_Obj_RotBridge     = 0x0036,
    PROC_Obj_MagLift       = 0x0037,
    PROC_Obj_MagLiftRot    = 0x0038,
    PROC_Obj_Lv1Cdl00      = 0x0039,
    PROC_Obj_Lv1Cdl01      = 0x003A,
    PROC_Obj_TvCdlst       = 0x003B,
    PROC_Obj_HsTarget      = 0x003C,
    PROC_Obj_HeavySw       = 0x003D,
    PROC_Obj_GoGate        = 0x003E,
    PROC_Obj_TaFence       = 0x003F,
    PROC_Obj_Saidan        = 0x0040,
    PROC_Obj_SpinLift      = 0x0041,
    PROC_Obj_BmWindow      = 0x0042,
    PROC_Obj_RfHole        = 0x0043,
    PROC_Obj_WaterPillar   = 0x0044,
    PROC_Obj_SyRock        = 0x0045,
    PROC_Obj_BsGate        = 0x0046,
    PROC_Obj_AmiShutter    = 0x0047,
    PROC_Obj_WtGate        = 0x0048,
    PROC_Obj_Lv2Candle     = 0x0049,
    PROC_Obj_TogeTrap      = 0x004A,
    PROC_Obj_RotTrap       = 0x004B,
    PROC_Obj_SwallShutter  = 0x004C,
    PROC_Obj_IceWall       = 0x004D,
    PROC_Obj_Lv5SwIce      = 0x004E,
    PROC_Obj_Lv5FBoard     = 0x004F,
    PROC_Obj_Turara        = 0x0050,
    PROC_Obj_TwGate        = 0x0051,
    PROC_Obj_Digholl       = 0x0052,
    PROC_Obj_Digpl         = 0x0053,
    PROC_Obj_TestCube      = 0x0054,
    PROC_Obj_Kshutter      = 0x0055,
    PROC_NPC_COACH         = 0x0056,
    PROC_NPC_THEB          = 0x0057,
    PROC_COACH_FIRE        = 0x0058,
    PROC_COACH2D           = 0x0059,
    PROC_BALLOON2D         = 0x005A,
    PROC_SKIP2D            = 0x005B,
    PROC_Obj_MvStair       = 0x005C,
    PROC_Obj_Cowdoor       = 0x005D,
    PROC_Obj_Swpropeller   = 0x005E,
    PROC_Obj_BoomShutter   = 0x005F,
    PROC_NPC_KS            = 0x0060,
    PROC_Obj_Hfuta         = 0x0061,
    PROC_Obj_BkDoor        = 0x0062,
    PROC_Obj_Cboard        = 0x0063,
    PROC_Obj_MGate         = 0x0064,
    PROC_Obj_Ikada         = 0x0065,
    PROC_Obj_Ice_l         = 0x0066,
    PROC_Obj_Ice_s         = 0x0067,
    PROC_Obj_E_CREATE      = 0x0068,
    PROC_Obj_Bhbridge      = 0x0069,
    PROC_Obj_Kaisou        = 0x006A,
    PROC_Obj_HHASHI        = 0x006B,
    PROC_Obj_BHASHI        = 0x006C,
    PROC_OCTHASHI          = 0x006D,
    PROC_Obj_THASHI        = 0x006E,
    PROC_Obj_CRVGATE       = 0x006F,
    PROC_Obj_CRVFENCE      = 0x0070,
    PROC_Obj_CRVHAHEN      = 0x0071,
    PROC_Obj_CRVSTEEL      = 0x0072,
    PROC_Obj_CRVLH_UP      = 0x0073,
    PROC_Obj_CRVLH_DW      = 0x0074,
    PROC_Obj_RIVERROCK     = 0x0075,
    PROC_Obj_DUST          = 0x0076,
    PROC_Obj_ITA           = 0x0077,
    PROC_Obj_Window        = 0x0078,
    PROC_Obj_MetalBox      = 0x0079,
    PROC_Obj_BBox          = 0x007A,
    PROC_OBJ_MSIMA         = 0x007B,
    PROC_OBJ_MYOGAN        = 0x007C,
    PROC_B_ZANTS           = 0x007D,
    PROC_Obj_ChainBlock    = 0x007E,
    PROC_Obj_ChainWall     = 0x007F,
    PROC_Obj_KkrGate       = 0x0080,
    PROC_Obj_RiderGate     = 0x0081,
    PROC_Obj_Onsen         = 0x0082,
    PROC_Obj_Chest         = 0x0083,
    PROC_Obj_Bemos         = 0x0084,
    PROC_Obj_RopeBridge    = 0x0085,
    PROC_Obj_WellCover     = 0x0086,
    PROC_Obj_GraveStone    = 0x0087,
    PROC_Obj_ZraRock       = 0x0088,
    PROC_Obj_GraRock       = 0x0089,
    PROC_Obj_GrzRock       = 0x008A,
    PROC_GRA_WALL          = 0x008B,
    PROC_OBJ_ONSEN_FIRE    = 0x008C,
    PROC_Obj_Lv6bemos      = 0x008D,
    PROC_Obj_Lv6bemos2     = 0x008E,
    PROC_Obj_BarDesk       = 0x008F,
    PROC_Obj_DigSnow       = 0x0090,
    PROC_Obj_Ytaihou       = 0x0091,
    PROC_Obj_Elevator      = 0x0092,
    PROC_Obj_Lv6TogeRoll   = 0x0093,
    PROC_Obj_Lv6TogeTrap   = 0x0094,
    PROC_Obj_Lv6Tenbin     = 0x0095,
    PROC_Obj_Lv6SwGate     = 0x0096,
    PROC_Obj_Lv6Lblock     = 0x0097,
    PROC_Obj_Lv6ChgGate    = 0x0098,
    PROC_Obj_Lv6FuriTrap   = 0x0099,
    PROC_Obj_Lv6SzGate     = 0x009A,
    PROC_Obj_Lv4EdShutter  = 0x009B,
    PROC_Obj_Lv4Gate       = 0x009C,
    PROC_Obj_Lv4PoGate     = 0x009D,
    PROC_Obj_Lv4SlideWall  = 0x009E,
    PROC_Obj_Lv4HsTarget   = 0x009F,
    PROC_Obj_Lv7PropY      = 0x00A0,
    PROC_Obj_Lv7BsGate     = 0x00A1,
    PROC_Obj_Lv8OptiLift   = 0x00A2,
    PROC_Obj_Lv8KekkaiTrap = 0x00A3,
    PROC_Obj_Lv8Lift       = 0x00A4,
    PROC_Obj_Lv8UdFloor    = 0x00A5,
    PROC_Obj_Lv9SwShutter  = 0x00A6,
    PROC_Obj_TobyHouse     = 0x00A7,
    PROC_Obj_poCandle      = 0x00A8,
    PROC_Obj_Lv4DigSand    = 0x00A9,
    PROC_Obj_FallObj       = 0x00AA,
    PROC_Obj_SmgDoor       = 0x00AB,
    PROC_Obj_SwLight       = 0x00AC,
    PROC_Obj_Avalanche     = 0x00AD,
    PROC_Obj_MirrorScrew   = 0x00AE,
    PROC_Obj_MirrorSand    = 0x00AF,
    PROC_Obj_MirrorTable   = 0x00B0,
    PROC_Obj_MirrorChain   = 0x00B1,
    PROC_Obj_Mirror6Pole   = 0x00B2,
    PROC_Obj_SwSpinner     = 0x00B3,
    PROC_Obj_TDoor         = 0x00B4,
    PROC_Obj_Lv7Bridge     = 0x00B5,
    PROC_Obj_zrTurara      = 0x00B6,
    PROC_Obj_TakaraDai     = 0x00B7,
    PROC_Obj_Table         = 0x00B8,
    PROC_Obj_CatDoor       = 0x00B9,
    PROC_Obj_Gake          = 0x00BA,
    PROC_CSTAF             = 0x00BB,
    PROC_Obj_Lv4RailWall   = 0x00BC,
    PROC_Obj_Lv4Sand       = 0x00BD,
    PROC_Obj_PushDoor      = 0x00BE,
    PROC_PushDoor          = 0x00BF,
    PROC_Obj_GanonWall2    = 0x00C0,
    PROC_Obj_Lv4Bridge     = 0x00C1,
    PROC_Obj_Lv4Floor      = 0x00C2,
    PROC_Tag_Spinner       = 0x00C3,
    PROC_Obj_SwHang        = 0x00C4,
    PROC_Obj_RotStair      = 0x00C5,
    PROC_Obj_MagneArm      = 0x00C6,
    PROC_Obj_KWheel00      = 0x00C7,
    PROC_Obj_KWheel01      = 0x00C8,
    PROC_Obj_Ychndlr       = 0x00C9,
    PROC_Obj_PRElvtr       = 0x00CA,
    PROC_Obj_MHasu         = 0x00CB,
    PROC_Obj_YIblltray     = 0x00CC,
    PROC_Obj_Lv6EGate      = 0x00CD,
    PROC_Obj_PDtile        = 0x00CE,
    PROC_Obj_PDwall        = 0x00CF,
    PROC_Obj_Lv4PRwall     = 0x00D0,
    PROC_Obj_KLift00       = 0x00D1,
    PROC_B_OH              = 0x00D2,
    PROC_Obj_Lv4Chan       = 0x00D3,
    PROC_Obj_Lv3R10Saka    = 0x00D4,
    PROC_Obj_Lv3Water      = 0x00D5,
    PROC_Obj_Lv3Water2     = 0x00D6,
    PROC_OBJ_LV3WATERB     = 0x00D7,
    PROC_Obj_HBombkoya     = 0x00D8,
    PROC_Obj_SZbridge      = 0x00D9,
    PROC_Obj_KakarikoBrg   = 0x00DA,
    PROC_Obj_OrdinBrg      = 0x00DB,
    PROC_Obj_BurnBox       = 0x00DC,
    PROC_Obj_KJgjs         = 0x00DD,
    PROC_OBJ_IHASI         = 0x00DE,
    PROC_Obj_IceBlock      = 0x00DF,
    PROC_Obj_VolcanicBall  = 0x00E0,
    PROC_Obj_VolcanicBomb  = 0x00E1,
    PROC_Obj_VolcGnd       = 0x00E2,
    PROC_Obj_KKanban       = 0x00E3,
    PROC_E_PH              = 0x00E4,
    PROC_NPC_ZRA           = 0x00E5,
    PROC_Obj_Chandelier    = 0x00E6,
    PROC_Obj_Stopper2      = 0x00E7,
    PROC_DOOR20            = 0x00E8,
    PROC_Tag_Hinit         = 0x00E9,
    PROC_Tag_Hjump         = 0x00EA,
    PROC_Tag_AJnot         = 0x00EB,
    PROC_Tag_Hstop         = 0x00EC,
    PROC_CANOE             = 0x00ED,
    PROC_HORSE             = 0x00EE,
    PROC_E_WB              = 0x00EF,
    PROC_OBJ_ITO           = 0x00F0,
    PROC_OBJ_SW            = 0x00F1,
    PROC_SPINNER           = 0x00F2,
    PROC_B_OB              = 0x00F3,
    PROC_KAGO              = 0x00F4,
    PROC_E_YC              = 0x00F5,
    PROC_B_DS              = 0x00F6,
    PROC_B_DR              = 0x00F7,
    PROC_B_ZANTZ           = 0x00F8,
    PROC_B_ZANT            = 0x00F9,
    PROC_B_ZANTM           = 0x00FA,
    PROC_TBOX              = 0x00FB,
    PROC_TBOX2             = 0x00FC,
    PROC_ALINK             = 0x00FD,
    PROC_BOOMERANG         = 0x00FE,
    PROC_MIDNA             = 0x00FF,
    PROC_NPC_TK            = 0x0100,
    PROC_NPC_WORM          = 0x0101,
    PROC_PPolamp           = 0x0102,
    PROC_BkyRock           = 0x0103,
    PROC_HITOBJ            = 0x0104,
    PROC_EP                = 0x0105,
    PROC_COW               = 0x0106,
    PROC_PERU              = 0x0107,
    PROC_NI                = 0x0108,
    PROC_NPC_TKJ2          = 0x0109,
    PROC_SQ                = 0x010A,
    PROC_NPC_SQ            = 0x010B,
    PROC_DO                = 0x010C,
    PROC_NPC_NE            = 0x010D,
    PROC_NPC_TR            = 0x010E,
    PROC_NPC_LF            = 0x010F,
    PROC_OBJ_FOOD          = 0x0110,
    PROC_OBJ_KI            = 0x0111,
    PROC_OBJ_KITA          = 0x0112,
    PROC_OBJ_KEY           = 0x0113,
    PROC_OBJ_KEYHOLE       = 0x0114,
    PROC_Obj_Lv5Key        = 0x0115,
    PROC_OBJ_LP            = 0x0116,
    PROC_OBJ_TATIGI        = 0x0117,
    PROC_OBJ_ROCK          = 0x0118,
    PROC_OBJ_WFLAG         = 0x0119,
    PROC_OBJ_KAGE          = 0x011A,
    PROC_OBJ_KANBAN2       = 0x011B,
    PROC_OBJ_BALLOON       = 0x011C,
    PROC_OBJ_SUISYA        = 0x011D,
    PROC_OBJ_OILTUBO       = 0x011E,
    PROC_OBJ_ROTEN         = 0x011F,
    PROC_OBJ_SSDRINK       = 0x0120,
    PROC_OBJ_SSITEM        = 0x0121,
    PROC_TAG_SSDRINK       = 0x0122,
    PROC_TAG_BTLITM        = 0x0123,
    PROC_TAG_LV5SOUP       = 0x0124,
    PROC_TAG_MNLIGHT       = 0x0125,
    PROC_TAG_SHOPCAM       = 0x0126,
    PROC_TAG_SHOPITM       = 0x0127,
    PROC_OBJ_NDOOR         = 0x0128,
    PROC_OBJ_UDOOR         = 0x0129,
    PROC_OBJ_USAKU         = 0x012A,
    PROC_Obj_SM_DOOR       = 0x012B,
    PROC_OBJ_BED           = 0x012C,
    PROC_OBJ_BOUMATO       = 0x012D,
    PROC_OBJ_ITAMATO       = 0x012E,
    PROC_OBJ_NOUGU         = 0x012F,
    PROC_OBJ_STICK         = 0x0130,
    PROC_OBJ_MIE           = 0x0131,
    PROC_OBJ_SEKIDOOR      = 0x0132,
    PROC_OBJ_SEKIZO        = 0x0133,
    PROC_OBJ_SMTILE        = 0x0134,
    PROC_NPC_FISH          = 0x0135,
    PROC_MG_FISH           = 0x0136,
    PROC_FSHOP             = 0x0137,
    PROC_NPC_DU            = 0x0138,
    PROC_DISAPPEAR         = 0x0139,
    PROC_Obj_Mato          = 0x013A,
    PROC_Obj_Flag          = 0x013B,
    PROC_Obj_Flag2         = 0x013C,
    PROC_Obj_Flag3         = 0x013D,
    PROC_Obj_GOMIKABE      = 0x013E,
    PROC_Obj_Yousei        = 0x013F,
    PROC_Obj_Kabuto        = 0x0140,
    PROC_Obj_Cho           = 0x0141,
    PROC_Obj_Kuw           = 0x0142,
    PROC_Obj_Nan           = 0x0143,
    PROC_Obj_Dan           = 0x0144,
    PROC_Obj_Kam           = 0x0145,
    PROC_Obj_Ten           = 0x0146,
    PROC_Obj_Ari           = 0x0147,
    PROC_Obj_Kag           = 0x0148,
    PROC_Obj_Batta         = 0x0149,
    PROC_Obj_Tombo         = 0x014A,
    PROC_Obj_Kat           = 0x014B,
    PROC_Obj_H_Saku        = 0x014C,
    PROC_Obj_Yobikusa      = 0x014D,
    PROC_Obj_KazeNeko      = 0x014E,
    PROC_Obj_KznkArm       = 0x014F,
    PROC_Obj_NamePlate     = 0x0150,
    PROC_Obj_OnCloth       = 0x0151,
    PROC_Obj_LndRope       = 0x0152,
    PROC_Obj_ItaRope       = 0x0153,
    PROC_Obj_Sakuita       = 0x0154,
    PROC_Obj_Laundry       = 0x0155,
    PROC_WarpBug           = 0x0156,
    PROC_Izumi_Gate        = 0x0157,
    PROC_Obj_Fchain        = 0x0158,
    PROC_Obj_Wchain        = 0x0159,
    PROC_Tag_Attp          = 0x015A,
    PROC_Obj_Tornado       = 0x015B,
    PROC_Obj_Tornado2      = 0x015C,
    PROC_Obj_FirePillar    = 0x015D,
    PROC_Obj_FirePillar2   = 0x015E,
    PROC_Obj_InoBone       = 0x015F,
    PROC_Obj_Stopper       = 0x0160,
    PROC_Obj_MHole         = 0x0161,
    PROC_Tag_Magne         = 0x0162,
    PROC_Obj_BossWarp      = 0x0163,
    PROC_Obj_WoodPendulum  = 0x0164,
    PROC_Obj_WdStick       = 0x0165,
    PROC_Obj_StairBlock    = 0x0166,
    PROC_Obj_Geyser        = 0x0167,
    PROC_Tag_KtOnFire      = 0x0168,
    PROC_Obj_FireWood      = 0x0169,
    PROC_Obj_FireWood2     = 0x016A,
    PROC_Obj_GpTaru        = 0x016B,
    PROC_Obj_OnsenTaru     = 0x016C,
    PROC_Obj_KiPot         = 0x016D,
    PROC_TBOX_SW           = 0x016E,
    PROC_Obj_SwChain       = 0x016F,
    PROC_Obj_WoodenSword   = 0x0170,
    PROC_Obj_StoneMark     = 0x0171,
    PROC_Obj_Lv3Candle     = 0x0172,
    PROC_Tag_Lv4Candle     = 0x0173,
    PROC_Tag_Lv4CandleDm   = 0x0174,
    PROC_Obj_DamCps        = 0x0175,
    PROC_Obj_Smoke         = 0x0176,
    PROC_Obj_WaterFall     = 0x0177,
    PROC_Obj_ZoraCloth     = 0x0178,
    PROC_Obj_poFire        = 0x0179,
    PROC_Tag_poFire        = 0x017A,
    PROC_Obj_glowSphere    = 0x017B,
    PROC_Tag_LightBall     = 0x017C,
    PROC_SwLBall           = 0x017D,
    PROC_SwBall            = 0x017E,
    PROC_Obj_WaterEff      = 0x017F,
    PROC_Tag_RiverBack     = 0x0180,
    PROC_Tag_KagoFall      = 0x0181,
    PROC_Tag_Lv2PrChk      = 0x0182,
    PROC_Obj_Lv4Gear       = 0x0183,
    PROC_Obj_MasterSword   = 0x0184,
    PROC_Obj_WoodStatue    = 0x0185,
    PROC_Obj_Fan           = 0x0186,
    PROC_Obj_IceLeaf       = 0x0187,
    PROC_Obj_zrTuraraRc    = 0x0188,
    PROC_Tag_RetRoom       = 0x0189,
    PROC_Obj_WindStone     = 0x018A,
    PROC_Tag_WaraHowl      = 0x018B,
    PROC_Obj_SCannon       = 0x018C,
    PROC_Obj_SmWStone      = 0x018D,
    PROC_Obj_SCannonCrs    = 0x018E,
    PROC_Tag_SnowEff       = 0x018F,
    PROC_Tag_CstaSw        = 0x0190,
    PROC_Tag_Lv6CstaSw     = 0x0191,
    PROC_Obj_awaPlar       = 0x0192,
    PROC_Obj_poTbox        = 0x0193,
    PROC_Obj_TimeFire      = 0x0194,
    PROC_Obj_TMoon         = 0x0195,
    PROC_Obj_GanonWall     = 0x0196,
    PROC_Obj_Prop          = 0x0197,
    PROC_CSTATUE           = 0x0198,
    PROC_Obj_SwBallA       = 0x0199,
    PROC_Obj_SwBallB       = 0x019A,
    PROC_Obj_SnowSoup      = 0x019B,
    PROC_Obj_Nagaisu       = 0x019C,
    PROC_Obj_RCircle       = 0x019D,
    PROC_Obj_Picture       = 0x019E,
    PROC_Tag_SetBall       = 0x019F,
    PROC_Tag_SmkEmt        = 0x01A0,
    PROC_SwTime            = 0x01A1,
    PROC_Obj_HFtr          = 0x01A2,
    PROC_Obj_HBarrel       = 0x01A3,
    PROC_Obj_Crystal       = 0x01A4,
    PROC_Obj_SCannonTen    = 0x01A5,
    PROC_Obj_SwBallC       = 0x01A6,
    PROC_SCENE_EXIT2       = 0x01A7,
    PROC_Obj_Hata          = 0x01A8,
    PROC_Obj_ToaruMaki     = 0x01A9,
    PROC_Tag_AttackItem    = 0x01AA,
    PROC_Tag_RmbitSw       = 0x01AB,
    PROC_Obj_Sword         = 0x01AC,
    PROC_Tag_Spring        = 0x01AD,
    PROC_Tag_Statue        = 0x01AE,
    PROC_E_AI              = 0x01AF,
    PROC_E_GS              = 0x01B0,
    PROC_E_GOB             = 0x01B1,
    PROC_E_DD              = 0x01B2,
    PROC_E_DN              = 0x01B3,
    PROC_E_S1              = 0x01B4,
    PROC_E_MF              = 0x01B5,
    PROC_E_SG              = 0x01B6,
    PROC_E_BS              = 0x01B7,
    PROC_E_SF              = 0x01B8,
    PROC_E_SH              = 0x01B9,
    PROC_E_DF              = 0x01BA,
    PROC_E_GM              = 0x01BB,
    PROC_E_MD              = 0x01BC,
    PROC_E_SM              = 0x01BD,
    PROC_E_SM2             = 0x01BE,
    PROC_E_ST              = 0x01BF,
    PROC_E_ST_LINE         = 0x01C0,
    PROC_E_SB              = 0x01C1,
    PROC_E_TH              = 0x01C2,
    PROC_E_CR              = 0x01C3,
    PROC_E_CR_EGG          = 0x01C4,
    PROC_E_DB              = 0x01C5,
    PROC_E_DB_LEAF         = 0x01C6,
    PROC_E_GA              = 0x01C7,
    PROC_E_GB              = 0x01C8,
    PROC_E_HB              = 0x01C9,
    PROC_E_HB_LEAF         = 0x01CA,
    PROC_E_HZELDA          = 0x01CB,
    PROC_E_YD              = 0x01CC,
    PROC_E_YH              = 0x01CD,
    PROC_E_YD_LEAF         = 0x01CE,
    PROC_E_HM              = 0x01CF,
    PROC_E_TK              = 0x01D0,
    PROC_E_TK2             = 0x01D1,
    PROC_E_TK_BALL         = 0x01D2,
    PROC_E_RB              = 0x01D3,
    PROC_E_RD              = 0x01D4,
    PROC_E_RDB             = 0x01D5,
    PROC_E_RDY             = 0x01D6,
    PROC_E_FM              = 0x01D7,
    PROC_E_FS              = 0x01D8,
    PROC_E_PM              = 0x01D9,
    PROC_E_PO              = 0x01DA,
    PROC_E_MB              = 0x01DB,
    PROC_E_MK              = 0x01DC,
    PROC_E_MM              = 0x01DD,
    PROC_E_FZ              = 0x01DE,
    PROC_E_ZS              = 0x01DF,
    PROC_E_KK              = 0x01E0,
    PROC_E_HP              = 0x01E1,
    PROC_E_ZH              = 0x01E2,
    PROC_E_ZM              = 0x01E3,
    PROC_E_PZ              = 0x01E4,
    PROC_E_FB              = 0x01E5,
    PROC_E_FK              = 0x01E6,
    PROC_E_MS              = 0x01E7,
    PROC_E_NEST            = 0x01E8,
    PROC_E_NZ              = 0x01E9,
    PROC_E_BA              = 0x01EA,
    PROC_E_BU              = 0x01EB,
    PROC_E_BUG             = 0x01EC,
    PROC_E_BEE             = 0x01ED,
    PROC_E_IS              = 0x01EE,
    PROC_E_KG              = 0x01EF,
    PROC_E_KR              = 0x01F0,
    PROC_E_SW              = 0x01F1,
    PROC_E_GE              = 0x01F2,
    PROC_Tag_WatchGe       = 0x01F3,
    PROC_E_YM              = 0x01F4,
    PROC_E_YM_TAG          = 0x01F5,
    PROC_E_YMB             = 0x01F6,
    PROC_Tag_FWall         = 0x01F7,
    PROC_Tag_WaterFall     = 0x01F8,
    PROC_E_YK              = 0x01F9,
    PROC_E_YR              = 0x01FA,
    PROC_E_YG              = 0x01FB,
    PROC_E_HZ              = 0x01FC,
    PROC_E_WS              = 0x01FD,
    PROC_E_OC              = 0x01FE,
    PROC_E_OT              = 0x01FF,
    PROC_E_DT              = 0x0200,
    PROC_E_BG              = 0x0201,
    PROC_E_OctBg           = 0x0202,
    PROC_DR                = 0x0203,
    PROC_L7lowDr           = 0x0204,
    PROC_L7ODR             = 0x0205,
    PROC_E_TT              = 0x0206,
    PROC_E_DK              = 0x0207,
    PROC_E_VT              = 0x0208,
    PROC_E_WW              = 0x0209,
    PROC_E_GI              = 0x020A,
    PROC_B_BH              = 0x020B,
    PROC_B_BQ              = 0x020C,
    PROC_B_GM              = 0x020D,
    PROC_B_GND             = 0x020E,
    PROC_B_GO              = 0x020F,
    PROC_B_OH2             = 0x0210,
    PROC_B_YO              = 0x0211,
    PROC_B_YOI             = 0x0212,
    PROC_B_TN              = 0x0213,
    PROC_B_GG              = 0x0214,
    PROC_B_DRE             = 0x0215,
    PROC_B_MGN             = 0x0216,
    PROC_E_WAP             = 0x0217,
    PROC_ITEM              = 0x0218,
    PROC_Obj_SmallKey      = 0x0219,
    PROC_Obj_Kantera       = 0x021A,
    PROC_Obj_LifeContainer = 0x021B,
    PROC_Obj_Shield        = 0x021C,
    PROC_Demo_Item         = 0x021D,
    PROC_ShopItem          = 0x021E,
    PROC_Obj_Drop          = 0x021F,
    PROC_OBJ_RW            = 0x0220,
    PROC_NBOMB             = 0x0221,
    PROC_TAG_CSW           = 0x0222,
    PROC_TAG_QS            = 0x0223,
    PROC_HOZELDA           = 0x0224,
    PROC_SWC00             = 0x0225,
    PROC_KNOB20            = 0x0226,
    PROC_DBDOOR            = 0x0227,
    PROC_BOSS_DOOR         = 0x0228,
    PROC_L1BOSS_DOOR       = 0x0229,
    PROC_L1MBOSS_DOOR      = 0x022A,
    PROC_L5BOSS_DOOR       = 0x022B,
    PROC_DSHUTTER          = 0x022C,
    PROC_SPIRAL_DOOR       = 0x022D,
    PROC_Tag_ChgRestart    = 0x022E,
    PROC_Tag_Restart       = 0x022F,
    PROC_ANDSW             = 0x0230,
    PROC_ANDSW2            = 0x0231,
    PROC_MYNA              = 0x0232,
    PROC_NPC_GND           = 0x0233,
    PROC_NPC_GRA           = 0x0234,
    PROC_NPC_GRC           = 0x0235,
    PROC_NPC_GRD           = 0x0236,
    PROC_NPC_GRM           = 0x0237,
    PROC_NPC_GRMC          = 0x0238,
    PROC_NPC_GRO           = 0x0239,
    PROC_NPC_GRR           = 0x023A,
    PROC_NPC_GRS           = 0x023B,
    PROC_NPC_GRZ           = 0x023C,
    PROC_NPC_YAMID         = 0x023D,
    PROC_NPC_YAMIT         = 0x023E,
    PROC_NPC_YAMIS         = 0x023F,
    PROC_NPC_BLUENS        = 0x0240,
    PROC_NPC_KAKASHI       = 0x0241,
    PROC_NPC_KDK           = 0x0242,
    PROC_NPC_ARU           = 0x0243,
    PROC_NPC_BANS          = 0x0244,
    PROC_NPC_BESU          = 0x0245,
    PROC_NPC_BOU           = 0x0246,
    PROC_NPC_BOU_S         = 0x0247,
    PROC_NPC_CLERKA        = 0x0248,
    PROC_NPC_CLERKB        = 0x0249,
    PROC_NPC_CLERKT        = 0x024A,
    PROC_NPC_WRESTLER      = 0x024B,
    PROC_Tag_Arena         = 0x024C,
    PROC_Tag_Instruction   = 0x024D,
    PROC_NPC_DOC           = 0x024E,
    PROC_NPC_GWOLF         = 0x024F,
    PROC_NPC_LEN           = 0x0250,
    PROC_NPC_LUD           = 0x0251,
    PROC_NPC_FAIRY_SEIREI  = 0x0252,
    PROC_NPC_FAIRY         = 0x0253,
    PROC_NPC_HANJO         = 0x0254,
    PROC_NPC_HENNA         = 0x0255,
    PROC_NPC_HENNA0        = 0x0256,
    PROC_NPC_HOZ           = 0x0257,
    PROC_NPC_JAGAR         = 0x0258,
    PROC_NPC_KKRI          = 0x0259,
    PROC_NPC_KN            = 0x025A,
    PROC_KN_BULLET         = 0x025B,
    PROC_NPC_KNJ           = 0x025C,
    PROC_NPC_KOLIN         = 0x025D,
    PROC_NPC_KOLINB        = 0x025E,
    PROC_NPC_KYURY         = 0x025F,
    PROC_NPC_MARO          = 0x0260,
    PROC_NPC_MIDP          = 0x0261,
    PROC_NPC_MOI           = 0x0262,
    PROC_NPC_RACA          = 0x0263,
    PROC_NPC_SARU          = 0x0264,
    PROC_NPC_SEIB          = 0x0265,
    PROC_NPC_SEIC          = 0x0266,
    PROC_NPC_SEID          = 0x0267,
    PROC_NPC_SEIRA         = 0x0268,
    PROC_NPC_SERA2         = 0x0269,
    PROC_NPC_SEIREI        = 0x026A,
    PROC_NPC_SHAMAN        = 0x026B,
    PROC_NPC_SMARO         = 0x026C,
    PROC_NPC_SOLA          = 0x026D,
    PROC_NPC_TARO          = 0x026E,
    PROC_NPC_PACHI_BESU    = 0x026F,
    PROC_NPC_PACHI_TARO    = 0x0270,
    PROC_NPC_PACHI_MARO    = 0x0271,
    PROC_TAG_PATI          = 0x0272,
    PROC_NPC_THE           = 0x0273,
    PROC_NPC_TKJ           = 0x0274,
    PROC_NPC_TKS           = 0x0275,
    PROC_NPC_TKC           = 0x0276,
    PROC_OBJ_TKS           = 0x0277,
    PROC_NPC_TOBY          = 0x0278,
    PROC_NPC_URI           = 0x0279,
    PROC_NPC_YELIA         = 0x027A,
    PROC_NPC_YKM           = 0x027B,
    PROC_NPC_YKW           = 0x027C,
    PROC_NPC_ZANB          = 0x027D,
    PROC_NPC_ZANT          = 0x027E,
    PROC_NPC_ZELDA         = 0x027F,
    PROC_NPC_ZELR          = 0x0280,
    PROC_NPC_ZELRO         = 0x0281,
    PROC_OBJ_ZRAFREEZE     = 0x0282,
    PROC_NPC_ZRC           = 0x0283,
    PROC_NPC_ZRZ           = 0x0284,
    PROC_ZRA_MARK          = 0x0285,
    PROC_MYNA2             = 0x0286,
    PROC_TAG_MYNA2         = 0x0287,
    PROC_NPC_CD3           = 0x0288,
    PROC_Tag_Schedule      = 0x0289,
    PROC_Tag_Escape        = 0x028A,
    PROC_NPC_CHAT          = 0x028B,
    PROC_NPC_SOLDIERa      = 0x028C,
    PROC_NPC_SOLDIERb      = 0x028D,
    PROC_PASSER_MNG        = 0x028E,
    PROC_NPC_PASSER        = 0x028F,
    PROC_NPC_PASSER2       = 0x0290,
    PROC_NPC_POST          = 0x0291,
    PROC_NPC_POUYA         = 0x0292,
    PROC_FORMATION_MNG     = 0x0293,
    PROC_NPC_FGUARD        = 0x0294,
    PROC_GUARD_MNG         = 0x0295,
    PROC_TAG_GUARD         = 0x0296,
    PROC_NPC_GUARD         = 0x0297,
    PROC_NPC_ASH           = 0x0298,
    PROC_NPC_ASHB          = 0x0299,
    PROC_NPC_SHAD          = 0x029A,
    PROC_NPC_RAFREL        = 0x029B,
    PROC_NPC_MOIR          = 0x029C,
    PROC_NPC_IMPAL         = 0x029D,
    PROC_NPC_SHOE          = 0x029E,
    PROC_NPC_DOORBOY       = 0x029F,
    PROC_NPC_PRAYER        = 0x02A0,
    PROC_NPC_KASIHANA      = 0x02A1,
    PROC_NPC_KASIKYU       = 0x02A2,
    PROC_NPC_KASIMICH      = 0x02A3,
    PROC_NPC_DRSOL         = 0x02A4,
    PROC_NPC_CHIN          = 0x02A5,
    PROC_NPC_INS           = 0x02A6,
    PROC_NPC_SHOP0         = 0x02A7,
    PROC_NPC_MK            = 0x02A8,
    PROC_NPC_P2            = 0x02A9,
    PROC_KYTAG00           = 0x02AA,
    PROC_KYTAG01           = 0x02AB,
    PROC_KYTAG02           = 0x02AC,
    PROC_KYTAG03           = 0x02AD,
    PROC_KYTAG04           = 0x02AE,
    PROC_KYTAG05           = 0x02AF,
    PROC_KYTAG06           = 0x02B0,
    PROC_KYTAG07           = 0x02B1,
    PROC_KYTAG08           = 0x02B2,
    PROC_KYTAG09           = 0x02B3,
    PROC_KYTAG10           = 0x02B4,
    PROC_KYTAG11           = 0x02B5,
    PROC_KYTAG12           = 0x02B6,
    PROC_KYTAG13           = 0x02B7,
    PROC_KYTAG14           = 0x02B8,
    PROC_KYTAG15           = 0x02B9,
    PROC_KYTAG16           = 0x02BA,
    PROC_KYTAG17           = 0x02BB,
    PROC_Ykgr              = 0x02BC,
    PROC_TALK              = 0x02BD,
    PROC_Obj_Crope         = 0x02BE,
    PROC_Obj_Bombf         = 0x02BF,
    PROC_Obj_BkLeaf        = 0x02C0,
    PROC_Tag_Mhint         = 0x02C1,
    PROC_Tag_Mmsg          = 0x02C2,
    PROC_Tag_Mwait         = 0x02C3,
    PROC_Tag_Mstop         = 0x02C4,
    PROC_Tag_Stream        = 0x02C5,
    PROC_Tag_Sppath        = 0x02C6,
    PROC_Tag_Wljump        = 0x02C7,
    PROC_Tag_TWGate        = 0x02C8,
    PROC_Tag_Lv6Gate       = 0x02C9,
    PROC_Tag_Lv7Gate       = 0x02CA,
    PROC_Tag_Lv8Gate       = 0x02CB,
    PROC_Tag_TheBHint      = 0x02CC,
    PROC_Tag_Assist        = 0x02CD,
    PROC_DEMO00            = 0x02CE,
    PROC_TAG_CAMERA        = 0x02CF,
    PROC_TAG_CHKPOINT      = 0x02D0,
    PROC_TAG_EVENT         = 0x02D1,
    PROC_TAG_EVT           = 0x02D2,
    PROC_TAG_TELOP         = 0x02D3,
    PROC_TAG_HOWL          = 0x02D4,
    PROC_TAG_MSG           = 0x02D5,
    PROC_TAG_LANTERN       = 0x02D6,
    PROC_Tag_Mist          = 0x02D7,
    PROC_DMIDNA            = 0x02D8,
    PROC_KY_THUNDER        = 0x02D9,
    PROC_VRBOX             = 0x02DA,
    PROC_VRBOX2            = 0x02DB,
    PROC_BG                = 0x02DC,
    PROC_SET_BG_OBJ        = 0x02DD,
    PROC_BG_OBJ            = 0x02DE,
    PROC_MIRROR            = 0x02DF,
    PROC_MOVIE_PLAYER      = 0x02E0,
    PROC_TITLE             = 0x02E1,
    PROC_FR                = 0x02E2,
    PROC_ECONT             = 0x02E3,
    PROC_MG_ROD            = 0x02E4,
    PROC_E_ARROW           = 0x02E5,
    PROC_BULLET            = 0x02E6,
    PROC_SWHIT0            = 0x02E7,
    PROC_E_TH_BALL         = 0x02E8,
    PROC_TAG_EVTAREA       = 0x02E9,
    PROC_TAG_EVTMSG        = 0x02EA,
    PROC_TAG_KMSG          = 0x02EB,
    PROC_TAG_PUSH          = 0x02EC,
    PROC_E_MK_BO           = 0x02ED,
    PROC_E_MM_MT           = 0x02EE,
    PROC_OBJ_KBOX          = 0x02EF,
    PROC_OBJ_FW            = 0x02F0,
    PROC_B_GOS             = 0x02F1,
    PROC_OBJ_YSTONE        = 0x02F2,
    PROC_MANT              = 0x02F3,
    PROC_CROD              = 0x02F4,
    PROC_OBJ_PLEAF         = 0x02F5,
    PROC_OBJ_KBACKET       = 0x02F6,
    PROC_OBJ_YBAG          = 0x02F7,
    PROC_OBJ_PUMPKIN       = 0x02F8,
    PROC_OBJ_AUTOMATA      = 0x02F9,
    PROC_OBJ_GADGET        = 0x02FA,
    PROC_OBJ_KAGO          = 0x02FB,
    PROC_Obj_Carry         = 0x02FC,
    PROC_Obj_Stone         = 0x02FD,
    PROC_OBJ_HB            = 0x02FE,
    PROC_NPC_INKO          = 0x02FF,
    PROC_BD                = 0x0300,
    PROC_Obj_Eff           = 0x0301,
    PROC_WPILLAR           = 0x0302,
    PROC_WMARK             = 0x0303,
    PROC_E_BI              = 0x0304,
    PROC_E_BI_LEAF         = 0x0305,
    PROC_START_AND_GOAL    = 0x0306,
    PROC_NPC_DF            = 0x0307,
    PROC_ARROW             = 0x0308,
    PROC_PATH_LINE         = 0x0309,
    PROC_TAG_ALLMATO       = 0x030A,
    PROC_Obj_Timer         = 0x030B,
    PROC_SCENE_EXIT        = 0x030C,
    PROC_CAMERA            = 0x030D,
    PROC_CAMERA2           = 0x030E,
    PROC_SUSPEND           = 0x030F,
    PROC_GRASS             = 0x0310,
    PROC_KYEFF             = 0x0311,
    PROC_KYEFF2            = 0x0312,
    PROC_MSG_OBJECT        = 0x0313,
    PROC_MENUWINDOW        = 0x0314,
    PROC_TIMER             = 0x0315,
    PROC_METER2            = 0x0316,
    PROC_GAMEOVER          = 0x0317,
};

#endif /* D_PROCNAME_H */