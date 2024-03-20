DebugArea_MapScripts::
	.byte 0


EventScript_SetFlag_Any::
# 5 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 6 "data/maps/DebugArea/scripts.pory"
	special EnableNationalPokedex
# 7 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_IS_CHAMPION
	return


CallGengarParty::
# 11 "data/maps/DebugArea/scripts.pory"
	lock
# 12 "data/maps/DebugArea/scripts.pory"
	msgbox CallGengarParty_Text_0
# 13 "data/maps/DebugArea/scripts.pory"
	special SavePlayerParty
# 14 "data/maps/DebugArea/scripts.pory"
	special CallDusclopsFunction
# 15 "data/maps/DebugArea/scripts.pory"
	giveitem ITEM_MASTER_BALL, 2
# 16 "data/maps/DebugArea/scripts.pory"
	giveitem ITEM_RARE_CANDY, 99
# 17 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 18 "data/maps/DebugArea/scripts.pory"
	release
	return


RestoreParty::
# 22 "data/maps/DebugArea/scripts.pory"
	lock
# 23 "data/maps/DebugArea/scripts.pory"
	msgbox RestoreParty_Text_0
# 24 "data/maps/DebugArea/scripts.pory"
	special LoadPlayerParty
# 25 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 26 "data/maps/DebugArea/scripts.pory"
	release
	return


SetRocketEventActive::
# 30 "data/maps/DebugArea/scripts.pory"
	lock
# 31 "data/maps/DebugArea/scripts.pory"
	msgbox SetRocketEventActive_Text_0
# 32 "data/maps/DebugArea/scripts.pory"
	setvar VAR_ROCKET_ARC_STATE, 0
# 33 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_ROCKET_EVENT_ACTIVE
# 34 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 35 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_NORMAN
# 36 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 37 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 38 "data/maps/DebugArea/scripts.pory"
	release
	return


BeatRocketRustboro::
# 42 "data/maps/DebugArea/scripts.pory"
	lock
# 43 "data/maps/DebugArea/scripts.pory"
	msgbox BeatRocketRustboro_Text_0
# 44 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_RUSTBORO_ROCKET_DEFEATED
# 45 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEWFORD_ROCKET_DEFEATED
# 46 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_MAUVILLE_ROCKET_DEFEATED
# 47 "data/maps/DebugArea/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 48 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_LAVARIDGE_ROCKET_DEFEATED
# 49 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_PETALBURG_ROCKET_DEFEATED
# 50 "data/maps/DebugArea/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_NORMAN
# 51 "data/maps/DebugArea/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 52 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_FORTREE_ROCKET_DEFEATED
# 53 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_MOSSDEEP_ROCKET_DEFEATED
# 54 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ROCKET_DEFEATED
# 55 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 56 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym1::
# 60 "data/maps/DebugArea/scripts.pory"
	lock
# 61 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 62 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE01_GET
# 63 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym1_Text_0
# 64 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 65 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym2::
# 68 "data/maps/DebugArea/scripts.pory"
	lock
# 69 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 70 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE02_GET
# 71 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym2_Text_0
# 72 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 73 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym3::
# 76 "data/maps/DebugArea/scripts.pory"
	lock
# 77 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 78 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE03_GET
# 79 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym3_Text_0
# 80 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 81 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym4::
# 85 "data/maps/DebugArea/scripts.pory"
	lock
# 86 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 87 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE04_GET
# 88 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym4_Text_0
# 89 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 90 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym5::
# 94 "data/maps/DebugArea/scripts.pory"
	lock
# 95 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 96 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE05_GET
# 97 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym5_Text_0
# 98 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 99 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym6::
# 103 "data/maps/DebugArea/scripts.pory"
	lock
# 104 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 105 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE06_GET
# 106 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym6_Text_0
# 107 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 108 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym7::
# 111 "data/maps/DebugArea/scripts.pory"
	lock
# 112 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 113 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE07_GET
# 114 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym7_Text_0
# 115 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 116 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym8::
# 119 "data/maps/DebugArea/scripts.pory"
	lock
# 120 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 121 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE08_GET
# 122 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym8_Text_0
# 123 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 124 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetVar_MatsRival::
# 127 "data/maps/DebugArea/scripts.pory"
	lock
# 128 "data/maps/DebugArea/scripts.pory"
	setvar RIVAL_STATE_MATS, 3
