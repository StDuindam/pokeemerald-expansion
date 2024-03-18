Route201_MapScripts::
# 2 "data/maps/Route201/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EventScript_Route201_FirstVisit
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


EventScript_Route201_FirstVisit::
# 23 "data/maps/Route201/scripts.pory"
	compare VAR_ROCKET_ARC_STATE, 1
	goto_if_eq EventScript_Route201_FirstVisit_1
	return

EventScript_Route201_FirstVisit_1:
# 25 "data/maps/Route201/scripts.pory"
	setvar VAR_ROCKET_ARC_STATE, 2
	return


Route201_ProfessorHouse_TriggerOne::
# 30 "data/maps/Route201/scripts.pory"
	call EventScript_Route201_YouAreHere
# 31 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveToProfessor_201_One
# 32 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route201/scripts.pory"
	call EventScript_Route201_ProfessorAndSteven
	return


Route201_ProfessorHouse_TriggerTwo::
# 37 "data/maps/Route201/scripts.pory"
	call EventScript_Route201_YouAreHere
# 38 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveToProfessor_201_Two
# 39 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route201/scripts.pory"
	call EventScript_Route201_ProfessorAndSteven
	return


Route201_ProfessorHouse_TriggerThree::
# 44 "data/maps/Route201/scripts.pory"
	call EventScript_Route201_YouAreHere
# 45 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveToProfessor_201_Three
# 46 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route201/scripts.pory"
	call EventScript_Route201_ProfessorAndSteven
	return


Route201_ProfessorHouse_TriggerFour::
# 51 "data/maps/Route201/scripts.pory"
	call EventScript_Route201_YouAreHere
# 52 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveToProfessor_201_Four
# 53 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route201/scripts.pory"
	call EventScript_Route201_ProfessorAndSteven
	return


EventScript_Route201_YouAreHere::
# 58 "data/maps/Route201/scripts.pory"
	lock
# 59 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_YouAreHere_Text_0
# 60 "data/maps/Route201/scripts.pory"
	waitmessage
# 61 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_ProfessorAndSteven::
# 65 "data/maps/Route201/scripts.pory"
	compare VAR_ROCKET_ARC_STATE, 2
	goto_if_eq EventScript_Route201_ProfessorAndSteven_1
# 78 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_ProfessorAndSteven_Text_3
	return

EventScript_Route201_ProfessorAndSteven_1:
# 66 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_ProfessorAndSteven_Text_0
# 67 "data/maps/Route201/scripts.pory"
	waitmessage
# 68 "data/maps/Route201/scripts.pory"
	applymovement 2, StevenMoveToPlayer_Route201
# 69 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_ProfessorAndSteven_Text_1
# 71 "data/maps/Route201/scripts.pory"
	applymovement 2, StevenLeaveHouse_Route201
# 72 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route201/scripts.pory"
	removeobject 2
# 74 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_ProfessorAndSteven_Text_2
# 75 "data/maps/Route201/scripts.pory"
	setvar VAR_ROCKET_ARC_STATE, 3
# 76 "data/maps/Route201/scripts.pory"
	setflag FLAG_ROUTE201_HIKER_BLOCKAGE
	return


# 82 "data/maps/Route201/scripts.pory"
MoveToProfessor_201_One:
# 83 "data/maps/Route201/scripts.pory"
	walk_up
# 83 "data/maps/Route201/scripts.pory"
	walk_up
# 83 "data/maps/Route201/scripts.pory"
	walk_up
	step_end

# 86 "data/maps/Route201/scripts.pory"
MoveToProfessor_201_Two:
# 87 "data/maps/Route201/scripts.pory"
	walk_left
# 88 "data/maps/Route201/scripts.pory"
	walk_up
# 88 "data/maps/Route201/scripts.pory"
	walk_up
	step_end

# 91 "data/maps/Route201/scripts.pory"
MoveToProfessor_201_Three:
# 92 "data/maps/Route201/scripts.pory"
	walk_up
# 93 "data/maps/Route201/scripts.pory"
	walk_left
# 93 "data/maps/Route201/scripts.pory"
	walk_left
# 94 "data/maps/Route201/scripts.pory"
	walk_up
	step_end

# 97 "data/maps/Route201/scripts.pory"
MoveToProfessor_201_Four:
# 98 "data/maps/Route201/scripts.pory"
	walk_up
# 98 "data/maps/Route201/scripts.pory"
	walk_up
# 99 "data/maps/Route201/scripts.pory"
	walk_left
# 99 "data/maps/Route201/scripts.pory"
	walk_left
# 99 "data/maps/Route201/scripts.pory"
	walk_left
# 100 "data/maps/Route201/scripts.pory"
	walk_up
	step_end

