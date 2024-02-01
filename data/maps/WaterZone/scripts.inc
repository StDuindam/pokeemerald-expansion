WaterZone_MapScripts::
# 2 "data/maps/WaterZone/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Setup_WaterZone_Mats
	.byte 0


Setup_WaterZone_Mats::
	return


MatsBattleTwo_WaterZone::
	return


MatsBattleTwoWaterZoneOver::
# 14 "data/maps/WaterZone/scripts.pory"
	setvar RIVAL_STATE_MATS, 2
	return


# 29 "data/maps/WaterZone/scripts.pory"
MatsLeave_WaterZone:
# 30 "data/maps/WaterZone/scripts.pory"
	walk_up
	step_end

MatsWaterZone_Intro::
# 17 "data/maps/WaterZone/scripts.pory"
	.string "Hello$"

MatsWaterZone_Outro::
# 21 "data/maps/WaterZone/scripts.pory"
	.string "Hello$"

MatsWaterZone_AboutWaterZone::
# 25 "data/maps/WaterZone/scripts.pory"
	.string "Hello$"
