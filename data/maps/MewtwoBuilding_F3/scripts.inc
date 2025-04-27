Mewtwo_Area_1_MapScripts::
# 2 "data/maps/MewtwoBuilding_F3/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EventScript_Mewtwo_Building_F3_OnTransition
	.byte 0


EventScript_Mewtwo_Building_F3_OnTransition::
# 6 "data/maps/MewtwoBuilding_F3/scripts.pory"
	special HealPlayerParty
	return


EventScript_MewtwoBF3_Birch::
# 10 "data/maps/MewtwoBuilding_F3/scripts.pory"
	lock
# 11 "data/maps/MewtwoBuilding_F3/scripts.pory"
	faceplayer
# 12 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 0
	goto_if_eq EventScript_MewtwoBF3_Birch_2
EventScript_MewtwoBF3_Birch_1:
# 17 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 1
	goto_if_eq EventScript_MewtwoBF3_Birch_5
EventScript_MewtwoBF3_Birch_4:
# 22 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 2
	goto_if_eq EventScript_MewtwoBF3_Birch_8
EventScript_MewtwoBF3_Birch_7:
# 27 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 3
	goto_if_eq EventScript_MewtwoBF3_Birch_11
EventScript_MewtwoBF3_Birch_10:
# 32 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 4
	goto_if_eq EventScript_MewtwoBF3_Birch_14
EventScript_MewtwoBF3_Birch_13:
# 37 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 5
	goto_if_eq EventScript_MewtwoBF3_Birch_17
EventScript_MewtwoBF3_Birch_16:
# 42 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 6
	goto_if_eq EventScript_MewtwoBF3_Birch_20
EventScript_MewtwoBF3_Birch_19:
# 47 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	return

EventScript_MewtwoBF3_Birch_2:
# 13 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Birch_Text_0
# 14 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 15 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Birch_1

EventScript_MewtwoBF3_Birch_5:
# 18 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Birch_Text_1
# 19 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 20 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Birch_4

EventScript_MewtwoBF3_Birch_8:
# 23 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Birch_Text_2
# 24 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 25 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Birch_7

EventScript_MewtwoBF3_Birch_11:
# 28 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Birch_Text_3
# 29 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 30 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Birch_10

EventScript_MewtwoBF3_Birch_14:
# 33 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Birch_Text_4
# 34 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 35 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Birch_13

EventScript_MewtwoBF3_Birch_17:
# 38 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Birch_Text_5
# 39 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 40 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Birch_16

EventScript_MewtwoBF3_Birch_20:
# 43 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Birch_Text_6
# 44 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 45 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Birch_19


EventScript_MewtwoBF3_Jens::
# 51 "data/maps/MewtwoBuilding_F3/scripts.pory"
	lock
# 52 "data/maps/MewtwoBuilding_F3/scripts.pory"
	faceplayer
# 53 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 0
	goto_if_eq EventScript_MewtwoBF3_Jens_2
EventScript_MewtwoBF3_Jens_1:
# 58 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 1
	goto_if_eq EventScript_MewtwoBF3_Jens_5
EventScript_MewtwoBF3_Jens_4:
# 63 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 2
	goto_if_eq EventScript_MewtwoBF3_Jens_8
EventScript_MewtwoBF3_Jens_7:
# 68 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 3
	goto_if_eq EventScript_MewtwoBF3_Jens_11
EventScript_MewtwoBF3_Jens_10:
# 73 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 4
	goto_if_eq EventScript_MewtwoBF3_Jens_14
EventScript_MewtwoBF3_Jens_13:
# 78 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 5
	goto_if_eq EventScript_MewtwoBF3_Jens_17
EventScript_MewtwoBF3_Jens_16:
# 83 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 6
	goto_if_eq EventScript_MewtwoBF3_Jens_20
EventScript_MewtwoBF3_Jens_19:
# 88 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	return

EventScript_MewtwoBF3_Jens_2:
# 54 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Jens_Text_0
# 55 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 56 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Jens_1

EventScript_MewtwoBF3_Jens_5:
# 59 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Jens_Text_1
# 60 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 61 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Jens_4

EventScript_MewtwoBF3_Jens_8:
# 64 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Jens_Text_2
# 65 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 66 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Jens_7

EventScript_MewtwoBF3_Jens_11:
# 69 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Jens_Text_3
# 70 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 71 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Jens_10

