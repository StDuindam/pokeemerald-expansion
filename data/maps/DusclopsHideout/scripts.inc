DusclopsHideout_MapScripts::
# 2 "data/maps/DusclopsHideout/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetupDusclopsHideout
	.byte 0


SetupDusclopsHideout::
# 6 "data/maps/DusclopsHideout/scripts.pory"
	compare DUSCLOPS_STATE, 3
	goto_if_gt SetupDusclopsHideout_1
# 9 "data/maps/DusclopsHideout/scripts.pory"
	special SavePlayerParty
# 10 "data/maps/DusclopsHideout/scripts.pory"
	special DusclopsHideOutClearParty
	return

SetupDusclopsHideout_1:
	return


HaveAPartyFirst_DusclopsHideout::
# 15 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 16 "data/maps/DusclopsHideout/scripts.pory"
	msgbox HaveAPartyFirst_DusclopsHideout_Text_0
# 17 "data/maps/DusclopsHideout/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PushPlayerToRight_DusclopsHideout
# 18 "data/maps/DusclopsHideout/scripts.pory"
	waitmovement 0
# 19 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


PickUpPokemonBag::
# 23 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 24 "data/maps/DusclopsHideout/scripts.pory"
	msgbox PickUpPokemonBag_Text_0
# 25 "data/maps/DusclopsHideout/scripts.pory"
	special CallDusclopsFunction
# 26 "data/maps/DusclopsHideout/scripts.pory"
	msgbox PickUpPokemonBag_Text_1
# 27 "data/maps/DusclopsHideout/scripts.pory"
	setvar DUSCLOPS_STATE, 4
# 28 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


FinishDusclopsHideout::
# 32 "data/maps/DusclopsHideout/scripts.pory"
	special LoadPlayerParty
# 33 "data/maps/DusclopsHideout/scripts.pory"
	msgbox FinishDusclopsHideout_Text_0
# 34 "data/maps/DusclopsHideout/scripts.pory"
	waitmessage
	return


TalkToMats_DusclopsHideout::
# 38 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 39 "data/maps/DusclopsHideout/scripts.pory"
	faceplayer
# 40 "data/maps/DusclopsHideout/scripts.pory"
	msgbox MatsText_DusclopsHideout
# 41 "data/maps/DusclopsHideout/scripts.pory"
	waitmessage
# 42 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


TalkToJens_DusclopsHideout::
# 46 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 47 "data/maps/DusclopsHideout/scripts.pory"
	faceplayer
# 48 "data/maps/DusclopsHideout/scripts.pory"
	msgbox JensText_DusclopsHideout
# 49 "data/maps/DusclopsHideout/scripts.pory"
	waitmessage
# 50 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


TalkToNurseJoy_DusclopsHideout::
# 54 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 55 "data/maps/DusclopsHideout/scripts.pory"
	faceplayer
# 56 "data/maps/DusclopsHideout/scripts.pory"
	msgbox NurseJoy_DusclopsHideout
# 57 "data/maps/DusclopsHideout/scripts.pory"
	waitmessage
# 58 "data/maps/DusclopsHideout/scripts.pory"
	special HealPlayerParty
# 59 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


TalkBoy_DusclopsHideout::
# 64 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 65 "data/maps/DusclopsHideout/scripts.pory"
	faceplayer
# 66 "data/maps/DusclopsHideout/scripts.pory"
	msgbox BoyText_DusclopsHideout
# 67 "data/maps/DusclopsHideout/scripts.pory"
	waitmessage
# 68 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


# 87 "data/maps/DusclopsHideout/scripts.pory"
PushPlayerToRight_DusclopsHideout:
# 88 "data/maps/DusclopsHideout/scripts.pory"
	walk_right
# 88 "data/maps/DusclopsHideout/scripts.pory"
	walk_right
	step_end

GENGAR_BATTLE_TWO_DUSCLOPSHIDEOUT::
# 92 "data/maps/DusclopsHideout/scripts.pory"
	trainerbattle_single TRAINER_GENGAR_SECONDPOSSESED, GENGAR_BATTLE_TWO_INTRO, GENGAR_BATTLE_TWO_OUTRO, GENGAR_BATTLE_TWO_POSTBATTLE
	return


GENGAR_BATTLE_TWO_POSTBATTLE::
# 104 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 105 "data/maps/DusclopsHideout/scripts.pory"
	faceplayer
# 106 "data/maps/DusclopsHideout/scripts.pory"
	msgbox GENGAR_BATTLE_TWO_POSTBATTLE_Text_0
# 107 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


GENGAR_BATTLE_THREE_SETUP_A::
# 111 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 112 "data/maps/DusclopsHideout/scripts.pory"
	applymovement 6, GENGAR_BATTLE_THREE_STEN_MOVEMENT_A
# 113 "data/maps/DusclopsHideout/scripts.pory"
	waitmovement 0
# 114 "data/maps/DusclopsHideout/scripts.pory"
	msgbox GENGAR_BATTLE_THREE_SETUP_A_Text_0
