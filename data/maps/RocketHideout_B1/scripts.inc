RocketHideout_B1_MapScripts::
# 2 "data/maps/RocketHideout_B1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EventScript_OnLoad_RocketHideout_B1
	.byte 0


EventScript_OnLoad_RocketHideout_B1::
# 7 "data/maps/RocketHideout_B1/scripts.pory"
	goto_if_set FLAG_ROCKETB1_BASEMENT_GAUNTLET_BEAT, EventScript_OnLoad_RocketHideout_B1_2
# 13 "data/maps/RocketHideout_B1/scripts.pory"
	cleartrainerflag TRAINER_ROCKETM_ROCKETHIDEOUTB1_FOUR
# 14 "data/maps/RocketHideout_B1/scripts.pory"
	cleartrainerflag TRAINER_ROCKETM_ROCKETHIDEOUTB1_FIVE
# 15 "data/maps/RocketHideout_B1/scripts.pory"
	cleartrainerflag TRAINER_ROCKETM_ROCKETHIDEOUTB1_SIX
EventScript_OnLoad_RocketHideout_B1_1:
# 17 "data/maps/RocketHideout_B1/scripts.pory"
	compare VAR_MEWTWO_ARC_STATE, 1
	goto_if_eq EventScript_OnLoad_RocketHideout_B1_5
# 20 "data/maps/RocketHideout_B1/scripts.pory"
	setflag FLAG_NOTINMEWTWO_STATE_1
	return

EventScript_OnLoad_RocketHideout_B1_2:
# 8 "data/maps/RocketHideout_B1/scripts.pory"
	settrainerflag TRAINER_ROCKETM_ROCKETHIDEOUTB1_ONE
# 9 "data/maps/RocketHideout_B1/scripts.pory"
	settrainerflag TRAINER_ROCKETM_ROCKETHIDEOUTB1_TWO
# 10 "data/maps/RocketHideout_B1/scripts.pory"
	settrainerflag TRAINER_ROCKETM_ROCKETHIDEOUTB1_THREE
	goto EventScript_OnLoad_RocketHideout_B1_1

EventScript_OnLoad_RocketHideout_B1_5:
# 18 "data/maps/RocketHideout_B1/scripts.pory"
	clearflag FLAG_NOTINMEWTWO_STATE_1
	return


EventScript_RocketHideout_B1_TriggerA::
# 25 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 26 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovementRocketHideout_B1_A
# 27 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 28 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketHideout_B1_MovePlayer
# 29 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


# 32 "data/maps/RocketHideout_B1/scripts.pory"
MovementRocketHideout_B1_A:
# 33 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 34 "data/maps/RocketHideout_B1/scripts.pory"
	walk_down
# 35 "data/maps/RocketHideout_B1/scripts.pory"
	face_right
	step_end

EventScript_RocketHideout_B1_TriggerB::
# 39 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 40 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovementRocketHideout_B1_B
# 41 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 42 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketHideout_B1_MovePlayer
# 43 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


# 46 "data/maps/RocketHideout_B1/scripts.pory"
MovementRocketHideout_B1_B:
# 47 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
	step_end

EventScript_RocketHideout_B1_TriggerC::
# 51 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 52 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovementRocketHideout_B1_C
# 53 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 54 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketHideout_B1_MovePlayer
# 55 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


# 58 "data/maps/RocketHideout_B1/scripts.pory"
MovementRocketHideout_B1_C:
# 59 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 60 "data/maps/RocketHideout_B1/scripts.pory"
	walk_up
# 61 "data/maps/RocketHideout_B1/scripts.pory"
	face_right
	step_end

EventScript_RocketHideout_B1_MovePlayer::
# 65 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 66 "data/maps/RocketHideout_B1/scripts.pory"
	hideobjectat 13, MAP_ROCKET_HIDEOUT_B1
# 67 "data/maps/RocketHideout_B1/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 68 "data/maps/RocketHideout_B1/scripts.pory"
	setflag FLAG_MEWTWO_BEAT
# 69 "data/maps/RocketHideout_B1/scripts.pory"
	hideobjectat 14, MAP_ROCKET_HIDEOUT_B1
# 70 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovementRocketHideout_B1_PlayerToGiovanni
# 71 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 72 "data/maps/RocketHideout_B1/scripts.pory"
	release
# 73 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketHideout_B1_GiovanniSequence_One
	return


