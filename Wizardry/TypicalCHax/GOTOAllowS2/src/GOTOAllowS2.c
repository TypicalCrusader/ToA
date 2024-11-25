#include "common-chax.h"

//! FE8U = 0x0800D980
LYN_REPLACE_CHECK(Event09_Goto);
u8 Event09_Goto(struct EventEngineProc * proc)
{
    u16 arg = EVT_CMD_ARGV(proc->pEventCurrent)[0];
    if(arg == 0xFFFF)
    {
        arg = (u16) gEventSlots[0x2];
    }
    u32 ref = (arg << 0x10) | (EV_CMD_LABEL << 0x08) | 0x20;
    u32 scr;
    const u16 * cur;

    cur = proc->pEventIdk;
    proc->pEventCurrent = cur;
    scr = *(const u32 *)cur;

    if (scr == ref)
        return EVC_ADVANCE_CONTINUE;

    while (scr != ref)
    {
        cur += EVT_CMD_LEN(cur);
        scr = *(const u32 *)cur;
    }

    if (scr == ref)
        proc->pEventCurrent = cur;

    return EVC_ADVANCE_CONTINUE;
}