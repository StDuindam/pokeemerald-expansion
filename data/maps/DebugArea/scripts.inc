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


WarpToDebugArea::
# 22 "data/maps/DebugArea/scripts.pory"
	lock
# 23 "data/maps/DebugArea/scripts.pory"
	warp MAP_DEBUG_AREA, 1
# 24 "data/maps/DebugArea/scripts.pory"
	release
	return


IncreaseGymsBeatVar::
# 28 "data/maps/DebugArea/scripts.pory"
	lock
# 29 "data/maps/DebugArea/scripts.pory"
	compare VAR_ROCKET_GYMS_BEAT, 8
	goto_if_lt IncreaseGymsBeatVar_2
# 38 "data/maps/DebugArea/scripts.pory"
	msgbox IncreaseGymsBeatVar_Text_2
# 39 "data/maps/DebugArea/scripts.pory"
	waitmessage
IncreaseGymsBeatVar_1:
# 41 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 42 "data/maps/DebugArea/scripts.pory"
	release
	return

IncreaseGymsBeatVar_2:
# 30 "data/maps/DebugArea/scripts.pory"
	setvar VAR_ROCKET_GYMS_BEAT, 1
# 31 "data/maps/DebugArea/scripts.pory"
	msgbox IncreaseGymsBeatVar_Text_0
# 32 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 33 "data/maps/DebugArea/scripts.pory"
	compare VAR_ROCKET_GYMS_BEAT, 8
	goto_if_eq IncreaseGymsBeatVar_5
	goto IncreaseGymsBeatVar_1

IncreaseGymsBeatVar_5:
# 34 "data/maps/DebugArea/scripts.pory"
	msgbox IncreaseGymsBeatVar_Text_1
# 35 "data/maps/DebugArea/scripts.pory"
	waitmessage
	goto IncreaseGymsBeatVar_1


CheckIfBeatAllGyms::
# 46 "data/maps/DebugArea/scripts.pory"
	special CheckIfRocketGymLeadersDefeated
# 47 "data/maps/DebugArea/scripts.pory"
	lock
# 48 "data/maps/DebugArea/scripts.pory"
	msgbox CheckIfBeatAllGyms_Text_0
# 49 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 50 "data/maps/DebugArea/scripts.pory"
	goto_if_set FLAG_ROCKET_ALLGYMS_BEAT, CheckIfBeatAllGyms_2
# 54 "data/maps/DebugArea/scripts.pory"
	msgbox CheckIfBeatAllGyms_Text_2
# 55 "data/maps/DebugArea/scripts.pory"
	waitmessage
CheckIfBeatAllGyms_1:
# 57 "data/maps/DebugArea/scripts.pory"
	release
	return

CheckIfBeatAllGyms_2:
# 51 "data/maps/DebugArea/scripts.pory"
	msgbox CheckIfBeatAllGyms_Text_1
# 52 "data/maps/DebugArea/scripts.pory"
	waitmessage
	goto CheckIfBeatAllGyms_1


SetupRocketGymsBeatVar::
# 61 "data/maps/DebugArea/scripts.pory"
	lock
# 62 "data/maps/DebugArea/scripts.pory"
	setvar VAR_ROCKET_GYMS_BEAT, 0
# 63 "data/maps/DebugArea/scripts.pory"
	msgbox SetupRocketGymsBeatVar_Text_0
# 64 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 65 "data/maps/DebugArea/scripts.pory"
	release
	return


RestoreParty::
# 69 "data/maps/DebugArea/scripts.pory"
	lock
# 70 "data/maps/DebugArea/scripts.pory"
	msgbox RestoreParty_Text_0
# 71 "data/maps/DebugArea/scripts.pory"
	special LoadPlayerParty
# 72 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 73 "data/maps/DebugArea/scripts.pory"
	release
	return


SetRocketEventActive::
# 77 "data/maps/DebugArea/scripts.pory"
	lock
# 78 "data/maps/DebugArea/scripts.pory"
	msgbox SetRocketEventActive_Text_0
# 79 "data/maps/DebugArea/scripts.pory"
	setvar VAR_ROCKET_ARC_STATE, 0
# 80 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_ROCKET_EVENT_ACTIVE
# 81 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 82 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_NORMAN
# 83 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 84 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 85 "data/maps/DebugArea/scripts.pory"
	release
	return


SetRocketEventSix::
# 89 "data/maps/DebugArea/scripts.pory"
	lock
# 90 "data/maps/DebugArea/scripts.pory"
	msgbox SetRocketEventSix_Text_0
# 91 "data/maps/DebugArea/scripts.pory"
	setvar VAR_ROCKET_ARC_STATE, 6
