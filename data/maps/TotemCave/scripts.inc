TotemCave_MapScripts::
	.byte 0


TotemCaveStatic_Encounter::
# 5 "data/maps/TotemCave/scripts.pory"
	lockall
# 6 "data/maps/TotemCave/scripts.pory"
	playmoncry SPECIES_ARCANINE_HISUIAN, CRY_MODE_ENCOUNTER
# 7 "data/maps/TotemCave/scripts.pory"
	delay 40
# 8 "data/maps/TotemCave/scripts.pory"
	waitmoncry
# 9 "data/maps/TotemCave/scripts.pory"
	setwildbattle SPECIES_ARCANINE_HISUIAN, 70, ITEM_NONE
# 10 "data/maps/TotemCave/scripts.pory"
	dowildbattle
# 11 "data/maps/TotemCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 12 "data/maps/TotemCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq TotemCaveStatic_Encounter_2
# 15 "data/maps/TotemCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq TotemCaveStatic_Encounter_3
# 18 "data/maps/TotemCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq TotemCaveStatic_Encounter_4
# 21 "data/maps/TotemCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq TotemCaveStatic_Encounter_5
TotemCaveStatic_Encounter_1:
# 24 "data/maps/TotemCave/scripts.pory"
	waitmessage
# 25 "data/maps/TotemCave/scripts.pory"
	releaseall
	return

TotemCaveStatic_Encounter_2:
# 13 "data/maps/TotemCave/scripts.pory"
	call TotemCave_Won_or_Caught
	goto TotemCaveStatic_Encounter_1

TotemCaveStatic_Encounter_3:
# 16 "data/maps/TotemCave/scripts.pory"
	call TotemCave_Won_or_Caught
	goto TotemCaveStatic_Encounter_1

TotemCaveStatic_Encounter_4:
# 19 "data/maps/TotemCave/scripts.pory"
	call TotemCave_RanAway
	goto TotemCaveStatic_Encounter_1

TotemCaveStatic_Encounter_5:
# 22 "data/maps/TotemCave/scripts.pory"
	call TotemCave_RanAway
	goto TotemCaveStatic_Encounter_1


TotemCave_Won_or_Caught::
# 29 "data/maps/TotemCave/scripts.pory"
	fadescreen FADE_TO_BLACK
# 30 "data/maps/TotemCave/scripts.pory"
	removeobject 1
# 31 "data/maps/TotemCave/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 32 "data/maps/TotemCave/scripts.pory"
	msgbox TotemCave_Won_or_Caught_Text_0
# 33 "data/maps/TotemCave/scripts.pory"
	setflag FLAG_TOTEMCAVE_ROUTE201_DAILY
	return


TotemCave_RanAway::
# 38 "data/maps/TotemCave/scripts.pory"
	playmoncry VAR_TOTEMCAVE_RANDOM_POKE, CRY_MODE_ENCOUNTER
# 39 "data/maps/TotemCave/scripts.pory"
	msgbox TotemCave_RanAway_Text_0, MSGBOX_AUTOCLOSE
# 40 "data/maps/TotemCave/scripts.pory"
	delay 20
# 41 "data/maps/TotemCave/scripts.pory"
	fadescreen FADE_TO_BLACK
# 42 "data/maps/TotemCave/scripts.pory"
	removeobject 1
# 43 "data/maps/TotemCave/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 44 "data/maps/TotemCave/scripts.pory"
	setflag FLAG_TOTEMCAVE_ROUTE201_DAILY
# 45 "data/maps/TotemCave/scripts.pory"
	msgbox TotemCave_RanAway_Text_1
	return


TotemCave_Won_or_Caught_Text_0:
# 32 "data/maps/TotemCave/scripts.pory"
	.string "That's definitely a rare Pokemon, let's go back to the professor.$"

TotemCave_RanAway_Text_0:
# 39 "data/maps/TotemCave/scripts.pory"
	.string "Roar!!$"

TotemCave_RanAway_Text_1:
# 45 "data/maps/TotemCave/scripts.pory"
	.string "The great beast ran away$"