# 76 "data/maps/RocketHideout_B1/scripts.pory"
MovementRocketHideout_B1_PlayerToGiovanni:
# 77 "data/maps/RocketHideout_B1/scripts.pory"
	emote_exclamation_mark
# 78 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 78 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 78 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 78 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 78 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 78 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 79 "data/maps/RocketHideout_B1/scripts.pory"
	walk_up
# 80 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
	step_end

EventScript_RocketHideout_B1_GiovanniSequence_One::
# 84 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 85 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox Giovanni_RocketHideout_B1_Intro
# 86 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 87 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement 10, Movement_RocketHideoutB1_Scientist_One
# 88 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 89 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_RocketHideout_B1_GiovanniSequence_One_Text_0
# 90 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 92 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 93 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_GIOVANNI_ROCKETHIDEOUTB1_ONE, Giovanni_BattleOne_RocketHideout_B1_Intro, Giovanni_BattleOne_RocketHideout_B1_Outro, EventScript_RocketHideout_B1_GiovanniSequence_Two
# 94 "data/maps/RocketHideout_B1/scripts.pory"
	releaseall
	return


EventScript_RocketHideout_B1_GiovanniSequence_Two::
# 99 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 100 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement 10, Movement_RocketHideoutB1_Scientist_One_Return
# 101 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 102 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement 12, Movement_RocketHideoutB1_Scientist_Two
# 103 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 106 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_GIOVANNI_ROCKETHIDEOUTB1_TWO, Giovanni_BattleTwo_RocketHideout_B1_Intro, Giovanni_BattleTwo_RocketHideout_B1_Outro, EventScript_RocketHideout_B1_GiovanniSequence_Three
	return


# 109 "data/maps/RocketHideout_B1/scripts.pory"
LookRightPlayer_RocketHideoutB1:
# 110 "data/maps/RocketHideout_B1/scripts.pory"
	face_right
	step_end

EventScript_RocketHideout_B1_GiovanniSequence_Three::
# 114 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 115 "data/maps/RocketHideout_B1/scripts.pory"
	setflag FLAG_DYNAMAX_ALLOWED
# 117 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement 12, Movement_RocketHideoutB1_Scientist_Two_Return
# 118 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 119 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_RocketHideout_B1_GiovanniSequence_Three_Text_0
# 121 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 122 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_RocketHideout_B1_GiovanniSequence_Three_Text_1
# 123 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 124 "data/maps/RocketHideout_B1/scripts.pory"
	showobjectat 13, MAP_ROCKET_HIDEOUT_B1
# 125 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_RocketHideout_B1_GiovanniSequence_Three_Text_2
# 126 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 127 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement 13, Movement_RocketHideout_MewtwoMoveDown
# 128 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 129 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement 1, Movement_RocketHideout_MoveGiovanniForward
# 130 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 131 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_RocketHideout_B1_GiovanniSequence_Three_Text_3
# 132 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 133 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement 1, Movement_RocketHideout_MoveGiovanniForward
# 134 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 135 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_GIOVANNI_ROCKETHIDEOUTB1_THREE, Giovanni_BattleThree_RocketHideout_B1_Intro, Giovanni_BattleThree_RocketHideout_B1_Outro, EventScript_RocketHideout_B1_GiovanniSequence_PostBattle
	return


# 138 "data/maps/RocketHideout_B1/scripts.pory"
Movement_RocketHideout_MewtwoMoveDown:
# 139 "data/maps/RocketHideout_B1/scripts.pory"
	walk_down
# 139 "data/maps/RocketHideout_B1/scripts.pory"
	walk_down
# 140 "data/maps/RocketHideout_B1/scripts.pory"
	face_down
	step_end

# 143 "data/maps/RocketHideout_B1/scripts.pory"
Movement_RocketHideout_MoveGiovanniForward:
# 144 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
	step_end

EventScript_RocketHideout_B1_GiovanniSequence_PostBattle::
# 148 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 149 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 150 "data/maps/RocketHideout_B1/scripts.pory"
	clearflag FLAG_DYNAMAX_ALLOWED
# 151 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_RocketHideout_B1_GiovanniSequence_PostBattle_Text_0
# 153 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 155 "data/maps/RocketHideout_B1/scripts.pory"
	special ShakeCamera
# 156 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_RocketHideout_B1_GiovanniSequence_PostBattle_Text_1
# 158 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 160 "data/maps/RocketHideout_B1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 161 "data/maps/RocketHideout_B1/scripts.pory"
	setflag FLAG_ROCKET_EVENT_COMPLETED
