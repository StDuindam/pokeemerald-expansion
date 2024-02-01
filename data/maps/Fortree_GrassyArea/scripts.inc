Fortree_GrassyArea_MapScripts::
# 2 "data/maps/Fortree_GrassyArea/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Setup_GrassZone_Mats
	.byte 0


Setup_GrassZone_Mats::
	return


MatsBattleTwo_GrassZone::
	return


MatsBattleTwoGrassZoneOver::
# 13 "data/maps/Fortree_GrassyArea/scripts.pory"
	setvar RIVAL_STATE_MATS, 2
	return


# 28 "data/maps/Fortree_GrassyArea/scripts.pory"
MatsLeave_GrassZone:
# 29 "data/maps/Fortree_GrassyArea/scripts.pory"
	walk_up
	step_end

MatsGrassZone_Intro::
# 16 "data/maps/Fortree_GrassyArea/scripts.pory"
	.string "Hello$"

MatsGrassZone_Outro::
# 20 "data/maps/Fortree_GrassyArea/scripts.pory"
	.string "Hello$"

MatsGrassZone_AboutGrassZone::
# 24 "data/maps/Fortree_GrassyArea/scripts.pory"
	.string "Hello$"
