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


IncreaseGymsBeatVar::
# 22 "data/maps/DebugArea/scripts.pory"
	lock
# 23 "data/maps/DebugArea/scripts.pory"
	compare VAR_ROCKET_GYMS_BEAT, 8
	goto_if_lt IncreaseGymsBeatVar_2
# 32 "data/maps/DebugArea/scripts.pory"
	msgbox IncreaseGymsBeatVar_Text_2
# 33 "data/maps/DebugArea/scripts.pory"
	waitmessage
IncreaseGymsBeatVar_1:
# 35 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 36 "data/maps/DebugArea/scripts.pory"
	release
	return

IncreaseGymsBeatVar_2:
# 24 "data/maps/DebugArea/scripts.pory"
	setvar VAR_ROCKET_GYMS_BEAT, 1
# 25 "data/maps/DebugArea/scripts.pory"
	msgbox IncreaseGymsBeatVar_Text_0
# 26 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 27 "data/maps/DebugArea/scripts.pory"
	compare VAR_ROCKET_GYMS_BEAT, 8
	goto_if_eq IncreaseGymsBeatVar_5
	goto IncreaseGymsBeatVar_1

IncreaseGymsBeatVar_5:
# 28 "data/maps/DebugArea/scripts.pory"
	msgbox IncreaseGymsBeatVar_Text_1
# 29 "data/maps/DebugArea/scripts.pory"
	waitmessage
	goto IncreaseGymsBeatVar_1


CheckIfBeatAllGyms::
# 40 "data/maps/DebugArea/scripts.pory"
	special CheckIfRocketGymLeadersDefeated
# 41 "data/maps/DebugArea/scripts.pory"
	lock
# 42 "data/maps/DebugArea/scripts.pory"
	msgbox CheckIfBeatAllGyms_Text_0
# 43 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 44 "data/maps/DebugArea/scripts.pory"
	goto_if_set FLAG_ROCKET_ALLGYMS_BEAT, CheckIfBeatAllGyms_2
# 48 "data/maps/DebugArea/scripts.pory"
	msgbox CheckIfBeatAllGyms_Text_2
# 49 "data/maps/DebugArea/scripts.pory"
	waitmessage
CheckIfBeatAllGyms_1:
# 51 "data/maps/DebugArea/scripts.pory"
	release
	return

CheckIfBeatAllGyms_2:
# 45 "data/maps/DebugArea/scripts.pory"
	msgbox CheckIfBeatAllGyms_Text_1
# 46 "data/maps/DebugArea/scripts.pory"
	waitmessage
	goto CheckIfBeatAllGyms_1


SetupRocketGymsBeatVar::
# 55 "data/maps/DebugArea/scripts.pory"
	lock
# 56 "data/maps/DebugArea/scripts.pory"
	setvar VAR_ROCKET_GYMS_BEAT, 0
# 57 "data/maps/DebugArea/scripts.pory"
	msgbox SetupRocketGymsBeatVar_Text_0
# 58 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 59 "data/maps/DebugArea/scripts.pory"
	release
	return


RestoreParty::
# 63 "data/maps/DebugArea/scripts.pory"
	lock
# 64 "data/maps/DebugArea/scripts.pory"
	msgbox RestoreParty_Text_0
# 65 "data/maps/DebugArea/scripts.pory"
	special LoadPlayerParty
# 66 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 67 "data/maps/DebugArea/scripts.pory"
	release
	return


SetRocketEventActive::
# 71 "data/maps/DebugArea/scripts.pory"
	lock
# 72 "data/maps/DebugArea/scripts.pory"
	msgbox SetRocketEventActive_Text_0
# 73 "data/maps/DebugArea/scripts.pory"
	setvar VAR_ROCKET_ARC_STATE, 0
# 74 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_ROCKET_EVENT_ACTIVE
# 75 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 76 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_NORMAN
# 77 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 78 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 79 "data/maps/DebugArea/scripts.pory"
	release
	return


SetRocketEventSix::
# 83 "data/maps/DebugArea/scripts.pory"
	lock
# 84 "data/maps/DebugArea/scripts.pory"
	msgbox SetRocketEventSix_Text_0
# 85 "data/maps/DebugArea/scripts.pory"
	setvar VAR_ROCKET_ARC_STATE, 6
# 86 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_ROCKET_EVENT_ACTIVE
# 87 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 88 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_NORMAN
# 89 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 90 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 91 "data/maps/DebugArea/scripts.pory"
	release
	return


SetRocketEventSeven::
# 95 "data/maps/DebugArea/scripts.pory"
	lock
# 96 "data/maps/DebugArea/scripts.pory"
	msgbox SetRocketEventSix_Text_0
