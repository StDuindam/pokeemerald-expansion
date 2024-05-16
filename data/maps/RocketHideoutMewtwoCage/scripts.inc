RocketHideoutMewtwoCage_MapScripts::
	.byte 0


EventScript_Encounter_Mewtwo::
# 6 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	lock
# 7 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	faceplayer
# 8 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	msgbox EventScript_Encounter_Mewtwo_Text_0
# 9 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
# 10 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	delay 40
# 11 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	waitmoncry
# 12 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	setwildbattle SPECIES_MEWTWO, 80, ITEM_MEWTWONITE_Y
# 13 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	dowildbattle
# 14 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq EventScript_Encounter_Mewtwo_2
# 18 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq EventScript_Encounter_Mewtwo_3
# 21 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq EventScript_Encounter_Mewtwo_4
# 24 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq EventScript_Encounter_Mewtwo_5
EventScript_Encounter_Mewtwo_1:
# 27 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	waitmessage
# 28 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	releaseall
	return

EventScript_Encounter_Mewtwo_2:
# 16 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	call MetwoEncounter_WonOrCaught
	goto EventScript_Encounter_Mewtwo_1

EventScript_Encounter_Mewtwo_3:
# 19 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	call MetwoEncounter_WonOrCaught
	goto EventScript_Encounter_Mewtwo_1

EventScript_Encounter_Mewtwo_4:
# 22 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	call MetwoEncounter_RanAway
	goto EventScript_Encounter_Mewtwo_1

EventScript_Encounter_Mewtwo_5:
# 25 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	call MetwoEncounter_RanAway
	goto EventScript_Encounter_Mewtwo_1


MetwoEncounter_WonOrCaught::
# 32 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	fadescreen FADE_TO_BLACK
# 33 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	removeobject 1
# 34 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 35 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	msgbox MetwoEncounter_WonOrCaught_Text_0
# 36 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	setflag FLAG_CAUGHT_MEWTWO
	return


MetwoEncounter_RanAway::
# 41 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
# 42 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	msgbox MetwoEncounter_RanAway_Text_0, MSGBOX_AUTOCLOSE
# 43 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	delay 20
# 44 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	fadescreen FADE_TO_BLACK
# 45 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	removeobject 1
# 46 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 47 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	msgbox MetwoEncounter_RanAway_Text_1
	return


EventScript_Encounter_Mewtwo_Text_0:
# 8 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	.string "MEWTWO: I'm glad you've come here\n"
	.string "{PLAYER}. One last battle.$"

MetwoEncounter_WonOrCaught_Text_0:
# 35 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	.string "You feel like Mewtwo is glad to be\n"
	.string "joining your party.$"

MetwoEncounter_RanAway_Text_0:
# 42 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	.string "Another time.$"

MetwoEncounter_RanAway_Text_1:
# 47 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	.string "Mewtwo teleported away.$"