EventScript_MewtwoBF3_Jens_14:
# 74 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Jens_Text_4
# 75 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 76 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Jens_13

EventScript_MewtwoBF3_Jens_17:
# 79 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Jens_Text_5
# 80 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 81 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Jens_16

EventScript_MewtwoBF3_Jens_20:
# 84 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Jens_Text_6
# 85 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 86 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Jens_19


EventScript_MewtwoBF3_Mats::
# 92 "data/maps/MewtwoBuilding_F3/scripts.pory"
	lock
# 93 "data/maps/MewtwoBuilding_F3/scripts.pory"
	faceplayer
# 94 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 0
	goto_if_eq EventScript_MewtwoBF3_Mats_2
EventScript_MewtwoBF3_Mats_1:
# 99 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 1
	goto_if_eq EventScript_MewtwoBF3_Mats_5
EventScript_MewtwoBF3_Mats_4:
# 104 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 2
	goto_if_eq EventScript_MewtwoBF3_Mats_8
EventScript_MewtwoBF3_Mats_7:
# 109 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 3
	goto_if_eq EventScript_MewtwoBF3_Mats_11
EventScript_MewtwoBF3_Mats_10:
# 114 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 4
	goto_if_eq EventScript_MewtwoBF3_Mats_14
EventScript_MewtwoBF3_Mats_13:
# 119 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 5
	goto_if_eq EventScript_MewtwoBF3_Mats_17
EventScript_MewtwoBF3_Mats_16:
# 124 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 6
	goto_if_eq EventScript_MewtwoBF3_Mats_20
EventScript_MewtwoBF3_Mats_19:
# 129 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	return

EventScript_MewtwoBF3_Mats_2:
# 95 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Mats_Text_0
# 96 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 97 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Mats_1

EventScript_MewtwoBF3_Mats_5:
# 100 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Mats_Text_1
# 101 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 102 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Mats_4

EventScript_MewtwoBF3_Mats_8:
# 105 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Mats_Text_2
# 106 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 107 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Mats_7

EventScript_MewtwoBF3_Mats_11:
# 110 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Mats_Text_3
# 111 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 112 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Mats_10

EventScript_MewtwoBF3_Mats_14:
# 115 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Mats_Text_4
# 116 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 117 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Mats_13

EventScript_MewtwoBF3_Mats_17:
# 120 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Mats_Text_5
# 121 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 122 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Mats_16

EventScript_MewtwoBF3_Mats_20:
# 125 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_Mats_Text_6
# 126 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 127 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_Mats_19


EventScript_MewtwoBF3_NurseJoy::
# 133 "data/maps/MewtwoBuilding_F3/scripts.pory"
	lock
# 134 "data/maps/MewtwoBuilding_F3/scripts.pory"
	faceplayer
# 135 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 0
	goto_if_eq EventScript_MewtwoBF3_NurseJoy_2
EventScript_MewtwoBF3_NurseJoy_1:
# 140 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 1
	goto_if_eq EventScript_MewtwoBF3_NurseJoy_5
EventScript_MewtwoBF3_NurseJoy_4:
# 145 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 2
	goto_if_eq EventScript_MewtwoBF3_NurseJoy_8
EventScript_MewtwoBF3_NurseJoy_7:
# 150 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 3
	goto_if_eq EventScript_MewtwoBF3_NurseJoy_11
EventScript_MewtwoBF3_NurseJoy_10:
# 155 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 4
	goto_if_eq EventScript_MewtwoBF3_NurseJoy_14
EventScript_MewtwoBF3_NurseJoy_13:
# 160 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 5
	goto_if_eq EventScript_MewtwoBF3_NurseJoy_17
EventScript_MewtwoBF3_NurseJoy_16:
# 165 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_MEWTWO_TOURNEY_STATE, 6
	goto_if_eq EventScript_MewtwoBF3_NurseJoy_20
EventScript_MewtwoBF3_NurseJoy_19:
# 170 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
# 172 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_NurseJoy_Text_7, MSGBOX_YESNO
# 173 "data/maps/MewtwoBuilding_F3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_MewtwoBF3_NurseJoy_23
# 179 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_NurseJoy_Text_9
# 180 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
EventScript_MewtwoBF3_NurseJoy_22:
# 182 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	return

