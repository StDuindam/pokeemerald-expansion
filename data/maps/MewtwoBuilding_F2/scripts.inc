MewtwoBuilding_F2_MapScripts::
# 2 "data/maps/MewtwoBuilding_F2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EventScript_Mewtwo_Building_F2_OnTransition
	.byte 0


EventScript_Mewtwo_Building_F2_OnTransition::
# 6 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_ONE
# 7 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_TWO
# 8 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_THREE
# 9 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_FOUR
# 10 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_FIVE
# 11 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_SIX
# 12 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 0
	goto_if_eq EventScript_Mewtwo_Building_F2_OnTransition_2
EventScript_Mewtwo_Building_F2_OnTransition_1:
# 15 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 1
	goto_if_eq EventScript_Mewtwo_Building_F2_OnTransition_5
EventScript_Mewtwo_Building_F2_OnTransition_4:
# 18 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 2
	goto_if_eq EventScript_Mewtwo_Building_F2_OnTransition_8
EventScript_Mewtwo_Building_F2_OnTransition_7:
# 21 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 3
	goto_if_eq EventScript_Mewtwo_Building_F2_OnTransition_11
EventScript_Mewtwo_Building_F2_OnTransition_10:
# 24 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 4
	goto_if_eq EventScript_Mewtwo_Building_F2_OnTransition_14
EventScript_Mewtwo_Building_F2_OnTransition_13:
# 27 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 5
	goto_if_eq EventScript_Mewtwo_Building_F2_OnTransition_16
	return

EventScript_Mewtwo_Building_F2_OnTransition_2:
# 13 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_MEWTWO_CHALLENGE_BEAT_ONE
	goto EventScript_Mewtwo_Building_F2_OnTransition_1

EventScript_Mewtwo_Building_F2_OnTransition_5:
# 16 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_MEWTWO_CHALLENGE_BEAT_TWO
	goto EventScript_Mewtwo_Building_F2_OnTransition_4

EventScript_Mewtwo_Building_F2_OnTransition_8:
# 19 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_MEWTWO_CHALLENGE_BEAT_THREE
	goto EventScript_Mewtwo_Building_F2_OnTransition_7

EventScript_Mewtwo_Building_F2_OnTransition_11:
# 22 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_MEWTWO_CHALLENGE_BEAT_FOUR
	goto EventScript_Mewtwo_Building_F2_OnTransition_10

EventScript_Mewtwo_Building_F2_OnTransition_14:
# 25 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_MEWTWO_CHALLENGE_BEAT_FIVE
	goto EventScript_Mewtwo_Building_F2_OnTransition_13

EventScript_Mewtwo_Building_F2_OnTransition_16:
# 28 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_MEWTWO_CHALLENGE_BEAT_SIX
	return


EventScript_Mewtwo_F2_NurseJoyChallengeHandler::
# 32 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 33 "data/maps/MewtwoBuilding_F2/scripts.pory"
	faceplayer
# 34 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_0, MSGBOX_YESNO
# 35 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Mewtwo_F2_NurseJoyChallengeHandler_2
# 145 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_15
# 146 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
EventScript_Mewtwo_F2_NurseJoyChallengeHandler_1:
# 148 "data/maps/MewtwoBuilding_F2/scripts.pory"
	releaseall
	return

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_2:
# 36 "data/maps/MewtwoBuilding_F2/scripts.pory"
	call EventScript_Mewtwo_F2_ReadyPlayerMovement
# 37 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 0
	goto_if_eq EventScript_Mewtwo_F2_NurseJoyChallengeHandler_6
EventScript_Mewtwo_F2_NurseJoyChallengeHandler_5:
# 53 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 1
	goto_if_eq EventScript_Mewtwo_F2_NurseJoyChallengeHandler_9
EventScript_Mewtwo_F2_NurseJoyChallengeHandler_8:
# 69 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 2
	goto_if_eq EventScript_Mewtwo_F2_NurseJoyChallengeHandler_12
EventScript_Mewtwo_F2_NurseJoyChallengeHandler_11:
# 85 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 3
	goto_if_eq EventScript_Mewtwo_F2_NurseJoyChallengeHandler_15
EventScript_Mewtwo_F2_NurseJoyChallengeHandler_14:
# 101 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 4
	goto_if_eq EventScript_Mewtwo_F2_NurseJoyChallengeHandler_18
EventScript_Mewtwo_F2_NurseJoyChallengeHandler_17:
# 117 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 5
	goto_if_eq EventScript_Mewtwo_F2_NurseJoyChallengeHandler_21
