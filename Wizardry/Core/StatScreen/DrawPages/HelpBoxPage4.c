//mokha why this wasnt in c in first place?

#include "common-chax.h"
#include "stat-screen.h"
#include "constants/texts.h"
#include "SMTLikeRes.h"

static _DECL_INFO Rtext_Page4_Support, Rtext_Page4_Atk, Rtext_Page4_Def, Rtext_Page4_Hit, Rtext_Page4_Avo, Rtext_Page4_Crit, Rtext_Page4_Dodge;
static _DECL_INFO Rtext_Page4_Name, Rtext_Page4_Class, Rtext_Page4_Level, Rtext_Page4_Exp, Rtext_Page4_Hp, Rtext_Page4_RaceHelp, Rtext_Page4_Race;

_DECL_INFO *const RTextPageSupport = &Rtext_Page4_Support;

static _DECL_INFO Rtext_Page4_Support = {
	NULL, &Rtext_Page4_Atk, &Rtext_Page4_Name, &Rtext_Page4_RaceHelp,
	0, 0x66, 0xd5a,
	NULL, NULL
};

static _DECL_INFO Rtext_Page4_Atk = {
	&Rtext_Page4_Support, &Rtext_Page4_Def, &Rtext_Page4_Name, &Rtext_Page4_Race,
	0x66, 0x28, 0x55C,
	NULL, NULL
};

static _DECL_INFO Rtext_Page4_Def = {
	&Rtext_Page4_Atk, &Rtext_Page4_Hit, &Rtext_Page4_Name, NULL,
	0x66, 0x38, 0x573,
	NULL, NULL
};

static _DECL_INFO Rtext_Page4_Hit = {
	&Rtext_Page4_Def, &Rtext_Page4_Avo, &Rtext_Page4_Name, NULL,
	0x66, 0x48, 0x55D,
	NULL, NULL
};

static _DECL_INFO Rtext_Page4_Avo = {
	&Rtext_Page4_Hit, &Rtext_Page4_Crit, &Rtext_Page4_Name, NULL, 
	0x66, 0x58, 0x560,
	NULL, NULL
};

static _DECL_INFO Rtext_Page4_Crit = {
	&Rtext_Page4_Avo, &Rtext_Page4_Dodge, &Rtext_Page4_Class, NULL,
	0x66, 0x68, 0x55F,
	NULL, NULL
};

static _DECL_INFO Rtext_Page4_Dodge = {
	&Rtext_Page4_Crit, &Rtext_Page4_Exp, NULL, NULL,
	0, 0x66, 0xd5b,
	NULL, NULL
};

static _DECL_INFO Rtext_Page4_Name = {
	&Rtext_Page4_Hp, &Rtext_Page4_Class, &Rtext_Page4_RaceHelp, &Rtext_Page4_Hit, 
	0x18, 0x50, 0x0,
	NULL, (void*) 0x88c01
};

static _DECL_INFO Rtext_Page4_Class = {
	&Rtext_Page4_Name, &Rtext_Page4_Level, NULL, &Rtext_Page4_Crit,
	0x6, 0x68, 0x6E8,
	NULL, (void*) 0x88c01
};

static _DECL_INFO Rtext_Page4_Level = {
	&Rtext_Page4_Class, &Rtext_Page4_Hp, NULL, &Rtext_Page4_Exp,
	0x6, 0x78, 0x542,
	NULL, NULL
};

static _DECL_INFO Rtext_Page4_Exp = {
	&Rtext_Page4_Class, &Rtext_Page4_Hp, &Rtext_Page4_Level, &Rtext_Page4_Dodge,
	0x26, 0x78, 0x543,
	NULL, NULL
};

static _DECL_INFO Rtext_Page4_Hp = {
	&Rtext_Page4_Level, &Rtext_Page4_Name, NULL, &Rtext_Page4_Dodge,
	0x6, 0x88, 0x544,
	NULL, NULL
};

static _DECL_INFO Rtext_Page4_RaceHelp = {
	NULL, &Rtext_Page4_Race, &Rtext_Page4_Name, NULL,
	0xB0, 0x28, RACEHELP,
	NULL, GetRaceDesc
};

static _DECL_INFO Rtext_Page4_Race = {
	&Rtext_Page4_RaceHelp, NULL, &Rtext_Page4_Atk, &Rtext_Page4_Name,
	0xB0, 0x28, 0x562,
	NULL, GetRaceDesc
};