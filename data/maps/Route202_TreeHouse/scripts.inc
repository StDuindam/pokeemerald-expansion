Route202_TreeHouse_MapScripts::
	.byte 0


EventScript_Route202_TreeHouse_RillaBoom::
# 5 "data/maps/Route202_TreeHouse/scripts.pory"
	lock
# 6 "data/maps/Route202_TreeHouse/scripts.pory"
	faceplayer
# 7 "data/maps/Route202_TreeHouse/scripts.pory"
	compare VAR_ROCKET_ARC_STATE, 5
	goto_if_eq EventScript_Route202_TreeHouse_RillaBoom_2
# 14 "data/maps/Route202_TreeHouse/scripts.pory"
	compare VAR_ROCKET_ARC_STATE, 5
	goto_if_gt EventScript_Route202_TreeHouse_RillaBoom_3
EventScript_Route202_TreeHouse_RillaBoom_1:
# 18 "data/maps/Route202_TreeHouse/scripts.pory"
	release
	return

EventScript_Route202_TreeHouse_RillaBoom_2:
# 8 "data/maps/Route202_TreeHouse/scripts.pory"
	msgbox Text_Route202TreeHouse_Rillaboom
# 9 "data/maps/Route202_TreeHouse/scripts.pory"
	waitmessage
# 10 "data/maps/Route202_TreeHouse/scripts.pory"
	setvar VAR_ROCKET_ARC_STATE, 6
# 11 "data/maps/Route202_TreeHouse/scripts.pory"
	setflag FLAG_ROCKET_BLOCKADE_SCIENTIST
# 12 "data/maps/Route202_TreeHouse/scripts.pory"
	msgbox EventScript_Route202_TreeHouse_RillaBoom_Text_0
# 13 "data/maps/Route202_TreeHouse/scripts.pory"
	waitmessage
	goto EventScript_Route202_TreeHouse_RillaBoom_1

EventScript_Route202_TreeHouse_RillaBoom_3:
# 15 "data/maps/Route202_TreeHouse/scripts.pory"
	msgbox EventScript_Route202_TreeHouse_RillaBoom_Text_1
# 16 "data/maps/Route202_TreeHouse/scripts.pory"
	waitmessage
	goto EventScript_Route202_TreeHouse_RillaBoom_1


EventScript_Route202_TreeHouse_RillaBoom_Text_0:
# 12 "data/maps/Route202_TreeHouse/scripts.pory"
	.string "You have a feeling you should return to\n"
	.string "the village.$"

EventScript_Route202_TreeHouse_RillaBoom_Text_1:
# 15 "data/maps/Route202_TreeHouse/scripts.pory"
	.string "RILLABOOM: Go to the facility and\n"
	.string "continue your research of the island\l"
	.string "there.$"

Text_Route202TreeHouse_Rillaboom::
# 21 "data/maps/Route202_TreeHouse/scripts.pory"
	.string "RILLABOOM: It has been a long time\n"
	.string "since someone visited me, my name is\l"
	.string "Rillaboom. I'm sure you are wondering\l"
	.string "why I can speak, I am not a real\l"
	.string "Pokemon. I am a clone with enhanced\l"
	.string "abilities. This damned Island has\l"
	.string "brought me only pain and frustration.\l"
	.string "Have you seen the large facility on\l"
	.string "your way here? There are very bad\l"
	.string "things happening there. Will you be able\l"
	.string "to stop them? Do return once in a while\l"
	.string "and tell me of your stories...$"