# 162 "data/maps/RocketHideout_B1/scripts.pory"
	removeobject 1
# 163 "data/maps/RocketHideout_B1/scripts.pory"
	removeobject 8
# 164 "data/maps/RocketHideout_B1/scripts.pory"
	removeobject 9
# 165 "data/maps/RocketHideout_B1/scripts.pory"
	removeobject 10
# 166 "data/maps/RocketHideout_B1/scripts.pory"
	removeobject 11
# 167 "data/maps/RocketHideout_B1/scripts.pory"
	removeobject 12
# 168 "data/maps/RocketHideout_B1/scripts.pory"
	removeobject 13
# 169 "data/maps/RocketHideout_B1/scripts.pory"
	clearflag FLAG_ROCKET_EVENT_ACTIVE
# 170 "data/maps/RocketHideout_B1/scripts.pory"
	setflag FLAG_MEWTWO_ISLAND_ACTIVE
# 171 "data/maps/RocketHideout_B1/scripts.pory"
	setvar VAR_ROCKET_ARC_STATE, 9
# 172 "data/maps/RocketHideout_B1/scripts.pory"
	clearflag FLAG_MEWTWO_BEAT
# 173 "data/maps/RocketHideout_B1/scripts.pory"
	setvar VAR_MEWTWO_ARC_STATE, 1
# 174 "data/maps/RocketHideout_B1/scripts.pory"
	clearflag FLAG_NOTINMEWTWO_STATE_1
# 175 "data/maps/RocketHideout_B1/scripts.pory"
	showobjectat 14, MAP_ROCKET_HIDEOUT_B1
# 176 "data/maps/RocketHideout_B1/scripts.pory"
	showobjectat 15, MAP_ROCKET_HIDEOUT_B1
# 177 "data/maps/RocketHideout_B1/scripts.pory"
	showobjectat 16, MAP_ROCKET_HIDEOUT_B1
# 178 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_RocketHideout_B1_GiovanniSequence_PostBattle_Text_2
# 179 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 180 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_RocketHideout_B1_GiovanniSequence_PostBattle_Text_3
# 181 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 182 "data/maps/RocketHideout_B1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 183 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


# 218 "data/maps/RocketHideout_B1/scripts.pory"
Movement_RocketHideoutB1_Scientist_One:
# 219 "data/maps/RocketHideout_B1/scripts.pory"
	walk_up
# 219 "data/maps/RocketHideout_B1/scripts.pory"
	walk_up
# 219 "data/maps/RocketHideout_B1/scripts.pory"
	walk_up
# 220 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
	step_end

# 222 "data/maps/RocketHideout_B1/scripts.pory"
Movement_RocketHideoutB1_Scientist_One_Return:
# 223 "data/maps/RocketHideout_B1/scripts.pory"
	walk_fast_right
# 224 "data/maps/RocketHideout_B1/scripts.pory"
	walk_fast_down
# 224 "data/maps/RocketHideout_B1/scripts.pory"
	walk_fast_down
# 224 "data/maps/RocketHideout_B1/scripts.pory"
	walk_fast_down
# 225 "data/maps/RocketHideout_B1/scripts.pory"
	face_up
	step_end

# 228 "data/maps/RocketHideout_B1/scripts.pory"
Movement_RocketHideoutB1_Scientist_Two:
# 229 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
# 229 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
# 230 "data/maps/RocketHideout_B1/scripts.pory"
	walk_down
# 231 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
	step_end

# 233 "data/maps/RocketHideout_B1/scripts.pory"
Movement_RocketHideoutB1_Scientist_Two_Return:
# 234 "data/maps/RocketHideout_B1/scripts.pory"
	walk_fast_up
# 234 "data/maps/RocketHideout_B1/scripts.pory"
	walk_fast_up
# 234 "data/maps/RocketHideout_B1/scripts.pory"
	walk_fast_up
# 235 "data/maps/RocketHideout_B1/scripts.pory"
	face_down
	step_end

EventScriptRocketOne_RocketHideoutB1::
# 239 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_ROCKETHIDEOUTB1_ONE, RocketOne_RocketHideoutB1_BattleIntro, RocketOne_RocketHideoutB1_BattleOutro, EventScript_RocketOne_PostBattle_RocketHideoutB1
# 240 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketOne_PostBattle_RocketHideoutB1
	return


