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
	waitmessage
# 16 "data/maps/DebugArea/scripts.pory"
	release
	return


RestoreParty::
# 20 "data/maps/DebugArea/scripts.pory"
	lock
# 21 "data/maps/DebugArea/scripts.pory"
	msgbox RestoreParty_Text_0
# 22 "data/maps/DebugArea/scripts.pory"
	special LoadPlayerParty
# 23 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 24 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym1::
# 28 "data/maps/DebugArea/scripts.pory"
	lock
# 29 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 30 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE01_GET
# 31 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym1_Text_0
# 32 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 33 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym2::
# 36 "data/maps/DebugArea/scripts.pory"
	lock
# 37 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 38 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE02_GET
# 39 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym2_Text_0
# 40 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 41 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym3::
# 44 "data/maps/DebugArea/scripts.pory"
	lock
# 45 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 46 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE03_GET
# 47 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym3_Text_0
# 48 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 49 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym4::
# 53 "data/maps/DebugArea/scripts.pory"
	lock
# 54 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 55 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE04_GET
# 56 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym4_Text_0
# 57 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 58 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym5::
# 62 "data/maps/DebugArea/scripts.pory"
	lock
# 63 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 64 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE05_GET
# 65 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym5_Text_0
# 66 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 67 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym6::
# 71 "data/maps/DebugArea/scripts.pory"
	lock
# 72 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 73 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE06_GET
# 74 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym6_Text_0
# 75 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 76 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym7::
# 79 "data/maps/DebugArea/scripts.pory"
	lock
# 80 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 81 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE07_GET
# 82 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym7_Text_0
# 83 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 84 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym8::
# 87 "data/maps/DebugArea/scripts.pory"
	lock
# 88 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 89 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE08_GET
# 90 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym8_Text_0
# 91 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 92 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetVar_MatsRival::
# 95 "data/maps/DebugArea/scripts.pory"
	lock
# 96 "data/maps/DebugArea/scripts.pory"
	setvar RIVAL_STATE_MATS, 3
# 97 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetVar_MatsRival_Text_0
# 98 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 99 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetVar_Dusclops::
# 103 "data/maps/DebugArea/scripts.pory"
	lock
# 104 "data/maps/DebugArea/scripts.pory"
	setvar DUSCLOPS_STATE, 2
# 105 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetVar_Dusclops_Text_0
# 106 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 107 "data/maps/DebugArea/scripts.pory"
	release
	return


CallGengarParty_Text_0:
# 11 "data/maps/DebugArea/scripts.pory"
	.string "Party reset$"

RestoreParty_Text_0:
# 21 "data/maps/DebugArea/scripts.pory"
	.string "Party Restored$"

EventScript_SetFlag_Gym1_Text_0:
# 31 "data/maps/DebugArea/scripts.pory"
	.string "Gym 1 completed$"

EventScript_SetFlag_Gym2_Text_0:
# 39 "data/maps/DebugArea/scripts.pory"
	.string "Gym 2 completed$"

EventScript_SetFlag_Gym3_Text_0:
# 47 "data/maps/DebugArea/scripts.pory"
	.string "Gym 3 completed$"

EventScript_SetFlag_Gym4_Text_0:
# 56 "data/maps/DebugArea/scripts.pory"
	.string "Gym 4 completed$"

EventScript_SetFlag_Gym5_Text_0:
# 65 "data/maps/DebugArea/scripts.pory"
	.string "Gym 5 completed$"

EventScript_SetFlag_Gym6_Text_0:
# 74 "data/maps/DebugArea/scripts.pory"
	.string "Gym 6 completed$"

EventScript_SetFlag_Gym7_Text_0:
# 82 "data/maps/DebugArea/scripts.pory"
	.string "Gym 7 completed$"

EventScript_SetFlag_Gym8_Text_0:
# 90 "data/maps/DebugArea/scripts.pory"
	.string "Gym 8 completed$"

EventScript_SetVar_MatsRival_Text_0:
# 97 "data/maps/DebugArea/scripts.pory"
	.string "Updated Mats_Rival_State by one$"

EventScript_SetVar_Dusclops_Text_0:
# 105 "data/maps/DebugArea/scripts.pory"
	.string "Updated DUSCLOPS_STATE by one$"