EventScript_MewtwoBF3_NurseJoy_2:
# 136 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_NurseJoy_Text_0
# 137 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 138 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_NurseJoy_1

EventScript_MewtwoBF3_NurseJoy_5:
# 141 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_NurseJoy_Text_1
# 142 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 143 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_NurseJoy_4

EventScript_MewtwoBF3_NurseJoy_8:
# 146 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_NurseJoy_Text_2
# 147 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 148 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_NurseJoy_7

EventScript_MewtwoBF3_NurseJoy_11:
# 151 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_NurseJoy_Text_3
# 152 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 153 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_NurseJoy_10

EventScript_MewtwoBF3_NurseJoy_14:
# 156 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_NurseJoy_Text_4
# 157 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 158 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_NurseJoy_13

EventScript_MewtwoBF3_NurseJoy_17:
# 161 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_NurseJoy_Text_5
# 162 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 163 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_NurseJoy_16

EventScript_MewtwoBF3_NurseJoy_20:
# 166 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_NurseJoy_Text_6
# 167 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 168 "data/maps/MewtwoBuilding_F3/scripts.pory"
	release
	goto EventScript_MewtwoBF3_NurseJoy_19

EventScript_MewtwoBF3_NurseJoy_23:
# 174 "data/maps/MewtwoBuilding_F3/scripts.pory"
	msgbox EventScript_MewtwoBF3_NurseJoy_Text_8
# 175 "data/maps/MewtwoBuilding_F3/scripts.pory"
	special HealPlayerParty
# 176 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmessage
# 177 "data/maps/MewtwoBuilding_F3/scripts.pory"
	call EventScript_MoveToBattleAreaSequence
	goto EventScript_MewtwoBF3_NurseJoy_22


EventScript_MoveToBattleAreaSequence::
# 186 "data/maps/MewtwoBuilding_F3/scripts.pory"
	lock
# 187 "data/maps/MewtwoBuilding_F3/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MewtwoIsland_WalkToArenaPlayerP1
# 188 "data/maps/MewtwoBuilding_F3/scripts.pory"
	waitmovement 0
# 189 "data/maps/MewtwoBuilding_F3/scripts.pory"
	warpdoor MAP_MEWTWO_BUILDING_F2, 0
# 190 "data/maps/MewtwoBuilding_F3/scripts.pory"
	releaseall
	return


# 193 "data/maps/MewtwoBuilding_F3/scripts.pory"
Movement_MewtwoIsland_WalkToArenaPlayerP1:
# 194 "data/maps/MewtwoBuilding_F3/scripts.pory"
	walk_down
# 194 "data/maps/MewtwoBuilding_F3/scripts.pory"
	walk_down
	step_end

# 197 "data/maps/MewtwoBuilding_F3/scripts.pory"
Movement_MewtwoIsland_WalkToArenaPlayerP2:
# 198 "data/maps/MewtwoBuilding_F3/scripts.pory"
	walk_down
# 199 "data/maps/MewtwoBuilding_F3/scripts.pory"
	walk_right
# 199 "data/maps/MewtwoBuilding_F3/scripts.pory"
	walk_right
# 199 "data/maps/MewtwoBuilding_F3/scripts.pory"
	walk_right
# 199 "data/maps/MewtwoBuilding_F3/scripts.pory"
	walk_right
# 199 "data/maps/MewtwoBuilding_F3/scripts.pory"
	walk_right
# 199 "data/maps/MewtwoBuilding_F3/scripts.pory"
	walk_right
# 200 "data/maps/MewtwoBuilding_F3/scripts.pory"
	face_up
	step_end

EventScript_MewtwoBF3_Birch_Text_0:
# 13 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "Prof BIRCH: Discovering an Island,\n"
	.string "beating team rocket and now this? You\l"
	.string "sure get in to a lot of adventures\l"
	.string "{PLAYER}.$"

EventScript_MewtwoBF3_Birch_Text_1:
# 18 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "Prof BIRCH: Great showing out there\n"
	.string "Champ!$"

EventScript_MewtwoBF3_Birch_Text_2:
# 23 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "Prof BIRCH: Are you still doing good?\n"
	.string "You can take a break you know.$"

EventScript_MewtwoBF3_Birch_Text_3:
# 28 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "Prof BIRCH: Keep this momentum up!$"

