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
	setvar VAR_ROCKET_ARC_STATE, MUS_ENCOUNTER_AQUA
# 32 "data/maps/RocketHideout_F2/scripts.pory"
	setflag FLAG_ROCKET_GIOVANNIINTRO_COMPLETED
	return


MovePlayerToStart_1_RocketHideoutF2::
# 36 "data/maps/RocketHideout_F2/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 37 "data/maps/RocketHideout_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayer_RocketHideoutF2_One
# 38 "data/maps/RocketHideout_F2/scripts.pory"
	waitmovement 0
# 39 "data/maps/RocketHideout_F2/scripts.pory"
	call EventScript_RocketHideoutF2_GiovanniIntro
	return


MovePlayerToStart_2_RocketHideoutF2::
# 43 "data/maps/RocketHideout_F2/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, TRUE
# 44 "data/maps/RocketHideout_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayer_RocketHideoutF2_Two
# 45 "data/maps/RocketHideout_F2/scripts.pory"
	waitmovement 0
# 46 "data/maps/RocketHideout_F2/scripts.pory"
	call EventScript_RocketHideoutF2_GiovanniIntro
	return


MovePlayerToStart_3_RocketHideoutF2::
# 50 "data/maps/RocketHideout_F2/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, MUS_AQUA_MAGMA_HIDEOUT
# 51 "data/maps/RocketHideout_F2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TRUE
# 52 "data/maps/RocketHideout_F2/scripts.pory"
	waitmovement 0
# 53 "data/maps/RocketHideout_F2/scripts.pory"
	call EventScript_RocketHideoutF2_GiovanniIntro
	return


EventScript_RocketHideoutF2_RocketStayBehind::
# 57 "data/maps/RocketHideout_F2/scripts.pory"
	lock
# 58 "data/maps/RocketHideout_F2/scripts.pory"
	faceplayer
# 59 "data/maps/RocketHideout_F2/scripts.pory"
	msgbox EventScript_RocketHideoutF2_RocketStayBehind_Text_0
# 60 "data/maps/RocketHideout_F2/scripts.pory"
	waitmessage
# 61 "data/maps/RocketHideout_F2/scripts.pory"
	release
	return


# 64 "data/maps/RocketHideout_F2/scripts.pory"
MovePlayer_RocketHideoutF2_One:
# 65 "data/maps/RocketHideout_F2/scripts.pory"
	walk_down
# 66 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 66 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 66 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 66 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 66 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 66 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 66 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 66 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 67 "data/maps/RocketHideout_F2/scripts.pory"
	face_down
	step_end

# 70 "data/maps/RocketHideout_F2/scripts.pory"
MovePlayer_RocketHideoutF2_Two:
# 71 "data/maps/RocketHideout_F2/scripts.pory"
	walk_down
# 72 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 72 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 72 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 72 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 72 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 72 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 72 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 73 "data/maps/RocketHideout_F2/scripts.pory"
	face_down
	step_end

# 75 "data/maps/RocketHideout_F2/scripts.pory"
MovePlayer_RocketHideoutF2_Three:
# 76 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 77 "data/maps/RocketHideout_F2/scripts.pory"
	walk_down
# 77 "data/maps/RocketHideout_F2/scripts.pory"
	walk_down
# 78 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 78 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 78 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 78 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 78 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 78 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 78 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 78 "data/maps/RocketHideout_F2/scripts.pory"
	walk_right
# 79 "data/maps/RocketHideout_F2/scripts.pory"
	face_down
	step_end

# 82 "data/maps/RocketHideout_F2/scripts.pory"
MoveGiovanni_RocketHideout:
# 83 "data/maps/RocketHideout_F2/scripts.pory"
	emote_exclamation_mark
# 84 "data/maps/RocketHideout_F2/scripts.pory"
	walk_slow_up
# 84 "data/maps/RocketHideout_F2/scripts.pory"
	walk_slow_up
# 85 "data/maps/RocketHideout_F2/scripts.pory"
	walk_slow_left