# 103 "data/maps/Route201/scripts.pory"
StevenMoveToPlayer_Route201:
# 104 "data/maps/Route201/scripts.pory"
	walk_down
# 105 "data/maps/Route201/scripts.pory"
	walk_left
# 105 "data/maps/Route201/scripts.pory"
	walk_left
# 105 "data/maps/Route201/scripts.pory"
	walk_left
# 105 "data/maps/Route201/scripts.pory"
	walk_left
# 105 "data/maps/Route201/scripts.pory"
	walk_left
# 106 "data/maps/Route201/scripts.pory"
	walk_up
# 106 "data/maps/Route201/scripts.pory"
	walk_up
# 107 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 110 "data/maps/Route201/scripts.pory"
StevenLeaveHouse_Route201:
# 111 "data/maps/Route201/scripts.pory"
	walk_down
# 111 "data/maps/Route201/scripts.pory"
	walk_down
# 111 "data/maps/Route201/scripts.pory"
	walk_down
	step_end

# 114 "data/maps/Route201/scripts.pory"
PlayerLookAtSteven_Route201:
# 115 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 118 "data/maps/Route201/scripts.pory"
PlayerLookAtProfessor_Route201:
# 119 "data/maps/Route201/scripts.pory"
	face_up
	step_end

EventScript_Route201_Steven::
# 123 "data/maps/Route201/scripts.pory"
	lock
# 124 "data/maps/Route201/scripts.pory"
	faceplayer
# 125 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Steven_Text_0
# 126 "data/maps/Route201/scripts.pory"
	waitmessage
# 127 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Azuril::
# 131 "data/maps/Route201/scripts.pory"
	lock
# 132 "data/maps/Route201/scripts.pory"
	faceplayer
# 133 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Azuril_Text_0
# 134 "data/maps/Route201/scripts.pory"
	waitmessage
# 135 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Azumaril::
# 139 "data/maps/Route201/scripts.pory"
	lock
# 140 "data/maps/Route201/scripts.pory"
	faceplayer
# 141 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Azumaril_Text_0
# 142 "data/maps/Route201/scripts.pory"
	waitmessage
# 143 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Scientist_One::
# 147 "data/maps/Route201/scripts.pory"
	lock
# 148 "data/maps/Route201/scripts.pory"
	faceplayer
# 149 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Scientist_One_Text_0
# 150 "data/maps/Route201/scripts.pory"
	waitmessage
# 151 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Hiker_One::
# 155 "data/maps/Route201/scripts.pory"
	lock
# 156 "data/maps/Route201/scripts.pory"
	faceplayer
# 157 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Hiker_One_Text_0
# 158 "data/maps/Route201/scripts.pory"
	waitmessage
# 159 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Hiker_Two::
# 163 "data/maps/Route201/scripts.pory"
	lock
# 164 "data/maps/Route201/scripts.pory"
	faceplayer
# 165 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Hiker_Two_Text_0
# 166 "data/maps/Route201/scripts.pory"
	waitmessage
# 167 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Pokeball_One::
# 171 "data/maps/Route201/scripts.pory"
	lock
# 172 "data/maps/Route201/scripts.pory"
	giveitem ITEM_LEVEL_BALL
# 173 "data/maps/Route201/scripts.pory"
	setflag FLAG_ROUTE201_POKEBALL
# 174 "data/maps/Route201/scripts.pory"
	removeitem 3
# 175 "data/maps/Route201/scripts.pory"
	release
	return


SignScript_Route201_DiscoverySignpost::
# 179 "data/maps/Route201/scripts.pory"
	lock
# 180 "data/maps/Route201/scripts.pory"
	msgbox SignScript_Route201_DiscoverySignpost_Text_0
# 181 "data/maps/Route201/scripts.pory"
	waitmessage
# 182 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Scientist_Two::
# 186 "data/maps/Route201/scripts.pory"
	lock
# 187 "data/maps/Route201/scripts.pory"
	faceplayer
# 188 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Scientist_Two_Text_0
# 189 "data/maps/Route201/scripts.pory"
	waitmessage
# 190 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Scientist_Three::
# 194 "data/maps/Route201/scripts.pory"
	lock
# 195 "data/maps/Route201/scripts.pory"
	faceplayer
# 196 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Scientist_Three_Text_0
# 197 "data/maps/Route201/scripts.pory"
	waitmessage
# 198 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Hiker_Three::
# 202 "data/maps/Route201/scripts.pory"
	lock
# 203 "data/maps/Route201/scripts.pory"
	faceplayer
# 204 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Hiker_Three_Text_0
# 205 "data/maps/Route201/scripts.pory"
	waitmessage
# 206 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Mats_One::
# 210 "data/maps/Route201/scripts.pory"
	lock