# 97 "data/maps/DebugArea/scripts.pory"
	setvar VAR_ROCKET_ARC_STATE, 7
# 98 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_ROCKET_EVENT_ACTIVE
# 99 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 100 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_NORMAN
# 101 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 102 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 103 "data/maps/DebugArea/scripts.pory"
	release
	return


BeatRocketAllGyms::
# 107 "data/maps/DebugArea/scripts.pory"
	lock
# 108 "data/maps/DebugArea/scripts.pory"
	msgbox BeatRocketAllGyms_Text_0
# 109 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_RUSTBORO_ROCKET_DEFEATED
# 110 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEWFORD_ROCKET_DEFEATED
# 111 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_MAUVILLE_ROCKET_DEFEATED
# 112 "data/maps/DebugArea/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 113 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_LAVARIDGE_ROCKET_DEFEATED
# 114 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_PETALBURG_ROCKET_DEFEATED
# 115 "data/maps/DebugArea/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_NORMAN
# 116 "data/maps/DebugArea/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 117 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_FORTREE_ROCKET_DEFEATED
# 118 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_MOSSDEEP_ROCKET_DEFEATED
# 119 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ROCKET_DEFEATED
# 120 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 121 "data/maps/DebugArea/scripts.pory"
	release
	return


BeatRocketRustboro::
# 125 "data/maps/DebugArea/scripts.pory"
	lock
# 126 "data/maps/DebugArea/scripts.pory"
	msgbox BeatRocketRustboro_Text_0
# 127 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_RUSTBORO_ROCKET_DEFEATED
# 128 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 129 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym1::
# 133 "data/maps/DebugArea/scripts.pory"
	lock
# 134 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 135 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE01_GET
# 136 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym1_Text_0
# 137 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 138 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym2::
# 141 "data/maps/DebugArea/scripts.pory"
	lock
# 142 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 143 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE02_GET
# 144 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym2_Text_0
# 145 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 146 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym3::
# 149 "data/maps/DebugArea/scripts.pory"
	lock
# 150 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 151 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE03_GET
# 152 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym3_Text_0
# 153 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 154 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym4::
# 158 "data/maps/DebugArea/scripts.pory"
	lock
# 159 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 160 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE04_GET
# 161 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym4_Text_0
# 162 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 163 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym5::
# 167 "data/maps/DebugArea/scripts.pory"
	lock
# 168 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 169 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE05_GET
# 170 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym5_Text_0
# 171 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 172 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym6::
# 176 "data/maps/DebugArea/scripts.pory"
	lock
# 177 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 178 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE06_GET
# 179 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym6_Text_0
# 180 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 181 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym7::
# 184 "data/maps/DebugArea/scripts.pory"
	lock
# 185 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 186 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE07_GET
# 187 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym7_Text_0
# 188 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 189 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetFlag_Gym8::
# 192 "data/maps/DebugArea/scripts.pory"
	lock
# 193 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 194 "data/maps/DebugArea/scripts.pory"
	setflag FLAG_BADGE08_GET
# 195 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetFlag_Gym8_Text_0
# 196 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 197 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetVar_MatsRival::
# 200 "data/maps/DebugArea/scripts.pory"
	lock
# 201 "data/maps/DebugArea/scripts.pory"
	setvar RIVAL_STATE_MATS, 3
# 202 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetVar_MatsRival_Text_0
# 203 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 204 "data/maps/DebugArea/scripts.pory"
	release
	return


EventScript_SetVar_Dusclops::
# 208 "data/maps/DebugArea/scripts.pory"
	lock
# 209 "data/maps/DebugArea/scripts.pory"
	setvar DUSCLOPS_STATE, 2
# 210 "data/maps/DebugArea/scripts.pory"
	msgbox EventScript_SetVar_Dusclops_Text_0
# 211 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 212 "data/maps/DebugArea/scripts.pory"
	release
	return


WarpmapToSevii::
# 216 "data/maps/DebugArea/scripts.pory"
	lock
# 217 "data/maps/DebugArea/scripts.pory"
	msgbox WarpmapToSevii_Text_0
# 218 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 219 "data/maps/DebugArea/scripts.pory"
	special SetRegionToSEVII
# 220 "data/maps/DebugArea/scripts.pory"
	warpteleport MAP_ROUTE201, 0
# 221 "data/maps/DebugArea/scripts.pory"
	release
	return


BattleGiovanniTest::
# 225 "data/maps/DebugArea/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GIOVANNI_ONE, BattleTestIntro, BattleTestOutro, PostTestBattle
# 226 "data/maps/DebugArea/scripts.pory"
	waitmessage
	end


BattleRocketFTest::
# 231 "data/maps/DebugArea/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNTF_ONE, BattleTestIntro, BattleTestOutro, PostTestBattle
# 232 "data/maps/DebugArea/scripts.pory"
	waitmessage
	end


