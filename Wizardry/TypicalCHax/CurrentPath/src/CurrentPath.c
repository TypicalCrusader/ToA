#include "CurrentPath.h"

u8 CheckCurrentPath() {
    return gPlaySt.chapterModeIndex;
}

void ReturnCurrentPathtoS1() {
    gEventSlots[1] = gPlaySt.chapterModeIndex;
    return;
}

void SetCurrentPath() {
    gPlaySt.chapterModeIndex = gEventSlots[1];
    return;
}