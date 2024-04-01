MewtwoIslandCave_MapScripts::
# 2 "data/maps/MewtwoIslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MewtwoIslandCave_OnTransition
	.byte 0


MewtwoIslandCave_OnTransition::
# 6 "data/maps/MewtwoIslandCave/scripts.pory"
	compare VAR_ROCKET_ARC_STATE, 7
	goto_if_lt MewtwoIslandCave_OnTransition_2
MewtwoIslandCave_OnTransition_1:
# 10 "data/maps/MewtwoIslandCave/scripts.pory"
	goto_if_set FLAG_ROCKET_EVENT_COMPLETED, MewtwoIslandCave_OnTransition_4
	return

MewtwoIslandCave_OnTransition_2:
	goto MewtwoIslandCave_OnTransition_1

MewtwoIslandCave_OnTransition_4:
	return