EventScript_Mewtwo_F2_NurseJoyChallengeHandler_20:
# 133 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 6
	goto_if_eq EventScript_Mewtwo_F2_NurseJoyChallengeHandler_23
	goto EventScript_Mewtwo_F2_NurseJoyChallengeHandler_1

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_6:
# 38 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_1
# 39 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 40 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_MEWTWO_CHALLENGE_BEAT_ONE
# 41 "data/maps/MewtwoBuilding_F2/scripts.pory"
	showobjectat 4, MAP_MEWTWO_BUILDING_F2
# 42 "data/maps/MewtwoBuilding_F2/scripts.pory"
	releaseall
# 43 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 44 "data/maps/MewtwoBuilding_F2/scripts.pory"
	applymovement 4, Movement_MewtwoF2_FoeWalkToPlayer
# 45 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmovement 0
# 46 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_2
# 47 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 49 "data/maps/MewtwoBuilding_F2/scripts.pory"
	cleartrainerflag TRAINER_MEWTWOISLAND_ONE
# 50 "data/maps/MewtwoBuilding_F2/scripts.pory"
	trainerbattle_single TRAINER_MEWTWOISLAND_ONE, MewtwoIsland_Opponent_One_Intro, MewtwoIsland_Opponent_One_Outro, EventScript_OpponentOne_PostBattle_MewtwoIsland
# 51 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	goto EventScript_Mewtwo_F2_NurseJoyChallengeHandler_5

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_9:
# 54 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_3
# 55 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 56 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_MEWTWO_CHALLENGE_BEAT_TWO
# 57 "data/maps/MewtwoBuilding_F2/scripts.pory"
	showobjectat 7, MAP_MEWTWO_BUILDING_F2
# 58 "data/maps/MewtwoBuilding_F2/scripts.pory"
	releaseall
# 59 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 60 "data/maps/MewtwoBuilding_F2/scripts.pory"
	applymovement 7, Movement_MewtwoF2_FoeWalkToPlayer
# 61 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmovement 0
# 62 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_4
# 63 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 65 "data/maps/MewtwoBuilding_F2/scripts.pory"
	cleartrainerflag TRAINER_MEWTWOISLAND_TWO
# 66 "data/maps/MewtwoBuilding_F2/scripts.pory"
	trainerbattle_single TRAINER_MEWTWOISLAND_TWO, MewtwoIsland_Opponent_Two_Intro, MewtwoIsland_Opponent_Two_Outro, EventScript_OpponentTwo_PostBattle_MewtwoIsland
# 67 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	goto EventScript_Mewtwo_F2_NurseJoyChallengeHandler_8

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_12:
# 70 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_5
# 71 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 72 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_MEWTWO_CHALLENGE_BEAT_THREE
# 73 "data/maps/MewtwoBuilding_F2/scripts.pory"
	showobjectat 3, MAP_MEWTWO_BUILDING_F2
# 74 "data/maps/MewtwoBuilding_F2/scripts.pory"
	releaseall
# 75 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 76 "data/maps/MewtwoBuilding_F2/scripts.pory"
	applymovement 3, Movement_MewtwoF2_FoeWalkToPlayer
# 77 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmovement 0
# 78 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_6
# 79 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 81 "data/maps/MewtwoBuilding_F2/scripts.pory"
	cleartrainerflag TRAINER_MEWTWOISLAND_THREE
# 82 "data/maps/MewtwoBuilding_F2/scripts.pory"
	trainerbattle_single TRAINER_MEWTWOISLAND_THREE, MewtwoIsland_Opponent_Three_Intro, MewtwoIsland_Opponent_Three_Outro, EventScript_OpponentThree_PostBattle_MewtwoIsland
# 83 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	goto EventScript_Mewtwo_F2_NurseJoyChallengeHandler_11

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_15:
# 86 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_7
# 87 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 88 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_MEWTWO_CHALLENGE_BEAT_FOUR
# 89 "data/maps/MewtwoBuilding_F2/scripts.pory"
	showobjectat 8, MAP_MEWTWO_BUILDING_F2
# 90 "data/maps/MewtwoBuilding_F2/scripts.pory"
	releaseall
# 91 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 92 "data/maps/MewtwoBuilding_F2/scripts.pory"
	applymovement 8, Movement_MewtwoF2_FoeWalkToPlayer
# 93 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmovement 0
# 94 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_8
# 95 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 97 "data/maps/MewtwoBuilding_F2/scripts.pory"
	cleartrainerflag TRAINER_MEWTWOISLAND_FOUR
