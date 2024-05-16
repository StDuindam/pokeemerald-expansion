Route204_MapScripts::
# 2 "data/maps/Route204/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EventScript_Route204_OnTransition
	.byte 0


EventScript_Route204_OnTransition::
	return


EventScript_Route204_ArrivalNurseJoy::
# 10 "data/maps/Route204/scripts.pory"
	lock
# 11 "data/maps/Route204/scripts.pory"
	turnobject 2, 3
# 12 "data/maps/Route204/scripts.pory"
	msgbox EventScript_Route204_ArrivalNurseJoy_Text_0
# 13 "data/maps/Route204/scripts.pory"
	waitmessage
# 14 "data/maps/Route204/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route204_MovePlayerToNurseJoy
# 15 "data/maps/Route204/scripts.pory"
	waitmovement 0
# 16 "data/maps/Route204/scripts.pory"
	msgbox EventScript_Route204_ArrivalNurseJoy_Text_1
# 17 "data/maps/Route204/scripts.pory"
	waitmessage
# 18 "data/maps/Route204/scripts.pory"
	applymovement 2, Route204_MoveNurseJoyToHouse
# 19 "data/maps/Route204/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route204_MovePlayerToHouse
# 20 "data/maps/Route204/scripts.pory"
	waitmovement 0
# 21 "data/maps/Route204/scripts.pory"
	msgbox EventScript_Route204_ArrivalNurseJoy_Text_2
# 22 "data/maps/Route204/scripts.pory"
	waitmessage
# 23 "data/maps/Route204/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MOVE_UP_ONE_RIVALDOJO
# 24 "data/maps/Route204/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route204/scripts.pory"
	setflag FLAG_MEWTWO_ISLAND_INTRO_NURSEJOY
# 26 "data/maps/Route204/scripts.pory"
	setvar VAR_MEWTWO_ARC_STATE, 4
# 27 "data/maps/Route204/scripts.pory"
	setflag FLAG_POST_MEWTWOEVENT
# 28 "data/maps/Route204/scripts.pory"
	warpdoor MAP_MEWTWO_AREA_1, 0
# 29 "data/maps/Route204/scripts.pory"
	releaseall
	return


# 32 "data/maps/Route204/scripts.pory"
Route204_MovePlayerToNurseJoy:
# 33 "data/maps/Route204/scripts.pory"
	walk_right
# 33 "data/maps/Route204/scripts.pory"
	walk_right
# 33 "data/maps/Route204/scripts.pory"
	walk_right
	step_end

# 36 "data/maps/Route204/scripts.pory"
Route204_MovePlayerToHouse:
# 37 "data/maps/Route204/scripts.pory"
	walk_right
# 37 "data/maps/Route204/scripts.pory"
	walk_right
# 37 "data/maps/Route204/scripts.pory"
	walk_right
# 37 "data/maps/Route204/scripts.pory"
	walk_right
# 37 "data/maps/Route204/scripts.pory"
	walk_right
# 37 "data/maps/Route204/scripts.pory"
	walk_right
# 37 "data/maps/Route204/scripts.pory"
	walk_right
# 37 "data/maps/Route204/scripts.pory"
	walk_right
# 37 "data/maps/Route204/scripts.pory"
	walk_right
# 37 "data/maps/Route204/scripts.pory"
	walk_right
# 37 "data/maps/Route204/scripts.pory"
	walk_right
# 38 "data/maps/Route204/scripts.pory"
	walk_up
# 38 "data/maps/Route204/scripts.pory"
	walk_up
# 38 "data/maps/Route204/scripts.pory"
	walk_up
# 38 "data/maps/Route204/scripts.pory"
	walk_up
# 39 "data/maps/Route204/scripts.pory"
	walk_left
# 39 "data/maps/Route204/scripts.pory"
	walk_left
# 39 "data/maps/Route204/scripts.pory"
	walk_left
# 39 "data/maps/Route204/scripts.pory"
	walk_left
# 39 "data/maps/Route204/scripts.pory"
	walk_left
# 39 "data/maps/Route204/scripts.pory"
	walk_left
# 39 "data/maps/Route204/scripts.pory"
	walk_left
# 39 "data/maps/Route204/scripts.pory"
	walk_left
# 40 "data/maps/Route204/scripts.pory"
	walk_up
# 41 "data/maps/Route204/scripts.pory"
	face_left
	step_end

# 44 "data/maps/Route204/scripts.pory"
Route204_MoveNurseJoyToHouse:
# 45 "data/maps/Route204/scripts.pory"
	walk_right
# 45 "data/maps/Route204/scripts.pory"
	walk_right
# 45 "data/maps/Route204/scripts.pory"
	walk_right
# 45 "data/maps/Route204/scripts.pory"
	walk_right
# 45 "data/maps/Route204/scripts.pory"
	walk_right
# 45 "data/maps/Route204/scripts.pory"
	walk_right
# 45 "data/maps/Route204/scripts.pory"
	walk_right
# 45 "data/maps/Route204/scripts.pory"
	walk_right
# 45 "data/maps/Route204/scripts.pory"
	walk_right
# 45 "data/maps/Route204/scripts.pory"
	walk_right
# 46 "data/maps/Route204/scripts.pory"
	walk_up
# 46 "data/maps/Route204/scripts.pory"
	walk_up
# 46 "data/maps/Route204/scripts.pory"
	walk_up
# 46 "data/maps/Route204/scripts.pory"
	walk_up
# 47 "data/maps/Route204/scripts.pory"
	walk_left
# 47 "data/maps/Route204/scripts.pory"
	walk_left
# 47 "data/maps/Route204/scripts.pory"
	walk_left
# 47 "data/maps/Route204/scripts.pory"
	walk_left
# 47 "data/maps/Route204/scripts.pory"
	walk_left
# 47 "data/maps/Route204/scripts.pory"
	walk_left
# 47 "data/maps/Route204/scripts.pory"
	walk_left
# 47 "data/maps/Route204/scripts.pory"
	walk_left
# 48 "data/maps/Route204/scripts.pory"
	walk_up
# 49 "data/maps/Route204/scripts.pory"
	walk_left
# 50 "data/maps/Route204/scripts.pory"
	face_right
	step_end

EventScript_Route204_InteractNurseJoy::
# 54 "data/maps/Route204/scripts.pory"
	lock
# 55 "data/maps/Route204/scripts.pory"
	faceplayer
# 56 "data/maps/Route204/scripts.pory"
	msgbox EventScript_Route204_InteractNurseJoy_Text_0
# 57 "data/maps/Route204/scripts.pory"
	waitmessage
# 58 "data/maps/Route204/scripts.pory"
	releaseall
	return


EventScript_Route204_ArrivalNurseJoy_Text_0:
# 12 "data/maps/Route204/scripts.pory"
	.string "NURSE JOY: {PLAYER}, we have been\n"
	.string "expecting you.$"

EventScript_Route204_ArrivalNurseJoy_Text_1:
# 16 "data/maps/Route204/scripts.pory"
	.string "NURSE JOY: Please follow me, I will bring\n"
	.string "you to my master.$"

EventScript_Route204_ArrivalNurseJoy_Text_2:
# 21 "data/maps/Route204/scripts.pory"
	.string "NURSE JOY: I will see you inside.$"

EventScript_Route204_InteractNurseJoy_Text_0:
# 56 "data/maps/Route204/scripts.pory"
	.string "NURSE JOY: Please enter the building. My Master insists.$"
