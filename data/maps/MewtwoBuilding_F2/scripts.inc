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
# 138 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_15
# 139 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
EventScript_Mewtwo_F2_NurseJoyChallengeHandler_1:
# 141 "data/maps/MewtwoBuilding_F2/scripts.pory"
	releaseall
	return

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_2:
# 36 "data/maps/MewtwoBuilding_F2/scripts.pory"
	call EventScript_Mewtwo_F2_ReadyPlayerMovement
# 37 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 0
	goto_if_eq EventScript_Mewtwo_F2_NurseJoyChallengeHandler_6
EventScript_Mewtwo_F2_NurseJoyChallengeHandler_5:
# 52 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 1
	goto_if_eq EventScript_Mewtwo_F2_NurseJoyChallengeHandler_9
EventScript_Mewtwo_F2_NurseJoyChallengeHandler_8:
# 67 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 2
	goto_if_eq EventScript_Mewtwo_F2_NurseJoyChallengeHandler_12
EventScript_Mewtwo_F2_NurseJoyChallengeHandler_11:
# 82 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 3
	goto_if_eq EventScript_Mewtwo_F2_NurseJoyChallengeHandler_15
EventScript_Mewtwo_F2_NurseJoyChallengeHandler_14:
# 97 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 4
	goto_if_eq EventScript_Mewtwo_F2_NurseJoyChallengeHandler_18
EventScript_Mewtwo_F2_NurseJoyChallengeHandler_17:
# 112 "data/maps/MewtwoBuilding_F2/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 5
	goto_if_eq EventScript_Mewtwo_F2_NurseJoyChallengeHandler_21
EventScript_Mewtwo_F2_NurseJoyChallengeHandler_20:
# 127 "data/maps/MewtwoBuilding_F2/scripts.pory"
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
	trainerbattle_single TRAINER_MEWTWOISLAND_ONE, MewtwoIsland_Opponent_One_Intro, MewtwoIsland_Opponent_One_Outro, EventScript_OpponentOne_PostBattle_MewtwoIsland
# 50 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	goto EventScript_Mewtwo_F2_NurseJoyChallengeHandler_5

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_9:
# 53 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_3
# 54 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 55 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_MEWTWO_CHALLENGE_BEAT_TWO
# 56 "data/maps/MewtwoBuilding_F2/scripts.pory"
	showobjectat 7, MAP_MEWTWO_BUILDING_F2
# 57 "data/maps/MewtwoBuilding_F2/scripts.pory"
	releaseall
# 58 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 59 "data/maps/MewtwoBuilding_F2/scripts.pory"
	applymovement 7, Movement_MewtwoF2_FoeWalkToPlayer
# 60 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmovement 0
# 61 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_4
# 62 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 64 "data/maps/MewtwoBuilding_F2/scripts.pory"
	trainerbattle_single TRAINER_MEWTWOISLAND_TWO, MewtwoIsland_Opponent_Two_Intro, MewtwoIsland_Opponent_Two_Outro, EventScript_OpponentTwo_PostBattle_MewtwoIsland
# 65 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	goto EventScript_Mewtwo_F2_NurseJoyChallengeHandler_8

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_12:
# 68 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_5
# 69 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 70 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_MEWTWO_CHALLENGE_BEAT_THREE
# 71 "data/maps/MewtwoBuilding_F2/scripts.pory"
	showobjectat 3, MAP_MEWTWO_BUILDING_F2
# 72 "data/maps/MewtwoBuilding_F2/scripts.pory"
	releaseall
# 73 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 74 "data/maps/MewtwoBuilding_F2/scripts.pory"
	applymovement 3, Movement_MewtwoF2_FoeWalkToPlayer
# 75 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmovement 0
# 76 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_6
# 77 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 79 "data/maps/MewtwoBuilding_F2/scripts.pory"
	trainerbattle_single TRAINER_MEWTWOISLAND_THREE, MewtwoIsland_Opponent_Three_Intro, MewtwoIsland_Opponent_Three_Outro, EventScript_OpponentThree_PostBattle_MewtwoIsland
# 80 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	goto EventScript_Mewtwo_F2_NurseJoyChallengeHandler_11

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_15:
# 83 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_7
# 84 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 85 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_MEWTWO_CHALLENGE_BEAT_FOUR
# 86 "data/maps/MewtwoBuilding_F2/scripts.pory"
	showobjectat 8, MAP_MEWTWO_BUILDING_F2
# 87 "data/maps/MewtwoBuilding_F2/scripts.pory"
	releaseall
