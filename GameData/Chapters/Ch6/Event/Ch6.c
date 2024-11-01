#include "Ch6.h"


//todo edit this
const struct ROMChapterData Ch6Chapter = {
	.map = {
		.obj1Id = 1,
		.obj2Id = 0,
		.paletteId = 2,
		.tileConfigId = 3,
		.mainLayerId = 22,
		.objAnimId = 5,
		.paletteAnimId = 0,
		.changeLayerId = 23,
	},
	.initialFogLevel = 0,
	.hasPrepScreen = FALSE,
	.chapTitleId = 0x0,
	.chapTitleIdInHectorStory = 0x0,
	.initialPosX = 13,
	.initialPosY = 25,
	.initialWeather = WEATHER_FINE,
	.battleTileSet = 0,
	.easyModeLevelMalus = 0,
	.difficultModeLevelBonus = 0,
	.normalModeLevelMalus = 1,
	.mapBgmIds = {
		[MAP_BGM_BLUE] = 13,
		[MAP_BGM_RED] = 21,
		[MAP_BGM_GREEN] = 15,
		[MAP_BGM_BLUE_HECTOR] = 13,
		[MAP_BGM_RED_HECTOR] = 21,
		[MAP_BGM_GREEN_HECTOR] = 15,
		[MAP_BGM_BLUE_GREEN_ALT] = 65535,
		[MAP_BGM_RED_ALT] = 65535,
		[MAP_BGM_PROLOGUE_LYN] = 11,
		[MAP_BGM_PROLOGUE] = 65535,
		[MAP_BGM_PROLOGUE_HECTOR] = 65535,
	},
	.mapCrackedWallHeath = 50,
	.turnsForTacticsRankAInEliwoodStory = {
		[0] = 5,
		[1] = 5,
	},
	.turnsForTacticsRankAInHectorStory = {
		[0] = 5,
		[1] = 5,
	},
	.turnsForTacticsRankBInEliwoodStory = {
		[0] = 6,
		[1] = 6,
	},
	.turnsForTacticsRankBInHectorStory = {
		[0] = 6,
		[1] = 6,
	},
	.turnsForTacticsRankCInEliwoodStory = {
		[0] = 7,
		[1] = 7,
	},
	.turnsForTacticsRankCInHectorStory = {
		[0] = 7,
		[1] = 7,
	},
	.turnsForTacticsRankDInEliwoodStory = {
		[0] = 8,
		[1] = 8,
	},
	.turnsForTacticsRankDInHectorStory = {
		[0] = 8,
		[1] = 8,
	},
	.unk3D = 0,
	.gainedExpForExpRankAInEliwoodStory = {
		[0] = 100,
		[1] = 100,
	},
	.gainedExpForExpRankAInHectorStory = {
		[0] = 100,
		[1] = 100,
	},
	.gainedExpForExpRankBInEliwoodStory = {
		[0] = 80,
		[1] = 80,
	},
	.gainedExpForExpRankBInHectorStory = {
		[0] = 80,
		[1] = 80,
	},
	.gainedExpForExpRankCInEliwoodStory = {
		[0] = 60,
		[1] = 60,
	},
	.gainedExpForExpRankCInHectorStory = {
		[0] = 60,
		[1] = 60,
	},
	.gainedExpForExpRankDInEliwoodStory = {
		[0] = 40,
		[1] = 40,
	},
	.gainedExpForExpRankDInHectorStory = {
		[0] = 40,
		[1] = 40,
	},
	.unk5E = 0,
	.goldForFundsRankInEliwoodStory = {
		[0] = 1060,
		[1] = 1060,
	},
	.goldForFundsRankInHectorStory = {
		[0] = 1060,
		[1] = 1060,
	},
	.chapTitleTextId = 167,
	.chapTitleTextIdInHectorStory = 167,
	.mapEventDataId = 24,
	.gmapEventId = 8,
	.divinationTextIdBeginning = 0,
	.divinationTextIdInEliwoodStory = 0,
	.divinationTextIdInHectorStory = 0,
	.divinationTextIdEnding = 0,
	.divinationPortrait = 0,
	.divinationFee = 0,
	.prepScreenNumber = 0,
	.prepScreenNumberInHectorStory = 0,
	.merchantPosX = 255,
	.merchantPosXInHectorStory = 255,
	.merchantPosY = 0,
	.merchantPosYInHectorStory = 0,
	.victorySongEnemyThreshold = 1,
	.fadeToBlack = FALSE,
	.statusObjectiveTextId = 0x19c,
	.goalWindowTextId = 0x1b0,
	.goalWindowDataType = GOAL_TYPE_DEFENSE,
	.goalWindowEndTurnNumber = 12,
	.protectCharacterIndex = CHARACTER_BOSS_ASKON_EMPEROR,
	.destPosX = 255,
	.destPosY = 0,
	.unk91 = 0,
	.unk92 = 0,
	.unk93 = 0,
};

