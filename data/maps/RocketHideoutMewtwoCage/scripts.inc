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
	giveitem ITEM_MEWTWONITE_X, 1
# 37 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	giveitem ITEM_MEWTWONITE_Y, 1
# 38 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	setflag FLAG_CAUGHT_MEWTWO
	return


MetwoEncounter_RanAway::
# 43 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
# 44 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	msgbox MetwoEncounter_RanAway_Text_0, MSGBOX_AUTOCLOSE
# 45 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	delay 20
# 46 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	fadescreen FADE_TO_BLACK
# 47 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	removeobject 1
# 48 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 49 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	msgbox MetwoEncounter_RanAway_Text_1
	return


EventScript_Encounter_Articuno::
# 54 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	lock
# 55 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	faceplayer
# 56 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	msgbox EventScript_Encounter_Articuno_Text_0
# 57 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
# 58 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	delay 40
# 59 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	waitmoncry
# 60 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	setwildbattle SPECIES_ARTICUNO, 65, ITEM_ICE_GEM
# 61 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	dowildbattle
# 62 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 63 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq EventScript_Encounter_Articuno_2
# 66 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq EventScript_Encounter_Articuno_3
# 69 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq EventScript_Encounter_Articuno_4
# 72 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq EventScript_Encounter_Articuno_5
EventScript_Encounter_Articuno_1:
# 75 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	waitmessage
# 76 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	releaseall
	return

EventScript_Encounter_Articuno_2:
# 64 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	call ArticunoEncounter_WonOrCaught
	goto EventScript_Encounter_Articuno_1

EventScript_Encounter_Articuno_3:
# 67 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	call ArticunoEncounter_WonOrCaught
	goto EventScript_Encounter_Articuno_1

EventScript_Encounter_Articuno_4:
# 70 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	call ArticunoEncounter_RanAway
	goto EventScript_Encounter_Articuno_1

EventScript_Encounter_Articuno_5:
# 73 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	call ArticunoEncounter_RanAway
	goto EventScript_Encounter_Articuno_1


ArticunoEncounter_WonOrCaught::
# 80 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	fadescreen FADE_TO_BLACK
# 81 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	removeobject 1
# 82 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 83 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	msgbox ArticunoEncounter_WonOrCaught_Text_0
# 84 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	setflag FLAG_CAUGHT_ARTICUNO
	return


ArticunoEncounter_RanAway::
# 89 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
# 90 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	msgbox ArticunoEncounter_RanAway_Text_0, MSGBOX_AUTOCLOSE
# 91 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	delay 20
# 92 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	fadescreen FADE_TO_BLACK
# 93 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	removeobject 1
# 94 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 95 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	msgbox ArticunoEncounter_RanAway_Text_1
	return


EventScript_Encounter_Zapdos::
# 100 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	lock
# 101 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	faceplayer
# 102 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	msgbox EventScript_Encounter_Zapdos_Text_0
# 103 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 104 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	delay 40
# 105 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	waitmoncry
# 106 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	setwildbattle SPECIES_ZAPDOS, 65, ITEM_ELECTRIC_GEM
# 107 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	dowildbattle
# 108 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 109 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq EventScript_Encounter_Zapdos_2
# 112 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq EventScript_Encounter_Zapdos_3
# 115 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq EventScript_Encounter_Zapdos_4
# 118 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq EventScript_Encounter_Zapdos_5
EventScript_Encounter_Zapdos_1:
# 121 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	waitmessage
# 122 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	releaseall
	return

EventScript_Encounter_Zapdos_2:
# 110 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	call ZapdosEncounter_WonOrCaught
	goto EventScript_Encounter_Zapdos_1

EventScript_Encounter_Zapdos_3:
# 113 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	call ZapdosEncounter_WonOrCaught
	goto EventScript_Encounter_Zapdos_1

EventScript_Encounter_Zapdos_4:
# 116 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	call ZapdosEncounter_RanAway
	goto EventScript_Encounter_Zapdos_1

EventScript_Encounter_Zapdos_5:
# 119 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	call ZapdosEncounter_RanAway
	goto EventScript_Encounter_Zapdos_1


