MewtwoBuilding_F3_MapScripts::
# 2 "data/maps/Mewtwo_Area_1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EventScript_Mewtwo_Area_1_OnTransition
	.byte 0


EventScript_Mewtwo_Area_1_OnTransition::
	return


EventScript_MewtwoPushPlayerDown::
# 10 "data/maps/Mewtwo_Area_1/scripts.pory"
	lock
# 11 "data/maps/Mewtwo_Area_1/scripts.pory"
	msgbox EventScript_MewtwoPushPlayerDown_Text_0
# 12 "data/maps/Mewtwo_Area_1/scripts.pory"
	waitmessage
# 13 "data/maps/Mewtwo_Area_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MewtwoMoveDown_MewtwoIsland
# 14 "data/maps/Mewtwo_Area_1/scripts.pory"
	waitmovement 0
# 15 "data/maps/Mewtwo_Area_1/scripts.pory"
	release
	return


EventScript_MewtwoPushPlayerLeft::
# 19 "data/maps/Mewtwo_Area_1/scripts.pory"
	lock
# 20 "data/maps/Mewtwo_Area_1/scripts.pory"
	msgbox EventScript_MewtwoPushPlayerDown_Text_0
# 21 "data/maps/Mewtwo_Area_1/scripts.pory"
	waitmessage
# 22 "data/maps/Mewtwo_Area_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MewtwoMoveLeft_MewtwoIsland
# 23 "data/maps/Mewtwo_Area_1/scripts.pory"
	waitmovement 0
# 24 "data/maps/Mewtwo_Area_1/scripts.pory"
	release
	return


EventScript_MewtwoPushPlayerRight::
# 28 "data/maps/Mewtwo_Area_1/scripts.pory"
	lock
# 29 "data/maps/Mewtwo_Area_1/scripts.pory"
	msgbox EventScript_MewtwoPushPlayerDown_Text_0
# 30 "data/maps/Mewtwo_Area_1/scripts.pory"
	waitmessage
# 31 "data/maps/Mewtwo_Area_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MewtwoMoveRight_MewtwoIsland
# 32 "data/maps/Mewtwo_Area_1/scripts.pory"
	waitmovement 0
# 33 "data/maps/Mewtwo_Area_1/scripts.pory"
	release
	return


EventScript_NurseJoy_Mewtwo_Mansion_Intro::
# 37 "data/maps/Mewtwo_Area_1/scripts.pory"
	lock
# 38 "data/maps/Mewtwo_Area_1/scripts.pory"
	msgbox EventScript_NurseJoy_Mewtwo_Mansion_Intro_Text_0
# 39 "data/maps/Mewtwo_Area_1/scripts.pory"
	waitmessage
# 40 "data/maps/Mewtwo_Area_1/scripts.pory"
	msgbox EventScript_NurseJoy_Mewtwo_Mansion_Intro_Text_1, MSGBOX_YESNO
# 41 "data/maps/Mewtwo_Area_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_NurseJoy_Mewtwo_Mansion_Intro_2
# 53 "data/maps/Mewtwo_Area_1/scripts.pory"
	msgbox EventScript_NurseJoy_Mewtwo_Mansion_Intro_Text_3
# 54 "data/maps/Mewtwo_Area_1/scripts.pory"
	waitmessage
EventScript_NurseJoy_Mewtwo_Mansion_Intro_1:
# 56 "data/maps/Mewtwo_Area_1/scripts.pory"
	release
	return

EventScript_NurseJoy_Mewtwo_Mansion_Intro_2:
# 43 "data/maps/Mewtwo_Area_1/scripts.pory"
	msgbox EventScript_NurseJoy_Mewtwo_Mansion_Intro_Text_2
# 44 "data/maps/Mewtwo_Area_1/scripts.pory"
	waitmessage
# 45 "data/maps/Mewtwo_Area_1/scripts.pory"
	setflag FLAG_MEWTWO_ISLAND_INTRO_CHALLENGE
# 46 "data/maps/Mewtwo_Area_1/scripts.pory"
	setvar VAR_MEWTWO_ARC_STATE, 5
# 47 "data/maps/Mewtwo_Area_1/scripts.pory"
	setvar VAR_MEWTWO_TOURNEY_STATE, 0
# 48 "data/maps/Mewtwo_Area_1/scripts.pory"
	applymovement 2, Movement_MoveNurseJoyToQuarter_MewtwoIsland
# 49 "data/maps/Mewtwo_Area_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MovePlayerToQuarter_MewtwoIsland
# 50 "data/maps/Mewtwo_Area_1/scripts.pory"
	waitmovement 0
