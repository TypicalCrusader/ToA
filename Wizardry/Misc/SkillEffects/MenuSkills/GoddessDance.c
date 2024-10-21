#include "common-chax.h"
#include "weapon-range.h"
#include "kernel-lib.h"
#include "skill-system.h"
#include "constants/skills.h"
#include "constants/texts.h"

#if defined(SID_GoddessDance) && (COMMON_SKILL_VALID(SID_GoddessDance))
u8 GoddessDance_Usability(const struct MenuItemDef *def, int number)
{
	if (gActiveUnit->state & US_CANTOING)
		return MENU_NOTSHOWN;

	if (!HasSelectTarget(gActiveUnit, MakeTargetListForRefresh))
		return MENU_DISABLED;

	return MENU_ENABLED;
}

int GoddessDance_Hover(struct MenuProc *menu, struct MenuItemProc *item)
{
	BmMapFill(gBmMapMovement, -1);
	BmMapFill(gBmMapRange, 0);
	GenerateUnitStandingReachRange(gActiveUnit, 0b11);
	DisplayMoveRangeGraphics(MOVLIMITV_MMAP_BLUE | MOVLIMITV_RMAP_GREEN);
	return 0;
}

int GoddessDance_Unhover(struct MenuProc *menu, struct MenuItemProc *menuItem)
{
	HideMoveRangeGraphics();
	return 0;
}

u8 GoddessDance_OnSelected(struct MenuProc *menu, struct MenuItemProc *item)
{
	if (item->availability == MENU_DISABLED) {
		MenuFrozenHelpBox(menu, MSG_MenuSkill_GoddessDance_FRtext);
		return MENU_ACT_SND6B;
	}

	gActionData.unk08 = SID_GoddessDance;
	gActionData.unitActionType = CONFIG_UNIT_ACTION_EXPA_ExecSkill;

	return MENU_ACT_SKIPCURSOR | MENU_ACT_END | MENU_ACT_SND6A | MENU_ACT_CLEAR;
}

static void callback_anim(ProcPtr proc)
{
	PlaySoundEffect(0x269);
	Proc_StartBlocking(ProcScr_DanceringAnim, proc);

	BG_SetPosition(
		BG_0,
		-SCREEN_TILE_IX(gActiveUnit->xPos - 1),
		-SCREEN_TILE_IX(gActiveUnit->yPos - 2));
}

static void callback_exec(ProcPtr proc)
{
	int i;

	MakeTargetListForRefresh(gActiveUnit);

	for (i = 0; i < GetSelectTargetCount(); i++) {
		struct Unit *unit = GetUnit(GetTarget(i)->uid);

		if (!UNIT_ALIVE(unit) && unit != gActiveUnit)
			continue;

		unit->state &= ~(US_UNSELECTABLE | US_HAS_MOVED | US_HAS_MOVED_AI);
	}
}

bool Action_GoddessDance(ProcPtr parent)
{
	NewMuSkillAnimOnActiveUnit(gActionData.unk08, callback_anim, callback_exec);
	return true;
}
#endif