# 88 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 89 "data/maps/MewtwoBuilding_F2/scripts.pory"
	applymovement 8, Movement_MewtwoF2_FoeWalkToPlayer
# 90 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmovement 0
# 91 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_8
# 92 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 94 "data/maps/MewtwoBuilding_F2/scripts.pory"
	trainerbattle_single TRAINER_MEWTWOISLAND_FOUR, MewtwoIsland_Opponent_Four_Intro, MewtwoIsland_Opponent_Four_Outro, EventScript_OpponentFour_PostBattle_MewtwoIsland
# 95 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	goto EventScript_Mewtwo_F2_NurseJoyChallengeHandler_14

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_18:
# 98 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_9
# 99 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 100 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_MEWTWO_CHALLENGE_BEAT_FIVE
# 101 "data/maps/MewtwoBuilding_F2/scripts.pory"
	showobjectat 2, MAP_MEWTWO_BUILDING_F2
# 102 "data/maps/MewtwoBuilding_F2/scripts.pory"
	releaseall
# 103 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 104 "data/maps/MewtwoBuilding_F2/scripts.pory"
	applymovement 2, Movement_MewtwoF2_FoeWalkToPlayer
# 105 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmovement 0
# 106 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_10
# 107 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 109 "data/maps/MewtwoBuilding_F2/scripts.pory"
	trainerbattle_single TRAINER_MEWTWOISLAND_FIVE, MewtwoIsland_Opponent_Five_Intro, MewtwoIsland_Opponent_Five_Outro, EventScript_OpponentFive_PostBattle_MewtwoIsland
# 110 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	goto EventScript_Mewtwo_F2_NurseJoyChallengeHandler_17

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_21:
# 113 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_11
# 114 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 115 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_MEWTWO_CHALLENGE_BEAT_SIX
# 116 "data/maps/MewtwoBuilding_F2/scripts.pory"
	showobjectat 5, MAP_MEWTWO_BUILDING_F2
# 117 "data/maps/MewtwoBuilding_F2/scripts.pory"
	releaseall
# 118 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 119 "data/maps/MewtwoBuilding_F2/scripts.pory"
	applymovement 5, Movement_MewtwoF2_FoeWalkToPlayer
# 120 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmovement 0
# 121 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_12
# 122 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 124 "data/maps/MewtwoBuilding_F2/scripts.pory"
	trainerbattle_single TRAINER_MEWTWOISLAND_SIX, MewtwoIsland_Opponent_Six_Intro, MewtwoIsland_Opponent_Six_Outro, EventScript_OpponentSix_PostBattle_MewtwoIsland
# 125 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	goto EventScript_Mewtwo_F2_NurseJoyChallengeHandler_20

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_23:
# 128 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 129 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_13
# 130 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 131 "data/maps/MewtwoBuilding_F2/scripts.pory"
	applymovement 6, Movement_MewtwoF2_MewtwoWalkToPlayer
# 132 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_14
# 133 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 134 "data/maps/MewtwoBuilding_F2/scripts.pory"
	trainerbattle_single TRAINER_MEWTWOISLAND_SEVEN, MewtwoIsland_Opponent_Seven_Intro, MewtwoIsland_Opponent_Seven_Outro, EventScript_OpponentSeven_PostBattle_MewtwoIsland
# 135 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	goto EventScript_Mewtwo_F2_NurseJoyChallengeHandler_1


EventScript_Mewtwo_F2_ReadyPlayerMovement::
# 145 "data/maps/MewtwoBuilding_F2/scripts.pory"
	applymovement 2, Movement_MewtwoF2_JoyMoveOutOfTheWay
# 146 "data/maps/MewtwoBuilding_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MewtwoF2_PlayerWalkToArena
# 147 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmovement 0
	return


# 150 "data/maps/MewtwoBuilding_F2/scripts.pory"
Movement_MewtwoF2_MewtwoWalkToPlayer:
# 151 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_slow_down
# 152 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_slow_right
# 153 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_slow_down
# 153 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_slow_down
# 154 "data/maps/MewtwoBuilding_F2/scripts.pory"
	face_left
	step_end

# 157 "data/maps/MewtwoBuilding_F2/scripts.pory"
Movement_MewtwoF2_JoyMoveOutOfTheWay:
# 158 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_right
# 159 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_up
# 160 "data/maps/MewtwoBuilding_F2/scripts.pory"
	face_right
	step_end

# 163 "data/maps/MewtwoBuilding_F2/scripts.pory"
Movement_MewtwoF2_PlayerWalkToArena:
# 164 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_right
# 164 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_right
# 164 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_right
# 164 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_right
	step_end

