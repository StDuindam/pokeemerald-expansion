# 1 "data/maps/FortreeCity/scripts.pory"

# 2 "data/maps/FortreeCity/scripts.pory"
FortreeCity_MapScripts::
# 3 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_OnTransition
# 4 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_OnResume
# 5 "data/maps/FortreeCity/scripts.pory"
	.byte 0
# 6 "data/maps/FortreeCity/scripts.pory"

# 7 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnTransition:
# 8 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_VISITED_FORTREE_CITY
# 9 "data/maps/FortreeCity/scripts.pory"
    call GENGAR_SETUP_FASE_3
# 10 "data/maps/FortreeCity/scripts.pory"
	end
# 11 "data/maps/FortreeCity/scripts.pory"

# 12 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnResume:
# 13 "data/maps/FortreeCity/scripts.pory"
	setstepcallback STEP_CB_FORTREE_BRIDGE
# 14 "data/maps/FortreeCity/scripts.pory"
	end
# 15 "data/maps/FortreeCity/scripts.pory"

# 16 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Man::
# 17 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
# 18 "data/maps/FortreeCity/scripts.pory"
	end
# 19 "data/maps/FortreeCity/scripts.pory"

# 20 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Woman::
# 21 "data/maps/FortreeCity/scripts.pory"
	lock
# 22 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 23 "data/maps/FortreeCity/scripts.pory"
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_WomanGymAccessible
# 24 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
# 25 "data/maps/FortreeCity/scripts.pory"
	release
# 26 "data/maps/FortreeCity/scripts.pory"
	end
# 27 "data/maps/FortreeCity/scripts.pory"

# 28 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_WomanGymAccessible::
# 29 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
# 30 "data/maps/FortreeCity/scripts.pory"
	release
# 31 "data/maps/FortreeCity/scripts.pory"
	end
# 32 "data/maps/FortreeCity/scripts.pory"

# 33 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Girl::
# 34 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
# 35 "data/maps/FortreeCity/scripts.pory"
	end
# 36 "data/maps/FortreeCity/scripts.pory"

# 37 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_OldMan::
# 38 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
# 39 "data/maps/FortreeCity/scripts.pory"
	end
# 40 "data/maps/FortreeCity/scripts.pory"

# 41 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Boy::
# 42 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
# 43 "data/maps/FortreeCity/scripts.pory"
	end
# 44 "data/maps/FortreeCity/scripts.pory"

# 45 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GameboyKid::
# 46 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
# 47 "data/maps/FortreeCity/scripts.pory"
	end
# 48 "data/maps/FortreeCity/scripts.pory"

# 49 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_CitySign::
# 50 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
# 51 "data/maps/FortreeCity/scripts.pory"
	end
# 52 "data/maps/FortreeCity/scripts.pory"

# 53 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GymSign::
# 54 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
# 55 "data/maps/FortreeCity/scripts.pory"
	end
# 56 "data/maps/FortreeCity/scripts.pory"

# 57 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Kecleon::
# 58 "data/maps/FortreeCity/scripts.pory"
	lock
# 59 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 60 "data/maps/FortreeCity/scripts.pory"
	checkitem ITEM_DEVON_SCOPE
# 61 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_EventScript_AskUseDevonScope
# 62 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
# 63 "data/maps/FortreeCity/scripts.pory"
	release
# 64 "data/maps/FortreeCity/scripts.pory"
	end
# 65 "data/maps/FortreeCity/scripts.pory"

# 66 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_AskUseDevonScope::
# 67 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
# 68 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FortreeCity_EventScript_UseDevonScope
# 69 "data/maps/FortreeCity/scripts.pory"
	release
# 70 "data/maps/FortreeCity/scripts.pory"
	end
# 71 "data/maps/FortreeCity/scripts.pory"

# 72 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_UseDevonScope::
# 73 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
# 74 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 75 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
# 76 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 77 "data/maps/FortreeCity/scripts.pory"
	waitse
# 78 "data/maps/FortreeCity/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 79 "data/maps/FortreeCity/scripts.pory"
	delay 40
# 80 "data/maps/FortreeCity/scripts.pory"
	waitmoncry
# 81 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_KecleonFlee
# 82 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 83 "data/maps/FortreeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 84 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_KECLEON_FLED_FORTREE
# 85 "data/maps/FortreeCity/scripts.pory"
	release
# 86 "data/maps/FortreeCity/scripts.pory"
	end
# 87 "data/maps/FortreeCity/scripts.pory"

# 88 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_KecleonFlee:
# 89 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 90 "data/maps/FortreeCity/scripts.pory"
	step_end