BattleRocketMTest::
# 237 "data/maps/DebugArea/scripts.pory"
	trainerbattle_single TRAINER_ROCKET_GRUNTM_ONE, BattleTestIntro, BattleTestOutro, PostTestBattle
# 238 "data/maps/DebugArea/scripts.pory"
	waitmessage
	end


PostTestBattle::
# 251 "data/maps/DebugArea/scripts.pory"
	lock
# 252 "data/maps/DebugArea/scripts.pory"
	msgbox PostTestBattle_Text_0
# 253 "data/maps/DebugArea/scripts.pory"
	waitmessage
# 254 "data/maps/DebugArea/scripts.pory"
	release
	return


CallGengarParty_Text_0:
# 12 "data/maps/DebugArea/scripts.pory"
	.string "Party reset$"

IncreaseGymsBeatVar_Text_0:
# 25 "data/maps/DebugArea/scripts.pory"
	.string "INCREASED VAR$"

IncreaseGymsBeatVar_Text_1:
# 28 "data/maps/DebugArea/scripts.pory"
	.string "8 now!$"

IncreaseGymsBeatVar_Text_2:
# 32 "data/maps/DebugArea/scripts.pory"
	.string "Completed$"

CheckIfBeatAllGyms_Text_0:
# 42 "data/maps/DebugArea/scripts.pory"
	.string "CHECKING$"

CheckIfBeatAllGyms_Text_1:
# 45 "data/maps/DebugArea/scripts.pory"
	.string "Beat$"

CheckIfBeatAllGyms_Text_2:
# 48 "data/maps/DebugArea/scripts.pory"
	.string "Not beat$"

SetupRocketGymsBeatVar_Text_0:
# 57 "data/maps/DebugArea/scripts.pory"
	.string "VAR_ROCKET_GYMS_BEAT is set to 0$"

RestoreParty_Text_0:
# 64 "data/maps/DebugArea/scripts.pory"
	.string "Party Restored$"

SetRocketEventActive_Text_0:
# 72 "data/maps/DebugArea/scripts.pory"
	.string "Rockets have now taken over the world$"

SetRocketEventSix_Text_0:
# 84 "data/maps/DebugArea/scripts.pory"
	.string "Rockets have now taken over the world - 6$"

BeatRocketAllGyms_Text_0:
# 108 "data/maps/DebugArea/scripts.pory"
	.string "And rocket gyms have been freed$"

BeatRocketRustboro_Text_0:
# 126 "data/maps/DebugArea/scripts.pory"
	.string "Only rustboro rocket gyms have been freed$"

EventScript_SetFlag_Gym1_Text_0:
# 136 "data/maps/DebugArea/scripts.pory"
	.string "Gym 1 completed$"

EventScript_SetFlag_Gym2_Text_0:
# 144 "data/maps/DebugArea/scripts.pory"
	.string "Gym 2 completed$"

EventScript_SetFlag_Gym3_Text_0:
# 152 "data/maps/DebugArea/scripts.pory"
	.string "Gym 3 completed$"

EventScript_SetFlag_Gym4_Text_0:
# 161 "data/maps/DebugArea/scripts.pory"
	.string "Gym 4 completed$"

EventScript_SetFlag_Gym5_Text_0:
# 170 "data/maps/DebugArea/scripts.pory"
	.string "Gym 5 completed$"

EventScript_SetFlag_Gym6_Text_0:
# 179 "data/maps/DebugArea/scripts.pory"
	.string "Gym 6 completed$"

EventScript_SetFlag_Gym7_Text_0:
# 187 "data/maps/DebugArea/scripts.pory"
	.string "Gym 7 completed$"

EventScript_SetFlag_Gym8_Text_0:
# 195 "data/maps/DebugArea/scripts.pory"
	.string "Gym 8 completed$"

EventScript_SetVar_MatsRival_Text_0:
# 202 "data/maps/DebugArea/scripts.pory"
	.string "Updated Mats_Rival_State by one$"

EventScript_SetVar_Dusclops_Text_0:
# 210 "data/maps/DebugArea/scripts.pory"
	.string "Updated DUSCLOPS_STATE by one$"

WarpmapToSevii_Text_0:
# 217 "data/maps/DebugArea/scripts.pory"
	.string "Here we go$"

PostTestBattle_Text_0:
# 252 "data/maps/DebugArea/scripts.pory"
	.string "You beat me!$"

BattleTestIntro::
# 242 "data/maps/DebugArea/scripts.pory"
	.string "I will beat you TEST$"

BattleTestOutro::
# 246 "data/maps/DebugArea/scripts.pory"
	.string "I didn't beat you TEST$"