EventScript_RocketOne_PostBattle_RocketHideoutB1::
# 244 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 245 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 246 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox RocketOne_RocketHideoutB1_BattleOutro
# 247 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 248 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScriptRocketTwo_RocketHideoutB1::
# 259 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_ROCKETHIDEOUTB1_TWO, RocketTwo_RocketHideoutB1_BattleIntro, RocketTwo_RocketHideoutB1_BattleOutro, EventScript_RocketTwo_PostBattle_RocketHideoutB1
# 260 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketTwo_PostBattle_RocketHideoutB1
	return


EventScript_RocketTwo_PostBattle_RocketHideoutB1::
# 264 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 265 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 266 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox RocketTwo_RocketHideoutB1_BattleOutro
# 267 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 268 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScriptRocketThree_RocketHideoutB1::
# 279 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_ROCKETHIDEOUTB1_THREE, RocketThree_RocketHideoutB1_BattleIntro, RocketThree_RocketHideoutB1_BattleOutro, EventScript_RocketThree_PostBattle_RocketHideoutB1
# 280 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketThree_PostBattle_RocketHideoutB1
	return


EventScript_RocketThree_PostBattle_RocketHideoutB1::
# 284 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 285 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 286 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox RocketThree_RocketHideoutB1_BattleOutro
# 287 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 288 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScriptRocketFour_RocketHideoutB1::
# 299 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_ROCKETHIDEOUTB1_FOUR, RocketFour_RocketHideoutB1_BattleIntro, RocketFour_RocketHideoutB1_BattleOutro, EventScript_RocketFour_PostBattle_RocketHideoutB1
# 300 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketFour_PostBattle_RocketHideoutB1
	return


EventScript_RocketFour_PostBattle_RocketHideoutB1::
# 304 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 305 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 306 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox RocketFour_RocketHideoutB1_BattleOutro
# 307 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 308 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScriptRocketFive_RocketHideoutB1::
# 319 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_ROCKETHIDEOUTB1_FIVE, RocketFive_RocketHideoutB1_BattleIntro, RocketFive_RocketHideoutB1_BattleOutro, EventScript_RocketFive_PostBattle_RocketHideoutB1
# 320 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketFive_PostBattle_RocketHideoutB1
	return


EventScript_RocketFive_PostBattle_RocketHideoutB1::
# 324 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 325 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 326 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox RocketFive_RocketHideoutB1_BattleOutro
# 327 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 328 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScriptRocketSix_RocketHideoutB1::
# 339 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_ROCKETHIDEOUTB1_SIX, RocketSix_RocketHideoutB1_BattleIntro, RocketSix_RocketHideoutB1_BattleOutro, EventScript_RocketSix_PostBattle_RocketHideoutB1
# 340 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketSix_PostBattle_RocketHideoutB1
	return


EventScript_RocketSix_PostBattle_RocketHideoutB1::
# 344 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 345 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 346 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox RocketSix_RocketHideoutB1_BattleOutro
# 347 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 348 "data/maps/RocketHideout_B1/scripts.pory"
	setflag FLAG_ROCKETB1_BASEMENT_GAUNTLET_BEAT
# 349 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScript_MewtwoDoorBlocker::
# 360 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 361 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 362 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_MewtwoDoorBlocker_Text_0
# 363 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 364 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScript_MewtwoArcKickOff_RocketHideoutB1::
# 368 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 369 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement 15, Movement_RocketHideout_B1_JensIntro
# 370 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement 16, Movement_RocketHideout_B1_MatsIntro
# 371 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 372 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_MewtwoArcKickOff_RocketHideoutB1_Text_0
# 373 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 374 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_MewtwoArcKickOff_RocketHideoutB1_Text_1
# 375 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 376 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_MewtwoArcKickOff_RocketHideoutB1_Text_2
# 377 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 378 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement 15, Movement_RocketHideout_B1_JensOutro
# 379 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement 16, Movement_RocketHideout_B1_MatsOutro
# 380 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 381 "data/maps/RocketHideout_B1/scripts.pory"
	setvar VAR_MEWTWO_ARC_STATE, 2
# 382 "data/maps/RocketHideout_B1/scripts.pory"
	setflag FLAG_NOTINMEWTWO_STATE_1
# 383 "data/maps/RocketHideout_B1/scripts.pory"
	removeobject 15
# 384 "data/maps/RocketHideout_B1/scripts.pory"
	removeobject 16
# 385 "data/maps/RocketHideout_B1/scripts.pory"
	releaseall
	return


