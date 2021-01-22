#pragma once

#include <mkb/pool.h>

namespace mkb {

constexpr s32 MAX_EFFECTS = 512;

enum EffectType
{ /* Abbreviated "ET" in the game */
    EFFECT_PAPERFRAG = 0,
    EFFECT_GET_BANANA = 1,
    EFFECT_COLI_PARTICLE = 2,
    EFFECT_HOLDING_BANANA = 3,
    EFFECT_LEVITATE = 4,
    EFFECT_COLISTAR_PARTICLE = 5,
    EFFECT_BGWAT_BUBBLE_BASE = 6,
    EFFECT_BGWAT_BUBBLE = 7,
    EFFECT_METEO = 8,
    EFFECT_METEO_FIX = 9,
    EFFECT_COLIFLASH = 10,
    EFFECT_BNS_STG_STAR = 11,
    EFFECT_BNS_STG_STAR_TAIL = 12,
    EFFECT_BGMST_GEN_CLOUD = 13,
    EFFECT_BGSTM_RAINRIPPLE = 14,
    EFFECT_NAMEENT_CODE = 15,
    EFFECT_GET_NAMEENT_CODE = 16,
    EFFECT_BGMST_WATER = 17,
    EFFECT_COMMENDFRAG = 18,
    EFFECT_ENDING_BALLFRAG = 19,
    EFFECT_BANANA_DROP = 20,
    EFFECT_BGEND_WATER = 21,
    EFFECT_BGBTMFIRE_PTCL = 22,
    EFFECT_PIYO = 23,
    EFFECT_DUMMY1 = 24,
    EFFECT_DUMMY2 = 25,
    EFFECT_DUMMY3 = 26,
    EFFECT_DUMMY4 = 27,
    EFFECT_DUMMY5 = 28,
    EFFECT_DUMMY6 = 29,
    EFFECT_DUMMY7 = 30,
    EFFECT_DUMMY8 = 31,
    EFFECT_DUMMY9 = 32,
    EFFECT_DUMMYA = 33,
    EFFECT_DUMMYB = 34,
    EFFECT_DUMMYC = 35,
    EFFECT_DUMMYD = 36,
    EFFECT_DUMMYE = 37,
    EFFECT_DUMMYF = 38,
    EFFECT_TMP001 = 39,
    EFFECT_TMP002 = 40,
    EFFECT_TMP003 = 41,
    EFFECT_TMP004 = 42,
    EFFECT_TMP005 = 43,
    EFFECT_TMP006 = 44,
    EFFECT_TMP007 = 45,
    EFFECT_TMP008 = 46,
    EFFECT_TMP009 = 47,
    EFFECT_TMP010 = 48,
    EFFECT_TMP011 = 49,
    EFFECT_TMP012 = 50,
    EFFECT_TMP013 = 51,
    EFFECT_TMP014 = 52,
    EFFECT_TMP015 = 53,
    EFFECT_TMP016 = 54,
    EFFECT_TMP017 = 55,
    EFFECT_TMP018 = 56,
    EFFECT_TMP019 = 57,
    EFFECT_TMP020 = 58,
    EFFECT_TMP021 = 59,
    EFFECT_TMP022 = 60,
    EFFECT_TMP023 = 61,
    EFFECT_TMP024 = 62,
    EFFECT_TMP025 = 63,
    EFFECT_TMP026 = 64,
    EFFECT_TMP027 = 65,
    EFFECT_TMP028 = 66,
    EFFECT_TMP029 = 67,
    EFFECT_TMP030 = 68,
    EFFECT_TMP031 = 69,
    EFFECT_TMP032 = 70
};

struct Effect
{
    u16 idx;
    u16 id;
    u8 unk_0x4[4];
    u16 type;
    u8 unk_0xa[10];
    s16 g_ball_idx;
    u8 unk_0x16[30];
    Vec3f g_pos;
    u8 unk_0x40[112];
};

static_assert(sizeof(Effect) == 176);

extern "C"
{
extern Effect effects[MAX_EFFECTS];
extern PoolInfo effect_pool_info;
}

}