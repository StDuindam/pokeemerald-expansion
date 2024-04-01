MewtwoIslandCave_2_MapScripts::
	.byte 0


Eventscript_MewtwoIslandCave_2_Scientist::
# 5 "data/maps/MewtwoIslandCave_2/scripts.pory"
	lock
# 6 "data/maps/MewtwoIslandCave_2/scripts.pory"
	faceplayer
# 7 "data/maps/MewtwoIslandCave_2/scripts.pory"
	msgbox Eventscript_MewtwoIslandCave_2_Scientist_Text_0
# 8 "data/maps/MewtwoIslandCave_2/scripts.pory"
	waitmessage
# 9 "data/maps/MewtwoIslandCave_2/scripts.pory"
	release
	return


Eventscript_MewtwoIslandCave_2_Scientist_Text_0:
# 7 "data/maps/MewtwoIslandCave_2/scripts.pory"
	.string "No... you found me? I sure hope THEY\n"
	.string "cannot find me here...$"
