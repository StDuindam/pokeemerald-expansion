Route202_MapScripts::
# 2 "data/maps/Route202/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EventScript_Route202_OnTransition
	.byte 0


EventScript_Route202_OnTransition::
# 6 "data/maps/Route202/scripts.pory"
	compare VAR_MEWTWO_ARC_STATE, 2
	goto_if_eq EventScript_Route202_OnTransition_1
# 10 "data/maps/Route202/scripts.pory"
	setflag FLAG_MEWTWO_ISLAND_INTRO_BIRCH
	return

EventScript_Route202_OnTransition_1:
# 8 "data/maps/Route202/scripts.pory"
	clearflag FLAG_MEWTWO_ISLAND_INTRO_BIRCH
	return


EventScript_Route202_Maniac::
# 15 "data/maps/Route202/scripts.pory"
	lock
# 16 "data/maps/Route202/scripts.pory"
	faceplayer
# 17 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_Maniac_Text_0
# 18 "data/maps/Route202/scripts.pory"
	waitmessage
# 19 "data/maps/Route202/scripts.pory"
	release
	return


EventScript_Route202_Hiker_One::
# 23 "data/maps/Route202/scripts.pory"
	lock
# 24 "data/maps/Route202/scripts.pory"
	faceplayer
# 25 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_Hiker_One_Text_0
# 26 "data/maps/Route202/scripts.pory"
	waitmessage
# 27 "data/maps/Route202/scripts.pory"
	release
	return


EventScript_Route202_Norman::
# 31 "data/maps/Route202/scripts.pory"
	lock
# 32 "data/maps/Route202/scripts.pory"
	faceplayer
# 33 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_Norman_Text_0
# 34 "data/maps/Route202/scripts.pory"
	waitmessage
# 35 "data/maps/Route202/scripts.pory"
	release
	return


EventScript_Route202_RocketScientist::
# 39 "data/maps/Route202/scripts.pory"
	lock
# 40 "data/maps/Route202/scripts.pory"
	faceplayer
# 41 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_RocketScientist_Text_0
# 42 "data/maps/Route202/scripts.pory"
	waitmessage
# 43 "data/maps/Route202/scripts.pory"
	release
	return


EventScript_Route202_Jens_One::
# 47 "data/maps/Route202/scripts.pory"
	lock
# 48 "data/maps/Route202/scripts.pory"
	faceplayer
# 49 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_Jens_One_Text_0
# 50 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_Jens_One_Text_1, MSGBOX_YESNO
# 51 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Route202_Jens_One_2
# 57 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_Jens_One_Text_3
# 58 "data/maps/Route202/scripts.pory"
	waitmessage
EventScript_Route202_Jens_One_1:
# 60 "data/maps/Route202/scripts.pory"
	release
	return

EventScript_Route202_Jens_One_2:
# 52 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_Jens_One_Text_2
# 53 "data/maps/Route202/scripts.pory"
	waitmessage
# 54 "data/maps/Route202/scripts.pory"
	call EventScript_Route202_Jens_Battle
	goto EventScript_Route202_Jens_One_1


EventScript_Route202_Jens_Battle::
# 64 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_JENS_ROUTE202, Route_202_Jens_PreBattle, Route202_Jens_PostBattle, EventScript_Route202_Jens_PostBattle
	return


EventScript_Route202_Jens_PostBattle::
# 74 "data/maps/Route202/scripts.pory"
	lock
# 75 "data/maps/Route202/scripts.pory"
	applymovement 2, Jens_Route202_MoveAway
# 76 "data/maps/Route202/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route202/scripts.pory"
	setvar VAR_RIVAL_BATTLE_DOJO, 1
# 78 "data/maps/Route202/scripts.pory"
	setflag FLAG_ROUTE202_JENS_BATTLED
# 79 "data/maps/Route202/scripts.pory"
	removeobject 19
# 80 "data/maps/Route202/scripts.pory"
	release
	return


# 83 "data/maps/Route202/scripts.pory"
Jens_Route202_MoveAway:
# 84 "data/maps/Route202/scripts.pory"
	walk_right
# 84 "data/maps/Route202/scripts.pory"
	walk_right
# 85 "data/maps/Route202/scripts.pory"
	walk_down
# 85 "data/maps/Route202/scripts.pory"
	walk_down
# 85 "data/maps/Route202/scripts.pory"
	walk_down
# 85 "data/maps/Route202/scripts.pory"
	walk_down
# 85 "data/maps/Route202/scripts.pory"
	walk_down
# 85 "data/maps/Route202/scripts.pory"
	walk_down
# 85 "data/maps/Route202/scripts.pory"
	walk_down
	step_end

EventScript_DontLeaveBeachRocket_Notif::
# 89 "data/maps/Route202/scripts.pory"
	lock
# 90 "data/maps/Route202/scripts.pory"
	applymovement 17, EventScript_202_RocketLook_Left
# 91 "data/maps/Route202/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route202/scripts.pory"
	msgbox EventScript_DontLeaveBeachRocket_Notif_Text_0
# 93 "data/maps/Route202/scripts.pory"
	waitmessage
