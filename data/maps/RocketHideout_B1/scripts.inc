RocketHideout_B1_MapScripts::
# 2 "data/maps/RocketHideout_B1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EventScript_OnLoad_RocketHideout_B1
	.byte 0


EventScript_OnLoad_RocketHideout_B1::
# 7 "data/maps/RocketHideout_B1/scripts.pory"
	goto_if_set FLAG_ROCKETB1_BASEMENT_GAUNTLET_BEAT, EventScript_OnLoad_RocketHideout_B1_1
# 13 "data/maps/RocketHideout_B1/scripts.pory"
	cleartrainerflag TRAINER_ROCKETM_ROCKETHIDEOUTB1_FOUR
# 14 "data/maps/RocketHideout_B1/scripts.pory"
	cleartrainerflag TRAINER_ROCKETM_ROCKETHIDEOUTB1_FIVE
# 15 "data/maps/RocketHideout_B1/scripts.pory"
	cleartrainerflag TRAINER_ROCKETM_ROCKETHIDEOUTB1_SIX
	return

EventScript_OnLoad_RocketHideout_B1_1:
# 8 "data/maps/RocketHideout_B1/scripts.pory"
	settrainerflag TRAINER_ROCKETM_ROCKETHIDEOUTB1_ONE
# 9 "data/maps/RocketHideout_B1/scripts.pory"
	settrainerflag TRAINER_ROCKETM_ROCKETHIDEOUTB1_TWO
# 10 "data/maps/RocketHideout_B1/scripts.pory"
	settrainerflag TRAINER_ROCKETM_ROCKETHIDEOUTB1_THREE
	return


EventScript_RocketHideout_B1_TriggerA::
# 20 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 21 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovementRocketHideout_B1_A
# 22 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 23 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketHideout_B1_MovePlayer
# 24 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


# 27 "data/maps/RocketHideout_B1/scripts.pory"
MovementRocketHideout_B1_A:
# 28 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 29 "data/maps/RocketHideout_B1/scripts.pory"
	walk_down
# 30 "data/maps/RocketHideout_B1/scripts.pory"
	face_right
	step_end

EventScript_RocketHideout_B1_TriggerB::
# 34 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 35 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovementRocketHideout_B1_B
# 36 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 37 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketHideout_B1_MovePlayer
# 38 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


# 41 "data/maps/RocketHideout_B1/scripts.pory"
MovementRocketHideout_B1_B:
# 42 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
	step_end

EventScript_RocketHideout_B1_TriggerC::
# 46 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 47 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovementRocketHideout_B1_C
# 48 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 49 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketHideout_B1_MovePlayer
# 50 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


# 53 "data/maps/RocketHideout_B1/scripts.pory"
MovementRocketHideout_B1_C:
# 54 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 55 "data/maps/RocketHideout_B1/scripts.pory"
	walk_up
# 56 "data/maps/RocketHideout_B1/scripts.pory"
	face_right
	step_end

EventScript_RocketHideout_B1_MovePlayer::
# 60 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 61 "data/maps/RocketHideout_B1/scripts.pory"
	hideobjectat 13, MAP_ROCKET_HIDEOUT_B1
# 62 "data/maps/RocketHideout_B1/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 63 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovementRocketHideout_B1_PlayerToGiovanni
# 64 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 65 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketHideout_B1_GiovanniSequence_One
# 66 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


# 69 "data/maps/RocketHideout_B1/scripts.pory"
MovementRocketHideout_B1_PlayerToGiovanni:
# 70 "data/maps/RocketHideout_B1/scripts.pory"
	emote_exclamation_mark
# 71 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 71 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 71 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 71 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 71 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 71 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
# 72 "data/maps/RocketHideout_B1/scripts.pory"
	walk_up
# 73 "data/maps/RocketHideout_B1/scripts.pory"
	walk_right
	step_end

EventScript_RocketHideout_B1_GiovanniSequence_One::
# 77 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 78 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox Giovanni_RocketHideout_B1_Intro
# 79 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 80 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement 10, Movement_RocketHideoutB1_Scientist_One
# 81 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 82 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_RocketHideout_B1_GiovanniSequence_One_Text_0
# 83 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 85 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookRightPlayer_RocketHideoutB1
# 86 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 87 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_GIOVANNI_ROCKETHIDEOUTB1_ONE, Giovanni_BattleOne_RocketHideout_B1_Intro, Giovanni_BattleOne_RocketHideout_B1_Outro, EventScript_RocketHideout_B1_GiovanniSequence_Two
# 88 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScript_RocketHideout_B1_GiovanniSequence_Two::
# 93 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookRightPlayer_RocketHideoutB1
# 94 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 95 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement 10, Movement_RocketHideoutB1_Scientist_One_Return
# 96 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 97 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement 12, Movement_RocketHideoutB1_Scientist_Two
# 98 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 101 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_GIOVANNI_ROCKETHIDEOUTB1_TWO, Giovanni_BattleTwo_RocketHideout_B1_Intro, Giovanni_BattleTwo_RocketHideout_B1_Outro, EventScript_RocketHideout_B1_GiovanniSequence_Three
	return


