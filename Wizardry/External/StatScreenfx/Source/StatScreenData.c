#include "global.h"
#include "ctc.h"

#include "statscreenfx.h"

const struct {
	u8 width, height;
	u16 data[STATSCREEN_LEFT_WIDTH * STATSCREEN_LEFT_HEIGHT + 1];
}
Tsa_StatScreenBg1Left = {
	.width  = STATSCREEN_LEFT_WIDTH  - 1,
	.height = STATSCREEN_LEFT_HEIGHT - 1,
	.data = {
		0x2F, 0x30, 0x31, 0x32, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12,
		0x2B, 0x2C, 0x2D, 0x2E, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x0F,
		0x27, 0x28, 0x29, 0x2A, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x0F,
		0x0D, 0x18, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x1A, 0x0F,
		0x0D, 0x16, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x17, 0x0F,
		0x0D, 0x16, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x17, 0x0F,
		0x0D, 0x16, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x17, 0x0F,
		0x0D, 0x16, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x17, 0x0F,
		0x0D, 0x16, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x17, 0x0F,
		0x0D, 0x16, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x17, 0x0F,
		0x0D, 0x16, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x17, 0x0F,
		0x0D, 0x13, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x15, 0x0F,
		0x0A, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0C,
	}
};

static const struct StatScreenBg1Tsa Tsa_StatScreenBg1PageLong = {
	.width  = STATSCREEN_BG1_WIDTH  - 1,
	.height = STATSCREEN_BG1_HEIGHT - 1,
	.data = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x07, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x09, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x00
	}
};

static const struct StatScreenBg1Tsa Tsa_StatScreenBg1PageNormal = {
	.width  = STATSCREEN_BG1_WIDTH  - 1,
	.height = STATSCREEN_BG1_HEIGHT - 1,
	.data = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x07, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x09, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x00
	}
};

static const struct StatScreenBg1Tsa Tsa_StatScreenBg1PageShort = {
	.width  = STATSCREEN_BG1_WIDTH  - 1,
	.height = STATSCREEN_BG1_HEIGHT - 1,
	.data = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x07, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x09, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x04, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x5D, 0x5E, 0x06, 0x00,
		0x04, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x5B, 0x5C, 0x06, 0x00,
		0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x00
	}
};

struct StatScreenBg1Tsa const *const TsaLut_StatScreenBgPlayer[5] = {
	&Tsa_StatScreenBg1PageLong,
	&Tsa_StatScreenBg1PageLong,
	&Tsa_StatScreenBg1PageLong,
	&Tsa_StatScreenBg1PageNormal,
	&Tsa_StatScreenBg1PageShort
};

struct StatScreenBg1Tsa const *const TsaLut_StatScreenBgNonePlayer[5] = {
	&Tsa_StatScreenBg1PageNormal,
	&Tsa_StatScreenBg1PageLong,
	&Tsa_StatScreenBg1PageLong,
	&Tsa_StatScreenBg1PageNormal,
	&Tsa_StatScreenBg1PageShort
};

const u16 Sprite_StatScreenMuAreaBackground[] = {
	8,
	OAM0_SHAPE_32x32 + OAM0_Y(104) + OAM0_BLEND, OAM1_SIZE_32x32, 0,
	OAM0_SHAPE_32x32 + OAM0_Y(104) + OAM0_BLEND, OAM1_SIZE_32x32 + OAM1_X(32), 0,
	OAM0_SHAPE_32x32 + OAM0_Y(104) + OAM0_BLEND, OAM1_SIZE_32x32 + OAM1_X(64), 0,
	OAM0_SHAPE_32x32 + OAM0_Y(120) + OAM0_BLEND, OAM1_SIZE_32x32, 0,
	OAM0_SHAPE_32x32 + OAM0_Y(120) + OAM0_BLEND, OAM1_SIZE_32x32 + OAM1_X(32), 0,
	OAM0_SHAPE_32x32 + OAM0_Y(120) + OAM0_BLEND, OAM1_SIZE_32x32 + OAM1_X(64), 0,
	OAM0_SHAPE_8x32  + OAM0_Y(104) + OAM0_BLEND, OAM1_SIZE_8x32  + OAM1_X(96), OAM2_CHR(0x4),
	OAM0_SHAPE_8x32  + OAM0_Y(120) + OAM0_BLEND, OAM1_SIZE_8x32  + OAM1_X(96) + OAM1_VFLIP, OAM2_CHR(0x4),
};
