#include "SilentPromote.h"

//s1 - CharID, s2 ClassID
void gSilentPromote(){
    struct Unit *unit = GetUnit(gEventSlots[1]);
    struct ClassData *class = GetClassData(gEventSlots[2]);

    //set class
    unit->pClassData = class;
    //add class stats
    unit->maxHP += class->promotionHp;
    if((unit->curHP + class->promotionHp) > unit->maxHP)
    {
        unit->curHP += class->promotionHp;
    }
    unit->pow += class->promotionPow;
    unit->skl += class->promotionSkl;
    unit->spd += class->promotionSpd;
    unit->def += class->promotionDef;
    unit->res += class->promotionRes;   

    return;
}