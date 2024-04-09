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


SetRocketEventSeven::
# 42 "data/maps/DebugArea/scripts.pory"
	lock
# 43 "data/maps/DebugArea/scripts.pory"
	msgbox SetRocketEventActive_Text_0
# 44 "data/maps/DebugArea/scripts.pory"
	setvar VAR_ROCKET_ARC_STATE, 6
# 45 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_ROCKET_EVENT_ACTIVE
# 46 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 47 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_NORMAN
# 48 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 49 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 50 "data/maps/DebugArea/scripts.pory"
	release
	return


BeatRocketRustboro::
# 54 "data/maps/DebugArea/scripts.pory"
	lock
# 55 "data/maps/DebugArea/scripts.pory"
	msgbox BeatRocketRustboro_Text_0
# 56 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_RUSTBORO_ROCKET_DEFEATED
# 57 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEWFORD_ROCKET_DEFEATED
# 58 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_MAUVILLE_ROCKET_DEFEATED
# 59 "data/maps/DebugArea/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 60 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_LAVARIDGE_ROCKET_DEFEATED
# 61 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_PETALBURG_ROCKET_DEFEATED
# 62 "data/maps/DebugArea/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_NORMAN
# 63 "data/maps/DebugArea/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 64 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_FORTREE_ROCKET_DEFEATED
# 65 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_MOSSDEEP_ROCKET_DEFEATED
# 66 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ROCKET_DEFEATED
# 67 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 68 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym1::
# 72 "data/maps/DebugArea/scripts.pory"
	lock
# 73 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 74 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE01_GET
# 75 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym1_Text_0
# 76 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 77 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym2::
# 80 "data/maps/DebugArea/scripts.pory"
	lock
# 81 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 82 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE02_GET
# 83 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym2_Text_0
# 84 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 85 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym3::
# 88 "data/maps/DebugArea/scripts.pory"
	lock
# 89 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 90 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE03_GET
# 91 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym3_Text_0
# 92 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 93 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym4::
# 97 "data/maps/DebugArea/scripts.pory"
	lock
# 98 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 99 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE04_GET
# 100 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym4_Text_0
# 101 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 102 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym5::
# 106 "data/maps/DebugArea/scripts.pory"
	lock
# 107 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 108 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE05_GET
# 109 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym5_Text_0
# 110 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 111 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym6::
# 115 "data/maps/DebugArea/scripts.pory"
	lock
# 116 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 117 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE06_GET
# 118 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym6_Text_0
# 119 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 120 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym7::
# 123 "data/maps/DebugArea/scripts.pory"
	lock
# 124 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 125 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE07_GET
# 126 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym7_Text_0
# 127 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 128 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym8::
# 131 "data/maps/DebugArea/scripts.pory"
	lock
# 132 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 133 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE08_GET
# 134 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym8_Text_0
# 135 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 136 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetVar_MatsRival::
# 139 "data/maps/DebugArea/scripts.pory"
	lock
# 140 "data/maps/DebugArea/scripts.pory"
	setvar RIVAL_STATE_MATS, 3
# 141 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetVar_MatsRival_Text_0
# 142 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 143 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetVar_Dusclops::
# 147 "data/maps/DebugArea/scripts.pory"
	lock
# 148 "data/maps/DebugArea/scripts.pory"
	setvar DUSCLOPS_STATE, 2
# 149 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetVar_Dusclops_Text_0
# 150 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 151 "data/maps/DebugArea/scripts.pory"
	release
	return


WarpmapToSevii::
# 155 "data/maps/DebugArea/scripts.pory"
	lock
# 156 "data/maps/DebugArea/scripts.pory"
	msgbox WarpmapToSevii_Text_0
# 157 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 158 "data/maps/DebugArea/scripts.pory"
	special SetRegionToSEVII
# 159 "data/maps/DebugArea/scripts.pory"
	warpteleport MAP_ROUTE201, 0
# 160 "data/maps/DebugArea/scripts.pory"
	release
	return


BattleGiovanniTest::
# 164 "data/maps/DebugArea/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GIOVANNI_ONE, BattleTestIntro, BattleTestOutro, PostTestBattle
# 165 "data/maps/DebugArea/scripts.pory"
	waitmessage
	end


BattleRocketFTest::
# 170 "data/maps/DebugArea/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNTF_ONE, BattleTestIntro, BattleTestOutro, PostTestBattle
# 171 "data/maps/DebugArea/scripts.pory"
	waitmessage
	end


BattleRocketMTest::
# 176 "data/maps/DebugArea/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNTM_ONE, BattleTestIntro, BattleTestOutro, PostTestBattle
# 177 "data/maps/DebugArea/scripts.pory"
	waitmessage
	end


PostTestBattle::
# 190 "data/maps/DebugArea/scripts.pory"
	lock
# 191 "data/maps/DebugArea/scripts.pory"
	msgbox PostTestBattle_Text_0
# 192 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 193 "data/maps/DebugArea/scripts.pory"
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
# 55 "data/maps/DebugArea/scripts.pory"
	.string "And rocket gyms have been freed$"

EventScript_SetFlag_Gym1_Text_0:
# 75 "data/maps/DebugArea/scripts.pory"
	.string "Gym 1 completed$"

EventScript_SetFlag_Gym2_Text_0:
# 83 "data/maps/DebugArea/scripts.pory"
	.string "Gym 2 completed$"

EventScript_SetFlag_Gym3_Text_0:
# 91 "data/maps/DebugArea/scripts.pory"
	.string "Gym 3 completed$"

EventScript_SetFlag_Gym4_Text_0:
# 100 "data/maps/DebugArea/scripts.pory"
	.string "Gym 4 completed$"

EventScript_SetFlag_Gym5_Text_0:
# 109 "data/maps/DebugArea/scripts.pory"
	.string "Gym 5 completed$"

EventScript_SetFlag_Gym6_Text_0:
# 118 "data/maps/DebugArea/scripts.pory"
	.string "Gym 6 completed$"

EventScript_SetFlag_Gym7_Text_0:
# 126 "data/maps/DebugArea/scripts.pory"
	.string "Gym 7 completed$"

EventScript_SetFlag_Gym8_Text_0:
# 134 "data/maps/DebugArea/scripts.pory"
	.string "Gym 8 completed$"

EventScript_SetVar_MatsRival_Text_0:
# 141 "data/maps/DebugArea/scripts.pory"
	.string "Updated Mats_Rival_State by one$"

EventScript_SetVar_Dusclops_Text_0:
# 149 "data/maps/DebugArea/scripts.pory"
	.string "Updated DUSCLOPS_STATE by one$"

WarpmapToSevii_Text_0:
# 156 "data/maps/DebugArea/scripts.pory"
	.string "Here we go$"

PostTestBattle_Text_0:
# 191 "data/maps/DebugArea/scripts.pory"
	.string "You beat me!$"

BattleTestIntro::
# 181 "data/maps/DebugArea/scripts.pory"
	.string "I will beat you TEST$"

BattleTestOutro::
# 185 "data/maps/DebugArea/scripts.pory"
	.string "I didn't beat you TEST$"
