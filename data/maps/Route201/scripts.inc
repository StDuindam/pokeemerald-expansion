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
	lock
# 66 "data/maps/Route201/scripts.pory"
	compare VAR_ROCKET_ARC_STATE, 2
	goto_if_eq EventScript_Route201_ProfessorAndSteven_2
# 82 "data/maps/Route201/scripts.pory"
	compare VAR_ROCKET_ARC_STATE, 3
	goto_if_eq EventScript_Route201_ProfessorAndSteven_3
# 86 "data/maps/Route201/scripts.pory"
	compare VAR_ROCKET_ARC_STATE, 4
	goto_if_eq EventScript_Route201_ProfessorAndSteven_4
# 93 "data/maps/Route201/scripts.pory"
	compare VAR_ROCKET_ARC_STATE, 5
	goto_if_eq EventScript_Route201_ProfessorAndSteven_5
# 97 "data/maps/Route201/scripts.pory"
	compare VAR_ROCKET_ARC_STATE, 6
	goto_if_eq EventScript_Route201_ProfessorAndSteven_6
EventScript_Route201_ProfessorAndSteven_1:
# 103 "data/maps/Route201/scripts.pory"
	release
	return

EventScript_Route201_ProfessorAndSteven_2:
# 67 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_ProfessorAndSteven_Text_0
# 68 "data/maps/Route201/scripts.pory"
	waitmessage
# 69 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFaceSteven_201
# 70 "data/maps/Route201/scripts.pory"
	applymovement 2, StevenMoveToPlayer_Route201
# 71 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_ProfessorAndSteven_Text_1
# 73 "data/maps/Route201/scripts.pory"
	waitmessage
# 74 "data/maps/Route201/scripts.pory"
	applymovement 2, StevenLeaveHouse_Route201
# 75 "data/maps/Route201/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route201/scripts.pory"
	removeobject 2
# 77 "data/maps/Route201/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerFaceBirch_201
# 78 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_ProfessorAndSteven_Text_2
# 79 "data/maps/Route201/scripts.pory"
	waitmessage
# 80 "data/maps/Route201/scripts.pory"
	setvar VAR_ROCKET_ARC_STATE, 3
# 81 "data/maps/Route201/scripts.pory"
	setflag FLAG_ROUTE201_HIKER_BLOCKAGE
	goto EventScript_Route201_ProfessorAndSteven_1

EventScript_Route201_ProfessorAndSteven_3:
# 83 "data/maps/Route201/scripts.pory"
	faceplayer
# 84 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_ProfessorAndSteven_Text_3
# 85 "data/maps/Route201/scripts.pory"
	waitmessage
	goto EventScript_Route201_ProfessorAndSteven_1

EventScript_Route201_ProfessorAndSteven_4:
# 87 "data/maps/Route201/scripts.pory"
	faceplayer
# 88 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_ProfessorAndSteven_Text_4
# 89 "data/maps/Route201/scripts.pory"
	waitmessage
# 90 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_ProfessorAndSteven_Text_5
# 91 "data/maps/Route201/scripts.pory"
	waitmessage
# 92 "data/maps/Route201/scripts.pory"
	setvar VAR_ROCKET_ARC_STATE, 5
	goto EventScript_Route201_ProfessorAndSteven_1

EventScript_Route201_ProfessorAndSteven_5:
# 94 "data/maps/Route201/scripts.pory"
	faceplayer
# 95 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_ProfessorAndSteven_Text_6
# 96 "data/maps/Route201/scripts.pory"
	waitmessage
	goto EventScript_Route201_ProfessorAndSteven_1

EventScript_Route201_ProfessorAndSteven_6:
# 99 "data/maps/Route201/scripts.pory"
	faceplayer
# 100 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_ProfessorAndSteven_Text_7
# 101 "data/maps/Route201/scripts.pory"
	waitmessage
	goto EventScript_Route201_ProfessorAndSteven_1


# 106 "data/maps/Route201/scripts.pory"
MoveToProfessor_201_One:
# 107 "data/maps/Route201/scripts.pory"
	walk_up
# 107 "data/maps/Route201/scripts.pory"
	walk_up
# 107 "data/maps/Route201/scripts.pory"
	walk_up
	step_end

# 110 "data/maps/Route201/scripts.pory"
MoveToProfessor_201_Two:
# 111 "data/maps/Route201/scripts.pory"
	walk_left
# 112 "data/maps/Route201/scripts.pory"
	walk_up
# 112 "data/maps/Route201/scripts.pory"
	walk_up
	step_end