# 115 "data/maps/DusclopsHideout/scripts.pory"
	call GENGAR_BATTLE_THREE_DUSCLOPSHIDEOUT
# 116 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


GENGAR_BATTLE_THREE_SETUP_B::
# 119 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 120 "data/maps/DusclopsHideout/scripts.pory"
	applymovement 6, GENGAR_BATTLE_THREE_STEN_MOVEMENT_B
# 121 "data/maps/DusclopsHideout/scripts.pory"
	waitmovement 0
# 122 "data/maps/DusclopsHideout/scripts.pory"
	msgbox GENGAR_BATTLE_THREE_SETUP_A_Text_0
# 123 "data/maps/DusclopsHideout/scripts.pory"
	call GENGAR_BATTLE_THREE_DUSCLOPSHIDEOUT
# 124 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


GENGAR_BATTLE_THREE_SETUP_C::
# 127 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 128 "data/maps/DusclopsHideout/scripts.pory"
	applymovement 6, GENGAR_BATTLE_THREE_STEN_MOVEMENT_C
# 129 "data/maps/DusclopsHideout/scripts.pory"
	waitmovement 0
# 130 "data/maps/DusclopsHideout/scripts.pory"
	msgbox GENGAR_BATTLE_THREE_SETUP_A_Text_0
# 131 "data/maps/DusclopsHideout/scripts.pory"
	call GENGAR_BATTLE_THREE_DUSCLOPSHIDEOUT
# 132 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


# 135 "data/maps/DusclopsHideout/scripts.pory"
GENGAR_BATTLE_THREE_STEN_MOVEMENT_A:
# 136 "data/maps/DusclopsHideout/scripts.pory"
	walk_down
# 137 "data/maps/DusclopsHideout/scripts.pory"
	walk_left
# 138 "data/maps/DusclopsHideout/scripts.pory"
	walk_down
	step_end

# 140 "data/maps/DusclopsHideout/scripts.pory"
GENGAR_BATTLE_THREE_STEN_MOVEMENT_B:
# 141 "data/maps/DusclopsHideout/scripts.pory"
	walk_down
# 141 "data/maps/DusclopsHideout/scripts.pory"
	walk_down
	step_end

# 143 "data/maps/DusclopsHideout/scripts.pory"
GENGAR_BATTLE_THREE_STEN_MOVEMENT_C:
# 144 "data/maps/DusclopsHideout/scripts.pory"
	walk_down
# 145 "data/maps/DusclopsHideout/scripts.pory"
	walk_right
# 146 "data/maps/DusclopsHideout/scripts.pory"
	walk_down
	step_end

GENGAR_BATTLE_THREE_DUSCLOPSHIDEOUT::
# 150 "data/maps/DusclopsHideout/scripts.pory"
	trainerbattle_single TRAINER_GENGAR_THIRDPOSSESED, GENGAR_BATTLE_THREE_INTRO, GENGAR_BATTLE_THREE_OUTRO, GENGAR_BATTLE_THREE_FINISHED
	return


GENGAR_BATTLE_THREE_FINISHED::
# 158 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 159 "data/maps/DusclopsHideout/scripts.pory"
	setvar DUSCLOPS_STATE, 5
# 160 "data/maps/DusclopsHideout/scripts.pory"
	msgbox GENGAR_BATTLE_THREE_FINISHED_Text_0
# 161 "data/maps/DusclopsHideout/scripts.pory"
	waitmessage
# 162 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


GENGAR_FINAL_BATTLE::
# 171 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 172 "data/maps/DusclopsHideout/scripts.pory"
	faceplayer
# 173 "data/maps/DusclopsHideout/scripts.pory"
	msgbox GENGAR_FINAL_BATTLE_Text_0
# 174 "data/maps/DusclopsHideout/scripts.pory"
	waitmessage
# 175 "data/maps/DusclopsHideout/scripts.pory"
	call GENGAR_BATTLE_FINAL_DUSCLOPSHIDEOUT
# 176 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


GENGAR_BATTLE_FINAL_DUSCLOPSHIDEOUT::
# 180 "data/maps/DusclopsHideout/scripts.pory"
	trainerbattle_single TRAINER_GENGAR_FINAL_BATTLE, GENGAR_BATTLE_FINAL_INTRO, GENGAR_BATTLE_FINAL_OUTRO, GENGAR_BATTLE_FINAL_FINISHED
	return


GENGAR_BATTLE_FINAL_FINISHED::
# 188 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 189 "data/maps/DusclopsHideout/scripts.pory"
	msgbox GENGAR_BATTLE_FINAL_FINISHED_Text_0
# 190 "data/maps/DusclopsHideout/scripts.pory"
	waitmessage
# 191 "data/maps/DusclopsHideout/scripts.pory"
	giveitem ITEM_GENGARITE, 1
# 192 "data/maps/DusclopsHideout/scripts.pory"
	special LoadPlayerParty
# 193 "data/maps/DusclopsHideout/scripts.pory"
	setvar DUSCLOPS_STATE, 6
# 194 "data/maps/DusclopsHideout/scripts.pory"
	msgbox GENGAR_BATTLE_FINAL_FINISHED_Text_1