# 51 "data/maps/Mewtwo_Area_1/scripts.pory"
	warpdoor MAP_MEWTWO_BUILDING_F3, 0
	goto EventScript_NurseJoy_Mewtwo_Mansion_Intro_1


# 59 "data/maps/Mewtwo_Area_1/scripts.pory"
Movement_MewtwoMoveRight_MewtwoIsland:
# 60 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_right
	step_end

# 63 "data/maps/Mewtwo_Area_1/scripts.pory"
Movement_MewtwoMoveLeft_MewtwoIsland:
# 64 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_left
	step_end

# 67 "data/maps/Mewtwo_Area_1/scripts.pory"
Movement_MewtwoMoveDown_MewtwoIsland:
# 68 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_down
	step_end

# 71 "data/maps/Mewtwo_Area_1/scripts.pory"
Movement_MoveNurseJoyToQuarter_MewtwoIsland:
# 72 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_left
# 72 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_left
# 72 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_left
# 72 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_left
# 72 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_left
# 72 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_left
# 72 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_left
# 73 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
# 73 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
# 73 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
# 73 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
# 73 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
# 73 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
# 73 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
# 73 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
# 73 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
# 74 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_left
# 75 "data/maps/Mewtwo_Area_1/scripts.pory"
	face_right
	step_end

# 77 "data/maps/Mewtwo_Area_1/scripts.pory"
Movement_MovePlayerToQuarter_MewtwoIsland:
# 78 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
# 79 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_left
# 79 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_left
# 79 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_left
# 79 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_left
# 79 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_left
# 79 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_left
# 79 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_left
# 80 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
# 80 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
# 80 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
# 80 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
# 80 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
# 80 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
# 80 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
# 80 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
# 80 "data/maps/Mewtwo_Area_1/scripts.pory"
	walk_up
	step_end

EventScript_JensMewtwoIsland_One::
# 84 "data/maps/Mewtwo_Area_1/scripts.pory"
	lock
# 85 "data/maps/Mewtwo_Area_1/scripts.pory"
	faceplayer
# 86 "data/maps/Mewtwo_Area_1/scripts.pory"
	msgbox EventScript_JensMewtwoIsland_One_Text_0
# 87 "data/maps/Mewtwo_Area_1/scripts.pory"
	waitmessage
# 88 "data/maps/Mewtwo_Area_1/scripts.pory"
	release
	return


EventScript_MatsMewtwoIsland_One::
# 92 "data/maps/Mewtwo_Area_1/scripts.pory"
	lock
# 93 "data/maps/Mewtwo_Area_1/scripts.pory"
	faceplayer
# 94 "data/maps/Mewtwo_Area_1/scripts.pory"
	msgbox EventScript_MatsMewtwoIsland_One_Text_0
# 95 "data/maps/Mewtwo_Area_1/scripts.pory"
	waitmessage
# 96 "data/maps/Mewtwo_Area_1/scripts.pory"
	release
	return


EventScript_BirchMewtwoIsland_One::
# 100 "data/maps/Mewtwo_Area_1/scripts.pory"
	lock
# 101 "data/maps/Mewtwo_Area_1/scripts.pory"
	faceplayer
# 102 "data/maps/Mewtwo_Area_1/scripts.pory"
	msgbox EventScript_BirchMewtwoIsland_One_Text_0
# 103 "data/maps/Mewtwo_Area_1/scripts.pory"
	waitmessage
# 104 "data/maps/Mewtwo_Area_1/scripts.pory"
	release
	return


EventScript_ArchieMewtwoIsland_One::
# 108 "data/maps/Mewtwo_Area_1/scripts.pory"
	lock
# 109 "data/maps/Mewtwo_Area_1/scripts.pory"
	faceplayer
# 110 "data/maps/Mewtwo_Area_1/scripts.pory"
	msgbox EventScript_ArchieMewtwoIsland_One_Text_0
# 111 "data/maps/Mewtwo_Area_1/scripts.pory"
	waitmessage
# 112 "data/maps/Mewtwo_Area_1/scripts.pory"
	release
	return


EventScript_GruntMewtwoIsland_One::
# 116 "data/maps/Mewtwo_Area_1/scripts.pory"
	lock
# 117 "data/maps/Mewtwo_Area_1/scripts.pory"
	faceplayer
# 118 "data/maps/Mewtwo_Area_1/scripts.pory"
	msgbox EventScript_GruntMewtwoIsland_One_Text_0
# 119 "data/maps/Mewtwo_Area_1/scripts.pory"
	waitmessage
