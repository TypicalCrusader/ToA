#include "common-chax.h"
#include "Data.h"
#include "debuff.h"

//C rework by Typical
//original battle transform by Tequila ,UNKNOWN ,Aera, circleseverywhere. Transport to FEB by 7743
//i need to port this to c only because otherwise it breaky :<

LYN_REPLACE_CHECK(RegisterEkrDragonStatusType);
void RegisterEkrDragonStatusType(void)
{
    struct BattleUnit *bu1 = gpEkrBattleUnitLeft;
    struct BattleUnit *bu2 = gpEkrBattleUnitRight;

    struct BattleUnit *bu1a = bu1, *bu2a = bu2;

    u16 validl = gBanimValid[EKR_POS_L];
    u16 validr = gBanimValid[EKR_POS_R];
    u8 i;

    switch (gEkrDistanceType) {
    case EKR_DISTANCE_CLOSE:
    case EKR_DISTANCE_FAR:
    case EKR_DISTANCE_FARFAR:
        break;

    case EKR_DISTANCE_MONOCOMBAT:
    case EKR_DISTANCE_PROMOTION:
    default:
        return;
    }

    switch (UNIT_CLASS_ID(&bu1a->unit)) {
    case CLASS_DRACO_ZOMBIE:
        SetEkrDragonStatusType(gAnims[0], EKRDRGON_TYPE_DRACO_ZOMBIE);
        break;

    case CLASS_DEMON_KING:
        SetEkrDragonStatusType(gAnims[0], EKRDRGON_TYPE_DEMON_KING);
        break;
    }

    for(i=0;i<=MAXTRANSFORMTABLESIZE;i++)
    {
        if (bu1a->unit.pClassData->number == gTranformStruct[i].jid && bu1a->weaponBefore == gTranformStruct[i].iid)
        {
            if(UnitHasNegativeStatus(&bu1a->unit)==true)
            {
                break;
            }

            if (validl == false)
                break;

            SetEkrDragonStatusType(gAnims[0], EKRDRGON_TYPE_MYRRH);
            break;
        }
    }

    for(i=0;i<=MAXTRANSFORMTABLESIZE;i++)
    {
        if(bu2->unit.pClassData->number == gTranformStruct[i].jid && bu2->weaponBefore == gTranformStruct[i].iid)
        {
            if(UnitHasNegativeStatus(&bu2a->unit) == true)
            {
                return;
            }

            if (validr == false)
                return;

            SetEkrDragonStatusType(gAnims[2], EKRDRGON_TYPE_MYRRH);
            break;
        }
        if(i == MAXTRANSFORMTABLESIZE)
        {
            SetEkrDragonStatusType(gAnims[2], EKRDRGON_TYPE_NORMAL);
            break;
        }
    }   
}

LYN_REPLACE_CHECK(NewEkrDragonManakete);
void NewEkrDragonManakete(struct Anim *anim)
{

    struct EkrDragonStatus *ekrsp = GetEkrDragonStatus(anim);
    struct ProcEkrDragon *proc = Proc_Start(ProcScr_EkrMyrrh, PROC_TREE_3);

    ekrsp->proc = proc;
    AddEkrDragonStatusAttr(anim, EKRDRGON_ATTR_START);
    ekrsp->anim = anim;
    proc->anim = anim;
    proc->timer = 0;
}