# 92 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_ROCKET_EVENT_ACTIVE
# 93 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 94 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_NORMAN
# 95 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 96 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 97 "data/maps/DebugArea/scripts.pory"
	release
	return


SetRocketEventSeven::
# 101 "data/maps/DebugArea/scripts.pory"
	lock
# 102 "data/maps/DebugArea/scripts.pory"
	msgbox SetRocketEventSix_Text_0
# 103 "data/maps/DebugArea/scripts.pory"
	setvar VAR_ROCKET_ARC_STATE, 7
# 104 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_ROCKET_EVENT_ACTIVE
# 105 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 106 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_NORMAN
# 107 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 108 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 109 "data/maps/DebugArea/scripts.pory"
	release
	return


BeatRocketAllGyms::
# 113 "data/maps/DebugArea/scripts.pory"
	lock
# 114 "data/maps/DebugArea/scripts.pory"
	msgbox BeatRocketAllGyms_Text_0
# 115 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_RUSTBORO_ROCKET_DEFEATED
# 116 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEWFORD_ROCKET_DEFEATED
# 117 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_MAUVILLE_ROCKET_DEFEATED
# 118 "data/maps/DebugArea/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 119 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_LAVARIDGE_ROCKET_DEFEATED
# 120 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_PETALBURG_ROCKET_DEFEATED
# 121 "data/maps/DebugArea/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_NORMAN
# 122 "data/maps/DebugArea/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 123 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_FORTREE_ROCKET_DEFEATED
# 124 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_MOSSDEEP_ROCKET_DEFEATED
# 125 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ROCKET_DEFEATED
# 126 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 127 "data/maps/DebugArea/scripts.pory"
	release
	return


BeatRocketRustboro::
# 131 "data/maps/DebugArea/scripts.pory"
	lock
# 132 "data/maps/DebugArea/scripts.pory"
	msgbox BeatRocketRustboro_Text_0
# 133 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_RUSTBORO_ROCKET_DEFEATED
# 134 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 135 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym1::
# 139 "data/maps/DebugArea/scripts.pory"
	lock
# 140 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 141 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE01_GET
# 142 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym1_Text_0
# 143 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 144 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym2::
# 147 "data/maps/DebugArea/scripts.pory"
	lock
# 148 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 149 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE02_GET
# 150 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym2_Text_0
# 151 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 152 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym3::
# 155 "data/maps/DebugArea/scripts.pory"
	lock
# 156 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 157 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE03_GET
# 158 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym3_Text_0
# 159 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 160 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym4::
# 164 "data/maps/DebugArea/scripts.pory"
	lock
# 165 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 166 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE04_GET
# 167 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym4_Text_0
# 168 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 169 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym5::
# 173 "data/maps/DebugArea/scripts.pory"
	lock
# 174 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 175 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE05_GET
# 176 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym5_Text_0
# 177 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 178 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym6::
# 182 "data/maps/DebugArea/scripts.pory"
	lock
# 183 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 184 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE06_GET
# 185 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym6_Text_0
# 186 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 187 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym7::
# 190 "data/maps/DebugArea/scripts.pory"
	lock
# 191 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 192 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE07_GET
# 193 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym7_Text_0
# 194 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 195 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym8::
# 198 "data/maps/DebugArea/scripts.pory"
	lock
# 199 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 200 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE08_GET
# 201 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym8_Text_0
# 202 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 203 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetVar_MatsRival::
# 206 "data/maps/DebugArea/scripts.pory"
	lock
# 207 "data/maps/DebugArea/scripts.pory"
	setvar RIVAL_STATE_MATS, 3
# 208 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetVar_MatsRival_Text_0
# 209 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 210 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetVar_Dusclops::
# 214 "data/maps/DebugArea/scripts.pory"
	lock
# 215 "data/maps/DebugArea/scripts.pory"
	setvar DUSCLOPS_STATE, 2
# 216 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetVar_Dusclops_Text_0
# 217 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 218 "data/maps/DebugArea/scripts.pory"
	release
	return


WarpmapToSevii::
# 222 "data/maps/DebugArea/scripts.pory"
	lock
# 223 "data/maps/DebugArea/scripts.pory"
	msgbox WarpmapToSevii_Text_0
# 224 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 225 "data/maps/DebugArea/scripts.pory"
	special SetRegionToSEVII
# 226 "data/maps/DebugArea/scripts.pory"
	warpteleport MAP_ROUTE201, 0
# 227 "data/maps/DebugArea/scripts.pory"
	release
	return


BattleGiovanniTest::
# 231 "data/maps/DebugArea/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GIOVANNI_ONE, BattleTestIntro, BattleTestOutro, PostTestBattle
# 232 "data/maps/DebugArea/scripts.pory"
	waitmessage
	end