# 195 "data/maps/DusclopsHideout/scripts.pory"
	call FinishDusclopsHideout
# 196 "data/maps/DusclopsHideout/scripts.pory"
	waitmessage
# 197 "data/maps/DusclopsHideout/scripts.pory"
	fadescreen FADE_TO_BLACK
# 198 "data/maps/DusclopsHideout/scripts.pory"
	warpteleport MAP_FORTREE_CITY, 9
# 199 "data/maps/DusclopsHideout/scripts.pory"
	setvar DUSCLOPS_STATE, 6
# 200 "data/maps/DusclopsHideout/scripts.pory"
	setflag FLAG_DUSCLOPS_COMPLETED
# 201 "data/maps/DusclopsHideout/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 202 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


HaveAPartyFirst_DusclopsHideout_Text_0:
# 16 "data/maps/DusclopsHideout/scripts.pory"
	.string "I wouldn't go any further without any\n"
	.string "Pokemon.$"

PickUpPokemonBag_Text_0:
# 24 "data/maps/DusclopsHideout/scripts.pory"
	.string "Wow.. a couple Pokeballs, Gengar must\n"
	.string "have lost these!$"

PickUpPokemonBag_Text_1:
# 26 "data/maps/DusclopsHideout/scripts.pory"
	.string "Check out your party.$"

FinishDusclopsHideout_Text_0:
# 33 "data/maps/DusclopsHideout/scripts.pory"
	.string "You quickly grab your own Pokeballs\n"
	.string "again.$"

GENGAR_BATTLE_TWO_POSTBATTLE_Text_0:
# 106 "data/maps/DusclopsHideout/scripts.pory"
	.string "What ever is going on... you have to stop\n"
	.string "it {PLAYER}!$"

GENGAR_BATTLE_THREE_SETUP_A_Text_0:
# 114 "data/maps/DusclopsHideout/scripts.pory"
	.string "I will... beat you...$"

GENGAR_BATTLE_THREE_FINISHED_Text_0:
# 160 "data/maps/DusclopsHideout/scripts.pory"
	.string "Wow... Give Gengar a beating for me will\n"
	.string "you?$"

GENGAR_FINAL_BATTLE_Text_0:
# 173 "data/maps/DusclopsHideout/scripts.pory"
	.string "Wow you beat Sten? How very rude of\n"
	.string "you. I know, I know, you want to battle\l"
	.string "me next...$"

GENGAR_BATTLE_FINAL_FINISHED_Text_0:
# 189 "data/maps/DusclopsHideout/scripts.pory"
	.string "I guess I will have to make right now...\n"
	.string "KEKEKE...$"

GENGAR_BATTLE_FINAL_FINISHED_Text_1:
# 194 "data/maps/DusclopsHideout/scripts.pory"
	.string "Okay I will also return everyone...$"

BoyText_DusclopsHideout::
# 71 "data/maps/DusclopsHideout/scripts.pory"
	.string "I have no idea where I am... or where my\n"
	.string "Pokemon are! I just had them on me! Do\l"
	.string "you have yours?$"

MatsText_DusclopsHideout::
# 75 "data/maps/DusclopsHideout/scripts.pory"
	.string "{PLAYER}! No wild Pokemon either, this\n"
	.string "is very strange. You got to sort this\l"
	.string "out and beat Gengar!$"

JensText_DusclopsHideout::
# 79 "data/maps/DusclopsHideout/scripts.pory"
	.string "Man... without pokemon I'm not worth\n"
	.string "anything, have you got any? Maybe\l"
	.string "there's something around here\l"
	.string "somewhere.$"

NurseJoy_DusclopsHideout::
# 83 "data/maps/DusclopsHideout/scripts.pory"
	.string "I'm no good to help you in your battles,\n"
	.string "but I can heal your pokemon. Here, I'll\l"
	.string "sort you out.$"

GENGAR_BATTLE_TWO_INTRO::
# 95 "data/maps/DusclopsHideout/scripts.pory"
	.string "YOU.. SHOULD.. NOT.. HAVE.. POKEMON!$"

GENGAR_BATTLE_TWO_OUTRO::
# 99 "data/maps/DusclopsHideout/scripts.pory"
	.string "What is happening...?$"

GENGAR_BATTLE_THREE_INTRO::
# 153 "data/maps/DusclopsHideout/scripts.pory"
	.string "...$"

GENGAR_BATTLE_THREE_OUTRO::
# 165 "data/maps/DusclopsHideout/scripts.pory"
	.string "I'm so sorry {PLAYER}! I don't know\n"
	.string "what happened to me.$"

GENGAR_BATTLE_FINAL_INTRO::
# 183 "data/maps/DusclopsHideout/scripts.pory"
	.string "{PLAYER} YOU WILL NOT TAKE ME DOWN\n"
	.string "EASILY$"

GENGAR_BATTLE_FINAL_OUTRO::
# 205 "data/maps/DusclopsHideout/scripts.pory"
	.string "KEH.... That's it then...$"
