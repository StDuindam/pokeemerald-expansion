RocketHideout_F2_MapScripts::
	.byte 0


EventScript_RocketHideoutF2_GiovanniIntro::
# 6 "data/maps/RocketHideout_F2/scripts.pory"
	lock
# 7 "data/maps/RocketHideout_F2/scripts.pory"
	msgbox ScientistConversation
# 8 "data/maps/RocketHideout_F2/scripts.pory"
	waitmessage
# 9 "data/maps/RocketHideout_F2/scripts.pory"
	msgbox GiovanniIntroduction
# 10 "data/maps/RocketHideout_F2/scripts.pory"
	waitmessage
# 11 "data/maps/RocketHideout_F2/scripts.pory"
	applymovement 1, MoveGiovanni_RocketHideout
# 12 "data/maps/RocketHideout_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookRightPlayer_RocketHideout
# 13 "data/maps/RocketHideout_F2/scripts.pory"
	waitmovement 0
# 14 "data/maps/RocketHideout_F2/scripts.pory"
	msgbox GiovanniTellScientistToScram
# 15 "data/maps/RocketHideout_F2/scripts.pory"
	waitmessage
# 16 "data/maps/RocketHideout_F2/scripts.pory"
	applymovement 4, MoveScientist_RocketHideout
# 17 "data/maps/RocketHideout_F2/scripts.pory"
	waitmovement 0
# 18 "data/maps/RocketHideout_F2/scripts.pory"
	removeobject 4
# 19 "data/maps/RocketHideout_F2/scripts.pory"
	msgbox GiovanniEvilPlans
# 20 "data/maps/RocketHideout_F2/scripts.pory"
	waitmessage
# 21 "data/maps/RocketHideout_F2/scripts.pory"
	msgbox GiovanniOutro
# 22 "data/maps/RocketHideout_F2/scripts.pory"
	waitmessage
# 23 "data/maps/RocketHideout_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BumpUpPlayer_RocketHideout
# 24 "data/maps/RocketHideout_F2/scripts.pory"
	waitmovement 0
# 25 "data/maps/RocketHideout_F2/scripts.pory"
	applymovement 1, GiovanniOutro_RocketHideout
# 26 "data/maps/RocketHideout_F2/scripts.pory"
	waitmovement 0
# 27 "data/maps/RocketHideout_F2/scripts.pory"
	removeobject 1
# 28 "data/maps/RocketHideout_F2/scripts.pory"
	removeobject 3
# 29 "data/maps/RocketHideout_F2/scripts.pory"
	release
# 30 "data/maps/RocketHideout_F2/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, TRUE
# 31 "data/maps/RocketHideout_F2/scripts.pory"
	setvar VAR_ROCKET_ARC_STATE, 7
# 32 "data/maps/RocketHideout_F2/scripts.pory"
	setflag FLAG_ROCKET_GIOVANNIINTRO_COMPLETED
# 33 "data/maps/RocketHideout_F2/scripts.pory"
	setflag FLAG_ROCKET_EVENT_ACTIVE
	return


MovePlayerToStart_1_RocketHideoutF2::
# 37 "data/maps/RocketHideout_F2/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 38 "data/maps/RocketHideout_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayer_RocketHideoutF2_One
# 39 "data/maps/RocketHideout_F2/scripts.pory"
	waitmovement 0
# 40 "data/maps/RocketHideout_F2/scripts.pory"
	call EventScript_RocketHideoutF2_GiovanniIntro
	return


MovePlayerToStart_2_RocketHideoutF2::
# 44 "data/maps/RocketHideout_F2/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 45 "data/maps/RocketHideout_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayer_RocketHideoutF2_Two
# 46 "data/maps/RocketHideout_F2/scripts.pory"
	waitmovement 0
# 47 "data/maps/RocketHideout_F2/scripts.pory"
	call EventScript_RocketHideoutF2_GiovanniIntro
	return


MovePlayerToStart_3_RocketHideoutF2::
# 51 "data/maps/RocketHideout_F2/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, MUS_AQUA_MAGMA_HIDEOUT
# 52 "data/maps/RocketHideout_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TRUE
# 53 "data/maps/RocketHideout_F2/scripts.pory"
	waitmovement 0
# 54 "data/maps/RocketHideout_F2/scripts.pory"
	call EventScript_RocketHideoutF2_GiovanniIntro
	return


EventScript_RocketHideoutF2_RocketStayBehind::
# 58 "data/maps/RocketHideout_F2/scripts.pory"
	lock
# 59 "data/maps/RocketHideout_F2/scripts.pory"
	faceplayer
# 60 "data/maps/RocketHideout_F2/scripts.pory"
	msgbox EventScript_RocketHideoutF2_RocketStayBehind_Text_0
# 61 "data/maps/RocketHideout_F2/scripts.pory"
	waitmessage
# 62 "data/maps/RocketHideout_F2/scripts.pory"
	release
	return


# 65 "data/maps/RocketHideout_F2/scripts.pory"
MovePlayer_RocketHideoutF2_One:
# 66 "data/maps/RocketHideout_F2/scripts.pory"
	walk_down
# 67 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 67 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 67 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 67 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 67 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 67 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 67 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 67 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 68 "data/maps/RocketHideout_F2/scripts.pory"
	face_down
	step_end

# 71 "data/maps/RocketHideout_F2/scripts.pory"
MovePlayer_RocketHideoutF2_Two:
# 72 "data/maps/RocketHideout_F2/scripts.pory"
	walk_down