/**
 * Main events
*/
//player units
static const struct UnitDefinition Ch6_August_Light[] = {
	{
		.charIndex = CHARACTER_PLAY_AUGUST_LIGHT,
		.classIndex = CLASS_EIRIKA_LORD,
		.allegiance = FACTION_ID_BLUE,
		.autolevel = false,
		.level = 1,
		.xPosition = 16,
		.yPosition = 29,
		.redaCount = 0,
		.redas = NULL,
		.items = {
		},
	},
};
static const struct UnitDefinition Ch6_August_Heavy[] = {
	{
		.charIndex = CHARACTER_PLAY_AUGUST_HEAVY,
		.classIndex = CLASS_EPHRAIM_LORD,
		.allegiance = FACTION_ID_BLUE,
		.autolevel = false,
		.level = 1,
		.xPosition = 16,
		.yPosition = 29,
		.redaCount = 0,
		.redas = NULL,
		.items = {
		},
	},	
};


static const struct UnitDefinition Ch6_UnitDef_Canon_Normal[] = {
};
static const struct UnitDefinition Ch6_UnitDef_Canon_Hard[] = {
};
static const struct UnitDefinition Ch6_UnitDef_NonCanon_Normal[] = {
};
static const struct UnitDefinition Ch6_UnitDef_NonCanon_Hard[] = {
};
static const struct UnitDefinition Ch6_UnitDef_Lunatic[] = {
};
//allies
static const struct UnitDefinition Ch6_UnitDef_Ally_Canon_Normal[] = {

};
static const struct UnitDefinition Ch6_UnitDef_Ally_Canon_Hard[] = {

};
static const struct UnitDefinition Ch6_UnitDef_Ally_Canon_Lunatic[] = {

};
static const struct UnitDefinition Ch6_UnitDef_Ally_NonCanon_Normal[] = {

};
static const struct UnitDefinition Ch6_UnitDef_Ally_NonCanon_Hard[] = {

};
static const struct UnitDefinition Ch6_UnitDef_Ally_NonCanon_Lunatic[] = {

};
//enemies main
static const struct UnitDefinition Ch6_UnitDef_Enemy_Normal[] = {
	
};
static const struct UnitDefinition Ch6_UnitDef_Enemy_Hard[] = {

};
static const struct UnitDefinition Ch6_UnitDef_Enemy_Lunatic[] = {
	
};