# 104 "data/maps/RocketHideout_B1/scripts.pory"
LookRightPlayer_RocketHideoutB1:
# 105 "data/maps/RocketHideout_B1/scripts.pory"
	face_right
	step_end

EventScript_RocketHideout_B1_GiovanniSequence_Three::
# 109 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookRightPlayer_RocketHideoutB1
# 110 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 111 "data/maps/RocketHideout_B1/scripts.pory"
	setflag FLAG_DYNAMAX_ALLOWED
# 113 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement 12, Movement_RocketHideoutB1_Scientist_Two_Return
# 114 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 115 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_RocketHideout_B1_GiovanniSequence_Three_Text_0
# 117 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 118 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_RocketHideout_B1_GiovanniSequence_Three_Text_1
# 119 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 120 "data/maps/RocketHideout_B1/scripts.pory"
	showobjectat 13, MAP_ROCKET_HIDEOUT_B1
# 121 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_RocketHideout_B1_GiovanniSequence_Three_Text_2
# 122 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 123 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_RocketHideout_B1_GiovanniSequence_Three_Text_3
# 124 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 125 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_GIOVANNI_ROCKETHIDEOUTB1_THREE, Giovanni_BattleThree_RocketHideout_B1_Intro, Giovanni_BattleThree_RocketHideout_B1_Outro, EventScript_RocketHideout_B1_GiovanniSequence_PostBattle
	return


EventScript_RocketHideout_B1_GiovanniSequence_PostBattle::
# 129 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 130 "data/maps/RocketHideout_B1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookRightPlayer_RocketHideoutB1
# 131 "data/maps/RocketHideout_B1/scripts.pory"
	waitmovement 0
# 132 "data/maps/RocketHideout_B1/scripts.pory"
	clearflag FLAG_DYNAMAX_ALLOWED
# 133 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_RocketHideout_B1_GiovanniSequence_PostBattle_Text_0
# 135 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 136 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox EventScript_RocketHideout_B1_GiovanniSequence_PostBattle_Text_1
# 138 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 139 "data/maps/RocketHideout_B1/scripts.pory"
	setflag FLAG_ROCKET_EVENT_COMPLETED
# 140 "data/maps/RocketHideout_B1/scripts.pory"
	clearflag FLAG_ROCKET_EVENT_ACTIVE
# 141 "data/maps/RocketHideout_B1/scripts.pory"
	setflag FLAG_MEWTWO_ISLAND_ACTIVE
# 142 "data/maps/RocketHideout_B1/scripts.pory"
	setvar VAR_ROCKET_ARC_STATE, 9
# 143 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


# 178 "data/maps/RocketHideout_B1/scripts.pory"
Movement_RocketHideoutB1_Scientist_One:
# 179 "data/maps/RocketHideout_B1/scripts.pory"
	walk_up
# 179 "data/maps/RocketHideout_B1/scripts.pory"
	walk_up
# 179 "data/maps/RocketHideout_B1/scripts.pory"
	walk_up
# 180 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
	step_end

# 182 "data/maps/RocketHideout_B1/scripts.pory"
Movement_RocketHideoutB1_Scientist_One_Return:
# 183 "data/maps/RocketHideout_B1/scripts.pory"
	walk_fast_right
# 184 "data/maps/RocketHideout_B1/scripts.pory"
	walk_fast_down
# 184 "data/maps/RocketHideout_B1/scripts.pory"
	walk_fast_down
# 184 "data/maps/RocketHideout_B1/scripts.pory"
	walk_fast_down
# 185 "data/maps/RocketHideout_B1/scripts.pory"
	face_up
	step_end

# 188 "data/maps/RocketHideout_B1/scripts.pory"
Movement_RocketHideoutB1_Scientist_Two:
# 189 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
# 189 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
# 190 "data/maps/RocketHideout_B1/scripts.pory"
	walk_down
# 191 "data/maps/RocketHideout_B1/scripts.pory"
	walk_left
	step_end