# 73 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 73 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 73 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 73 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 73 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 73 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 73 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 74 "data/maps/RocketHideout_F2/scripts.pory"
	face_down
	step_end

# 76 "data/maps/RocketHideout_F2/scripts.pory"
MovePlayer_RocketHideoutF2_Three:
# 77 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 78 "data/maps/RocketHideout_F2/scripts.pory"
	walk_down
# 78 "data/maps/RocketHideout_F2/scripts.pory"
	walk_down
# 79 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 79 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 79 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 79 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 79 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 79 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 79 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 79 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 80 "data/maps/RocketHideout_F2/scripts.pory"
	face_down
	step_end

# 83 "data/maps/RocketHideout_F2/scripts.pory"
MoveGiovanni_RocketHideout:
# 84 "data/maps/RocketHideout_F2/scripts.pory"
	emote_exclamation_mark
# 85 "data/maps/RocketHideout_F2/scripts.pory"
	walk_slow_up
# 85 "data/maps/RocketHideout_F2/scripts.pory"
	walk_slow_up
# 86 "data/maps/RocketHideout_F2/scripts.pory"
	walk_slow_left
# 86 "data/maps/RocketHideout_F2/scripts.pory"
	walk_slow_left
	step_end

# 89 "data/maps/RocketHideout_F2/scripts.pory"
BumpUpPlayer_RocketHideout:
# 90 "data/maps/RocketHideout_F2/scripts.pory"
	walk_up
# 91 "data/maps/RocketHideout_F2/scripts.pory"
	face_down
	step_end

# 94 "data/maps/RocketHideout_F2/scripts.pory"
LookRightPlayer_RocketHideout:
# 95 "data/maps/RocketHideout_F2/scripts.pory"
	face_right
	step_end

# 98 "data/maps/RocketHideout_F2/scripts.pory"
MoveScientist_RocketHideout:
# 99 "data/maps/RocketHideout_F2/scripts.pory"
	walk_fast_left
# 99 "data/maps/RocketHideout_F2/scripts.pory"
	walk_fast_left
# 99 "data/maps/RocketHideout_F2/scripts.pory"
	walk_fast_left
# 99 "data/maps/RocketHideout_F2/scripts.pory"
	walk_fast_left
# 99 "data/maps/RocketHideout_F2/scripts.pory"
	walk_fast_left
# 99 "data/maps/RocketHideout_F2/scripts.pory"
	walk_fast_left
# 99 "data/maps/RocketHideout_F2/scripts.pory"
	walk_fast_left
	step_end

# 102 "data/maps/RocketHideout_F2/scripts.pory"
GiovanniOutro_RocketHideout:
# 103 "data/maps/RocketHideout_F2/scripts.pory"
	walk_left
# 103 "data/maps/RocketHideout_F2/scripts.pory"
	walk_left
# 103 "data/maps/RocketHideout_F2/scripts.pory"
	walk_left
# 103 "data/maps/RocketHideout_F2/scripts.pory"
	walk_left
# 103 "data/maps/RocketHideout_F2/scripts.pory"
	walk_left
# 103 "data/maps/RocketHideout_F2/scripts.pory"
	walk_left
# 103 "data/maps/RocketHideout_F2/scripts.pory"
	walk_left
# 103 "data/maps/RocketHideout_F2/scripts.pory"
	walk_left
# 103 "data/maps/RocketHideout_F2/scripts.pory"
	walk_left
	step_end

EventScript_RocketHideoutF2_RocketStayBehind_Text_0:
# 60 "data/maps/RocketHideout_F2/scripts.pory"
	.string "Our Boss is the best... we control so\n"
	.string "much of Hoenn thanks to him. Nothing\l"
	.string "you can do to stop us!$"

ScientistConversation::
# 106 "data/maps/RocketHideout_F2/scripts.pory"
	.string "SCIENTIST: ... Yes yes so it seems we\n"
	.string "have great success, the Pokemon is\l"
	.string "ready and the Grunts have taken over\l"
	.string "most of our objectives.$"

GiovanniIntroduction::
# 110 "data/maps/RocketHideout_F2/scripts.pory"
	.string "???: Wonderful. All according to plan,\n"
	.string "the Pokemon you have created, the\l"
	.string "power we now have it makes us\l"
	.string "unstoppable. And with the latest\l"
	.string "addition of M....$"

GiovanniTellScientistToScram::
# 114 "data/maps/RocketHideout_F2/scripts.pory"
	.string "???: Looks like we have company.\n"
	.string "Scientist you can go thank you. My name\l"
	.string "is Giovanni, leader of Team Rocket.$"

GiovanniEvilPlans::
# 118 "data/maps/RocketHideout_F2/scripts.pory"
	.string "GIOVANNI: Impressive that you have\n"
	.string "came into my office, I will deal with the\l"
	.string "incapable members downstairs. Your\l"
	.string "actions are futile, we have taken over\l"
	.string "Hoenn while you were busy messing\l"
	.string "around here. Each and every gym is in\l"
	.string "our control, the people look to us for\l"
	.string "safety and with that we can take away\l"
	.string "all their Pokemon!$"

GiovanniOutro::
# 122 "data/maps/RocketHideout_F2/scripts.pory"
	.string "I'm not battling you right now. I have\n"
	.string "other matters to attend, as long as we\l"
	.string "control Hoenn nothing matters anyway,\l"
	.string "hahaha! You can try to stop us but you\l"
	.string "won't beat all my Rocket leaders\l"
	.string "anyway!$"
