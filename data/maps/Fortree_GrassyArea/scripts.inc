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
	call MatsTalkToPlayerAndBattle_GrassZone
# 19 "data/maps/Fortree_GrassyArea/scripts.pory"
	release
	return


MatsMoveToPlayer_B::
# 23 "data/maps/Fortree_GrassyArea/scripts.pory"
	lock
# 24 "data/maps/Fortree_GrassyArea/scripts.pory"
	applymovement 1, MatsWalkingB_GrassZone
# 25 "data/maps/Fortree_GrassyArea/scripts.pory"
	waitmovement 0
# 26 "data/maps/Fortree_GrassyArea/scripts.pory"
	call MatsTalkToPlayerAndBattle_GrassZone
# 27 "data/maps/Fortree_GrassyArea/scripts.pory"
	release
	return


MatsTalkToPlayerAndBattle_GrassZone::
# 31 "data/maps/Fortree_GrassyArea/scripts.pory"
	lock
# 32 "data/maps/Fortree_GrassyArea/scripts.pory"
	faceplayer
# 33 "data/maps/Fortree_GrassyArea/scripts.pory"
	msgbox MatsGrassZone_AboutGrassZone
# 34 "data/maps/Fortree_GrassyArea/scripts.pory"
	waitmessage
# 35 "data/maps/Fortree_GrassyArea/scripts.pory"
	call MatsBattleFour_GrassZone
# 36 "data/maps/Fortree_GrassyArea/scripts.pory"
	release
	return


MatsBattleFour_GrassZone::
# 40 "data/maps/Fortree_GrassyArea/scripts.pory"
	trainerbattle_single TRAINER_MATS_FOURTH_BATTLE, MatsGrassZone_Intro, MatsGrassZone_Outro, MatsBattleFourGrassZoneOver
	return


MatsBattleFourGrassZoneOver::
# 44 "data/maps/Fortree_GrassyArea/scripts.pory"
	lock
# 45 "data/maps/Fortree_GrassyArea/scripts.pory"
	msgbox MatsGrassZone_BeforeLeaving
# 46 "data/maps/Fortree_GrassyArea/scripts.pory"
	waitmessage
# 47 "data/maps/Fortree_GrassyArea/scripts.pory"
	applymovement 1, MatsLeave_GrassZone
# 48 "data/maps/Fortree_GrassyArea/scripts.pory"
	waitmovement 0
# 49 "data/maps/Fortree_GrassyArea/scripts.pory"
	removeobject 1
# 50 "data/maps/Fortree_GrassyArea/scripts.pory"
	setvar RIVAL_STATE_MATS, 4
# 51 "data/maps/Fortree_GrassyArea/scripts.pory"
	setflag FLAG_MATS_BATTLE_FOUR
# 52 "data/maps/Fortree_GrassyArea/scripts.pory"
	release
	return


# 71 "data/maps/Fortree_GrassyArea/scripts.pory"
MatsWalkingA_GrassZone:
# 72 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 72 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 72 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 72 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 72 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 73 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_up
# 73 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_up
# 74 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 74 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 74 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
	step_end

# 77 "data/maps/Fortree_GrassyArea/scripts.pory"
MatsWalkingB_GrassZone:
# 78 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 78 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 78 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 78 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 78 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 79 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_up
# 79 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_up
# 80 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 80 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 80 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
# 80 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_left
	step_end

# 83 "data/maps/Fortree_GrassyArea/scripts.pory"
MatsLeave_GrassZone:
# 84 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_right
# 84 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_right
# 84 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_right
# 84 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_right
# 84 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_right
# 84 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_right
# 85 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_down
# 85 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_down
# 85 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_down
# 85 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_down
# 85 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_down
# 85 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_down
# 85 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_down
	step_end

MatsGrassZone_AboutGrassZone::
# 55 "data/maps/Fortree_GrassyArea/scripts.pory"
	.string "Look at that, all the way to Fortree,\n"
	.string "huh? You might just make it to the\l"
	.string "league if you keep it up. There's some\l"
	.string "neat grass pokemon around here.$"

MatsGrassZone_Intro::
# 59 "data/maps/Fortree_GrassyArea/scripts.pory"
	.string "Show me what team you are rocking with\n"
	.string "now.$"

MatsGrassZone_Outro::
# 63 "data/maps/Fortree_GrassyArea/scripts.pory"
	.string "Those are some strong and unique\n"
	.string "Pokemon!$"

MatsGrassZone_BeforeLeaving::
# 67 "data/maps/Fortree_GrassyArea/scripts.pory"
	.string "I think you should focus on taking\n"
	.string "those aqua and magma nerds out. Then\l"
	.string "maybe try the league? Later skater!$"