ZapdosEncounter_WonOrCaught::
# 126 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	fadescreen FADE_TO_BLACK
# 127 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	removeobject 1
# 128 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 129 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	msgbox ZapdosEncounter_WonOrCaught_Text_0
# 130 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	setflag FLAG_CAUGHT_ZAPDOS
	return


ZapdosEncounter_RanAway::
# 135 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
# 136 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	msgbox ZapdosEncounter_RanAway_Text_0, MSGBOX_AUTOCLOSE
# 137 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	delay 20
# 138 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	fadescreen FADE_TO_BLACK
# 139 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	removeobject 1
# 140 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 141 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	msgbox ZapdosEncounter_RanAway_Text_1
	return


EventScript_Encounter_Moltres::
# 146 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	lock
# 147 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	faceplayer
# 148 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	msgbox EventScript_Encounter_Moltres_Text_0
# 149 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 150 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	delay 40
# 151 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	waitmoncry
# 152 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	setwildbattle SPECIES_MOLTRES, 65, ITEM_FIRE_GEM
# 153 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	dowildbattle
# 154 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 155 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq EventScript_Encounter_Moltres_2
# 158 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq EventScript_Encounter_Moltres_3
# 161 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq EventScript_Encounter_Moltres_4
# 164 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq EventScript_Encounter_Moltres_5
EventScript_Encounter_Moltres_1:
# 167 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	waitmessage
# 168 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	releaseall
	return

EventScript_Encounter_Moltres_2:
# 156 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	call MoltresEncounter_WonOrCaught
	goto EventScript_Encounter_Moltres_1

EventScript_Encounter_Moltres_3:
# 159 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	call MoltresEncounter_WonOrCaught
	goto EventScript_Encounter_Moltres_1

EventScript_Encounter_Moltres_4:
# 162 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	call MoltresEncounter_RanAway
	goto EventScript_Encounter_Moltres_1

EventScript_Encounter_Moltres_5:
# 165 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	call MoltresEncounter_RanAway
	goto EventScript_Encounter_Moltres_1


MoltresEncounter_WonOrCaught::
# 172 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	fadescreen FADE_TO_BLACK
# 173 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	removeobject 1
# 174 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 175 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	msgbox MoltresEncounter_WonOrCaught_Text_0
# 176 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	setflag FLAG_CAUGHT_MOLTRES
	return


MoltresEncounter_RanAway::
# 181 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 182 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	msgbox MoltresEncounter_RanAway_Text_0, MSGBOX_AUTOCLOSE
# 183 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	delay 20
# 184 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	fadescreen FADE_TO_BLACK
# 185 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	removeobject 1
# 186 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 187 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	msgbox MoltresEncounter_RanAway_Text_1
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
# 44 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	.string "Another time.$"

MetwoEncounter_RanAway_Text_1:
# 49 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	.string "Mewtwo teleported away.$"

EventScript_Encounter_Articuno_Text_0:
# 56 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	.string "KYAHH!$"

ArticunoEncounter_WonOrCaught_Text_0:
# 83 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	.string "Articuno was caught!$"

ArticunoEncounter_RanAway_Text_0:
# 90 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	.string "Kyuh...$"

ArticunoEncounter_RanAway_Text_1:
# 95 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	.string "Articuno ran away.$"

EventScript_Encounter_Zapdos_Text_0:
# 102 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	.string "ZZZZYA!$"

ZapdosEncounter_WonOrCaught_Text_0:
# 129 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	.string "Zapdos was caught!$"

ZapdosEncounter_RanAway_Text_0:
# 136 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	.string "DOS!$"

ZapdosEncounter_RanAway_Text_1:
# 141 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	.string "Zapdos ran away.$"

EventScript_Encounter_Moltres_Text_0:
# 148 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	.string "MWROOOAAA!$"

MoltresEncounter_WonOrCaught_Text_0:
# 175 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	.string "Moltres was caught!$"

MoltresEncounter_RanAway_Text_0:
# 182 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	.string "MWUAAA!$"

MoltresEncounter_RanAway_Text_1:
# 187 "data/maps/RocketHideoutMewtwoCage/scripts.pory"
	.string "Moltres ran away.$"