# 129 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetVar_MatsRival_Text_0
# 130 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 131 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetVar_Dusclops::
# 135 "data/maps/DebugArea/scripts.pory"
	lock
# 136 "data/maps/DebugArea/scripts.pory"
	setvar DUSCLOPS_STATE, 2
# 137 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetVar_Dusclops_Text_0
# 138 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 139 "data/maps/DebugArea/scripts.pory"
	release
	return


WarpmapToSevii::
# 143 "data/maps/DebugArea/scripts.pory"
	lock
# 144 "data/maps/DebugArea/scripts.pory"
	msgbox WarpmapToSevii_Text_0
# 145 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 146 "data/maps/DebugArea/scripts.pory"
	special SetRegionToSEVII
# 147 "data/maps/DebugArea/scripts.pory"
	warpteleport MAP_ROUTE201, 0
# 148 "data/maps/DebugArea/scripts.pory"
	release
	return


BattleGiovanniTest::
# 152 "data/maps/DebugArea/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GIOVANNI_ONE, BattleTestIntro, BattleTestOutro, PostTestBattle
# 153 "data/maps/DebugArea/scripts.pory"
	waitmessage
	end


BattleRocketFTest::
# 158 "data/maps/DebugArea/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNTF_ONE, BattleTestIntro, BattleTestOutro, PostTestBattle
# 159 "data/maps/DebugArea/scripts.pory"
	waitmessage
	end


BattleRocketMTest::
# 164 "data/maps/DebugArea/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNTM_ONE, BattleTestIntro, BattleTestOutro, PostTestBattle
# 165 "data/maps/DebugArea/scripts.pory"
	waitmessage
	end


PostTestBattle::
# 178 "data/maps/DebugArea/scripts.pory"
	lock
# 179 "data/maps/DebugArea/scripts.pory"
	msgbox PostTestBattle_Text_0
# 180 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 181 "data/maps/DebugArea/scripts.pory"
	release
	return


CallGengarParty_Text_0:
# 12 "data/maps/DebugArea/scripts.pory"
	.string "Party reset$"

RestoreParty_Text_0:
# 23 "data/maps/DebugArea/scripts.pory"
	.string "Party Restored$"

SetRocketEventActive_Text_0:
# 31 "data/maps/DebugArea/scripts.pory"
	.string "Rockets have now taken over the world$"

BeatRocketRustboro_Text_0:
# 43 "data/maps/DebugArea/scripts.pory"
	.string "And rocket gyms have been freed$"

EventScript_SetFlag_Gym1_Text_0:
# 63 "data/maps/DebugArea/scripts.pory"
	.string "Gym 1 completed$"

EventScript_SetFlag_Gym2_Text_0:
# 71 "data/maps/DebugArea/scripts.pory"
	.string "Gym 2 completed$"

EventScript_SetFlag_Gym3_Text_0:
# 79 "data/maps/DebugArea/scripts.pory"
	.string "Gym 3 completed$"

EventScript_SetFlag_Gym4_Text_0:
# 88 "data/maps/DebugArea/scripts.pory"
	.string "Gym 4 completed$"

EventScript_SetFlag_Gym5_Text_0:
# 97 "data/maps/DebugArea/scripts.pory"
	.string "Gym 5 completed$"

EventScript_SetFlag_Gym6_Text_0:
# 106 "data/maps/DebugArea/scripts.pory"
	.string "Gym 6 completed$"

EventScript_SetFlag_Gym7_Text_0:
# 114 "data/maps/DebugArea/scripts.pory"
	.string "Gym 7 completed$"

EventScript_SetFlag_Gym8_Text_0:
# 122 "data/maps/DebugArea/scripts.pory"
	.string "Gym 8 completed$"

EventScript_SetVar_MatsRival_Text_0:
# 129 "data/maps/DebugArea/scripts.pory"
	.string "Updated Mats_Rival_State by one$"

EventScript_SetVar_Dusclops_Text_0:
# 137 "data/maps/DebugArea/scripts.pory"
	.string "Updated DUSCLOPS_STATE by one$"

WarpmapToSevii_Text_0:
# 144 "data/maps/DebugArea/scripts.pory"
	.string "Here we go$"

PostTestBattle_Text_0:
# 179 "data/maps/DebugArea/scripts.pory"
	.string "You beat me!$"

BattleTestIntro::
# 169 "data/maps/DebugArea/scripts.pory"
	.string "I will beat you TEST$"

BattleTestOutro::
# 173 "data/maps/DebugArea/scripts.pory"
	.string "I didn't beat you TEST$"