# 193 "data/maps/RocketHideout_B1/scripts.pory"
Movement_RocketHideoutB1_Scientist_Two_Return:
# 194 "data/maps/RocketHideout_B1/scripts.pory"
	walk_fast_up
# 194 "data/maps/RocketHideout_B1/scripts.pory"
	walk_fast_up
# 194 "data/maps/RocketHideout_B1/scripts.pory"
	walk_fast_up
# 195 "data/maps/RocketHideout_B1/scripts.pory"
	face_down
	step_end

EventScriptRocketOne_RocketHideoutB1::
# 199 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_ROCKETHIDEOUTB1_ONE, RocketOne_RocketHideoutB1_BattleIntro, RocketOne_RocketHideoutB1_BattleOutro, EventScript_RocketOne_PostBattle_RocketHideoutB1
# 200 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketOne_PostBattle_RocketHideoutB1
	return


EventScript_RocketOne_PostBattle_RocketHideoutB1::
# 204 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 205 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 206 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox RocketOne_RocketHideoutB1_BattleOutro
# 207 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 208 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScriptRocketTwo_RocketHideoutB1::
# 219 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_ROCKETHIDEOUTB1_TWO, RocketTwo_RocketHideoutB1_BattleIntro, RocketTwo_RocketHideoutB1_BattleOutro, EventScript_RocketTwo_PostBattle_RocketHideoutB1
# 220 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketTwo_PostBattle_RocketHideoutB1
	return


EventScript_RocketTwo_PostBattle_RocketHideoutB1::
# 224 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 225 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 226 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox RocketTwo_RocketHideoutB1_BattleOutro
# 227 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 228 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScriptRocketThree_RocketHideoutB1::
# 239 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_ROCKETHIDEOUTB1_THREE, RocketThree_RocketHideoutB1_BattleIntro, RocketThree_RocketHideoutB1_BattleOutro, EventScript_RocketThree_PostBattle_RocketHideoutB1
# 240 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketThree_PostBattle_RocketHideoutB1
	return


EventScript_RocketThree_PostBattle_RocketHideoutB1::
# 244 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 245 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 246 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox RocketThree_RocketHideoutB1_BattleOutro
# 247 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 248 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScriptRocketFour_RocketHideoutB1::
# 259 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_ROCKETHIDEOUTB1_FOUR, RocketFour_RocketHideoutB1_BattleIntro, RocketFour_RocketHideoutB1_BattleOutro, EventScript_RocketFour_PostBattle_RocketHideoutB1
# 260 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketFour_PostBattle_RocketHideoutB1
	return


EventScript_RocketFour_PostBattle_RocketHideoutB1::
# 264 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 265 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 266 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox RocketFour_RocketHideoutB1_BattleOutro
# 267 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 268 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScriptRocketFive_RocketHideoutB1::
# 279 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_ROCKETHIDEOUTB1_FIVE, RocketFive_RocketHideoutB1_BattleIntro, RocketFive_RocketHideoutB1_BattleOutro, EventScript_RocketFive_PostBattle_RocketHideoutB1
# 280 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketFive_PostBattle_RocketHideoutB1
	return


EventScript_RocketFive_PostBattle_RocketHideoutB1::
# 284 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 285 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 286 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox RocketFive_RocketHideoutB1_BattleOutro
# 287 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 288 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScriptRocketSix_RocketHideoutB1::
# 299 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_ROCKETHIDEOUTB1_SIX, RocketSix_RocketHideoutB1_BattleIntro, RocketSix_RocketHideoutB1_BattleOutro, EventScript_RocketSix_PostBattle_RocketHideoutB1
# 300 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketSix_PostBattle_RocketHideoutB1
	return


EventScript_RocketSix_PostBattle_RocketHideoutB1::
# 304 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 305 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 306 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox RocketSix_RocketHideoutB1_BattleOutro
# 307 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 308 "data/maps/RocketHideout_B1/scripts.pory"
	setflag FLAG_ROCKETB1_BASEMENT_GAUNTLET_BEAT
# 309 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScript_RocketHideout_B1_GiovanniSequence_One_Text_0:
# 82 "data/maps/RocketHideout_B1/scripts.pory"
	.string "YOU HAVE INTERFERED WITH OUR RESEARCH\n"
	.string "ENOUGH!$"

EventScript_RocketHideout_B1_GiovanniSequence_Three_Text_0:
# 115 "data/maps/RocketHideout_B1/scripts.pory"
	.string "GIOVANNI: With ease... you best my two\n"
	.string "most clever scientists. You best my gym\l"
	.string "leaders. And now you attempt to best\l"
	.string "me.$"

