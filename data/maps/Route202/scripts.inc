Route202_MapScripts::
	.byte 0


EventScript_Route202_Maniac::
# 7 "data/maps/Route202/scripts.pory"
	lock
# 8 "data/maps/Route202/scripts.pory"
	faceplayer
# 9 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_Maniac_Text_0
# 10 "data/maps/Route202/scripts.pory"
	waitmessage
# 11 "data/maps/Route202/scripts.pory"
	release
	return


EventScript_Route202_Hiker_One::
# 15 "data/maps/Route202/scripts.pory"
	lock
# 16 "data/maps/Route202/scripts.pory"
	faceplayer
# 17 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_Hiker_One_Text_0
# 18 "data/maps/Route202/scripts.pory"
	waitmessage
# 19 "data/maps/Route202/scripts.pory"
	release
	return


EventScript_Route202_Norman::
# 23 "data/maps/Route202/scripts.pory"
	lock
# 24 "data/maps/Route202/scripts.pory"
	faceplayer
# 25 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_Norman_Text_0
# 26 "data/maps/Route202/scripts.pory"
	waitmessage
# 27 "data/maps/Route202/scripts.pory"
	release
	return


EventScript_Route202_RocketScientist::
# 31 "data/maps/Route202/scripts.pory"
	lock
# 32 "data/maps/Route202/scripts.pory"
	faceplayer
# 33 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_RocketScientist_Text_0
# 34 "data/maps/Route202/scripts.pory"
	waitmessage
# 35 "data/maps/Route202/scripts.pory"
	release
	return


EventScript_Route202_Jens_One::
# 39 "data/maps/Route202/scripts.pory"
	lock
# 40 "data/maps/Route202/scripts.pory"
	faceplayer
# 41 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_Jens_One_Text_0
# 42 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_Jens_One_Text_1, MSGBOX_YESNO
# 43 "data/maps/Route202/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Route202_Jens_One_2
# 49 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_Jens_One_Text_3
# 50 "data/maps/Route202/scripts.pory"
	waitmessage
EventScript_Route202_Jens_One_1:
# 52 "data/maps/Route202/scripts.pory"
	release
	return

EventScript_Route202_Jens_One_2:
# 44 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_Jens_One_Text_2
# 45 "data/maps/Route202/scripts.pory"
	waitmessage
# 46 "data/maps/Route202/scripts.pory"
	call EventScript_Route202_Jens_Battle
	goto EventScript_Route202_Jens_One_1


EventScript_Route202_Jens_Battle::
# 56 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_JENS_ROUTE202, Route_202_Jens_PreBattle, Route202_Jens_PostBattle, EventScript_Route202_Jens_PostBattle
	return


EventScript_Route202_Jens_PostBattle::
# 66 "data/maps/Route202/scripts.pory"
	lock
# 67 "data/maps/Route202/scripts.pory"
	applymovement 2, Jens_Route202_MoveAway
# 68 "data/maps/Route202/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route202/scripts.pory"
	setvar VAR_RIVAL_BATTLE_DOJO, 1
# 70 "data/maps/Route202/scripts.pory"
	setflag FLAG_ROUTE202_JENS_BATTLED
# 71 "data/maps/Route202/scripts.pory"
	removeobject 19
# 72 "data/maps/Route202/scripts.pory"
	release
	return


# 75 "data/maps/Route202/scripts.pory"
Jens_Route202_MoveAway:
# 76 "data/maps/Route202/scripts.pory"
	walk_right
# 76 "data/maps/Route202/scripts.pory"
	walk_right
# 77 "data/maps/Route202/scripts.pory"
	walk_down
# 77 "data/maps/Route202/scripts.pory"
	walk_down
# 77 "data/maps/Route202/scripts.pory"
	walk_down
# 77 "data/maps/Route202/scripts.pory"
	walk_down
# 77 "data/maps/Route202/scripts.pory"
	walk_down
# 77 "data/maps/Route202/scripts.pory"
	walk_down
# 77 "data/maps/Route202/scripts.pory"
	walk_down
	step_end