# 167 "data/maps/MewtwoBuilding_F2/scripts.pory"
Movement_MewtwoF2_FoeWalkToPlayer:
# 168 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_down
# 168 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_down
# 168 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_down
# 168 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_down
# 169 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_left
# 169 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_left
# 169 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_left
# 169 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_left
# 169 "data/maps/MewtwoBuilding_F2/scripts.pory"
	walk_left
	step_end

EventScript_OpponentOne_PostBattle_MewtwoIsland::
# 173 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 174 "data/maps/MewtwoBuilding_F2/scripts.pory"
	faceplayer
# 175 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_OpponentOne_PostBattle_MewtwoIsland_Text_0
# 176 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 177 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_ONE
# 178 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setvar VAR_MEWTWO_TOURNEY_STATE, 1
# 179 "data/maps/MewtwoBuilding_F2/scripts.pory"
	warpteleport MAP_MEWTWO_BUILDING_F3, 0
# 180 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	return


EventScript_OpponentTwo_PostBattle_MewtwoIsland::
# 191 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 192 "data/maps/MewtwoBuilding_F2/scripts.pory"
	faceplayer
# 193 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_OpponentTwo_PostBattle_MewtwoIsland_Text_0
# 194 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 195 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_TWO
# 196 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setvar VAR_MEWTWO_TOURNEY_STATE, 2
# 197 "data/maps/MewtwoBuilding_F2/scripts.pory"
	warpteleport MAP_MEWTWO_BUILDING_F3, 0
# 198 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	return


EventScript_OpponentThree_PostBattle_MewtwoIsland::
# 209 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 210 "data/maps/MewtwoBuilding_F2/scripts.pory"
	faceplayer
# 211 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_OpponentThree_PostBattle_MewtwoIsland_Text_0
# 212 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 213 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_THREE
# 214 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setvar VAR_MEWTWO_TOURNEY_STATE, 3
# 215 "data/maps/MewtwoBuilding_F2/scripts.pory"
	warpteleport MAP_MEWTWO_BUILDING_F3, 0
# 216 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	return


EventScript_OpponentFour_PostBattle_MewtwoIsland::
# 227 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 228 "data/maps/MewtwoBuilding_F2/scripts.pory"
	faceplayer
# 229 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_OpponentFour_PostBattle_MewtwoIsland_Text_0
# 230 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 231 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_FOUR
# 232 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setvar VAR_MEWTWO_TOURNEY_STATE, 4
# 233 "data/maps/MewtwoBuilding_F2/scripts.pory"
	warpteleport MAP_MEWTWO_BUILDING_F3, 0
# 234 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	return


EventScript_OpponentFive_PostBattle_MewtwoIsland::
# 245 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 246 "data/maps/MewtwoBuilding_F2/scripts.pory"
	faceplayer
# 247 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_OpponentFive_PostBattle_MewtwoIsland_Text_0
# 248 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 249 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_FIVE
# 250 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setvar VAR_MEWTWO_TOURNEY_STATE, 5
# 251 "data/maps/MewtwoBuilding_F2/scripts.pory"
	warpteleport MAP_MEWTWO_BUILDING_F3, 0
# 252 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	return


EventScript_OpponentSix_PostBattle_MewtwoIsland::
# 263 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 264 "data/maps/MewtwoBuilding_F2/scripts.pory"
	faceplayer
# 265 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_OpponentSix_PostBattle_MewtwoIsland_Text_0
# 266 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 267 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_SIX
# 268 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setvar VAR_MEWTWO_TOURNEY_STATE, 6
# 269 "data/maps/MewtwoBuilding_F2/scripts.pory"
	warpteleport MAP_MEWTWO_BUILDING_F3, 0
# 270 "data/maps/MewtwoBuilding_F2/scripts.pory"
	release
	return


EventScript_OpponentSeven_PostBattle_MewtwoIsland::
# 281 "data/maps/MewtwoBuilding_F2/scripts.pory"
	lock
# 282 "data/maps/MewtwoBuilding_F2/scripts.pory"
	faceplayer
# 283 "data/maps/MewtwoBuilding_F2/scripts.pory"
	msgbox EventScript_OpponentSeven_PostBattle_MewtwoIsland_Text_0
# 284 "data/maps/MewtwoBuilding_F2/scripts.pory"
	waitmessage
# 285 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_CHALLENGE_BEAT_SEVEN
# 286 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setvar VAR_MEWTWO_TOURNEY_STATE, 7
# 287 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setvar VAR_ROCKET_ARC_STATE, 9
# 288 "data/maps/MewtwoBuilding_F2/scripts.pory"
	setflag FLAG_MEWTWO_BEAT