EventScript_RocketHideout_B1_GiovanniSequence_Three_Text_1:
# 118 "data/maps/RocketHideout_B1/scripts.pory"
	.string "GIOVANNI: MEWTWO. COME FORTH!$"

EventScript_RocketHideout_B1_GiovanniSequence_Three_Text_2:
# 121 "data/maps/RocketHideout_B1/scripts.pory"
	.string "MEWTWO: YES. MASTER.$"

EventScript_RocketHideout_B1_GiovanniSequence_Three_Text_3:
# 123 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Finally we shall see. My full power, using\n"
	.string "the tools we have created, against your\l"
	.string "power$"

EventScript_RocketHideout_B1_GiovanniSequence_PostBattle_Text_0:
# 133 "data/maps/RocketHideout_B1/scripts.pory"
	.string "GIOVANNI: So it se-$"

EventScript_RocketHideout_B1_GiovanniSequence_PostBattle_Text_1:
# 136 "data/maps/RocketHideout_B1/scripts.pory"
	.string "MEWTWO: YOU HUMANS HAVE USED POKEMON\n"
	.string "FOR THE WRONG PURPOSE. THIS CONFLICT,\l"
	.string "IT IS YOURS NOT OURS, THIS FINAL\l"
	.string "BATTLE HAS SHOWN ME... ALL HUMANS ARE\l"
	.string "HORRIBLE. I CANNOT ALLOW THIS TO\l"
	.string "CONTINUE!$"

Giovanni_RocketHideout_B1_Intro::
# 146 "data/maps/RocketHideout_B1/scripts.pory"
	.string "GIOVANNI: You have annoyed me. We were\n"
	.string "so close to dominating this Hoenn\l"
	.string "region... but you had to interfere,\l"
	.string "hadn't you? I'm done playing nice and\l"
	.string "fair with you. You better prepare to\l"
	.string "face some of our strongest cloned\l"
	.string "Pokemons and our latest tech. My\l"
	.string "scientists, take him on!$"

Giovanni_RocketHideout_B1_Second::
# 150 "data/maps/RocketHideout_B1/scripts.pory"
	.string "$"

Giovanni_RocketHideout_B1_Third::
# 154 "data/maps/RocketHideout_B1/scripts.pory"
	.string "$"

Giovanni_BattleOne_RocketHideout_B1_Intro::
# 158 "data/maps/RocketHideout_B1/scripts.pory"
	.string "I'M GOING TO END YOU!$"

Giovanni_BattleOne_RocketHideout_B1_Outro::
# 161 "data/maps/RocketHideout_B1/scripts.pory"
	.string "No... no! NO!$"

Giovanni_BattleTwo_RocketHideout_B1_Intro::
# 164 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Bwahahaha, no rest for you!$"

Giovanni_BattleTwo_RocketHideout_B1_Outro::
# 167 "data/maps/RocketHideout_B1/scripts.pory"
	.string "In-incredible...$"

Giovanni_BattleThree_RocketHideout_B1_Intro::
# 171 "data/maps/RocketHideout_B1/scripts.pory"
	.string "This ends here!$"

Giovanni_BattleThree_RocketHideout_B1_Outro::
# 174 "data/maps/RocketHideout_B1/scripts.pory"
	.string "...$"

RocketOne_RocketHideoutB1_BattleIntro::
# 211 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Huh, you are what they are talking\n"
	.string "about?$"

RocketOne_RocketHideoutB1_BattleOutro::
# 214 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Looks decieve...$"

RocketTwo_RocketHideoutB1_BattleIntro::
# 231 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Huh, you are what they are talking\n"
	.string "about?$"

RocketTwo_RocketHideoutB1_BattleOutro::
# 234 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Looks decieve...$"

RocketThree_RocketHideoutB1_BattleIntro::
# 251 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Huh, you are what they are talking\n"
	.string "about?$"

RocketThree_RocketHideoutB1_BattleOutro::
# 254 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Looks decieve...$"

RocketFour_RocketHideoutB1_BattleIntro::
# 271 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Huh, you are what they are talking\n"
	.string "about?$"

RocketFour_RocketHideoutB1_BattleOutro::
# 274 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Looks decieve...$"

RocketFive_RocketHideoutB1_BattleIntro::
# 291 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Huh, you are what they are talking\n"
	.string "about?$"

RocketFive_RocketHideoutB1_BattleOutro::
# 294 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Looks decieve...$"

RocketSix_RocketHideoutB1_BattleIntro::
# 312 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Huh, you are what they are talking\n"
	.string "about?$"

RocketSix_RocketHideoutB1_BattleOutro::
# 315 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Looks decieve...$"