EventScript_MewtwoBF3_Birch_Text_4:
# 33 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "Prof BIRCH: This battling is impressive,\n"
	.string "I hope we can calm Mewtwo down enough\l"
	.string "so he can understand just how much we\l"
	.string "love Pokemon!$"

EventScript_MewtwoBF3_Birch_Text_5:
# 38 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "Prof BIRCH: The battles get more and\n"
	.string "more challenging, but that won't stop\l"
	.string "you!$"

EventScript_MewtwoBF3_Birch_Text_6:
# 43 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "Prof BIRCH: This is it {PLAYER}.$"

EventScript_MewtwoBF3_Jens_Text_0:
# 54 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "JENS: You will rock this tourney, right\n"
	.string "{PLAYER}?$"

EventScript_MewtwoBF3_Jens_Text_1:
# 59 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "JENS: You are the best {PLAYER}!$"

EventScript_MewtwoBF3_Jens_Text_2:
# 64 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "JENS: You got any pokes to cool a hot\n"
	.string "headed opponent down? Bring them next\l"
	.string "battle.$"

EventScript_MewtwoBF3_Jens_Text_3:
# 69 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "JENS: {PLAYER}! I got word that you\n"
	.string "are facing someone like me. Someone\l"
	.string "seeking out the strongest Pokes!\l"
	.string "Better get a balance team together.$"

EventScript_MewtwoBF3_Jens_Text_4:
# 74 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "JENS: Eventhough I'm scared shitless,\n"
	.string "this place is kinda legendary itself!$"

EventScript_MewtwoBF3_Jens_Text_5:
# 79 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "JENS: Your next fight, I'm sure, will be\n"
	.string "epic.$"

EventScript_MewtwoBF3_Jens_Text_6:
# 84 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "JENS: Just one more! Can you do it?\n"
	.string "Beat Mewtwo I mean? Of course you can!$"

EventScript_MewtwoBF3_Mats_Text_0:
# 95 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "MATS: This is wild, you need to go\n"
	.string "prepared {PLAYER}.$"

EventScript_MewtwoBF3_Mats_Text_1:
# 100 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "MATS: Wow, showing Giovanni again why\n"
	.string "he is such a loser! Next battle will be\l"
	.string "intense, I've heard it might be\l"
	.string "including steel types.$"

EventScript_MewtwoBF3_Mats_Text_2:
# 105 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "MATS: Wicked, battling Steven like\n"
	.string "that... amazing!$"

EventScript_MewtwoBF3_Mats_Text_3:
# 110 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "MATS: Keep it up {PLAYER}!$"

EventScript_MewtwoBF3_Mats_Text_4:
# 115 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "MATS: Your next battle is going to be in\n"
	.string "the rain... or so I've heard!$"

EventScript_MewtwoBF3_Mats_Text_5:
# 120 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "MATS: Pfff nothing can stop you\n"
	.string "{PLAYER}!$"

EventScript_MewtwoBF3_Mats_Text_6:
# 125 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "MATS: A final battle... show them why\n"
	.string "you are the champion!$"

EventScript_MewtwoBF3_NurseJoy_Text_0:
# 136 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "Your first battle is up.$"

EventScript_MewtwoBF3_NurseJoy_Text_1:
# 141 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "Great showing last battle.$"

EventScript_MewtwoBF3_NurseJoy_Text_2:
# 146 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "My master is delighted with your\n"
	.string "participation.$"

EventScript_MewtwoBF3_NurseJoy_Text_3:
# 151 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "The last battle must have been hard.$"

EventScript_MewtwoBF3_NurseJoy_Text_4:
# 156 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "Best of luck participant.$"

EventScript_MewtwoBF3_NurseJoy_Text_5:
# 161 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "Amazing performance once again.$"

EventScript_MewtwoBF3_NurseJoy_Text_6:
# 166 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "Good luck!$"

EventScript_MewtwoBF3_NurseJoy_Text_7:
# 172 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "Are you ready for your next battle?$"

EventScript_MewtwoBF3_NurseJoy_Text_8:
# 174 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "Great, meet me in the arena.$"

EventScript_MewtwoBF3_NurseJoy_Text_9:
# 179 "data/maps/MewtwoBuilding_F3/scripts.pory"
	.string "I will be here once you are ready$"