# 388 "data/maps/RocketHideout_B1/scripts.pory"
Movement_RocketHideout_B1_MatsIntro:
# 389 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 389 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 389 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 389 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 389 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 389 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 390 "data/maps/RocketHideout_B1/scripts.pory"
	walk_up
# 391 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
	step_end

# 394 "data/maps/RocketHideout_B1/scripts.pory"
Movement_RocketHideout_B1_MatsOutro:
# 395 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
# 396 "data/maps/RocketHideout_B1/scripts.pory"
	walk_down
# 397 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
# 397 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
# 397 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
# 397 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
# 397 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
# 397 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
	step_end

# 400 "data/maps/RocketHideout_B1/scripts.pory"
Movement_RocketHideout_B1_JensIntro:
# 401 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 401 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 401 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 401 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 402 "data/maps/RocketHideout_B1/scripts.pory"
	walk_up
# 403 "data/maps/RocketHideout_B1/scripts.pory"
	emote_exclamation_mark
# 404 "data/maps/RocketHideout_B1/scripts.pory"
	walk_fast_right
# 404 "data/maps/RocketHideout_B1/scripts.pory"
	walk_fast_right
# 404 "data/maps/RocketHideout_B1/scripts.pory"
	walk_fast_right
	step_end

# 407 "data/maps/RocketHideout_B1/scripts.pory"
Movement_RocketHideout_B1_JensOutro:
# 408 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
# 408 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
# 408 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
# 409 "data/maps/RocketHideout_B1/scripts.pory"
	walk_down
# 410 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
# 410 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
# 410 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
# 410 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
	step_end

EventScript_RocketHideout_B1_GiovanniSequence_One_Text_0:
# 89 "data/maps/RocketHideout_B1/scripts.pory"
	.string "YOU HAVE INTERFERED WITH OUR RESEARCH\n"
	.string "ENOUGH!$"

EventScript_RocketHideout_B1_GiovanniSequence_Three_Text_0:
# 119 "data/maps/RocketHideout_B1/scripts.pory"
	.string "GIOVANNI: With ease... you best my two\n"
	.string "most clever scientists. You best my gym\l"
	.string "leaders. And now you attempt to best\l"
	.string "me.$"

EventScript_RocketHideout_B1_GiovanniSequence_Three_Text_1:
# 122 "data/maps/RocketHideout_B1/scripts.pory"
	.string "GIOVANNI: MEWTWO. COME FORTH!$"

EventScript_RocketHideout_B1_GiovanniSequence_Three_Text_2:
# 125 "data/maps/RocketHideout_B1/scripts.pory"
	.string "MEWTWO: YES. MASTER.$"

EventScript_RocketHideout_B1_GiovanniSequence_Three_Text_3:
# 131 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Finally we shall see. My full power, using\n"
	.string "the tools we have created, against your\l"
	.string "power$"

EventScript_RocketHideout_B1_GiovanniSequence_PostBattle_Text_0:
# 151 "data/maps/RocketHideout_B1/scripts.pory"
	.string "GIOVANNI: So it se-$"

EventScript_RocketHideout_B1_GiovanniSequence_PostBattle_Text_1:
# 156 "data/maps/RocketHideout_B1/scripts.pory"
	.string "MEWTWO: YOU HUMANS HAVE USED POKEMON\n"
	.string "FOR THE WRONG PURPOSE. THIS CONFLICT,\l"
	.string "IT IS YOURS NOT OURS, THIS FINAL\l"
	.string "BATTLE HAS SHOWN ME... ALL HUMANS ARE\l"
	.string "HORRIBLE. I CANNOT ALLOW THIS TO\l"
	.string "CONTINUE!$"

EventScript_RocketHideout_B1_GiovanniSequence_PostBattle_Text_2:
# 178 "data/maps/RocketHideout_B1/scripts.pory"
	.string "GIOVANNI: MEWTWO YO- ARGGHHH$"

EventScript_RocketHideout_B1_GiovanniSequence_PostBattle_Text_3:
# 180 "data/maps/RocketHideout_B1/scripts.pory"
	.string "A brief moment of chaos passes and\n"
	.string "then..... Silence....$"

EventScript_MewtwoDoorBlocker_Text_0:
# 362 "data/maps/RocketHideout_B1/scripts.pory"
	.string "You did well. Prof Birch would like to\n"
	.string "speak with you, I would suggest looking\l"
	.string "around to see if you can find him. We\l"
	.string "will tidy up this place.$"

