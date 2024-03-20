Route202_MapScripts::
	.byte 0


EventScript_Route202_Maniac::
# 7 "data/maps/Route202/scripts.pory"
	lock
# 8 "data/maps/Route202/scripts.pory"
	faceplayer
# 9 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_Maniac_Text_0
# 10 "data/maps/Route202/scripts.pory"
	waitmessage
# 11 "data/maps/Route202/scripts.pory"
	release
	return


EventScript_Route202_Hiker_One::
# 15 "data/maps/Route202/scripts.pory"
	lock
# 16 "data/maps/Route202/scripts.pory"
	faceplayer
# 17 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_Hiker_One_Text_0
# 18 "data/maps/Route202/scripts.pory"
	waitmessage
# 19 "data/maps/Route202/scripts.pory"
	release
	return


EventScript_Route202_Norman::
# 23 "data/maps/Route202/scripts.pory"
	lock
# 24 "data/maps/Route202/scripts.pory"
	faceplayer
# 25 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_Norman_Text_0
# 26 "data/maps/Route202/scripts.pory"
	waitmessage
# 27 "data/maps/Route202/scripts.pory"
	release
	return


EventScript_Route202_RocketScientist::
# 31 "data/maps/Route202/scripts.pory"
	lock
# 32 "data/maps/Route202/scripts.pory"
	faceplayer
# 33 "data/maps/Route202/scripts.pory"
	msgbox EventScript_Route202_RocketScientist_Text_0
# 34 "data/maps/Route202/scripts.pory"
	waitmessage
# 35 "data/maps/Route202/scripts.pory"
	release
	return


EventScript_Route202_Maniac_Text_0:
# 9 "data/maps/Route202/scripts.pory"
	.string "Give me a moment, I'm studying this\n"
	.string "tree. Who knows how different they\l"
	.string "might be from the ones we know back\l"
	.string "home, you know?$"

EventScript_Route202_Hiker_One_Text_0:
# 17 "data/maps/Route202/scripts.pory"
	.string "Yikes, the professor was not kidding\n"
	.string "that only the strongest trainers\l"
	.string "should dare come here!$"

EventScript_Route202_Norman_Text_0:
# 25 "data/maps/Route202/scripts.pory"
	.string "Hey kid, have you spotted any rare\n"
	.string "Pokemon yet? The wild Pokemon sure are\l"
	.string "strong around here, but nothing Slaking\l"
	.string "can't take care of. Stay safe OK?$"

EventScript_Route202_RocketScientist_Text_0:
# 33 "data/maps/Route202/scripts.pory"
	.string "Leave here, kid. Nothing to see here.$"
