#include "CChangeUnitDesc.h"

u16 ChangeCharacterDesc(){
    size_t gCharDescStructSize = sizeof(gCharDescStruct) / sizeof(gCharDescStruct[0]);


    for(i=0;i<=gCharDescStructSize;i++){
        //first check if we have unit
        if(gStatScreen.unit->index == gCharDescStruct->UnitID )
        {
            if(gPlaySt.chapterModeIndex = gCharDescStruct[i]->Path){
                return gCharDescStruct[i]->NewDesc;                
            }
            if(CheckFlag(gCharDescStruct[i]->FlagID)== true){
                return gCharDescStruct[i]->NewDesc;
            }
            if(gCharDescStruct[i]->ClassID == gStatScreen.unit->pClassData->number){
                return gCharDescStruct[i]->NewDesc;
            }             
        }
        //if last element and no unit id within char desc struct then return
        if(i == gCharDescStructSize)
        {
            return gStatScreen.unit->pCharacterData->descTextId;
        }
    }
}