# 85 "data/maps/RocketHideout_F2/scripts.pory"
	walk_slow_left
	step_end

# 88 "data/maps/RocketHideout_F2/scripts.pory"
BumpUpPlayer_RocketHideout:
# 89 "data/maps/RocketHideout_F2/scripts.pory"
	walk_up
# 90 "data/maps/RocketHideout_F2/scripts.pory"
	face_down
	step_end

# 93 "data/maps/RocketHideout_F2/scripts.pory"
LookRightPlayer_RocketHideout:
# 94 "data/maps/RocketHideout_F2/scripts.pory"
	face_right
	step_end

# 97 "data/maps/RocketHideout_F2/scripts.pory"
MoveScientist_RocketHideout:
# 98 "data/maps/RocketHideout_F2/scripts.pory"
	walk_fast_left
# 98 "data/maps/RocketHideout_F2/scripts.pory"
	walk_fast_left
# 98 "data/maps/RocketHideout_F2/scripts.pory"
	walk_fast_left
# 98 "data/maps/RocketHideout_F2/scripts.pory"
	walk_fast_left
# 98 "data/maps/RocketHideout_F2/scripts.pory"
	walk_fast_left
# 98 "data/maps/RocketHideout_F2/scripts.pory"
	walk_fast_left
# 98 "data/maps/RocketHideout_F2/scripts.pory"
	walk_fast_left
	step_end

# 101 "data/maps/RocketHideout_F2/scripts.pory"
GiovanniOutro_RocketHideout:
# 102 "data/maps/RocketHideout_F2/scripts.pory"
	walk_left
# 102 "data/maps/RocketHideout_F2/scripts.pory"
	walk_left
# 102 "data/maps/RocketHideout_F2/scripts.pory"
	walk_left
# 102 "data/maps/RocketHideout_F2/scripts.pory"
	walk_left
# 102 "data/maps/RocketHideout_F2/scripts.pory"
	walk_left
# 102 "data/maps/RocketHideout_F2/scripts.pory"
	walk_left
# 102 "data/maps/RocketHideout_F2/scripts.pory"
	walk_left
# 102 "data/maps/RocketHideout_F2/scripts.pory"
	walk_left
# 102 "data/maps/RocketHideout_F2/scripts.pory"
	walk_left
	step_end

EventScript_RocketHideoutF2_RocketStayBehind_Text_0:
# 59 "data/maps/RocketHideout_F2/scripts.pory"
	.string "Our Boss is the best... we control so\n"
	.string "much of Hoenn thanks to him. Nothing\l"
	.string "you can do to stop us!$"

ScientistConversation::
# 105 "data/maps/RocketHideout_F2/scripts.pory"
	.string "SCIENTIST: ... Yes yes so it seems we\n"
	.string "have great success, the Pokemon is\l"
	.string "ready and the Grunts have taken over\l"
	.string "most of our objectives.$"

GiovanniIntroduction::
# 109 "data/maps/RocketHideout_F2/scripts.pory"
	.string "???: Wonderful. All according to plan,\n"
	.string "the Pokemon you have created, the\l"
	.string "power we now have it makes us\l"
	.string "unstoppable. And with the latest\l"
	.string "addition of M....$"

GiovanniTellScientistToScram::
# 113 "data/maps/RocketHideout_F2/scripts.pory"
	.string "???: Looks like we have company.\n"
	.string "Scientist you can go thank you. My name\l"
	.string "is Giovanni, leader of Team Rocket.$"

GiovanniEvilPlans::
# 117 "data/maps/RocketHideout_F2/scripts.pory"
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
# 121 "data/maps/RocketHideout_F2/scripts.pory"
	.string "I'm not battling you right now. I have\n"
	.string "other matters to attend, as long as we\l"
	.string "control Hoenn nothing matters anyway,\l"
	.string "hahaha! You can try to stop us but you\l"
	.string "won't beat all my Rocket leaders\l"
	.string "anyway!$"