static const EventScr Ch6_EventScr_Beginning[] = {
	//spawn MC
	ASMC(GetCurrentMC())
	SVAL(EVT_SLOT_2, 1)
	BEQ(10,EVT_SLOT_1,EVT_SLOT_2)
		LOAD1(0X1, Ch6_August_Light)
		ENUT

LABEL(11)
	//check on which path are you
	CHECK_EVENTID(EVFLAG_PATH_SELECT)//EVFLAG 130
	BEQ(0, EVT_SLOT_C, EVT_SLOT_0) //IF 0 THEN CANON PATH, IF 1 THEN COMPLICIT PATH
		CHECK_TUTORIAL //CHECK IF IN NORMAL
		BNE(5, EVT_SLOT_C, EVT_SLOT_0)
			CHECK_HARD //CHECK IF IN HARD
			BNE(6, EVT_SLOT_C, EVT_SLOT_0)
				GOTO(7)
LABEL(4)
	//Text_BG(0xA,Ch6_NonCanon_BegScene) 
	GOTO(3)

LABEL(0)
	CHECK_TUTORIAL //CHECK IF IN NORMAL
	BNE(1, EVT_SLOT_C, EVT_SLOT_0)
		CHECK_HARD //CHECK IF IN HARD
		BNE(2, EVT_SLOT_C, EVT_SLOT_0)
			GOTO(3)
LABEL(8)
	//Text_BG(0xA,Ch6_Canon_BegScene) 
	GOTO(3)

LABEL(1)
	LOAD1(0X1, Ch6_UnitDef_Ally_Canon_Normal)
	ENUN
	GOTO(4)

LABEL(2)
	LOAD1(0X1, Ch6_UnitDef_Ally_Canon_Lunatic)
	ENUN
	GOTO(4)

LABEL(3)
	LOAD1(0X1, Ch6_UnitDef_Ally_Canon_Hard)
	ENUN
	GOTO(4)

LABEL(5)
	LOAD1(0X1, Ch6_UnitDef_Ally_NonCanon_Normal)
	ENUN
	GOTO(8)

LABEL(6)
	LOAD1(0X1, Ch6_UnitDef_Ally_NonCanon_Lunatic)
	ENUN
	GOTO(8)

LABEL(7)
	LOAD1(0X1, Ch6_UnitDef_Ally_NonCanon_Hard)
	ENUN
	GOTO(8)

LABEL(10)
	LOAD1(0X1, Ch6_August_Heavy)
	ENUT
	GOTO(11)

LABEL(3)

	// PREP
	CALL(EventScr_08591FD8)

	NoFade
	ENDA
};

static const EventScr Ch6_EventScr_Ending[] = {

LABEL(101)
	CHECK_EVENTID(EVFLAG_EMPEROR_DEAD)
	BNE(201, EVT_SLOT_C, EVT_SLOT_0)
		CHECK_EVENTID(EVFLAG_EMPEROR_AND_EMPRESS_DEAD)
		BNE(202, EVT_SLOT_C, EVT_SLOT_0)

LABEL(202)
	//text

LABEL(201)
	//text
	ASMC(GetCurrentMC())
	PROM(gEventSlots[0x1],CLASS_NONE,ITEM_NONE)
LABEL(203)

LABEL(200)
	MNC2(1)
	ENDA
};

/**
 * Misc events
 */
static const EventScr Ch6_RandoReinforcements[] = {
	ASMC(SelectNextReinforcements())
	GOTO(gEventSlots[0x1])

	LABEL(1000)

	LABEL(1001)

	LABEL(1003)

	LABEL(1004)

	LABEL(1005)
	ENDA
};


static const EventScr Ch6_DeadBossChecker[] = {
	CHECK_EXISTS(CHARACTER_BOSS_ASKON_EMPEROR) //Emperor
	BNE(100, EVT_SLOT_C, EVT_SLOT_0)
		CHECK_EXISTS(CHARACTER_BOSS_KIMUZ_HOMONCULLI) //Homonculli Kimuz
		BNE(103, EVT_SLOT_C, EVT_SLOT_0)
			CHECK_EXISTS(CHARACTER_BOSS_ASKON_EMPRESS)//Empress
				BNE(102, EVT_SLOT_C, EVT_SLOT_0)
					GOTO(101)


LABEL(100)
	//check if empress lives
	CHECK_EXISTS(CHARACTER_BOSS_ASKON_EMPRESS)//Empress
		BNE(104, EVT_SLOT_C, EVT_SLOT_0)	
			ENUT(EVFLAG_EMPEROR_AND_EMPRESS_DEAD)
			GOTO(105)
LABEL(105)
	//text
	ENUT(EVFLAG_WIN)
	GOTO(101)

LABEL(104)
	ENUT(EVFLAG_EMPEROR_DEAD)
	//text
	ENUT(EVFLAG_WIN)
	GOTO(101)

LABEL(102)
	//Text
	GOTO(101)

LABEL(103)
	//text
	ENUT(EVFLAG_WIN)

LABEL(101)
	ENDA
};
/**
 * Event list
 */