# 115 "data/maps/Route201/scripts.pory"
MoveToProfessor_201_Three:
# 116 "data/maps/Route201/scripts.pory"
	walk_up
# 117 "data/maps/Route201/scripts.pory"
	walk_left
# 117 "data/maps/Route201/scripts.pory"
	walk_left
# 118 "data/maps/Route201/scripts.pory"
	walk_up
	step_end

# 121 "data/maps/Route201/scripts.pory"
PlayerFaceSteven_201:
# 122 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 125 "data/maps/Route201/scripts.pory"
PlayerFaceBirch_201:
# 126 "data/maps/Route201/scripts.pory"
	face_up
	step_end

# 130 "data/maps/Route201/scripts.pory"
MoveToProfessor_201_Four:
# 131 "data/maps/Route201/scripts.pory"
	walk_up
# 131 "data/maps/Route201/scripts.pory"
	walk_up
# 132 "data/maps/Route201/scripts.pory"
	walk_left
# 132 "data/maps/Route201/scripts.pory"
	walk_left
# 132 "data/maps/Route201/scripts.pory"
	walk_left
# 133 "data/maps/Route201/scripts.pory"
	walk_up
	step_end

# 136 "data/maps/Route201/scripts.pory"
StevenMoveToPlayer_Route201:
# 137 "data/maps/Route201/scripts.pory"
	walk_down
# 138 "data/maps/Route201/scripts.pory"
	walk_left
# 138 "data/maps/Route201/scripts.pory"
	walk_left
# 138 "data/maps/Route201/scripts.pory"
	walk_left
# 138 "data/maps/Route201/scripts.pory"
	walk_left
# 138 "data/maps/Route201/scripts.pory"
	walk_left
# 139 "data/maps/Route201/scripts.pory"
	walk_up
# 139 "data/maps/Route201/scripts.pory"
	walk_up
# 140 "data/maps/Route201/scripts.pory"
	face_left
	step_end

# 143 "data/maps/Route201/scripts.pory"
StevenLeaveHouse_Route201:
# 144 "data/maps/Route201/scripts.pory"
	walk_down
# 144 "data/maps/Route201/scripts.pory"
	walk_down
# 144 "data/maps/Route201/scripts.pory"
	walk_down
	step_end

# 147 "data/maps/Route201/scripts.pory"
PlayerLookAtSteven_Route201:
# 148 "data/maps/Route201/scripts.pory"
	face_right
	step_end

# 151 "data/maps/Route201/scripts.pory"
PlayerLookAtProfessor_Route201:
# 152 "data/maps/Route201/scripts.pory"
	face_up
	step_end

EventScript_Route201_Steven::
# 156 "data/maps/Route201/scripts.pory"
	lock
# 157 "data/maps/Route201/scripts.pory"
	faceplayer
# 158 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Steven_Text_0
# 159 "data/maps/Route201/scripts.pory"
	waitmessage
# 160 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Azuril::
# 164 "data/maps/Route201/scripts.pory"
	lock
# 165 "data/maps/Route201/scripts.pory"
	faceplayer
# 166 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Azuril_Text_0
# 167 "data/maps/Route201/scripts.pory"
	waitmessage
# 168 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Azumaril::
# 172 "data/maps/Route201/scripts.pory"
	lock
# 173 "data/maps/Route201/scripts.pory"
	faceplayer
# 174 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Azumaril_Text_0
# 175 "data/maps/Route201/scripts.pory"
	waitmessage
# 176 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Scientist_One::
# 180 "data/maps/Route201/scripts.pory"
	lock
# 181 "data/maps/Route201/scripts.pory"
	faceplayer
# 182 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Scientist_One_Text_0
# 183 "data/maps/Route201/scripts.pory"
	waitmessage
# 184 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Hiker_One::
# 188 "data/maps/Route201/scripts.pory"
	lock
# 189 "data/maps/Route201/scripts.pory"
	faceplayer
# 190 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Hiker_One_Text_0
# 191 "data/maps/Route201/scripts.pory"
	waitmessage
# 192 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Hiker_Two::
# 196 "data/maps/Route201/scripts.pory"
	lock
# 197 "data/maps/Route201/scripts.pory"
	faceplayer
# 198 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Hiker_Two_Text_0
# 199 "data/maps/Route201/scripts.pory"
	waitmessage
# 200 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Pokeball_One::
# 204 "data/maps/Route201/scripts.pory"
	lock
# 205 "data/maps/Route201/scripts.pory"
	giveitem ITEM_LEVEL_BALL
# 206 "data/maps/Route201/scripts.pory"
	setflag FLAG_ROUTE201_POKEBALL