LYN_REPLACE_CHECK(EkrMyr_PrepareBanimfx);
void EkrMyr_PrepareBanimfx(struct ProcEkrDragon * proc)
{
    struct BattleAnim * banim = banim_data;
    struct Anim * anim = proc->anim;
    proc->timer = 0;

    u8 i;

    for(i=0;i<=MAXTRANSFORMTABLESIZE;i++)
    {
        if(gpEkrBattleUnitRight->unit.pClassData->number == gTranformStruct[i].jid && gpEkrBattleUnitRight->weaponBefore == gTranformStruct[i].iid)
        {
            EkrPrepareBanimfx(anim, gTranformStruct[i].gMainAnim - 1);
            SwitchAISFrameDataFromBARoundType(anim, 0);
            LZ77UnCompWram(banim[gTranformStruct[i].gMainAnim - 1].pal, gPal_Banim);
        }
        else if (gpEkrBattleUnitLeft->unit.pClassData->number == gTranformStruct[i].jid && gpEkrBattleUnitLeft->weaponBefore == gTranformStruct[i].iid)
        {
            EkrPrepareBanimfx(anim, gTranformStruct[i].gMainAnim - 1);
            SwitchAISFrameDataFromBARoundType(anim, 0);
            LZ77UnCompWram(banim[gTranformStruct[i].gMainAnim - 1].pal, gPal_Banim);
        }
        //call vanilla code as fallback
        else {
            EkrPrepareBanimfx(anim, BANIM_INDEX_MYRRH_INTRO - 1);
            SwitchAISFrameDataFromBARoundType(anim, 0);
            LZ77UnCompWram(banim[BANIM_INDEX_MYRRH_INTRO - 1].pal, gPal_Banim);
        }
    }

    if (GetAnimPosition(anim) == EKR_POS_L)
        CpuFastCopy(gPal_Banim, PAL_OBJ(0x7), 0x40);
    else
        CpuFastCopy(gPal_Banim, PAL_OBJ(0x9), 0x40);

    EnablePaletteSync();
    Proc_Break(proc);
}

LYN_REPLACE_CHECK(EkrMyr_WaitForTransform);
void EkrMyr_WaitForTransform(struct ProcEkrDragon *proc)
{
    struct Anim *anim = proc->anim;

    u8 i;

    for(i=0;i<=MAXTRANSFORMTABLESIZE;i++)
    {
        if (++proc->timer == 0x1A) {
            if(gpEkrBattleUnitRight->unit.pClassData->number == gTranformStruct[i].jid && gpEkrBattleUnitRight->weaponBefore == gTranformStruct[i].iid)
            {
                EfxPlaySE(gTranformStruct[i].TransformStartSound, 0x100); //transform
                M4aPlayWithPostionCtrl(0xDC, anim->xPosition, 1);
            }
            else if (gpEkrBattleUnitLeft->unit.pClassData->number == gTranformStruct[i].jid && gpEkrBattleUnitLeft->weaponBefore == gTranformStruct[i].iid)
            {
                EfxPlaySE(gTranformStruct[i].TransformStartSound, 0x100); //transform
                M4aPlayWithPostionCtrl(0xDC, anim->xPosition, 1);
            }
            else {
                EfxPlaySE(0xDC, 0x100); //transform
                M4aPlayWithPostionCtrl(0xDC, anim->xPosition, 1);
            }
        }

        if (ANINS_GET_TYPE(*anim->pScrCurrent) == ANIM_INS_TYPE_STOP) {
            if(gpEkrBattleUnitRight->unit.pClassData->number == gTranformStruct[i].jid && gpEkrBattleUnitRight->weaponBefore == gTranformStruct[i].iid)
            {
                EfxPlaySE(gTranformStruct[i].TransformFinishSound, 0x100);
                M4aPlayWithPostionCtrl(gTranformStruct[i].TransformFinishSound, anim->xPosition, 1);        
                EkrPrepareBanimfx(anim, gTranformStruct[i].gIntroAnim - 1);
            }
            else if (gpEkrBattleUnitLeft->unit.pClassData->number == gTranformStruct[i].jid && gpEkrBattleUnitLeft->weaponBefore == gTranformStruct[i].iid)
            {
                EfxPlaySE(gTranformStruct[i].TransformFinishSound, 0x100);
                M4aPlayWithPostionCtrl(gTranformStruct[i].TransformFinishSound, anim->xPosition, 1);        
                EkrPrepareBanimfx(anim,gTranformStruct[i].gIntroAnim - 1);
            }
            //call vanilla code as fallback
            else {
                EfxPlaySE(0xDE, 0x100);
                M4aPlayWithPostionCtrl(0xDE, anim->xPosition, 1);        
                EkrPrepareBanimfx(anim, BANIM_INDEX_MYRRH_MAIN - 1);
            }        
            Proc_Break(proc);
        }
    }
}

LYN_REPLACE_CHECK(EkrMyr_TrigerForPrepared);
void EkrMyr_TrigerForPrepared(struct ProcEkrDragon *proc)
{
    (void)GetAnimAnotherSide(proc->anim);
    AddEkrDragonStatusAttr(proc->anim, EKRDRGON_ATTR_BANIMFX_PREPARED);
    Proc_Break(proc);
}