# 91 "data/maps/FortreeCity/scripts.pory"

# 92 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SawGiganticPokemonInSky:
# 93 "data/maps/FortreeCity/scripts.pory"
	.string "No one believes me, but I saw this\n"
# 94 "data/maps/FortreeCity/scripts.pory"
	.string "gigantic POKéMON in the sky.\p"
# 95 "data/maps/FortreeCity/scripts.pory"
	.string "It seemed to squirm as it flew toward\n"
# 96 "data/maps/FortreeCity/scripts.pory"
	.string "ROUTE 131.\p"
# 97 "data/maps/FortreeCity/scripts.pory"
	.string "By the way… Sniff…\n"
# 98 "data/maps/FortreeCity/scripts.pory"
	.string "Um… You, uh…smell singed.\p"
# 99 "data/maps/FortreeCity/scripts.pory"
	.string "Were you at a volcano or something?$"
# 100 "data/maps/FortreeCity/scripts.pory"

# 101 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingBlockingGym:
# 102 "data/maps/FortreeCity/scripts.pory"
	.string "I want to go to the POKéMON GYM,\n"
# 103 "data/maps/FortreeCity/scripts.pory"
	.string "but something's blocking the way.\p"
# 104 "data/maps/FortreeCity/scripts.pory"
	.string "After all the bother I went through\n"
# 105 "data/maps/FortreeCity/scripts.pory"
	.string "training on ROUTE 120…$"
# 106 "data/maps/FortreeCity/scripts.pory"

# 107 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_ThisTimeIllBeatWinona:
# 108 "data/maps/FortreeCity/scripts.pory"
	.string "I've got my pride-and-joy POKéMON\n"
# 109 "data/maps/FortreeCity/scripts.pory"
	.string "with me. This time, I'll beat WINONA.$"
# 110 "data/maps/FortreeCity/scripts.pory"

# 111 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_TreesGrowByDrinkingRainwater:
# 112 "data/maps/FortreeCity/scripts.pory"
	.string "The ground absorbs rainwater, and\n"
# 113 "data/maps/FortreeCity/scripts.pory"
	.string "trees grow by drinking that water…\p"
# 114 "data/maps/FortreeCity/scripts.pory"
	.string "Our FORTREE CITY exists because\n"
# 115 "data/maps/FortreeCity/scripts.pory"
	.string "there's both water and soil.$"
# 116 "data/maps/FortreeCity/scripts.pory"

# 117 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_EveryoneHealthyAndLively:
# 118 "data/maps/FortreeCity/scripts.pory"
	.string "The CITY consists of homes built on\n"
# 119 "data/maps/FortreeCity/scripts.pory"
	.string "trees.\p"
# 120 "data/maps/FortreeCity/scripts.pory"
	.string "Perhaps because of that lifestyle,\n"
# 121 "data/maps/FortreeCity/scripts.pory"
	.string "everyone is healthy and lively.\p"
# 122 "data/maps/FortreeCity/scripts.pory"
	.string "Why, even myself--I feel as if I've\n"
# 123 "data/maps/FortreeCity/scripts.pory"
	.string "grown thirty years younger.$"
# 124 "data/maps/FortreeCity/scripts.pory"

# 125 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_BugPokemonComeThroughWindow:
# 126 "data/maps/FortreeCity/scripts.pory"
	.string "Living on top of trees is okay.\p"
# 127 "data/maps/FortreeCity/scripts.pory"
	.string "But sometimes BUG POKéMON come in\n"
# 128 "data/maps/FortreeCity/scripts.pory"
	.string "through windows.\l"
# 129 "data/maps/FortreeCity/scripts.pory"
	.string "It can be really startling.$"
# 130 "data/maps/FortreeCity/scripts.pory"

# 131 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_PokemonThatEvolveWhenTraded:
# 132 "data/maps/FortreeCity/scripts.pory"
	.string "There are POKéMON that evolve when\n"
# 133 "data/maps/FortreeCity/scripts.pory"
	.string "you trade them! That's what I heard.$"
# 134 "data/maps/FortreeCity/scripts.pory"

# 135 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingUnseeable:
# 136 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.$"
# 137 "data/maps/FortreeCity/scripts.pory"

# 138 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UnseeableUseDevonScope:
# 139 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 140 "data/maps/FortreeCity/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 141 "data/maps/FortreeCity/scripts.pory"

# 142 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UsedDevonScopePokemonFled:
# 143 "data/maps/FortreeCity/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 144 "data/maps/FortreeCity/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 145 "data/maps/FortreeCity/scripts.pory"
	.string "visible!\p"
