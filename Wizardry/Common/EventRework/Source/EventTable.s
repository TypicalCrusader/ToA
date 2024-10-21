.section .rodata

	.global gEventLoCmdTableRe
gEventLoCmdTableRe:
	.word	Event00_NULL
	.word	Event01_End
	.word	Event02_EvBitAndIdMod
	.word	Event03_CheckEvBitOrId
	.word	Event04_CheckRandom
	.word	Event05_SetSlot
	.word	Event06_SlotOperation
	.word	Event07_SlotQueueOperations
	.word	Event08_Label
	.word	Event09_Goto
	.word	Event0A_Call
	.word	Event0B_EnqueueCall
	.word	Event0C_Branch
	.word	Event0D_AsmCall
	.word	Event0E_STAL
	.word	Event0F_CounterOps
	.word	Event10_ModifyEvBit
	.word	Event11_SetIgnoredKeys
	.word	Event12_StartBGM
	.word	Event13_BgmFadeIn
	.word	Event14_BgmOverideRestore
	.word	Event15_BgmVolume
	.word	Event16_
	.word	Event17_Fade
	.word	Event18_ColorFade
	.word	Event19_Checks
	.word	Event1A_TEXTSTART
	.word	Event1B_TEXTSHOW
	.word	Event1C_TEXTCONT
	.word	Event1D_TEXTEND
	.word	Event1E_
	.word	Event1F_
	.word	Event20_
	.word	Event21_TextBg
	.word	Event22_ClearScreen
	.word	Event23_DisaleMapDisp
	.word	Event24_EnableMapDisp
	.word	Event25_ChangeMap
	.word	Event26_CameraControl
	.word	Event27_MapChange
	.word	Event28_ChangeWeather
	.word	Event29_SetFogVision
	.word	Event2A_MoveToChapter
	.word	Event2B_ConfigLoadUnit
	.word	Event2C_LoadUnits
	.word	Event2D_ChangeSpritePal
	.word	Event2E_CheckAt
	.word	Event2F_MoveUnit
	.word	Event30_ENUN
	.word	Event31_DisplayEffectRange
	.word	Event32_SpawnSingleUnit
	.word	Event33_CheckUnitVarious
	.word	Event34_MessWithUnitState
	.word	Event35_UnitClassChanging
	.word	Event36_CheckInArea
	.word	Event37_GiveItem
	.word	Event38_ChangeActiveUnit
	.word	Event39_ChangeAiScript
	.word	Event3A_DisplayPopup
	.word	Event3B_DisplayCursor
	.word	Event3C_MoveCursor
	.word	Event3D_MenuOverride
	.word	Event3E_PrepScreenCall
	.word	Event3F_ScriptBattle
	.word	Event40_PromoteUnit
	.word	Event41_Warp
	.word	Event42_EarthQuake
	.word	Event43_SummonUnit
	.word	Event44_BreakingSacredStone
	.word	Event45_GlowingCross
