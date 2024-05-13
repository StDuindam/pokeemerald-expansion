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
	msgbox EventScript_RocketHideout_B1_MovePlayer_Text_0
# 62 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 63 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScript_RocketHideout_B1_GiovanniSequence::
	return


EventScriptRocketOne_RocketHideoutB1::
# 71 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_ROCKETHIDEOUTB1_ONE, RocketOne_RocketHideoutB1_BattleIntro, RocketOne_RocketHideoutB1_BattleOutro, EventScript_RocketOne_PostBattle_RocketHideoutB1
# 72 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketOne_PostBattle_RocketHideoutB1
	return


EventScript_RocketOne_PostBattle_RocketHideoutB1::
# 76 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 77 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 78 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox RocketOne_RocketHideoutB1_BattleOutro
# 79 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 80 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScriptRocketTwo_RocketHideoutB1::
# 91 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_ROCKETHIDEOUTB1_TWO, RocketTwo_RocketHideoutB1_BattleIntro, RocketTwo_RocketHideoutB1_BattleOutro, EventScript_RocketTwo_PostBattle_RocketHideoutB1
# 92 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketTwo_PostBattle_RocketHideoutB1
	return


EventScript_RocketTwo_PostBattle_RocketHideoutB1::
# 96 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 97 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 98 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox RocketTwo_RocketHideoutB1_BattleOutro
# 99 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 100 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScriptRocketThree_RocketHideoutB1::
# 111 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_ROCKETHIDEOUTB1_THREE, RocketThree_RocketHideoutB1_BattleIntro, RocketThree_RocketHideoutB1_BattleOutro, EventScript_RocketThree_PostBattle_RocketHideoutB1
# 112 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketThree_PostBattle_RocketHideoutB1
	return


EventScript_RocketThree_PostBattle_RocketHideoutB1::
# 116 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 117 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 118 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox RocketThree_RocketHideoutB1_BattleOutro
# 119 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 120 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScriptRocketFour_RocketHideoutB1::
# 131 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_ROCKETHIDEOUTB1_FOUR, RocketFour_RocketHideoutB1_BattleIntro, RocketFour_RocketHideoutB1_BattleOutro, EventScript_RocketFour_PostBattle_RocketHideoutB1
# 132 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketFour_PostBattle_RocketHideoutB1
	return


EventScript_RocketFour_PostBattle_RocketHideoutB1::
# 136 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 137 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 138 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox RocketFour_RocketHideoutB1_BattleOutro
# 139 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 140 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScriptRocketFive_RocketHideoutB1::
# 151 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_ROCKETHIDEOUTB1_FIVE, RocketFive_RocketHideoutB1_BattleIntro, RocketFive_RocketHideoutB1_BattleOutro, EventScript_RocketFive_PostBattle_RocketHideoutB1
# 152 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketFive_PostBattle_RocketHideoutB1
	return


EventScript_RocketFive_PostBattle_RocketHideoutB1::
# 156 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 157 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 158 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox RocketFive_RocketHideoutB1_BattleOutro
# 159 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 160 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScriptRocketSix_RocketHideoutB1::
# 171 "data/maps/RocketHideout_B1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_ROCKETHIDEOUTB1_SIX, RocketSix_RocketHideoutB1_BattleIntro, RocketSix_RocketHideoutB1_BattleOutro, EventScript_RocketSix_PostBattle_RocketHideoutB1
# 172 "data/maps/RocketHideout_B1/scripts.pory"
	call EventScript_RocketSix_PostBattle_RocketHideoutB1
	return


EventScript_RocketSix_PostBattle_RocketHideoutB1::
# 176 "data/maps/RocketHideout_B1/scripts.pory"
	lock
# 177 "data/maps/RocketHideout_B1/scripts.pory"
	faceplayer
# 178 "data/maps/RocketHideout_B1/scripts.pory"
	msgbox RocketSix_RocketHideoutB1_BattleOutro
# 179 "data/maps/RocketHideout_B1/scripts.pory"
	waitmessage
# 180 "data/maps/RocketHideout_B1/scripts.pory"
	setflag FLAG_ROCKETB1_BASEMENT_GAUNTLET_BEAT
# 181 "data/maps/RocketHideout_B1/scripts.pory"
	release
	return


EventScript_RocketHideout_B1_MovePlayer_Text_0:
# 61 "data/maps/RocketHideout_B1/scripts.pory"
	.string "YOU SENSE DANGER$"

RocketOne_RocketHideoutB1_BattleIntro::
# 83 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Huh, you are what they are talking\n"
	.string "about?$"

RocketOne_RocketHideoutB1_BattleOutro::
# 86 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Looks decieve...$"

RocketTwo_RocketHideoutB1_BattleIntro::
# 103 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Huh, you are what they are talking\n"
	.string "about?$"

RocketTwo_RocketHideoutB1_BattleOutro::
# 106 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Looks decieve...$"

RocketThree_RocketHideoutB1_BattleIntro::
# 123 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Huh, you are what they are talking\n"
	.string "about?$"

RocketThree_RocketHideoutB1_BattleOutro::
# 126 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Looks decieve...$"

RocketFour_RocketHideoutB1_BattleIntro::
# 143 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Huh, you are what they are talking\n"
	.string "about?$"

RocketFour_RocketHideoutB1_BattleOutro::
# 146 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Looks decieve...$"

RocketFive_RocketHideoutB1_BattleIntro::
# 163 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Huh, you are what they are talking\n"
	.string "about?$"

RocketFive_RocketHideoutB1_BattleOutro::
# 166 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Looks decieve...$"

RocketSix_RocketHideoutB1_BattleIntro::
# 184 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Huh, you are what they are talking\n"
	.string "about?$"

RocketSix_RocketHideoutB1_BattleOutro::
# 187 "data/maps/RocketHideout_B1/scripts.pory"
	.string "Looks decieve...$"
