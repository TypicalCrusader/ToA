#include "common-chax.h"
#include "weapon-lockex.h"
#include "wpnlockex-internal.h"

const struct WeaponLockExConf gWeaponLockExConfs[] = {
	{
		//Sealed Tyfang - August - Heavy
		.iid = ITEM_SWORD_MKATTI,
		.pid = CHARACTER_EIRIKA, 
	},
	{
		//Sealed Tyfang - August - Light
		.iid = ITEM_SWORD_MKATTI,
		.pid = CHARACTER_EPHRAIM, 
	},	
	{
		//Unsealed Tyfang - August - Heavy
		.iid = ITEM_SWORD_AUDHULMA,
		.pid = CHARACTER_EIRIKA, 
	},	
	{
		//Unsealed Tyfang - August - Light
		.iid = ITEM_SWORD_AUDHULMA,
		.pid = CHARACTER_EPHRAIM, 
	},	
	{
		//Unsealed Tyfang - Ascalon
		.iid = ITEM_SWORD_AUDHULMA,
		.pid = CHARACTER_VALTER_PROLOGUE, //last BWL value
	},		
	{
		//Liberated Tyfang - August - Heavy
		.iid = ITEM_LANCE_SIEGMUND,
		.pid = CHARACTER_EIRIKA, 
	},	
	{
		//Liberated Tyfang - August - Light
		.iid = ITEM_LANCE_SIEGMUND,
		.pid = CHARACTER_EPHRAIM, 
	},		
	{
		//Sealed Ultima - Cyric
		.iid = ITEM_DARK_NAGLFAR,
		.pid = CHARACTER_SETH, 
	},			
	{
		//Unsealed Ultima - Cyric
		.iid = ITEM_AXE_GARM,
		.pid = CHARACTER_SETH, 
	},		
	{}
};
