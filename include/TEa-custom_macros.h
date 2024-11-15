#pragma once
#include "EAstdlib.h"

#define SilentPromote(pid,jid) \
    SVAL(EVT_SLOT_1, (pid)) \
    SVAL(EVT_SLOT_2, (jid)) \
    ASMC(gSilentPromote)
     