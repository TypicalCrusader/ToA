	.section .rodata
    .include "macros.inc"
    .include "animscr.inc"
    .include "gba_sprites.inc"

/* ICON */
.align 2
sprite_right_icon_00:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x00, 0
    ANIM_SPRITE_END

sprite_right_icon_01:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x02, 0
    ANIM_SPRITE_END

sprite_right_icon_02:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x04, 0
    ANIM_SPRITE_END

sprite_right_icon_03:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x06, 0
    ANIM_SPRITE_END

sprite_right_icon_04:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x08, 0
    ANIM_SPRITE_END

sprite_right_icon_05:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x0A, 0
    ANIM_SPRITE_END

sprite_right_icon_06:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x0C, 0
    ANIM_SPRITE_END

sprite_right_icon_07:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x0E, 0
    ANIM_SPRITE_END

sprite_right_icon_08:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x10, 0
    ANIM_SPRITE_END

sprite_right_icon_09:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x12, 0
    ANIM_SPRITE_END

sprite_right_icon_0A:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x14, 0
    ANIM_SPRITE_END

sprite_right_icon_0B:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x16, 0
    ANIM_SPRITE_END

sprite_right_icon_0C:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x18, 0
    ANIM_SPRITE_END

sprite_right_icon_0D:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x1A, 0
    ANIM_SPRITE_END

sprite_right_icon_0E:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x1C, 0
    ANIM_SPRITE_END

sprite_right_icon_0F:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x1E, 0
    ANIM_SPRITE_END

sprite_right_icon_10:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x20, 0
    ANIM_SPRITE_END

sprite_right_icon_11:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x22, 0
    ANIM_SPRITE_END

sprite_right_icon_12:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x24, 0
    ANIM_SPRITE_END

sprite_right_icon_13:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x26, 0
    ANIM_SPRITE_END

sprite_right_icon_14:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x28, 0
    ANIM_SPRITE_END

sprite_right_icon_15:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x2A, 0
    ANIM_SPRITE_END

sprite_right_icon_16:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x2C, 0
    ANIM_SPRITE_END

sprite_right_icon_17:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x2E, 0
    ANIM_SPRITE_END

sprite_right_icon_18:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x30, 0
    ANIM_SPRITE_END

sprite_right_icon_19:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x32, 0
    ANIM_SPRITE_END

sprite_right_icon_1A:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x34, 0
    ANIM_SPRITE_END

sprite_right_icon_1B:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x36, 0
    ANIM_SPRITE_END

sprite_right_icon_1C:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x38, 0
    ANIM_SPRITE_END

sprite_right_icon_1D:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x3A, 0
    ANIM_SPRITE_END

sprite_right_icon_1E:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x3C, 0
    ANIM_SPRITE_END

sprite_right_icon_1F:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x3E, 0
    ANIM_SPRITE_END

sprite_right_icon_20:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x40, 0
    ANIM_SPRITE_END

.global AnimScr_EfxSkillBoxIconRight
AnimScr_EfxSkillBoxIconRight:
    ANIMSCR_FORCE_SPRITE sprite_right_icon_00, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_01, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_02, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_03, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_04, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_05, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_06, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_07, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_08, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_09, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_0A, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_0B, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_0C, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_0D, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_0E, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_0F, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_10, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_11, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_12, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_13, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_14, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_15, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_16, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_17, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_18, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_19, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_1A, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_1B, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_1C, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_1D, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_1E, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_1F, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_20, 1
    ANIMSCR_WAIT 30
    ANIMSCR_END

.global AnimScr_EfxSkillBoxIconLeft
AnimScr_EfxSkillBoxIconLeft:
    ANIMSCR_FORCE_SPRITE sprite_right_icon_20, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_1F, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_1E, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_1D, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_1C, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_1B, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_1A, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_19, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_18, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_17, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_16, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_15, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_14, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_13, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_12, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_11, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_10, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_0F, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_0E, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_0D, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_0C, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_0B, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_0A, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_09, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_08, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_07, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_06, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_05, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_04, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_03, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_02, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_01, 1
    ANIMSCR_FORCE_SPRITE sprite_right_icon_00, 1
    ANIMSCR_WAIT 30
    ANIMSCR_END

/* NAME */
sprite_right_name_00:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x00, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, +0x10, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, +0x20, 0
    ANIM_SPRITE_END

sprite_right_name_01:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x02, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, +0x0E, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, +0x1E, 0
    ANIM_SPRITE_END

sprite_right_name_02:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x04, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, +0x0C, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, +0x1C, 0
    ANIM_SPRITE_END

sprite_right_name_03:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x06, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, +0x0A, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, +0x1A, 0
    ANIM_SPRITE_END