# 146 "data/maps/FortreeCity/scripts.pory"
	.string "The startled POKéMON fled!$"
# 147 "data/maps/FortreeCity/scripts.pory"

# 148 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_CitySign:
# 149 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY\n"
# 150 "data/maps/FortreeCity/scripts.pory"
	.string "“The treetop city that frolics with\l"
# 151 "data/maps/FortreeCity/scripts.pory"
	.string "nature.”$"
# 152 "data/maps/FortreeCity/scripts.pory"

# 153 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_GymSign:
# 154 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\n"
# 155 "data/maps/FortreeCity/scripts.pory"
	.string "LEADER: WINONA\p"
# 156 "data/maps/FortreeCity/scripts.pory"
	.string "“The bird user taking flight into\n"
# 157 "data/maps/FortreeCity/scripts.pory"
	.string "the world.”$"

GENGAR_SETUP_FASE_3::
# 162 "data/maps/FortreeCity/scripts.pory"
	setflag RETURN_DUSCLOPS
# 163 "data/maps/FortreeCity/scripts.pory"
	compare DUSCLOPS_STATE, 2
	goto_if_eq GENGAR_SETUP_FASE_3_2
# 167 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_DUSCLOPS_FORTREE
GENGAR_SETUP_FASE_3_1:
# 170 "data/maps/FortreeCity/scripts.pory"
	compare DUSCLOPS_STATE, 4
	goto_if_eq GENGAR_SETUP_FASE_3_6
GENGAR_SETUP_FASE_3_5:
# 175 "data/maps/FortreeCity/scripts.pory"
	compare DUSCLOPS_STATE, 5
	goto_if_eq GENGAR_SETUP_FASE_3_8
	return

GENGAR_SETUP_FASE_3_2:
# 165 "data/maps/FortreeCity/scripts.pory"
	clearflag FLAG_DUSCLOPS_FORTREE
	goto GENGAR_SETUP_FASE_3_1

GENGAR_SETUP_FASE_3_6:
# 172 "data/maps/FortreeCity/scripts.pory"
	clearflag RETURN_DUSCLOPS
	goto GENGAR_SETUP_FASE_3_5

GENGAR_SETUP_FASE_3_8:
# 177 "data/maps/FortreeCity/scripts.pory"
	clearflag RETURN_DUSCLOPS
	return


GENGAR_FORTREE_START_A::
# 182 "data/maps/FortreeCity/scripts.pory"
	lock
# 183 "data/maps/FortreeCity/scripts.pory"
	applymovement 8, GENGAR_FORTREE_TRIGGER_A
# 184 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 185 "data/maps/FortreeCity/scripts.pory"
	applymovement 9, OLD_MAN_FORTREE_TRIGGER_A
# 186 "data/maps/FortreeCity/scripts.pory"
	call GENGAR_FORTREE_PREBATTLE_SCENE
# 187 "data/maps/FortreeCity/scripts.pory"
	release
	return


GENGAR_FORTREE_START_B::
# 191 "data/maps/FortreeCity/scripts.pory"
	lock
# 192 "data/maps/FortreeCity/scripts.pory"
	applymovement 8, GENGAR_FORTREE_TRIGGER_A
# 193 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 194 "data/maps/FortreeCity/scripts.pory"
	applymovement 9, OLD_MAN_FORTREE_TRIGGER_B
# 195 "data/maps/FortreeCity/scripts.pory"
	call GENGAR_FORTREE_PREBATTLE_SCENE
# 196 "data/maps/FortreeCity/scripts.pory"
	release
	return


GENGAR_FORTREE_START_C::
# 200 "data/maps/FortreeCity/scripts.pory"
	lock
# 201 "data/maps/FortreeCity/scripts.pory"
	applymovement 8, GENGAR_FORTREE_TRIGGER_A
# 202 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 203 "data/maps/FortreeCity/scripts.pory"
	applymovement 9, OLD_MAN_FORTREE_TRIGGER_C
# 204 "data/maps/FortreeCity/scripts.pory"
	call GENGAR_FORTREE_PREBATTLE_SCENE
# 205 "data/maps/FortreeCity/scripts.pory"
	release
	return


GENGAR_FORTREE_PREBATTLE_SCENE::
# 209 "data/maps/FortreeCity/scripts.pory"
	lock
# 210 "data/maps/FortreeCity/scripts.pory"
	msgbox GENGAR_FORTREE_INTRO
# 211 "data/maps/FortreeCity/scripts.pory"
	waitmessage
# 212 "data/maps/FortreeCity/scripts.pory"
	call GENGAR_FORTREE_BATTLE