static const EventListScr Ch6_EventListScr_Turn[] = {
	//TurnEventPlayer_(EVFLAG_TMP(10), EventScr_089FD6D8, 1, 255)
	TurnEventEnemy(EVFLAG_TMP(8),Ch6_RandoReinforcements,2)
	TurnEventEnemy(EVFLAG_TMP(8),Ch6_RandoReinforcements,4)
	TurnEventEnemy(EVFLAG_TMP(8),Ch6_RandoReinforcements,6)
	TurnEventEnemy(EVFLAG_TMP(8),Ch6_RandoReinforcements,8)
	TurnEventEnemy(EVFLAG_TMP(8),Ch6_RandoReinforcements,10)
	TurnEventEnemy(EVFLAG_TMP(8),Ch6_RandoReinforcements,11)
	END_MAIN
};

static const EventListScr Ch6_EventListScr_Character[] = {
	//	CharacterEventBothWays(EVFLAG_TMP(7), EventScr_Talk_EirikaSeth, CHARACTER_EIRIKA, CHARACTER_SETH)
	
	END_MAIN
};

static const EventListScr Ch6_EventListScr_Location[] = {
	END_MAIN
};

static const EventListScr Ch6_EventListScr_Misc[] = {
	Survive(Ch6_EventScr_Ending,12)
	AFEV(EVFLAG_TMP(9),Ch6_DeadBossChecker,3)
	CauseGameOverIfLordDies
	END_MAIN
};

static const EventListScr Ch6_EventListScr_SelectUnit[] = {
	END_MAIN
};

static const EventListScr Ch6_EventListScr_SelectDestination[] = {
	END_MAIN
};

static const EventListScr Ch6_EventListScr_UnitMove[] = {
	END_MAIN
};

static void const *const Ch6_EventListScr_Tutorial[] = {
	NULL
};

static const u8 Ch6_TrapData_ThisEvent[] = {
	TRAP_NONE
};

static const u8 Ch6_TrapData_ThisEventHard[] = {
	TRAP_NONE
};

const struct ChapterEventGroup ThisEvent = {
	.turnBasedEvents			   = Ch6_EventListScr_Turn,
	.characterBasedEvents		  = Ch6_EventListScr_Character,
	.locationBasedEvents		   = Ch6_EventListScr_Location,
	.miscBasedEvents			   = Ch6_EventListScr_Misc,
	.specialEventsWhenUnitSelected = Ch6_EventListScr_SelectUnit,
	.specialEventsWhenDestSelected = Ch6_EventListScr_SelectDestination,
	.specialEventsAfterUnitMoved   = Ch6_EventListScr_UnitMove,
	.tutorialEvents				= Ch6_EventListScr_Tutorial,

	.traps			= Ch6_TrapData_ThisEvent,
	.extraTrapsInHard = Ch6_TrapData_ThisEventHard,

	.playerUnitsInNormal = Ch6_UnitDef_Canon_Normal,
	.playerUnitsInHard   = Ch6_UnitDef_Canon_Hard,

	.playerUnitsChoice1InEncounter = Ch6_UnitDef_NonCanon_Normal,
	.playerUnitsChoice2InEncounter = Ch6_UnitDef_NonCanon_Hard,
	.playerUnitsChoice3InEncounter = Ch6_UnitDef_Lunatic,

	.enemyUnitsChoice1InEncounter = Ch6_UnitDef_Enemy_Normal,
	.enemyUnitsChoice2InEncounter = Ch6_UnitDef_Enemy_Hard,
	.enemyUnitsChoice3InEncounter = Ch6_UnitDef_Enemy_Lunatic,

	.beginningSceneEvents = Ch6_EventScr_Beginning,
	.endingSceneEvents	= Ch6_EventScr_Ending,
};