# 98 "data/maps/MewtwoBuilding_F2/scripts.pory"
	trainerbattle_single TRAINER_MEWTWOISLAND_FOUR, MewtwoIsland_Opponent_Four_Intro, MewtwoIsland_Opponent_Four_Outro, EventScript_OpponentFour_PostBattle_MewtwoIsland
# 99 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	goto EventScript_Mewtwo_F2_NurseJoyChallengeHandler_14

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_18:
# 102 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_9
# 103 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 104 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_MEWTWO_CHALLENGE_BEAT_FIVE
# 105 "data/maps/MewtwoBuilding_F2/scripts.pory"
	showobjectat 2, MAP_MEWTWO_BUILDING_F2
# 106 "data/maps/MewtwoBuilding_F2/scripts.pory"
	releaseall
# 107 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 108 "data/maps/MewtwoBuilding_F2/scripts.pory"
	applymovement 2, Movement_MewtwoF2_FoeWalkToPlayer
# 109 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmovement 0
# 110 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_10
# 111 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 113 "data/maps/MewtwoBuilding_F2/scripts.pory"
	cleartrainerflag TRAINER_MEWTWOISLAND_FIVE
# 114 "data/maps/MewtwoBuilding_F2/scripts.pory"
	trainerbattle_single TRAINER_MEWTWOISLAND_FIVE, MewtwoIsland_Opponent_Five_Intro, MewtwoIsland_Opponent_Five_Outro, EventScript_OpponentFive_PostBattle_MewtwoIsland
# 115 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	goto EventScript_Mewtwo_F2_NurseJoyChallengeHandler_17

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_21:
# 118 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_11
# 119 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 120 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_MEWTWO_CHALLENGE_BEAT_SIX
# 121 "data/maps/MewtwoBuilding_F2/scripts.pory"
	showobjectat 5, MAP_MEWTWO_BUILDING_F2
# 122 "data/maps/MewtwoBuilding_F2/scripts.pory"
	releaseall
# 123 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 124 "data/maps/MewtwoBuilding_F2/scripts.pory"
	applymovement 5, Movement_MewtwoF2_FoeWalkToPlayer
# 125 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmovement 0
# 126 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_12
# 127 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 129 "data/maps/MewtwoBuilding_F2/scripts.pory"
	cleartrainerflag TRAINER_MEWTWOISLAND_SIX
# 130 "data/maps/MewtwoBuilding_F2/scripts.pory"
	trainerbattle_single TRAINER_MEWTWOISLAND_SIX, MewtwoIsland_Opponent_Six_Intro, MewtwoIsland_Opponent_Six_Outro, EventScript_OpponentSix_PostBattle_MewtwoIsland
# 131 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	goto EventScript_Mewtwo_F2_NurseJoyChallengeHandler_20

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_23:
# 134 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 135 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_13
# 136 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 137 "data/maps/MewtwoBuilding_F2/scripts.pory"
	applymovement 6, Movement_MewtwoF2_MewtwoWalkToPlayer
# 138 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_14
# 139 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 140 "data/maps/MewtwoBuilding_F2/scripts.pory"
	cleartrainerflag TRAINER_MEWTWOISLAND_SEVEN
# 141 "data/maps/MewtwoBuilding_F2/scripts.pory"
	trainerbattle_single TRAINER_MEWTWOISLAND_SEVEN, MewtwoIsland_Opponent_Seven_Intro, MewtwoIsland_Opponent_Seven_Outro, EventScript_OpponentSeven_PostBattle_MewtwoIsland
# 142 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	goto EventScript_Mewtwo_F2_NurseJoyChallengeHandler_1


EventScript_Mewtwo_F2_ReadyPlayerMovement::
# 152 "data/maps/MewtwoBuilding_F2/scripts.pory"
	applymovement 2, Movement_MewtwoF2_JoyMoveOutOfTheWay
# 153 "data/maps/MewtwoBuilding_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MewtwoF2_PlayerWalkToArena
# 154 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmovement 0
	return


# 157 "data/maps/MewtwoBuilding_F2/scripts.pory"
Movement_MewtwoF2_MewtwoWalkToPlayer:
# 158 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_slow_down
# 159 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_slow_right
# 160 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_slow_down
# 160 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_slow_down
# 161 "data/maps/MewtwoBuilding_F2/scripts.pory"
	face_left
	step_end

# 164 "data/maps/MewtwoBuilding_F2/scripts.pory"
Movement_MewtwoF2_JoyMoveOutOfTheWay:
# 165 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_right
# 166 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_up
# 167 "data/maps/MewtwoBuilding_F2/scripts.pory"
	face_right
	step_end

