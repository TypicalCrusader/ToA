#pragma once

enum event_flag_idx {
    EVFLAG_ALWAYS_FALSE = 0,
    EVFLAG_BATTLE_QUOTES = 1,
    EVFLAG_DEFEAT_BOSS = 2,
    EVFLAG_WIN = 3,
    EVFLAG_BGM_CHANGE = 4,
    EVFLAG_5 = 5,
    EVFLAG_DEFEAT_ALL = 6,
    #define EVFLAG_TMP(flag) (flag)
    //7-40 remain on suspend, cleared upon finishing chapter
    //41-63 cleared on suspend/resume, remain upon finishing chapter
    //64-100 dont use
    EVFLAG_GAMEOVER = 101,
    EVFLAG_OBJWINDOW_DISABLE = 102,
    EVFLAG_EXTRA_UNIT_BASE = 103, /* 10 extra unit is avalable */
    #define EVFLAG_EXTRA_UNIT(i) (EVFLAG_EXTRA_UNIT_BASE + (i))
    EVFLAG_EMPEROR_DEAD = 104,
    EVFLAG_EMPRESS_DEAD = 105,
    EVFLAG_EMPEROR_AND_EMPRESS_DEAD = 106,
    //107 - 126
    EVFLAG_TRIANGLE_1 = 127,
    EVFLAG_TRIANGLE_2 = 128,
    EVFLAG_TRIANGLE_3 = 129,
    EVFLAG_DK_MUSIC_CHANGE = 130 ,
    EVFLAG_HIDE_BLINKING_ICON = 132,
    EVFLAG_AUGUST_TYPE = 133, 
    EVFLAG_PATH_SELECT = 136, // WM flag skip chapter intro If flag is 0x6
    EVFLAG_WM_FIST_LOAD = 137, 
    EVFLAG_AUGUST_CROWNED = 138,
    //176 - 296 free since IDAF about guide
    //guide deez nuts
    EVFLAG_SPECIAL_COURT_APPR_4BIT_BIT1 = 297,
    EVFLAG_SPECIAL_COURT_APPR_4BIT_BIT2 = 298,
    EVFLAG_SPECIAL_COURT_APPR_4BIT_BIT3 = 299,
    EVFLAG_SPECIAL_COURT_APPR_4BIT_BIT4 = 300,
};