# 94 "data/maps/Route202/scripts.pory"
	applymovement 17, EventScript_202_RocketLook_Up
# 95 "data/maps/Route202/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PushPlayerDown_EverGrande
# 97 "data/maps/Route202/scripts.pory"
	waitmovement 0
# 98 "data/maps/Route202/scripts.pory"
	release
	return


EventScript_202_RocketTooBusy::
# 102 "data/maps/Route202/scripts.pory"
	lock
# 103 "data/maps/Route202/scripts.pory"
	msgbox EventScript_202_RocketTooBusy_Text_0
# 104 "data/maps/Route202/scripts.pory"
	waitmessage
# 105 "data/maps/Route202/scripts.pory"
	release
	return


# 108 "data/maps/Route202/scripts.pory"
EventScript_202_RocketLook_Left:
# 109 "data/maps/Route202/scripts.pory"
	face_left
	step_end

# 111 "data/maps/Route202/scripts.pory"
EventScript_202_RocketLook_Up:
# 112 "data/maps/Route202/scripts.pory"
	face_up
	step_end

EventScript_202_BirchMewtwoIslandIntro::
# 116 "data/maps/Route202/scripts.pory"
	lock
# 117 "data/maps/Route202/scripts.pory"
	faceplayer
# 118 "data/maps/Route202/scripts.pory"
	msgbox EventScript_202_BirchMewtwoIslandIntro_Text_0
# 119 "data/maps/Route202/scripts.pory"
	waitmessage
# 120 "data/maps/Route202/scripts.pory"
	setvar VAR_MEWTWO_ARC_STATE, 3
# 121 "data/maps/Route202/scripts.pory"
	setflag FLAG_MEWTWO_ISLAND_INTRO_BIRCH
# 122 "data/maps/Route202/scripts.pory"
	releaseall
	return


EventScript_202_BirchSkipSafety::
# 126 "data/maps/Route202/scripts.pory"
	setvar VAR_MEWTWO_ARC_STATE, 3
	return


EventScript_Route202_Maniac_Text_0:
# 17 "data/maps/Route202/scripts.pory"
	.string "Give me a moment, I'm studying this\n"
	.string "tree. Who knows how different they\l"
	.string "might be from the ones we know back\l"
	.string "home, you know?$"

EventScript_Route202_Hiker_One_Text_0:
# 25 "data/maps/Route202/scripts.pory"
	.string "Yikes, the professor was not kidding\n"
	.string "that only the strongest trainers\l"
	.string "should dare come here!$"

EventScript_Route202_Norman_Text_0:
# 33 "data/maps/Route202/scripts.pory"
	.string "Hey kid, have you spotted any rare\n"
	.string "Pokemon yet? The wild Pokemon sure are\l"
	.string "strong around here, but nothing Slaking\l"
	.string "can't take care of. Stay safe OK?$"

EventScript_Route202_RocketScientist_Text_0:
# 41 "data/maps/Route202/scripts.pory"
	.string "Leave here, kid. Nothing to see here.$"

EventScript_Route202_Jens_One_Text_0:
# 49 "data/maps/Route202/scripts.pory"
	.string "JENS: The Pokes around here sure are\n"
	.string "something huh, each encounter is a\l"
	.string "crazy battle... Have you got many yet?\l"
	.string "Maybe we can see who can best use them!$"

EventScript_Route202_Jens_One_Text_1:
# 50 "data/maps/Route202/scripts.pory"
	.string "Do you want to battle Jens?$"

EventScript_Route202_Jens_One_Text_2:
# 52 "data/maps/Route202/scripts.pory"
	.string "Lets go then!$"

EventScript_Route202_Jens_One_Text_3:
# 57 "data/maps/Route202/scripts.pory"
	.string "Let me know if you change your mind...$"

EventScript_DontLeaveBeachRocket_Notif_Text_0:
# 92 "data/maps/Route202/scripts.pory"
	.string "ROCKET GRUNT: Hey! You aren't supposed\n"
	.string "to be here! Get back!$"

EventScript_202_RocketTooBusy_Text_0:
# 103 "data/maps/Route202/scripts.pory"
	.string "This Rocket is too distracted to notice\n"
	.string "you.$"

EventScript_202_BirchMewtwoIslandIntro_Text_0:
# 118 "data/maps/Route202/scripts.pory"
	.string "PROF BIRCH: Ah {PLAYER}, here you\n"
	.string "are. There's more trouble... all of our\l"
	.string "friends and some others got taken by\l"
	.string "Mewtwo. I'm pretty sure they headed\l"
	.string "north of this Island. Make sure you go\l"
	.string "prepared... It will be a while before you\l"
	.string "can restock on supplies. Oh and, good\l"
	.string "luck!$"

Route_202_Jens_PreBattle::
# 66 "data/maps/Route202/scripts.pory"
	.string "Let's see what you have cooked up like\n"
	.string "Yvar!$"

Route202_Jens_PostBattle::
# 70 "data/maps/Route202/scripts.pory"
	.string "That got me fired up, these Pokes are\n"
	.string "awesome!$"
