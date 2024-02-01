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
	waitmessage
# 15 "data/maps/DebugArea/scripts.pory"
	release
	return


RestoreParty::
# 19 "data/maps/DebugArea/scripts.pory"
	lock
# 20 "data/maps/DebugArea/scripts.pory"
	msgbox RestoreParty_Text_0
# 21 "data/maps/DebugArea/scripts.pory"
	special LoadPlayerParty
# 22 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 23 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym1::
# 27 "data/maps/DebugArea/scripts.pory"
	lock
# 28 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 29 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE01_GET
# 30 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym1_Text_0
# 31 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 32 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym2::
# 35 "data/maps/DebugArea/scripts.pory"
	lock
# 36 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 37 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE02_GET
# 38 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym2_Text_0
# 39 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 40 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym3::
# 43 "data/maps/DebugArea/scripts.pory"
	lock
# 44 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 45 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE03_GET
# 46 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym3_Text_0
# 47 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 48 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym4::
# 52 "data/maps/DebugArea/scripts.pory"
	lock
# 53 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 54 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE04_GET
# 55 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym4_Text_0
# 56 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 57 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym5::
# 61 "data/maps/DebugArea/scripts.pory"
	lock
# 62 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 63 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE05_GET
# 64 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym5_Text_0
# 65 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 66 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym6::
# 70 "data/maps/DebugArea/scripts.pory"
	lock
# 71 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 72 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE06_GET
# 73 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym6_Text_0
# 74 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 75 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym7::
# 78 "data/maps/DebugArea/scripts.pory"
	lock
# 79 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 80 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE07_GET
# 81 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym7_Text_0
# 82 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 83 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym8::
# 86 "data/maps/DebugArea/scripts.pory"
	lock
# 87 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 88 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE08_GET
# 89 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym8_Text_0
# 90 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 91 "data/maps/DebugArea/scripts.pory"
	release
	return


CallGengarParty_Text_0:
# 11 "data/maps/DebugArea/scripts.pory"
	.string "Party reset$"

RestoreParty_Text_0:
# 20 "data/maps/DebugArea/scripts.pory"
	.string "Party Restored$"

EventScript_SetFlag_Gym1_Text_0:
# 30 "data/maps/DebugArea/scripts.pory"
	.string "Gym 1 completed$"

EventScript_SetFlag_Gym2_Text_0:
# 38 "data/maps/DebugArea/scripts.pory"
	.string "Gym 2 completed$"

EventScript_SetFlag_Gym3_Text_0:
# 46 "data/maps/DebugArea/scripts.pory"
	.string "Gym 3 completed$"

EventScript_SetFlag_Gym4_Text_0:
# 55 "data/maps/DebugArea/scripts.pory"
	.string "Gym 4 completed$"

EventScript_SetFlag_Gym5_Text_0:
# 64 "data/maps/DebugArea/scripts.pory"
	.string "Gym 5 completed$"

EventScript_SetFlag_Gym6_Text_0:
# 73 "data/maps/DebugArea/scripts.pory"
	.string "Gym 6 completed$"

EventScript_SetFlag_Gym7_Text_0:
# 81 "data/maps/DebugArea/scripts.pory"
	.string "Gym 7 completed$"

EventScript_SetFlag_Gym8_Text_0:
# 89 "data/maps/DebugArea/scripts.pory"
	.string "Gym 8 completed$"
