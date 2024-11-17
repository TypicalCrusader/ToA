#include "common-chax.h"
#include "Data.h"

//C rework by Typical
//original battle transform by Tequila ,UNKNOWN ,Aera, circleseverywhere. Transport to FEB by 7743
//i need to port this to c only because otherwise it breaky :<

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

    for(i=0;i<=(Div(sizeof(gTranformStruct),sizeof(gTranformStruct{0}));i++))
    {
        if(gpEkrBattleUnitRight->unit.pClassData->number == gTranformStruct[i]->jid && gpEkrBattleUnitRight->weapon == gTranformStruct[i]->iid)
        {
            EkrPrepareBanimfx(anim, gTranformStruct[i]->gMainAnim - 1);
            SwitchAISFrameDataFromBARoundType(anim, 0);
            LZ77UnCompWram(banim[gTranformStruct[i]->gMainAnim - 1].pal, gPal_Banim);
        }
        else if (gpEkrBattleUnitLeft->unit.pClassData->number == gTranformStruct[i]->jid && gpEkrBattleUnitLeft->weapon == gTranformStruct[i]->iid)
        {
            EkrPrepareBanimfx(anim, gTranformStruct[i]->gMainAnim - 1);
            SwitchAISFrameDataFromBARoundType(anim, 0);
            LZ77UnCompWram(banim[gTranformStruct[i]->gMainAnim - 1].pal, gPal_Banim);
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

    for(i=0;i<=(Div(sizeof(gTranformStruct),sizeof(gTranformStruct{0}));i++))
    {
        if (++proc->timer == 0x1A) {
            if(gpEkrBattleUnitRight->unit.pClassData->number == gTranformStruct[i]->jid && gpEkrBattleUnitRight->weapon == gTranformStruct[i]->iid)
            {
                EfxPlaySE(gTranformStruct[i]->TransformStartSound, 0x100); //transform
                M4aPlayWithPostionCtrl(0xDC, anim->xPosition, 1);
            }
            else if (gpEkrBattleUnitLeft->unit.pClassData->number == gTranformStruct[i]->jid && gpEkrBattleUnitLeft->weapon == gTranformStruct[i]->iid)
            {
                EfxPlaySE(gTranformStruct[i]->TransformStartSound, 0x100); //transform
                M4aPlayWithPostionCtrl(0xDC, anim->xPosition, 1);
            }
            else {
                EfxPlaySE(0xDC, 0x100); //transform
                M4aPlayWithPostionCtrl(0xDC, anim->xPosition, 1);
            }
        }

        if (ANINS_GET_TYPE(*anim->pScrCurrent) == ANIM_INS_TYPE_STOP) {
            if(gpEkrBattleUnitRight->unit.pClassData->number == gTranformStruct[i]->jid && gpEkrBattleUnitRight->weapon == gTranformStruct[i]->iid)
            {
                EfxPlaySE(gTranformStruct[i]->TransformFinishSound, 0x100);
                M4aPlayWithPostionCtrl(gTranformStruct[i]->TransformFinishSound, anim->xPosition, 1);        
                EkrPrepareBanimfx(anim, gTranformStruct[i]->gIntroAnim - 1);
            }
            else if (gpEkrBattleUnitLeft->unit.pClassData->number == gTranformStruct[i]->jid && gpEkrBattleUnitLeft->weapon == gTranformStruct[i]->iid)
            {
                EfxPlaySE(gTranformStruct[i]->TransformFinishSound, 0x100);
                M4aPlayWithPostionCtrl(gTranformStruct[i]->TransformFinishSound, anim->xPosition, 1);        
                EkrPrepareBanimfx(anim,gTranformStruct[i]->gIntroAnim - 1);
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

    if (GetEfxHp(2 * gEfxHpLutOff[GetAnimPosition(anim)] + GetAnimPosition(anim)) <= 0) {

        /* Transform from dragon to loli */
        proc->timer = 0;
        for(i=0;i<=(Div(sizeof(gTranformStruct),sizeof(gTranformStruct{0}));i++))
        {
            if(gpEkrBattleUnitRight->unit.pClassData->number == gTranformStruct[i]->jid && gpEkrBattleUnitRight->weapon == gTranformStruct[i]->iid)
            {
                EkrPrepareBanimfx(anim, gTranformStruct[i].gNoWPNAnim - 1);
            }
            else if(gpEkrBattleUnitLeft->unit.pClassData->number == gTranformStruct[i]->jid && gpEkrBattleUnitLeft->weapon == gTranformStruct[i]->iid)
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

    for(i=0;i<=(Div(sizeof(gTranformStruct),sizeof(gTranformStruct{0}));i++))
    {
        if(gpEkrBattleUnitRight->unit.pClassData->number == gTranformStruct[i]->jid && gpEkrBattleUnitRight->weapon == gTranformStruct[i]->iid)
        {
            EfxPlaySE(gTranformStruct[i]->UntransformSound, 0x100);
            M4aPlayWithPostionCtrl(gTranformStruct[i]->UntransformSound, anim->xPosition, 1);
            EkrPrepareBanimfx(anim, gTranformStruct[i]->gExitAnim - 1);
        }
        else if(gpEkrBattleUnitLeft->unit.pClassData->number == gTranformStruct[i]->jid && gpEkrBattleUnitLeft->weapon == gTranformStruct[i]->iid)
        {
            EfxPlaySE(gTranformStruct[i]->UntransformSound, 0x100);
            M4aPlayWithPostionCtrl(gTranformStruct[i]->UntransformSound, anim->xPosition, 1);
            EkrPrepareBanimfx(anim, gTranformStruct[i]->gExitAnim - 1);
        }   
        else 
        {
            EfxPlaySE(0xDD, 0x100);
            M4aPlayWithPostionCtrl(0xDD, anim->xPosition, 1);
            EkrPrepareBanimfx(anim, BANIM_INDEX_MYRRH_EXIT - 1);
        }  

        SwitchAISFrameDataFromBARoundType(anim, 0);
        Proc_Break(proc);
        if(gpEkrBattleUnitRight->unit.pClassData->number == gTranformStruct[i]->jid && gpEkrBattleUnitRight->weapon == gTranformStruct[i]->iid)
        {
            LZ77UnCompWram(banim[gTranformStruct[i]->gIntroAnim - 1].pal, gPal_Banim);   
        }
        else if(gpEkrBattleUnitLeft->unit.pClassData->number == gTranformStruct[i]->jid && gpEkrBattleUnitLeft->weapon == gTranformStruct[i]->iid)
        {
            LZ77UnCompWram(banim[gTranformStruct[i]->gIntroAnim - 1].pal, gPal_Banim);   
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