LYN_REPLACE_CHECK(EkrMyr_InBattleIdle);
void EkrMyr_InBattleIdle(struct ProcEkrDragon * proc)
{
    u16 attr = GetEkrDragonStatusAttr(proc->anim);
    if (attr & EKRDRGON_ATTR_BANIMFINISH) {
        proc->timer = 0;
        Proc_Break(proc);
    }
}

LYN_REPLACE_CHECK(EkrMyr_ReturnToLoli);
void EkrMyr_ReturnToLoli(struct ProcEkrDragon * proc)
{
    struct Anim * anim = proc->anim;
    struct BattleAnim * banim = banim_data;

    u8 i;

    if (GetEfxHp(2 * gEfxHpLutOff[GetAnimPosition(anim)] + GetAnimPosition(anim)) <= 0) {

        /* Transform from dragon to loli */
        proc->timer = 0;
        for(i=0;i<=MAXTRANSFORMTABLESIZE;i++)
        {
            if(gpEkrBattleUnitRight->unit.pClassData->number == gTranformStruct[i].jid && gpEkrBattleUnitRight->weaponBefore == gTranformStruct[i].iid)
            {
                EkrPrepareBanimfx(anim, gTranformStruct[i].gNoWPNAnim - 1);
            }
            else if(gpEkrBattleUnitLeft->unit.pClassData->number == gTranformStruct[i].jid && gpEkrBattleUnitLeft->weaponBefore == gTranformStruct[i].iid)
            {
                EkrPrepareBanimfx(anim, gTranformStruct[i].gNoWPNAnim - 1);

            }   
            else 
            {
                EkrPrepareBanimfx(anim, BANIM_INDEX_MYRRH_NOWPN - 1);
            }     
        }
        gEkrSpellAnimIndex[0] = -1;
        Proc_Break(proc);
        return;
    }

    for(i=0;i<=MAXTRANSFORMTABLESIZE;i++)
    {
        if(gpEkrBattleUnitRight->unit.pClassData->number == gTranformStruct[i].jid && gpEkrBattleUnitRight->weaponBefore == gTranformStruct[i].iid)
        {
            EfxPlaySE(gTranformStruct[i].UntransformSound, 0x100);
            M4aPlayWithPostionCtrl(gTranformStruct[i].UntransformSound, anim->xPosition, 1);
            EkrPrepareBanimfx(anim, gTranformStruct[i].gExitAnim - 1);
        }
        else if(gpEkrBattleUnitLeft->unit.pClassData->number == gTranformStruct[i].jid && gpEkrBattleUnitLeft->weaponBefore == gTranformStruct[i].iid)
        {
            EfxPlaySE(gTranformStruct[i].UntransformSound, 0x100);
            M4aPlayWithPostionCtrl(gTranformStruct[i].UntransformSound, anim->xPosition, 1);
            EkrPrepareBanimfx(anim, gTranformStruct[i].gExitAnim - 1);
        }   
        else 
        {
            EfxPlaySE(0xDD, 0x100);
            M4aPlayWithPostionCtrl(0xDD, anim->xPosition, 1);
            EkrPrepareBanimfx(anim, BANIM_INDEX_MYRRH_EXIT - 1);
        }  

        SwitchAISFrameDataFromBARoundType(anim, 0);
        Proc_Break(proc);
        if(gpEkrBattleUnitRight->unit.pClassData->number == gTranformStruct[i].jid && gpEkrBattleUnitRight->weaponBefore == gTranformStruct[i].iid)
        {
            LZ77UnCompWram(banim[gTranformStruct[i].gIntroAnim - 1].pal, gPal_Banim);   
        }
        else if(gpEkrBattleUnitLeft->unit.pClassData->number == gTranformStruct[i].jid && gpEkrBattleUnitLeft->weaponBefore == gTranformStruct[i].iid)
        {
            LZ77UnCompWram(banim[gTranformStruct[i].gIntroAnim - 1].pal, gPal_Banim);   
        }
        else
        {
            LZ77UnCompWram(banim[BANIM_INDEX_MYRRH_INTRO - 1].pal, gPal_Banim);   
        }
    }

    if (GetAnimPosition(anim) == EKR_POS_L)
        CpuFastCopy(gPal_Banim, PAL_OBJ(0x7), 0x40);
    else
        CpuFastCopy(gPal_Banim, PAL_OBJ(0x9), 0x40);

    EnablePaletteSync();
}