Route201_MapScripts::
	.byte 0


EventScript_Route201_BoatAttendant::
# 6 "data/maps/Route201/scripts.pory"
	lock
# 7 "data/maps/Route201/scripts.pory"
	faceplayer
# 8 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_BoatAttendant_Text_0
# 9 "data/maps/Route201/scripts.pory"
	waitmessage
# 10 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_BoatAttendant_Text_1, MSGBOX_YESNO
# 11 "data/maps/Route201/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Route201_BoatAttendant_2
# 16 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_BoatAttendant_Text_3
# 17 "data/maps/Route201/scripts.pory"
	waitmessage
EventScript_Route201_BoatAttendant_1:
# 19 "data/maps/Route201/scripts.pory"
	release
	return

EventScript_Route201_BoatAttendant_2:
# 12 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_BoatAttendant_Text_2
# 13 "data/maps/Route201/scripts.pory"
	waitmessage
# 14 "data/maps/Route201/scripts.pory"
	warpdoor MAP_SLATEPORT_CITY_HARBOR, 4
	goto EventScript_Route201_BoatAttendant_1


EventScript_Route201_BoatAttendant_Text_0:
# 8 "data/maps/Route201/scripts.pory"
	.string "Hello champ, the boat goes whenever you\n"
	.string "want.$"

EventScript_Route201_BoatAttendant_Text_1:
# 10 "data/maps/Route201/scripts.pory"
	.string "Would you like to go back to Slateport City?$"

EventScript_Route201_BoatAttendant_Text_2:
# 12 "data/maps/Route201/scripts.pory"
	.string "Wonderful, please board$"

EventScript_Route201_BoatAttendant_Text_3:
# 16 "data/maps/Route201/scripts.pory"
	.string "Another time maybe.$"