# 213 "data/maps/FortreeCity/scripts.pory"
	release
	return


GENGAR_FORTREE_BATTLE::
# 217 "data/maps/FortreeCity/scripts.pory"
	trainerbattle_single TRAINER_GENGAR_FIRSTPOSSESED, GENGAR_FORTREE_BATTLE_INTRO, GENGAR_FORTREE_BATTLE_OUTRO, GENGAR_FORTREE_POST_BATTLE
	return


GENGAR_FORTREE_POST_BATTLE::
# 221 "data/maps/FortreeCity/scripts.pory"
	lock
# 222 "data/maps/FortreeCity/scripts.pory"
	msgbox GENGAR_FORTREE_OUTRO
# 223 "data/maps/FortreeCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 224 "data/maps/FortreeCity/scripts.pory"
	setvar DUSCLOPS_STATE, 3
# 225 "data/maps/FortreeCity/scripts.pory"
	warpteleport MAP_DUSCLOPS_HIDEOUT, 0
# 226 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_DUSCLOPS_FORTREE
# 227 "data/maps/FortreeCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 228 "data/maps/FortreeCity/scripts.pory"
	release
	return


GENGAR_RETURN_AFTER_WIPE::
# 232 "data/maps/FortreeCity/scripts.pory"
	lock
# 233 "data/maps/FortreeCity/scripts.pory"
	msgbox GENGAR_RETURN_AFTER_WIPE_Text_0
# 234 "data/maps/FortreeCity/scripts.pory"
	waitmessage
# 235 "data/maps/FortreeCity/scripts.pory"
	warpteleport MAP_DUSCLOPS_HIDEOUT, 0
# 236 "data/maps/FortreeCity/scripts.pory"
	release
	return


Fortree_SavedMan::
# 244 "data/maps/FortreeCity/scripts.pory"
	lock
# 245 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 246 "data/maps/FortreeCity/scripts.pory"
	msgbox Fortree_SavedMan_Text_0
# 247 "data/maps/FortreeCity/scripts.pory"
	waitmessage
# 248 "data/maps/FortreeCity/scripts.pory"
	release
	return


# 263 "data/maps/FortreeCity/scripts.pory"
GENGAR_FORTREE_TRIGGER_A:
# 264 "data/maps/FortreeCity/scripts.pory"
	walk_down
# 265 "data/maps/FortreeCity/scripts.pory"
	walk_in_place_left
	step_end

# 268 "data/maps/FortreeCity/scripts.pory"
OLD_MAN_FORTREE_TRIGGER_A:
# 269 "data/maps/FortreeCity/scripts.pory"
	walk_left
# 270 "data/maps/FortreeCity/scripts.pory"
	walk_up
# 271 "data/maps/FortreeCity/scripts.pory"
	walk_in_place_left
	step_end

# 273 "data/maps/FortreeCity/scripts.pory"
OLD_MAN_FORTREE_TRIGGER_B:
# 274 "data/maps/FortreeCity/scripts.pory"
	walk_left
	step_end

# 276 "data/maps/FortreeCity/scripts.pory"
OLD_MAN_FORTREE_TRIGGER_C:
# 277 "data/maps/FortreeCity/scripts.pory"
	walk_down
# 278 "data/maps/FortreeCity/scripts.pory"
	walk_in_place_left
	step_end

GENGAR_RETURN_AFTER_WIPE_Text_0:
# 233 "data/maps/FortreeCity/scripts.pory"
	.string "KEKEKE... Let's try that again$"

Fortree_SavedMan_Text_0:
# 246 "data/maps/FortreeCity/scripts.pory"
	.string "Gee... thanks for saving me from that nightmare.$"

GENGAR_FORTREE_INTRO::
# 239 "data/maps/FortreeCity/scripts.pory"
	.string "KEKEKE... I have been watching you too,\n"
	.string "{PLAYER}. You would make a fine\l"
	.string "addition to my collection. Much better\l"
	.string "than this old man, right? Let's find out!$"

GENGAR_FORTREE_OUTRO::
# 251 "data/maps/FortreeCity/scripts.pory"
	.string "KEKEKE... JUST AS I EXPECTED, YOU WILL\n"
	.string "DO!$"

GENGAR_FORTREE_BATTLE_INTRO::
# 255 "data/maps/FortreeCity/scripts.pory"
	.string "MUST... OBEY... GENGAR...$"

GENGAR_FORTREE_BATTLE_OUTRO::
# 259 "data/maps/FortreeCity/scripts.pory"
	.string "I... WHERE... AM... I?$"