# 120 "data/maps/Mewtwo_Area_1/scripts.pory"
	release
	return


EventScript_GiovanniMewtwoIsland_One::
# 124 "data/maps/Mewtwo_Area_1/scripts.pory"
	lock
# 125 "data/maps/Mewtwo_Area_1/scripts.pory"
	faceplayer
# 126 "data/maps/Mewtwo_Area_1/scripts.pory"
	msgbox EventScript_GiovanniMewtwoIsland_One_Text_0
# 127 "data/maps/Mewtwo_Area_1/scripts.pory"
	waitmessage
# 128 "data/maps/Mewtwo_Area_1/scripts.pory"
	release
	return


EventScript_MaxieMewtwoIsland_One::
# 132 "data/maps/Mewtwo_Area_1/scripts.pory"
	lock
# 133 "data/maps/Mewtwo_Area_1/scripts.pory"
	faceplayer
# 134 "data/maps/Mewtwo_Area_1/scripts.pory"
	msgbox EventScript_MaxieMewtwoIsland_One_Text_0
# 135 "data/maps/Mewtwo_Area_1/scripts.pory"
	waitmessage
# 136 "data/maps/Mewtwo_Area_1/scripts.pory"
	release
	return


EventScript_MewtwoPushPlayerDown_Text_0:
# 11 "data/maps/Mewtwo_Area_1/scripts.pory"
	.string "If I'm ready I should speak to Nurse\n"
	.string "joy.$"

EventScript_NurseJoy_Mewtwo_Mansion_Intro_Text_0:
# 38 "data/maps/Mewtwo_Area_1/scripts.pory"
	.string "NURSE JOY: My master has gathered all\n"
	.string "the strongest trainers from the area.\l"
	.string "Gym leaders, Rivals and even grunts. For\l"
	.string "too long you have exploited Pokemon. So\l"
	.string "my master has created a tournament.\l"
	.string "This tournament shall show you that no\l"
	.string "matter how hard you train, humans will\l"
	.string "never be stronger than free willed\l"
	.string "Pokemon.$"

EventScript_NurseJoy_Mewtwo_Mansion_Intro_Text_1:
# 40 "data/maps/Mewtwo_Area_1/scripts.pory"
	.string "Are you ready to start the next chapter?$"

EventScript_NurseJoy_Mewtwo_Mansion_Intro_Text_2:
# 43 "data/maps/Mewtwo_Area_1/scripts.pory"
	.string "NURSE JOY: I will guide you to your\n"
	.string "quarters. From there you can prepare\l"
	.string "for your battles.$"

EventScript_NurseJoy_Mewtwo_Mansion_Intro_Text_3:
# 53 "data/maps/Mewtwo_Area_1/scripts.pory"
	.string "Feel free to look around some more.$"

EventScript_JensMewtwoIsland_One_Text_0:
# 86 "data/maps/Mewtwo_Area_1/scripts.pory"
	.string "JENS: Man... we are in some trouble now\n"
	.string "aren't we.$"

EventScript_MatsMewtwoIsland_One_Text_0:
# 94 "data/maps/Mewtwo_Area_1/scripts.pory"
	.string "MATS: We are a team, {PLAYER}, Jens,\n"
	.string "Prof Birch and me will stick together.\l"
	.string "Right?$"

EventScript_BirchMewtwoIsland_One_Text_0:
# 102 "data/maps/Mewtwo_Area_1/scripts.pory"
	.string "Prof BIRCH: {PLAYER}, we need to calm\n"
	.string "Mewtwo down... you should be the one to\l"
	.string "show him our bonds with Pokemon are\l"
	.string "good!$"

EventScript_ArchieMewtwoIsland_One_Text_0:
# 110 "data/maps/Mewtwo_Area_1/scripts.pory"
	.string "ARCHIE: Grrr... Mewtwo huh, Kyogre would\n"
	.string "never agree to this.$"

EventScript_GruntMewtwoIsland_One_Text_0:
# 118 "data/maps/Mewtwo_Area_1/scripts.pory"
	.string "GRUNT: I Don't want to be here.$"

EventScript_GiovanniMewtwoIsland_One_Text_0:
# 126 "data/maps/Mewtwo_Area_1/scripts.pory"
	.string "GIOVANNI: Mewtwo was mine...$"

EventScript_MaxieMewtwoIsland_One_Text_0:
# 134 "data/maps/Mewtwo_Area_1/scripts.pory"
	.string "MAXIE: I guess this is my sentence for\n"
	.string "messing around with Groudon.$"
