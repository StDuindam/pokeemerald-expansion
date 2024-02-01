WaterZone_MapScripts::
# 2 "data/maps/WaterZone/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Setup_WaterZone_Mats
	.byte 0


Setup_WaterZone_Mats::
# 6 "data/maps/WaterZone/scripts.pory"
	compare RIVAL_STATE_MATS, 2
	goto_if_ne Setup_WaterZone_Mats_1
# 10 "data/maps/WaterZone/scripts.pory"
	clearflag FLAG_MATS_BATTLE_THREE
	return

Setup_WaterZone_Mats_1:
# 8 "data/maps/WaterZone/scripts.pory"
	setflag FLAG_MATS_BATTLE_THREE
	return


MatsIntro_WaterZone::
# 15 "data/maps/WaterZone/scripts.pory"
	lock
# 16 "data/maps/WaterZone/scripts.pory"
	faceplayer
# 17 "data/maps/WaterZone/scripts.pory"
	msgbox MatsWaterZone_FirstChat
# 18 "data/maps/WaterZone/scripts.pory"
	waitmessage
# 19 "data/maps/WaterZone/scripts.pory"
	call MatsBattleThree_WaterZone
# 20 "data/maps/WaterZone/scripts.pory"
	release
	return


MatsBattleThree_WaterZone::
# 24 "data/maps/WaterZone/scripts.pory"
	trainerbattle_single TRAINER_MATS_THIRD_BATTLE, MatsWaterZone_Intro, MatsWaterZone_Outro, MatsBattleThreeWaterZoneOver
	return


MatsBattleThreeWaterZoneOver::
# 28 "data/maps/WaterZone/scripts.pory"
	lock
# 29 "data/maps/WaterZone/scripts.pory"
	msgbox MatsWaterZone_Warning
# 30 "data/maps/WaterZone/scripts.pory"
	waitmessage
# 31 "data/maps/WaterZone/scripts.pory"
	fadescreen FADE_TO_BLACK
# 32 "data/maps/WaterZone/scripts.pory"
	removeobject 1
# 33 "data/maps/WaterZone/scripts.pory"
	setflag FLAG_MATS_BATTLE_THREE
# 34 "data/maps/WaterZone/scripts.pory"
	setvar RIVAL_STATE_MATS, 3
# 35 "data/maps/WaterZone/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 36 "data/maps/WaterZone/scripts.pory"
	release
	return


# 55 "data/maps/WaterZone/scripts.pory"
MatsLeave_WaterZone:
# 56 "data/maps/WaterZone/scripts.pory"
	walk_up
	step_end

MatsWaterZone_Warning::
# 39 "data/maps/WaterZone/scripts.pory"
	.string "Don't break your back trying to find\n"
	.string "the Hoenn starter, by the way, they\l"
	.string "don't like to hang with the others.$"

MatsWaterZone_FirstChat::
# 43 "data/maps/WaterZone/scripts.pory"
	.string "Easy, {PLAYER}, looks like you\n"
	.string "mastered SURF. This is my go to spot if\l"
	.string "I need a strong and rare water type.\l"
	.string "Maybe you will find one you like too!$"

MatsWaterZone_Intro::
# 47 "data/maps/WaterZone/scripts.pory"
	.string "I'm starting to use some power here!$"

MatsWaterZone_Outro::
# 51 "data/maps/WaterZone/scripts.pory"
	.string "I guess you are almost ready to battle\n"
	.string "with the best.$"