# 289 "data/maps/MewtwoBuilding_F2/scripts.pory"
	clearflag FLAG_POST_MEWTWOEVENT
# 290 "data/maps/MewtwoBuilding_F2/scripts.pory"
	warpteleport MAP_LITTLEROOT_TOWN, 0
# 291 "data/maps/MewtwoBuilding_F2/scripts.pory"
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
# 53 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: This time you will battle an old\n"
	.string "acquintance of yourself. Let's see this\l"
	.string "'spirit' when you like your opponent.$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_4:
# 61 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "STEVEN: We got to show Mewtwo the true\n"
	.string "meaning of our bond with Pokemon\l"
	.string "{PLAYER}!$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_5:
# 68 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: Show me more.$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_6:
# 76 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MAXIE: Mewtwo has given me so much\n"
	.string "power!$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_7:
# 83 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: What if the decks are stacked\n"
	.string "against you?$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_8:
# 91 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "ANONA: As a legendary collector, Mewtwo\n"
	.string "has provided me with some great power.$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_9:
# 98 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: YOUR BOND SHALL BE BROKEN!$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_10:
# 106 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "ARCHIE: {PLAYER}, you have taken my\n"
	.string "everything! I will not hold back!$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_11:
# 113 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: You have gotten so far... but it\n"
	.string "ends here, and with it I shall prove\l"
	.string "that Humans are terrible to Pokemon!$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_12:
# 121 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "RED: ...$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_13:
# 129 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: At last, we shall battle.$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_14:
# 132 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: {PLAYER}... You have confused\n"
	.string "me. I NEED to feel what it is like to\l"
	.string "battle against you and your Pokemon.\l"
	.string "PREPARE YOURSELF!$"

EventScript_Mewtwo_F2_NurseJoyChallengeHandler_Text_15:
# 138 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "How sad.$"

EventScript_OpponentOne_PostBattle_MewtwoIsland_Text_0:
# 175 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: Impressive first showing. Using\n"
	.string "your Pokemon like that... it looked like\l"
	.string "they enjoyed fighting with you. But\l"
	.string "that cannot be.$"

EventScript_OpponentTwo_PostBattle_MewtwoIsland_Text_0:
# 193 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: The two of you... after such a\n"
	.string "battle... still friends...$"

EventScript_OpponentThree_PostBattle_MewtwoIsland_Text_0:
# 211 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: You cannot keep hiding your\n"
	.string "true colours...$"

EventScript_OpponentFour_PostBattle_MewtwoIsland_Text_0:
# 229 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: Even still... you overcome the\n"
	.string "challenge... what looks like with\l"
	.string "respect...$"

EventScript_OpponentFive_PostBattle_MewtwoIsland_Text_0:
# 247 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: How long will you keep going...$"

EventScript_OpponentSix_PostBattle_MewtwoIsland_Text_0:
# 265 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: It seems like... NO IT CANNOT\n"
	.string "BE! I WILL END THIS MYSELF!$"

EventScript_OpponentSeven_PostBattle_MewtwoIsland_Text_0:
# 283 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "MEWTWO: You have shown me... {PLAYER},\n"
	.string "that Pokemon and humans can live side\l"
	.string "by side. Thank you. I shall undo what I\l"
	.string "have caused.$"

MewtwoIsland_Opponent_One_Intro::
# 183 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "1$"

MewtwoIsland_Opponent_One_Outro::
# 186 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "1$"

MewtwoIsland_Opponent_Two_Intro::
# 201 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "2$"

MewtwoIsland_Opponent_Two_Outro::
# 204 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "2$"

MewtwoIsland_Opponent_Three_Intro::
# 219 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "3$"

MewtwoIsland_Opponent_Three_Outro::
# 222 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "3$"

MewtwoIsland_Opponent_Four_Intro::
# 237 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "4$"

MewtwoIsland_Opponent_Four_Outro::
# 240 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "4$"

MewtwoIsland_Opponent_Five_Intro::
# 255 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "5$"

MewtwoIsland_Opponent_Five_Outro::
# 258 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "5$"

MewtwoIsland_Opponent_Six_Intro::
# 273 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "...$"

MewtwoIsland_Opponent_Six_Outro::
# 276 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "...$"

MewtwoIsland_Opponent_Seven_Intro::
# 294 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "I WANT TO FEEL IT!$"

MewtwoIsland_Opponent_Seven_Outro::
# 297 "data/maps/MewtwoBuilding_F2/scripts.pory"
	.string "It's over.$"