EventScript_MewtwoArcKickOff_RocketHideoutB1_Text_0:
# 372 "data/maps/RocketHideout_B1/scripts.pory"
	.string "JENS: Holy! That battle was epic, you\n"
	.string "are strong as steel {PLAYER}!$"

EventScript_MewtwoArcKickOff_RocketHideoutB1_Text_1:
# 374 "data/maps/RocketHideout_B1/scripts.pory"
	.string "MATS: No way you beat Mewtwo!$"

EventScript_MewtwoArcKickOff_RocketHideoutB1_Text_2:
# 376 "data/maps/RocketHideout_B1/scripts.pory"
	.string "MATS: It seems that all the rockets\n"
	.string "fled... but what happened here was\l"
	.string "something else. The Prof wants to see\l"
	.string "you {PLAYER}, he should be outside on\l"
	.string "the beach. Meet up with him when you are\l"
	.string "ready. Something is going on\l"
	.string "unfortunately we cannot stop and rest\l"
	.string "yet!$"

Giovanni_RocketHideout_B1_Intro::
# 186 "data/maps/RocketHideout_B1/scripts.pory"
	.string "GIOVANNI: You have annoyed me\n"
	.string "{PLAYER}. We were so close to\l"
	.string "dominating this Hoenn region... but you\l"
	.string "had to interfere, hadn't you? I'm done\l"
	.string "playing nice and fair with you. You\l"
	.string "better prepare to face some of our\l"
	.string "strongest cloned Pokemons and our\l"
	.string "latest tech. My scientists, take him on!$"

Giovanni_RocketHideout_B1_Second::
# 190 "data/maps/RocketHideout_B1/scripts.pory"
	.string "$"

Giovanni_RocketHideout_B1_Third::
# 194 "data/maps/RocketHideout_B1/scripts.pory"
	.string "$"

Giovanni_BattleOne_RocketHideout_B1_Intro::
# 198 "data/maps/RocketHideout_B1/scripts.pory"
	.string "I'M GOING TO END YOU!$"

Giovanni_BattleOne_RocketHideout_B1_Outro::
# 201 "data/maps/RocketHideout_B1/scripts.pory"
	.string "No... no! NO!$"

Giovanni_BattleTwo_RocketHideout_B1_Intro::
# 204 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Bwahahaha, no rest for you!$"

Giovanni_BattleTwo_RocketHideout_B1_Outro::
# 207 "data/maps/RocketHideout_B1/scripts.pory"
	.string "In-incredible...$"

Giovanni_BattleThree_RocketHideout_B1_Intro::
# 211 "data/maps/RocketHideout_B1/scripts.pory"
	.string "This ends here!$"

Giovanni_BattleThree_RocketHideout_B1_Outro::
# 214 "data/maps/RocketHideout_B1/scripts.pory"
	.string "...$"

RocketOne_RocketHideoutB1_BattleIntro::
# 251 "data/maps/RocketHideout_B1/scripts.pory"
	.string "You got no chance here!$"

RocketOne_RocketHideoutB1_BattleOutro::
# 254 "data/maps/RocketHideout_B1/scripts.pory"
	.string "I'm going to ask for help...$"

RocketTwo_RocketHideoutB1_BattleIntro::
# 271 "data/maps/RocketHideout_B1/scripts.pory"
	.string "In this lab you are the experiment!$"

RocketTwo_RocketHideoutB1_BattleOutro::
# 274 "data/maps/RocketHideout_B1/scripts.pory"
	.string "How can I be beat by a lab rat.$"

RocketThree_RocketHideoutB1_BattleIntro::
# 291 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Get out my face!$"

RocketThree_RocketHideoutB1_BattleOutro::
# 294 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Darn it.$"

RocketFour_RocketHideoutB1_BattleIntro::
# 311 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Do you think you have what it takes?$"

RocketFour_RocketHideoutB1_BattleOutro::
# 314 "data/maps/RocketHideout_B1/scripts.pory"
	.string "You got me...$"

RocketFive_RocketHideoutB1_BattleIntro::
# 331 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Feel like giving up?$"

RocketFive_RocketHideoutB1_BattleOutro::
# 334 "data/maps/RocketHideout_B1/scripts.pory"
	.string "I guess not.$"

RocketSix_RocketHideoutB1_BattleIntro::
# 352 "data/maps/RocketHideout_B1/scripts.pory"
	.string "I'll beat you!$"

RocketSix_RocketHideoutB1_BattleOutro::
# 355 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Argh!$"
