DebugArea_MapScripts::
	.byte 0


EventScript_SetFlag_Any::
# 5 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 6 "data/maps/DebugArea/scripts.pory"
	special EnableNationalPokedex
	return


CallGengarParty::
# 10 "data/maps/DebugArea/scripts.pory"
	lock
# 11 "data/maps/DebugArea/scripts.pory"
	msgbox CallGengarParty_Text_0
# 12 "data/maps/DebugArea/scripts.pory"
	special SavePlayerParty
# 13 "data/maps/DebugArea/scripts.pory"
	special CallDusclopsFunction
# 14 "data/maps/DebugArea/scripts.pory"
	giveitem ITEM_MASTER_BALL, 2
# 15 "data/maps/DebugArea/scripts.pory"
	giveitem ITEM_RARE_CANDY, 99
# 16 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 17 "data/maps/DebugArea/scripts.pory"
	release
	return


RestoreParty::
# 21 "data/maps/DebugArea/scripts.pory"
	lock
# 22 "data/maps/DebugArea/scripts.pory"
	msgbox RestoreParty_Text_0
# 23 "data/maps/DebugArea/scripts.pory"
	special LoadPlayerParty
# 24 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 25 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym1::
# 29 "data/maps/DebugArea/scripts.pory"
	lock
# 30 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 31 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE01_GET
# 32 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym1_Text_0
# 33 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 34 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym2::
# 37 "data/maps/DebugArea/scripts.pory"
	lock
# 38 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 39 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE02_GET
# 40 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym2_Text_0
# 41 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 42 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym3::
# 45 "data/maps/DebugArea/scripts.pory"
	lock
# 46 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 47 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE03_GET
# 48 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym3_Text_0
# 49 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 50 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym4::
# 54 "data/maps/DebugArea/scripts.pory"
	lock
# 55 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 56 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE04_GET
# 57 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym4_Text_0
# 58 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 59 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym5::
# 63 "data/maps/DebugArea/scripts.pory"
	lock
# 64 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 65 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE05_GET
# 66 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym5_Text_0
# 67 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 68 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym6::
# 72 "data/maps/DebugArea/scripts.pory"
	lock
# 73 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 74 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE06_GET
# 75 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym6_Text_0
# 76 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 77 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym7::
# 80 "data/maps/DebugArea/scripts.pory"
	lock
# 81 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 82 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE07_GET
# 83 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym7_Text_0
# 84 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 85 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym8::
# 88 "data/maps/DebugArea/scripts.pory"
	lock
# 89 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 90 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE08_GET
# 91 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym8_Text_0
# 92 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 93 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetVar_MatsRival::
# 96 "data/maps/DebugArea/scripts.pory"
	lock
# 97 "data/maps/DebugArea/scripts.pory"
	setvar RIVAL_STATE_MATS, 3
# 98 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetVar_MatsRival_Text_0
# 99 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 100 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetVar_Dusclops::
# 104 "data/maps/DebugArea/scripts.pory"
	lock
# 105 "data/maps/DebugArea/scripts.pory"
	setvar DUSCLOPS_STATE, 2
# 106 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetVar_Dusclops_Text_0
# 107 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 108 "data/maps/DebugArea/scripts.pory"
	release
	return


WarpmapToSevii::
# 112 "data/maps/DebugArea/scripts.pory"
	lock
# 113 "data/maps/DebugArea/scripts.pory"
	msgbox WarpmapToSevii_Text_0
# 114 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 115 "data/maps/DebugArea/scripts.pory"
	special SetRegionToSEVII
# 116 "data/maps/DebugArea/scripts.pory"
	warpteleport MAP_ROUTE201, 0
# 117 "data/maps/DebugArea/scripts.pory"
	release
	return


CallGengarParty_Text_0:
# 11 "data/maps/DebugArea/scripts.pory"
	.string "Party reset$"

RestoreParty_Text_0:
# 22 "data/maps/DebugArea/scripts.pory"
	.string "Party Restored$"

EventScript_SetFlag_Gym1_Text_0:
# 32 "data/maps/DebugArea/scripts.pory"
	.string "Gym 1 completed$"

EventScript_SetFlag_Gym2_Text_0:
# 40 "data/maps/DebugArea/scripts.pory"
	.string "Gym 2 completed$"

EventScript_SetFlag_Gym3_Text_0:
# 48 "data/maps/DebugArea/scripts.pory"
	.string "Gym 3 completed$"

EventScript_SetFlag_Gym4_Text_0:
# 57 "data/maps/DebugArea/scripts.pory"
	.string "Gym 4 completed$"

EventScript_SetFlag_Gym5_Text_0:
# 66 "data/maps/DebugArea/scripts.pory"
	.string "Gym 5 completed$"

EventScript_SetFlag_Gym6_Text_0:
# 75 "data/maps/DebugArea/scripts.pory"
	.string "Gym 6 completed$"

EventScript_SetFlag_Gym7_Text_0:
# 83 "data/maps/DebugArea/scripts.pory"
	.string "Gym 7 completed$"

EventScript_SetFlag_Gym8_Text_0:
# 91 "data/maps/DebugArea/scripts.pory"
	.string "Gym 8 completed$"

EventScript_SetVar_MatsRival_Text_0:
# 98 "data/maps/DebugArea/scripts.pory"
	.string "Updated Mats_Rival_State by one$"

EventScript_SetVar_Dusclops_Text_0:
# 106 "data/maps/DebugArea/scripts.pory"
	.string "Updated DUSCLOPS_STATE by one$"

WarpmapToSevii_Text_0:
# 113 "data/maps/DebugArea/scripts.pory"
	.string "Here we go$"