# 207 "data/maps/Route201/scripts.pory"
	removeobject 3
# 208 "data/maps/Route201/scripts.pory"
	release
	return


SignScript_Route201_DiscoverySignpost::
# 212 "data/maps/Route201/scripts.pory"
	lock
# 213 "data/maps/Route201/scripts.pory"
	msgbox SignScript_Route201_DiscoverySignpost_Text_0
# 214 "data/maps/Route201/scripts.pory"
	waitmessage
# 215 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Scientist_Two::
# 219 "data/maps/Route201/scripts.pory"
	lock
# 220 "data/maps/Route201/scripts.pory"
	faceplayer
# 221 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Scientist_Two_Text_0
# 222 "data/maps/Route201/scripts.pory"
	waitmessage
# 223 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Scientist_Three::
# 227 "data/maps/Route201/scripts.pory"
	lock
# 228 "data/maps/Route201/scripts.pory"
	faceplayer
# 229 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Scientist_Three_Text_0
# 230 "data/maps/Route201/scripts.pory"
	waitmessage
# 231 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Hiker_Three::
# 235 "data/maps/Route201/scripts.pory"
	lock
# 236 "data/maps/Route201/scripts.pory"
	faceplayer
# 237 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Hiker_Three_Text_0
# 238 "data/maps/Route201/scripts.pory"
	waitmessage
# 239 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Mats_One::
# 243 "data/maps/Route201/scripts.pory"
	lock
# 244 "data/maps/Route201/scripts.pory"
	faceplayer
# 245 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Mats_One_Text_0
# 246 "data/maps/Route201/scripts.pory"
	showmonpic SPECIES_MOLTRES, 10, 3
# 247 "data/maps/Route201/scripts.pory"
	waitmessage
# 248 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Mats_One_Text_1
# 249 "data/maps/Route201/scripts.pory"
	waitmessage
# 250 "data/maps/Route201/scripts.pory"
	hidemonpic
# 251 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_Jens_One::
# 255 "data/maps/Route201/scripts.pory"
	lock
# 256 "data/maps/Route201/scripts.pory"
	faceplayer
# 257 "data/maps/Route201/scripts.pory"
	msgbox EventScript_Route201_Jens_One_Text_0
# 258 "data/maps/Route201/scripts.pory"
	waitmessage
# 259 "data/maps/Route201/scripts.pory"
	release
	return


EventScript_Route201_BoatAttendant_Text_0:
# 8 "data/maps/Route201/scripts.pory"
	.string "Hello champ, the boat goes whenever you\n"
	.string "want.$"

EventScript_Route201_BoatAttendant_Text_1:
# 10 "data/maps/Route201/scripts.pory"
	.string "Would you like to go back to Slateport\n"
	.string "City?$"

EventScript_Route201_BoatAttendant_Text_2:
# 12 "data/maps/Route201/scripts.pory"
	.string "Wonderful, please board$"

EventScript_Route201_BoatAttendant_Text_3:
# 16 "data/maps/Route201/scripts.pory"
	.string "Another time maybe.$"

EventScript_Route201_YouAreHere_Text_0:
# 59 "data/maps/Route201/scripts.pory"
	.string "Prof BIRCH: Ah you are here!$"

EventScript_Route201_ProfessorAndSteven_Text_0:
# 67 "data/maps/Route201/scripts.pory"
	.string "Quite a nice little place we have\n"
	.string "created so far, haven't we? Anyway, the\l"
	.string "truth is beyond this beach are some\l"
	.string "incredibly strong pokemon. We do need\l"
	.string "your help to better understand this\l"
	.string "place and create a map of the Island. I\l"
	.string "have asked some of the Hoenn gym\l"
	.string "leaders to assist in this mission, like\l"
	.string "Steven here.$"

EventScript_Route201_ProfessorAndSteven_Text_1:
# 72 "data/maps/Route201/scripts.pory"
	.string "STEVEN: Right, I have agreed to assist\n"
	.string "scouting the island. So far the cries we\l"
	.string "have heard sound like ancient Pokemon.\l"
	.string "We have been hearing more and more\l"
	.string "sounds, something seems wrong. Make\l"
	.string "sure you keep your eyes open, okay? I\l"
	.string "will see you around and let the\l"
	.string "Professor know if you find something.$"

EventScript_Route201_ProfessorAndSteven_Text_2:
# 78 "data/maps/Route201/scripts.pory"
	.string "Prof BIRCH: Yes, yes, always keep an\n"
	.string "eye out for strange things, will you?\l"
	.string "With that in mind I think we are ready\l"
	.string "to venture into the forest. Find a\l"
	.string "strong Pokemon and return back to\l"
	.string "share your findings.$"