BattleRocketFTest::
# 237 "data/maps/DebugArea/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNTF_ONE, BattleTestIntro, BattleTestOutro, PostTestBattle
# 238 "data/maps/DebugArea/scripts.pory"
	waitmessage
	end


BattleRocketMTest::
# 243 "data/maps/DebugArea/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNTM_ONE, BattleTestIntro, BattleTestOutro, PostTestBattle
# 244 "data/maps/DebugArea/scripts.pory"
	waitmessage
	end


PostTestBattle::
# 257 "data/maps/DebugArea/scripts.pory"
	lock
# 258 "data/maps/DebugArea/scripts.pory"
	msgbox PostTestBattle_Text_0
# 259 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 260 "data/maps/DebugArea/scripts.pory"
	release
	return


CallGengarParty_Text_0:
# 12 "data/maps/DebugArea/scripts.pory"
	.string "Party reset$"

IncreaseGymsBeatVar_Text_0:
# 31 "data/maps/DebugArea/scripts.pory"
	.string "INCREASED VAR$"

IncreaseGymsBeatVar_Text_1:
# 34 "data/maps/DebugArea/scripts.pory"
	.string "8 now!$"

IncreaseGymsBeatVar_Text_2:
# 38 "data/maps/DebugArea/scripts.pory"
	.string "Completed$"

CheckIfBeatAllGyms_Text_0:
# 48 "data/maps/DebugArea/scripts.pory"
	.string "CHECKING$"

CheckIfBeatAllGyms_Text_1:
# 51 "data/maps/DebugArea/scripts.pory"
	.string "Beat$"

CheckIfBeatAllGyms_Text_2:
# 54 "data/maps/DebugArea/scripts.pory"
	.string "Not beat$"

SetupRocketGymsBeatVar_Text_0:
# 63 "data/maps/DebugArea/scripts.pory"
	.string "VAR_ROCKET_GYMS_BEAT is set to 0$"

RestoreParty_Text_0:
# 70 "data/maps/DebugArea/scripts.pory"
	.string "Party Restored$"

SetRocketEventActive_Text_0:
# 78 "data/maps/DebugArea/scripts.pory"
	.string "Rockets have now taken over the world$"

SetRocketEventSix_Text_0:
# 90 "data/maps/DebugArea/scripts.pory"
	.string "Rockets have now taken over the world - 6$"

BeatRocketAllGyms_Text_0:
# 114 "data/maps/DebugArea/scripts.pory"
	.string "And rocket gyms have been freed$"

BeatRocketRustboro_Text_0:
# 132 "data/maps/DebugArea/scripts.pory"
	.string "Only rustboro rocket gyms have been freed$"

EventScript_SetFlag_Gym1_Text_0:
# 142 "data/maps/DebugArea/scripts.pory"
	.string "Gym 1 completed$"

EventScript_SetFlag_Gym2_Text_0:
# 150 "data/maps/DebugArea/scripts.pory"
	.string "Gym 2 completed$"

EventScript_SetFlag_Gym3_Text_0:
# 158 "data/maps/DebugArea/scripts.pory"
	.string "Gym 3 completed$"

EventScript_SetFlag_Gym4_Text_0:
# 167 "data/maps/DebugArea/scripts.pory"
	.string "Gym 4 completed$"

EventScript_SetFlag_Gym5_Text_0:
# 176 "data/maps/DebugArea/scripts.pory"
	.string "Gym 5 completed$"

EventScript_SetFlag_Gym6_Text_0:
# 185 "data/maps/DebugArea/scripts.pory"
	.string "Gym 6 completed$"

EventScript_SetFlag_Gym7_Text_0:
# 193 "data/maps/DebugArea/scripts.pory"
	.string "Gym 7 completed$"

EventScript_SetFlag_Gym8_Text_0:
# 201 "data/maps/DebugArea/scripts.pory"
	.string "Gym 8 completed$"

EventScript_SetVar_MatsRival_Text_0:
# 208 "data/maps/DebugArea/scripts.pory"
	.string "Updated Mats_Rival_State by one$"

EventScript_SetVar_Dusclops_Text_0:
# 216 "data/maps/DebugArea/scripts.pory"
	.string "Updated DUSCLOPS_STATE by one$"

WarpmapToSevii_Text_0:
# 223 "data/maps/DebugArea/scripts.pory"
	.string "Here we go$"

PostTestBattle_Text_0:
# 258 "data/maps/DebugArea/scripts.pory"
	.string "You beat me!$"

BattleTestIntro::
# 248 "data/maps/DebugArea/scripts.pory"
	.string "I will beat you TEST$"

BattleTestOutro::
# 252 "data/maps/DebugArea/scripts.pory"
	.string "I didn't beat you TEST$"