# 170 "data/maps/MewtwoBuilding_F2/scripts.pory"
Movement_MewtwoF2_PlayerWalkToArena:
# 171 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_right
# 171 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_right
# 171 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_right
# 171 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_right
	step_end

# 174 "data/maps/MewtwoBuilding_F2/scripts.pory"
Movement_MewtwoF2_FoeWalkToPlayer:
# 175 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_down
# 175 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_down
# 175 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_down
# 175 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_down
# 176 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_left
# 176 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_left
# 176 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_left
# 176 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_left
# 176 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_left
	step_end

EventScript_OpponentOne_PostBattle_MewtwoIsland::
# 180 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 181 "data/maps/MewtwoBuilding_F2/scripts.pory"
	faceplayer
# 182 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_OpponentOne_PostBattle_MewtwoIsland_Text_0
# 183 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 184 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_ONE
# 185 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setvar VAR_MEWTWO_TOURNEY_STATE, 1
# 186 "data/maps/MewtwoBuilding_F2/scripts.pory"
	warpteleport MAP_MEWTWO_BUILDING_F3, 0
# 187 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	return


EventScript_OpponentTwo_PostBattle_MewtwoIsland::
# 198 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 199 "data/maps/MewtwoBuilding_F2/scripts.pory"
	faceplayer
# 200 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_OpponentTwo_PostBattle_MewtwoIsland_Text_0
# 201 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 202 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_TWO
# 203 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setvar VAR_MEWTWO_TOURNEY_STATE, 2
# 204 "data/maps/MewtwoBuilding_F2/scripts.pory"
	warpteleport MAP_MEWTWO_BUILDING_F3, 0
# 205 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	return


EventScript_OpponentThree_PostBattle_MewtwoIsland::
# 216 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 217 "data/maps/MewtwoBuilding_F2/scripts.pory"
	faceplayer
# 218 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_OpponentThree_PostBattle_MewtwoIsland_Text_0
# 219 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 220 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_THREE
# 221 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setvar VAR_MEWTWO_TOURNEY_STATE, 3
# 222 "data/maps/MewtwoBuilding_F2/scripts.pory"
	warpteleport MAP_MEWTWO_BUILDING_F3, 0
# 223 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	return


EventScript_OpponentFour_PostBattle_MewtwoIsland::
# 234 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 235 "data/maps/MewtwoBuilding_F2/scripts.pory"
	faceplayer
# 236 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_OpponentFour_PostBattle_MewtwoIsland_Text_0
# 237 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 238 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_FOUR
# 239 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setvar VAR_MEWTWO_TOURNEY_STATE, 4
# 240 "data/maps/MewtwoBuilding_F2/scripts.pory"
	warpteleport MAP_MEWTWO_BUILDING_F3, 0
# 241 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	return


EventScript_OpponentFive_PostBattle_MewtwoIsland::
# 252 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 253 "data/maps/MewtwoBuilding_F2/scripts.pory"
	faceplayer
# 254 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_OpponentFive_PostBattle_MewtwoIsland_Text_0
# 255 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 256 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_FIVE
# 257 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setvar VAR_MEWTWO_TOURNEY_STATE, 5
# 258 "data/maps/MewtwoBuilding_F2/scripts.pory"
	warpteleport MAP_MEWTWO_BUILDING_F3, 0
# 259 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	return


EventScript_OpponentSix_PostBattle_MewtwoIsland::
# 270 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 271 "data/maps/MewtwoBuilding_F2/scripts.pory"
	faceplayer
# 272 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_OpponentSix_PostBattle_MewtwoIsland_Text_0
# 273 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 274 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_SIX
# 275 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setvar VAR_MEWTWO_TOURNEY_STATE, 6
# 276 "data/maps/MewtwoBuilding_F2/scripts.pory"
	warpteleport MAP_MEWTWO_BUILDING_F3, 0
# 277 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	return


EventScript_OpponentSeven_PostBattle_MewtwoIsland::
# 288 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 289 "data/maps/MewtwoBuilding_F2/scripts.pory"
	faceplayer
# 290 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_OpponentSeven_PostBattle_MewtwoIsland_Text_0
# 291 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 292 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_SEVEN
# 293 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setvar VAR_MEWTWO_TOURNEY_STATE, 7
# 294 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_BEAT
# 295 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_POST_MEWTWOEVENT
# 296 "data/maps/MewtwoBuilding_F2/scripts.pory"
	warpteleport MAP_LITTLEROOT_TOWN, 0
# 297 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	return


EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_0:
# 34 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "Ready to perform for my master?$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_1:
# 38 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: For your first opponent, you\n"
	.string "will face Giovanni. This time I am in\l"
	.string "control of him.$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_2:
# 46 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "GIOVANNI: This is my chance at\n"
	.string "redemption!$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_3:
# 54 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: This time you will battle an old\n"
	.string "acquintance of yourself. Let's see this\l"
	.string "'spirit' when you like your opponent.$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_4:
# 62 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "STEVEN: We got to show Mewtwo the true\n"
	.string "meaning of our bond with Pokemon\l"
	.string "{PLAYER}!$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_5:
# 70 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: Show me more.$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_6:
# 78 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MAXIE: Mewtwo has given me so much\n"
	.string "power!$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_7:
# 86 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: What if the decks are stacked\n"
	.string "against you?$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_8:
# 94 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "ANONA: As a legendary collector, Mewtwo\n"
	.string "has provided me with some great power.$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_9:
# 102 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: YOUR BOND SHALL BE BROKEN!$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_10:
# 110 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "ARCHIE: {PLAYER}, you have taken my\n"
	.string "everything! I will not hold back!$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_11:
# 118 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: You have gotten so far... but it\n"
	.string "ends here, and with it I shall prove\l"
	.string "that Humans are terrible to Pokemon!$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_12:
# 126 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "RED: ...$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_13:
# 135 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: At last, we shall battle.$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_14:
# 138 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: {PLAYER}... You have confused\n"
	.string "me. I NEED to feel what it is like to\l"
	.string "battle against you and your Pokemon.\l"
	.string "PREPARE YOURSELF!$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_15:
# 145 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "How sad.$"

EventScript_OpponentOne_PostBattle_MewtwoIsland_Text_0:
# 182 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: Impressive first showing. Using\n"
	.string "your Pokemon like that... it looked like\l"
	.string "they enjoyed fighting with you. But\l"
	.string "that cannot be.$"

EventScript_OpponentTwo_PostBattle_MewtwoIsland_Text_0:
# 200 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: The two of you... after such a\n"
	.string "battle... still friends...$"

EventScript_OpponentThree_PostBattle_MewtwoIsland_Text_0:
# 218 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: You cannot keep hiding your\n"
	.string "true colours...$"

EventScript_OpponentFour_PostBattle_MewtwoIsland_Text_0:
# 236 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: Even still... you overcome the\n"
	.string "challenge... what looks like with\l"
	.string "respect...$"

EventScript_OpponentFive_PostBattle_MewtwoIsland_Text_0:
# 254 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: How long will you keep going...$"

EventScript_OpponentSix_PostBattle_MewtwoIsland_Text_0:
# 272 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: It seems like... NO IT CANNOT\n"
	.string "BE! I WILL END THIS MYSELF!$"

EventScript_OpponentSeven_PostBattle_MewtwoIsland_Text_0:
# 290 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: You have shown me... {PLAYER},\n"
	.string "that Pokemon and humans can live side\l"
	.string "by side. Thank you. This bond you and\l"
	.string "your Pokemon have has given me hope.\l"
	.string "Hope for the future of Hoenn, hope for\l"
	.string "the future of the relationship between\l"
	.string "Pokemon and Humans. I shall undo what I\l"
	.string "have caused.$"

MewtwoIsland_Opponent_One_Intro::
# 190 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "You won't win this time!$"

MewtwoIsland_Opponent_One_Outro::
# 193 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "I'm bested again.$"

MewtwoIsland_Opponent_Two_Intro::
# 208 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "Let's give our all!$"

MewtwoIsland_Opponent_Two_Outro::
# 211 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "Amazing!$"

MewtwoIsland_Opponent_Three_Intro::
# 226 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "You will not beat Team Magma again!$"

MewtwoIsland_Opponent_Three_Outro::
# 229 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "Argh...$"

MewtwoIsland_Opponent_Four_Intro::
# 244 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "Let's make this fight Legendary!$"

MewtwoIsland_Opponent_Four_Outro::
# 247 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "Legendary indeed...$"

MewtwoIsland_Opponent_Five_Intro::
# 262 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "I'm coming at you with the full power of\n"
	.string "the sea!$"

MewtwoIsland_Opponent_Five_Outro::
# 265 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "It still wasn't enough.$"

MewtwoIsland_Opponent_Six_Intro::
# 280 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "...$"

MewtwoIsland_Opponent_Six_Outro::
# 283 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "...$"

MewtwoIsland_Opponent_Seven_Intro::
# 300 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "I WANT TO FEEL IT!$"

MewtwoIsland_Opponent_Seven_Outro::
# 303 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "It's over.$"