EventScript_Route201_ProfessorAndSteven_Text_3:
# 84 "data/maps/Route201/scripts.pory"
	.string "Prof BIRCH: What exciting times, go see\n"
	.string "if you can catch a strong new Pokemon,\l"
	.string "make sure you come back after.$"

EventScript_Route201_ProfessorAndSteven_Text_4:
# 88 "data/maps/Route201/scripts.pory"
	.string "Prof BIRCH: Word is going around fast\n"
	.string "that you have seen a rare Pokemon.$"

EventScript_Route201_ProfessorAndSteven_Text_5:
# 90 "data/maps/Route201/scripts.pory"
	.string "That Arcanine definitely seems\n"
	.string "stronger and more primal to me! This is\l"
	.string "incredible, I hate to ask it because we\l"
	.string "don't know everything yet. Do you want\l"
	.string "to explore the forest more? I'm sure we\l"
	.string "will be seeing more fascinating Pokemon\l"
	.string "and events unfold!$"

EventScript_Route201_ProfessorAndSteven_Text_6:
# 95 "data/maps/Route201/scripts.pory"
	.string "Prof BIRCH: See what else you can find\n"
	.string "in the forest!$"

EventScript_Route201_ProfessorAndSteven_Text_7:
# 100 "data/maps/Route201/scripts.pory"
	.string "Prof BIRCH: Furiously strong Pokemon\n"
	.string "and a cloned Rillaboom? You must figure\l"
	.string "out what is going on here.$"

EventScript_Route201_Steven_Text_0:
# 158 "data/maps/Route201/scripts.pory"
	.string "STEVEN: You should go speak with the\n"
	.string "Professor, he will explain our next\l"
	.string "steps.$"

EventScript_Route201_Azuril_Text_0:
# 166 "data/maps/Route201/scripts.pory"
	.string "Azu! Azu!$"

EventScript_Route201_Azumaril_Text_0:
# 174 "data/maps/Route201/scripts.pory"
	.string "Azumaril... Maril!$"

EventScript_Route201_Scientist_One_Text_0:
# 182 "data/maps/Route201/scripts.pory"
	.string "Amazing, there are hardly any\n"
	.string "documents that speak of this island.$"

EventScript_Route201_Hiker_One_Text_0:
# 190 "data/maps/Route201/scripts.pory"
	.string "I can't wait to learn more about this\n"
	.string "place, maybe even hike up the mountain!$"

EventScript_Route201_Hiker_Two_Text_0:
# 198 "data/maps/Route201/scripts.pory"
	.string "Sorry kid, I cannot let you pass yet. We\n"
	.string "are making sure it is safe out here. Try\l"
	.string "and find the professor.$"

SignScript_Route201_DiscoverySignpost_Text_0:
# 213 "data/maps/Route201/scripts.pory"
	.string "Archeological Cleanery. Where finds get\n"
	.string "cleaned and identified.$"

EventScript_Route201_Scientist_Two_Text_0:
# 221 "data/maps/Route201/scripts.pory"
	.string "No no no... the tests come back\n"
	.string "negative, what is going on?$"

EventScript_Route201_Scientist_Three_Text_0:
# 229 "data/maps/Route201/scripts.pory"
	.string "We are currently working on a full map\n"
	.string "of this island, or... well... no one has\l"
	.string "dared enter the area yet. Any day now\l"
	.string "though!$"

EventScript_Route201_Hiker_Three_Text_0:
# 237 "data/maps/Route201/scripts.pory"
	.string "I have heard some loud noises coming\n"
	.string "from the forest-y area. This beach\l"
	.string "seems okay, but I won't go further\l"
	.string "myself.$"

EventScript_Route201_Mats_One_Text_0:
# 245 "data/maps/Route201/scripts.pory"
	.string "How much longer will we have to wait\n"
	.string "before we can leave this beach? I have\l"
	.string "been hearing rumours about a legendary\l"
	.string "fire pokemon. Take a look at this\l"
	.string "drawing.$"

EventScript_Route201_Mats_One_Text_1:
# 248 "data/maps/Route201/scripts.pory"
	.string "Wicked right? Maybe we will be lucky\n"
	.string "enough to see it ourselves.$"

EventScript_Route201_Jens_One_Text_0:
# 257 "data/maps/Route201/scripts.pory"
	.string "Whatever is hiding in that forest I'm\n"
	.string "sure we can beat it, right?$"
