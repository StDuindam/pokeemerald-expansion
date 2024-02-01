FireZone_MapScripts::
# 2 "data/maps/FireZone/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Setup_FireZone_Mats
	.byte 0


Setup_FireZone_Mats::
# 7 "data/maps/FireZone/scripts.pory"
	compare RIVAL_STATE_MATS, 1
	goto_if_ne Setup_FireZone_Mats_1
# 11 "data/maps/FireZone/scripts.pory"
	clearflag FLAG_MATS_BATTLE_TWO
	return

Setup_FireZone_Mats_1:
# 9 "data/maps/FireZone/scripts.pory"
	setflag FLAG_MATS_BATTLE_TWO
	return


StartMatsFireZone::
# 17 "data/maps/FireZone/scripts.pory"
	lock
# 18 "data/maps/FireZone/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFaceLeft_FireZone
# 19 "data/maps/FireZone/scripts.pory"
	waitmovement 0
# 20 "data/maps/FireZone/scripts.pory"
	applymovement 1, MatsMoveTo_Player
# 21 "data/maps/FireZone/scripts.pory"
	waitmovement 0
# 22 "data/maps/FireZone/scripts.pory"
	faceplayer
# 23 "data/maps/FireZone/scripts.pory"
	msgbox MatsFireZone_AboutFireZone
# 24 "data/maps/FireZone/scripts.pory"
	waitmessage
# 25 "data/maps/FireZone/scripts.pory"
	call MatsBattleTwo_FireZone
	return


MatsBattleTwo_FireZone::
# 29 "data/maps/FireZone/scripts.pory"
	trainerbattle_single TRAINER_MATS_SECOND_BATTLE, MatsFireZone_Intro, MatsFireZone_Outro, MatsBattleTwo_FireZoneOver
	return


MatsBattleTwo_FireZoneOver::
# 33 "data/maps/FireZone/scripts.pory"
	lockall
# 34 "data/maps/FireZone/scripts.pory"
	setvar RIVAL_STATE_MATS, 2
# 35 "data/maps/FireZone/scripts.pory"
	msgbox MatsFireZone_Goodbye
# 36 "data/maps/FireZone/scripts.pory"
	waitmessage
# 37 "data/maps/FireZone/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerOneUp_FireZone
# 38 "data/maps/FireZone/scripts.pory"
	waitmovement 0
# 39 "data/maps/FireZone/scripts.pory"
	applymovement 1, MatsLeave_FireZone
# 40 "data/maps/FireZone/scripts.pory"
	waitmovement 0
# 41 "data/maps/FireZone/scripts.pory"
	removeobject 1
# 42 "data/maps/FireZone/scripts.pory"
	release
	return


# 62 "data/maps/FireZone/scripts.pory"
PlayerFaceLeft_FireZone:
# 63 "data/maps/FireZone/scripts.pory"
	walk_in_place_left
	step_end

# 66 "data/maps/FireZone/scripts.pory"
PlayerOneUp_FireZone:
# 67 "data/maps/FireZone/scripts.pory"
	walk_up
# 68 "data/maps/FireZone/scripts.pory"
	walk_in_place_down
	step_end

# 71 "data/maps/FireZone/scripts.pory"
MatsLeave_FireZone:
# 72 "data/maps/FireZone/scripts.pory"
	walk_right
# 73 "data/maps/FireZone/scripts.pory"
	walk_down
# 74 "data/maps/FireZone/scripts.pory"
	walk_right
# 74 "data/maps/FireZone/scripts.pory"
	walk_right
# 74 "data/maps/FireZone/scripts.pory"
	walk_right
# 74 "data/maps/FireZone/scripts.pory"
	walk_right
# 74 "data/maps/FireZone/scripts.pory"
	walk_right
# 74 "data/maps/FireZone/scripts.pory"
	walk_right
# 74 "data/maps/FireZone/scripts.pory"
	walk_right
	step_end

# 77 "data/maps/FireZone/scripts.pory"
MatsMoveTo_Player:
# 78 "data/maps/FireZone/scripts.pory"
	walk_up
# 79 "data/maps/FireZone/scripts.pory"
	walk_right
# 79 "data/maps/FireZone/scripts.pory"
	walk_right
# 79 "data/maps/FireZone/scripts.pory"
	walk_right
	step_end

MatsFireZone_Intro::
# 45 "data/maps/FireZone/scripts.pory"
	.string "Let's see if you deserve these strong\n"
	.string "fire types!$"

MatsFireZone_Outro::
# 49 "data/maps/FireZone/scripts.pory"
	.string "Your team is coming along nicely! Keep\n"
	.string "it up.$"

MatsFireZone_AboutFireZone::
# 53 "data/maps/FireZone/scripts.pory"
	.string "Nice {PLAYER}, you found me. Some of\n"
	.string "the pokes on this route are unique, you\l"
	.string "will not see them often. Just my kind of\l"
	.string "poke.$"

MatsFireZone_Goodbye::
# 57 "data/maps/FireZone/scripts.pory"
	.string "Alright, you are getting stronger. I like\n"
	.string "it! See you around, keep an eye open\l"
	.string "when you are able to first surf.$"