EventScript_DontLeaveBeachRocket_Notif::
# 81 "data/maps/Route202/scripts.pory"
	lock
# 82 "data/maps/Route202/scripts.pory"
	applymovement 17, EventScript_202_RocketLook_Left
# 83 "data/maps/Route202/scripts.pory"
	waitmovement 0
# 84 "data/maps/Route202/scripts.pory"
	msgbox EventScript_DontLeaveBeachRocket_Notif_Text_0
# 85 "data/maps/Route202/scripts.pory"
	waitmessage
# 86 "data/maps/Route202/scripts.pory"
	applymovement 17, EventScript_202_RocketLook_Up
# 87 "data/maps/Route202/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route202/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PushPlayerDown_EverGrande
# 89 "data/maps/Route202/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route202/scripts.pory"
	release
	return


EventScript_202_RocketTooBusy::
# 94 "data/maps/Route202/scripts.pory"
	lock
# 95 "data/maps/Route202/scripts.pory"
	msgbox EventScript_202_RocketTooBusy_Text_0
# 96 "data/maps/Route202/scripts.pory"
	waitmessage
# 97 "data/maps/Route202/scripts.pory"
	release
	return


# 100 "data/maps/Route202/scripts.pory"
EventScript_202_RocketLook_Left:
# 101 "data/maps/Route202/scripts.pory"
	face_left
	step_end

# 103 "data/maps/Route202/scripts.pory"
EventScript_202_RocketLook_Up:
# 104 "data/maps/Route202/scripts.pory"
	face_up
	step_end

EventScript_Route202_Maniac_Text_0:
# 9 "data/maps/Route202/scripts.pory"
	.string "Give me a moment, I'm studying this\n"
	.string "tree. Who knows how different they\l"
	.string "might be from the ones we know back\l"
	.string "home, you know?$"

EventScript_Route202_Hiker_One_Text_0:
# 17 "data/maps/Route202/scripts.pory"
	.string "Yikes, the professor was not kidding\n"
	.string "that only the strongest trainers\l"
	.string "should dare come here!$"

EventScript_Route202_Norman_Text_0:
# 25 "data/maps/Route202/scripts.pory"
	.string "Hey kid, have you spotted any rare\n"
	.string "Pokemon yet? The wild Pokemon sure are\l"
	.string "strong around here, but nothing Slaking\l"
	.string "can't take care of. Stay safe OK?$"

EventScript_Route202_RocketScientist_Text_0:
# 33 "data/maps/Route202/scripts.pory"
	.string "Leave here, kid. Nothing to see here.$"

EventScript_Route202_Jens_One_Text_0:
# 41 "data/maps/Route202/scripts.pory"
	.string "JENS: The Pokes around here sure are\n"
	.string "something huh, each encounter is a\l"
	.string "crazy battle... Have you got many yet?\l"
	.string "Maybe we can see who can best use them!$"

EventScript_Route202_Jens_One_Text_1:
# 42 "data/maps/Route202/scripts.pory"
	.string "Do you want to battle Jens?$"

EventScript_Route202_Jens_One_Text_2:
# 44 "data/maps/Route202/scripts.pory"
	.string "Lets go then!$"

EventScript_Route202_Jens_One_Text_3:
# 49 "data/maps/Route202/scripts.pory"
	.string "Let me know if you change your mind...$"

EventScript_DontLeaveBeachRocket_Notif_Text_0:
# 84 "data/maps/Route202/scripts.pory"
	.string "ROCKET GRUNT: Hey! You aren't supposed\n"
	.string "to be here! Get back!$"

EventScript_202_RocketTooBusy_Text_0:
# 95 "data/maps/Route202/scripts.pory"
	.string "This Rocket is too distracted to notice\n"
	.string "you.$"

Route_202_Jens_PreBattle::
# 58 "data/maps/Route202/scripts.pory"
	.string "Let's see what you have cooked up like\n"
	.string "Yvar!$"

Route202_Jens_PostBattle::
# 62 "data/maps/Route202/scripts.pory"
	.string "That got me fired up, these Pokes are\n"
	.string "awesome!$"
