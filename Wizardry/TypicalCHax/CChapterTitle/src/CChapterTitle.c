#include "common-chax.h"

LYN_REPLACE_CHECK(PutChapterTitleGfx);
void PutChapterTitleGfx(int chr, u32 titleId) //titleId literally chapter id taken from gPlaySt sooooo idk about it
{
    extern struct Font *gChFont[];

    u16 uChapterTextID;
    struct Text text; 

    //1 used for prologue,final map, epilogue and no data
    //2 used for A route (Erika)
    //3 used for B route (Ephraim)

    switch (gPlaySt.chapterModeIndex)
    {
    case 1: //prologue and epilogue
        uChapterTextID = GetROMChapterStruct(gPlaySt.chapterIndex)->unk5E;

        break;
    case 2: //route A
        uChapterTextID = GetROMChapterStruct(gPlaySt.chapterIndex)->chapTitleTextId;  
        break;
    case 3: //route B
        uChapterTextID = GetROMChapterStruct(gPlaySt.chapterIndex)->chapTitleTextIdInHectorStory;

        break;
    default:
        uChapterTextID = 0;
        break;
    }

    gChapterTitleFxSt.chr_str = 0xb40 & 0x3FF;
    Decompress(chap_title_data[GetChapterTitleExtra(&gPlaySt)].save, (void*)((chr * TILE_SIZE_4BPP) + 0x6000000));
    InitTextFont(*gChFont, BG_CHR_ADDR(0x146), 0x146, 0);
    Text_DrawString(&text,GetStringFromIndex(uChapterTextID)); //TextID

    return;
}