sprite_right_name_04:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x08, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, +0x08, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, +0x18, 0
    ANIM_SPRITE_END

sprite_right_name_05:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x0A, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, +0x06, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, +0x16, 0
    ANIM_SPRITE_END

sprite_right_name_06:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x0C, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, +0x04, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, +0x14, 0
    ANIM_SPRITE_END

sprite_right_name_07:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x0E, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, +0x02, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, +0x12, 0
    ANIM_SPRITE_END

sprite_right_name_08:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x10, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x00, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, +0x10, 0
    ANIM_SPRITE_END

sprite_right_name_09:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x12, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x02, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, +0x0E, 0
    ANIM_SPRITE_END

sprite_right_name_0A:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x14, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x04, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, +0x0C, 0
    ANIM_SPRITE_END

sprite_right_name_0B:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x16, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x06, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, +0x0A, 0
    ANIM_SPRITE_END

sprite_right_name_0C:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x18, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x08, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, +0x08, 0
    ANIM_SPRITE_END

sprite_right_name_0D:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x1A, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x0A, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, +0x06, 0
    ANIM_SPRITE_END

sprite_right_name_0E:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x1C, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x0C, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, +0x04, 0
    ANIM_SPRITE_END

sprite_right_name_0F:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x1E, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x0E, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, +0x02, 0
    ANIM_SPRITE_END

sprite_right_name_10:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x20, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x10, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, -0x00, 0
    ANIM_SPRITE_END

sprite_right_name_11:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x22, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x12, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, -0x02, 0
    ANIM_SPRITE_END

sprite_right_name_12:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x24, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x14, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, -0x04, 0
    ANIM_SPRITE_END

sprite_right_name_13:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x26, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x16, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, -0x06, 0
    ANIM_SPRITE_END

sprite_right_name_14:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x28, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x18, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, -0x08, 0
    ANIM_SPRITE_END

sprite_right_name_15:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x2A, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x1A, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, -0x0A, 0
    ANIM_SPRITE_END

sprite_right_name_16:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x2C, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x1C, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, -0x0C, 0
    ANIM_SPRITE_END

sprite_right_name_17:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x2E, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x1E, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, -0x0E, 0
    ANIM_SPRITE_END

sprite_right_name_18:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x30, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x20, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, -0x10, 0
    ANIM_SPRITE_END

sprite_right_name_19:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x32, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x22, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, -0x12, 0
    ANIM_SPRITE_END

sprite_right_name_1A:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x34, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x24, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, -0x14, 0
    ANIM_SPRITE_END

sprite_right_name_1B:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x36, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x26, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, -0x16, 0
    ANIM_SPRITE_END

sprite_right_name_1C:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x38, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x28, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, -0x18, 0
    ANIM_SPRITE_END

sprite_right_name_1D:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x3A, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x2A, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, -0x1A, 0
    ANIM_SPRITE_END

sprite_right_name_1E:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x3C, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x2C, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, -0x1C, 0
    ANIM_SPRITE_END

sprite_right_name_1F:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x3E, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x2E, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, -0x1E, 0
    ANIM_SPRITE_END

sprite_right_name_20:
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 0, -0x40, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 2, -0x30, 0
    ANIM_SPRITE ATTR0_SQUARE, ATTR1_SIZE_16, 4, -0x20, 0
    ANIM_SPRITE_END

.global AnimScr_EfxSkillBoxNameRight
AnimScr_EfxSkillBoxNameRight:
    ANIMSCR_FORCE_SPRITE sprite_right_name_00, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_01, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_02, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_03, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_04, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_05, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_06, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_07, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_08, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_09, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_0A, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_0B, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_0C, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_0D, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_0E, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_0F, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_10, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_11, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_12, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_13, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_14, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_15, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_16, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_17, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_18, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_19, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_1A, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_1B, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_1C, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_1D, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_1E, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_1F, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_20, 1
    ANIMSCR_WAIT 30
    ANIMSCR_END

.global AnimScr_EfxSkillBoxNameLeft
AnimScr_EfxSkillBoxNameLeft:
    ANIMSCR_FORCE_SPRITE sprite_right_name_20, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_1F, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_1E, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_1D, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_1C, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_1B, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_1A, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_19, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_18, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_17, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_16, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_15, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_14, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_13, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_12, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_11, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_10, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_0F, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_0E, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_0D, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_0C, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_0B, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_0A, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_09, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_08, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_07, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_06, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_05, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_04, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_03, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_02, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_01, 1
    ANIMSCR_FORCE_SPRITE sprite_right_name_00, 1
    ANIMSCR_WAIT 30
    ANIMSCR_END