# 211 "data/maps/Route201/scripts.pory"
	faceplayer
# 212 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Mats_One_Text_0
# 213 "data/maps/Route201/scripts.pory"
	waitmessage
# 214 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Jens_One::
# 218 "data/maps/Route201/scripts.pory"
	lock
# 219 "data/maps/Route201/scripts.pory"
	faceplayer
# 220 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Jens_One_Text_0
# 221 "data/maps/Route201/scripts.pory"
	waitmessage
# 222 "data/maps/Route201/scripts.pory"
	release
	return


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

EventScript_Route201_YouAreHere_Text_0:
# 59 "data/maps/Route201/scripts.pory"
	.string "Ah you are here!$"

EventScript_Route201_ProfessorAndSteven_Text_0:
# 66 "data/maps/Route201/scripts.pory"
	.string "Quite a nice little place we have created so far, haven't we? Anyway, the truth is beyond this beach are some incredibly strong pokemon. We do need your help to better understand this place and create a map of the Island. I have asked some of the Hoenn gym leaders to assist in this mission, like Steven here.$"

EventScript_Route201_ProfessorAndSteven_Text_1:
# 70 "data/maps/Route201/scripts.pory"
	.string "Right, I have agreed to assist scouting\n"
	.string "the island. So far the cries we have\l"
	.string "heard sound like ancient Pokemon. We\l"
	.string "have been hearing more and more sounds,\l"
	.string "something seems wrong. Make sure you\l"
	.string "keep your eyes open, okay? I will see\l"
	.string "you around and let the Professor know\l"
	.string "if you find something.$"

EventScript_Route201_ProfessorAndSteven_Text_2:
# 74 "data/maps/Route201/scripts.pory"
	.string "Yes, yes, always keep an eye out for strange things, will you? With that in mind I think we are ready to venture into the forest. Find a strong Pokemon and return back to share your findings.$"

EventScript_Route201_ProfessorAndSteven_Text_3:
# 78 "data/maps/Route201/scripts.pory"
	.string "What exciting times, go see if you can catch a strong new Pokemon, make sure you come back after.$"

EventScript_Route201_Steven_Text_0:
# 125 "data/maps/Route201/scripts.pory"
	.string "You should go speak with the Professor,\n"
	.string "he will explain our next steps.$"

EventScript_Route201_Azuril_Text_0:
# 133 "data/maps/Route201/scripts.pory"
	.string "Azu! Azu!$"

EventScript_Route201_Azumaril_Text_0:
# 141 "data/maps/Route201/scripts.pory"
	.string "Azumaril... Maril!$"

EventScript_Route201_Scientist_One_Text_0:
# 149 "data/maps/Route201/scripts.pory"
	.string "Amazing, there are hardly any\n"
	.string "documents that speak of this island.$"

EventScript_Route201_Hiker_One_Text_0:
# 157 "data/maps/Route201/scripts.pory"
	.string "I can't wait to learn more about this\n"
	.string "place, maybe even hike up the mountain!$"

EventScript_Route201_Hiker_Two_Text_0:
# 165 "data/maps/Route201/scripts.pory"
	.string "Sorry kid, I cannot let you pass yet. We\n"
	.string "are making sure it is safe out here. Try\l"
	.string "and find the professor.$"

SignScript_Route201_DiscoverySignpost_Text_0:
# 180 "data/maps/Route201/scripts.pory"
	.string "Archeological Cleanery. Where finds get\n"
	.string "cleaned and identified.$"

EventScript_Route201_Scientist_Two_Text_0:
# 188 "data/maps/Route201/scripts.pory"
	.string "No no no... the tests come back\n"
	.string "negative, what is going on?$"

EventScript_Route201_Scientist_Three_Text_0:
# 196 "data/maps/Route201/scripts.pory"
	.string "We are currently working on a full map\n"
	.string "of this island, or... well... no one has\l"
	.string "dared enter the area yet. Any day now\l"
	.string "though!$"

EventScript_Route201_Hiker_Three_Text_0:
# 204 "data/maps/Route201/scripts.pory"
	.string "I have heard some loud noises coming\n"
	.string "from the forest-y area. This beach\l"
	.string "seems okay, but I won't go further\l"
	.string "myself.$"

EventScript_Route201_Mats_One_Text_0:
# 212 "data/maps/Route201/scripts.pory"
	.string "How much longer will we have to wait\n"
	.string "before we can leave this beach? Yeah\l"
	.string "the water pokemon are nice and all but I\l"
	.string "am eager to explore!$"

EventScript_Route201_Jens_One_Text_0:
# 220 "data/maps/Route201/scripts.pory"
	.string "Whatever is hiding in that forest I'm\n"
	.string "sure we can beat it, right?$"
