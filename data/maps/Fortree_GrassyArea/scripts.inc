Fortree_GrassyArea_MapScripts::
# 2 "data/maps/Fortree_GrassyArea/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Setup_GrassZone_Mats
	.byte 0


Setup_GrassZone_Mats::
# 6 "data/maps/Fortree_GrassyArea/scripts.pory"
	compare RIVAL_STATE_MATS, 3
	goto_if_ne Setup_GrassZone_Mats_1
# 10 "data/maps/Fortree_GrassyArea/scripts.pory"
	clearflag FLAG_MATS_BATTLE_FOUR
	return

Setup_GrassZone_Mats_1:
# 8 "data/maps/Fortree_GrassyArea/scripts.pory"
	setflag FLAG_MATS_BATTLE_FOUR
	return


MatsMoveToPlayer_A::
# 15 "data/maps/Fortree_GrassyArea/scripts.pory"
	lock
# 16 "data/maps/Fortree_GrassyArea/scripts.pory"
	applymovement 1, MatsWalkingA_GrassZone
# 17 "data/maps/Fortree_GrassyArea/scripts.pory"
	waitmovement 0
# 18 "data/maps/Fortree_GrassyArea/scripts.pory"
	faceplayer
# 19 "data/maps/Fortree_GrassyArea/scripts.pory"
	call MatsTalkToPlayerAndBattle_GrassZone
# 20 "data/maps/Fortree_GrassyArea/scripts.pory"
	release
	return


MatsMoveToPlayer_B::
# 24 "data/maps/Fortree_GrassyArea/scripts.pory"
	lock
# 25 "data/maps/Fortree_GrassyArea/scripts.pory"
	applymovement 1, MatsWalkingB_GrassZone
# 26 "data/maps/Fortree_GrassyArea/scripts.pory"
	waitmovement 0
# 27 "data/maps/Fortree_GrassyArea/scripts.pory"
	faceplayer
# 28 "data/maps/Fortree_GrassyArea/scripts.pory"
	call MatsTalkToPlayerAndBattle_GrassZone
# 29 "data/maps/Fortree_GrassyArea/scripts.pory"
	release
	return


MatsTalkToPlayerAndBattle_GrassZone::
# 33 "data/maps/Fortree_GrassyArea/scripts.pory"
	lock
# 34 "data/maps/Fortree_GrassyArea/scripts.pory"
	faceplayer
# 35 "data/maps/Fortree_GrassyArea/scripts.pory"
	msgbox MatsGrassZone_AboutGrassZone
# 36 "data/maps/Fortree_GrassyArea/scripts.pory"
	waitmessage
# 37 "data/maps/Fortree_GrassyArea/scripts.pory"
	call MatsBattleFour_GrassZone
# 38 "data/maps/Fortree_GrassyArea/scripts.pory"
	release
	return


MatsBattleFour_GrassZone::
# 42 "data/maps/Fortree_GrassyArea/scripts.pory"
	trainerbattle_single TRAINER_MATS_FOURTH_BATTLE, MatsGrassZone_Intro, MatsGrassZone_Outro, MatsBattleFourGrassZoneOver
	return


MatsBattleFourGrassZoneOver::
# 46 "data/maps/Fortree_GrassyArea/scripts.pory"
	lock
# 47 "data/maps/Fortree_GrassyArea/scripts.pory"
	msgbox MatsGrassZone_BeforeLeaving
# 48 "data/maps/Fortree_GrassyArea/scripts.pory"
	waitmessage
# 49 "data/maps/Fortree_GrassyArea/scripts.pory"
	applymovement 1, MatsLeave_GrassZone
# 50 "data/maps/Fortree_GrassyArea/scripts.pory"
	waitmovement 0
# 51 "data/maps/Fortree_GrassyArea/scripts.pory"
	removeobject 1
# 52 "data/maps/Fortree_GrassyArea/scripts.pory"
	setvar RIVAL_STATE_MATS, 4
# 53 "data/maps/Fortree_GrassyArea/scripts.pory"
	setflag FLAG_MATS_BATTLE_FOUR
# 54 "data/maps/Fortree_GrassyArea/scripts.pory"
	release
	return


# 73 "data/maps/Fortree_GrassyArea/scripts.pory"
MatsWalkingA_GrassZone:
# 74 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 74 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 74 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 74 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 74 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 75 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_up
# 75 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_up
# 76 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 76 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 76 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
	step_end

# 79 "data/maps/Fortree_GrassyArea/scripts.pory"
MatsWalkingB_GrassZone:
# 80 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 80 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 80 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 80 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 80 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 81 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_up
# 81 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_up
# 82 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 82 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 82 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 82 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
	step_end

# 85 "data/maps/Fortree_GrassyArea/scripts.pory"
MatsLeave_GrassZone:
# 86 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_right
# 86 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_right
# 86 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_right
# 86 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_right
# 86 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_right
# 86 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_right
# 87 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_down
# 87 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_down
# 87 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_down
# 87 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_down
# 87 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_down
# 87 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_down
# 87 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_down
	step_end

MatsGrassZone_AboutGrassZone::
# 57 "data/maps/Fortree_GrassyArea/scripts.pory"
	.string "Look at that, all the way to Fortree,\n"
	.string "huh? You might just make it to the\l"
	.string "league if you keep it up. There's some\l"
	.string "neat grass pokemon around here.$"

MatsGrassZone_Intro::
# 61 "data/maps/Fortree_GrassyArea/scripts.pory"
	.string "Show me what team you are rocking with\n"
	.string "now.$"

MatsGrassZone_Outro::
# 65 "data/maps/Fortree_GrassyArea/scripts.pory"
	.string "Those are some strong and unique\n"
	.string "Pokemon!$"

MatsGrassZone_BeforeLeaving::
# 69 "data/maps/Fortree_GrassyArea/scripts.pory"
	.string "I think you should focus on taking\n"
	.string "those aqua and magma nerds out. Then\l"
	.string "maybe try the league? Later skater!$"
