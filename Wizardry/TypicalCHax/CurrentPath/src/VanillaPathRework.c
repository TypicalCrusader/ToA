#include "VanillaPathRework.h"


s8 CanUnitSeize(struct Unit* unit) {
    int leaderId;

    leaderId = CHARACTER_PLAY_AUGUST;

    return unit->pCharacterData->number == leaderId;
}

int GetPlayerLeaderUnitId(void)
{
    int i;
    int unitId;

    switch (gPlaySt.chapterModeIndex)
    {
        case CHAPTER_MODE_COMMON:
        case CHAPTER_MODE_EIRIKA:
            unitId = CHARACTER_EIRIKA;
            break;

        case CHAPTER_MODE_EPHRAIM:
            unitId = CHARACTER_EPHRAIM;
            break;
    }

    if ((u8)gPlaySt.chapterIndex == 5)
    {
        return CHARACTER_EPHRAIM;
    }

    do
    {
        struct Unit * unit;
        if (GetBattleMapKind() == 0)
        {
            return unitId;
        }

        unit = GetUnitFromCharId(unitId);

        if (unit && !(unit->state & US_NOT_DEPLOYED))
        {
            return unitId;
        }

        for (i = FACTION_BLUE + 1; i < FACTION_GREEN; ++i)
        {
            unit = GetUnit(i);

            if (!UNIT_IS_VALID(unit))
            {
                continue;
            }

            if (unit->state & US_UNAVAILABLE)
            {
                continue;
            }

            return unit->pCharacterData->number;
        }
    } while (0);

    return unitId;
}

bool IsChapterBelongCurGame(u32 ch_index)
{
    return true;
}