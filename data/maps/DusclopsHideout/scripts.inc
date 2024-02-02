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
	return


TalkToMats_DusclopsHideout::
# 37 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 38 "data/maps/DusclopsHideout/scripts.pory"
	faceplayer
# 39 "data/maps/DusclopsHideout/scripts.pory"
	msgbox MatsText_DusclopsHideout
# 40 "data/maps/DusclopsHideout/scripts.pory"
	waitmessage
# 41 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


TalkToJens_DusclopsHideout::
# 45 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 46 "data/maps/DusclopsHideout/scripts.pory"
	faceplayer
# 47 "data/maps/DusclopsHideout/scripts.pory"
	msgbox JensText_DusclopsHideout
# 48 "data/maps/DusclopsHideout/scripts.pory"
	waitmessage
# 49 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


TalkToNurseJoy_DusclopsHideout::
# 53 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 54 "data/maps/DusclopsHideout/scripts.pory"
	faceplayer
# 55 "data/maps/DusclopsHideout/scripts.pory"
	msgbox NurseJoy_DusclopsHideout
# 56 "data/maps/DusclopsHideout/scripts.pory"
	waitmessage
# 57 "data/maps/DusclopsHideout/scripts.pory"
	special HealPlayerParty
# 58 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


TalkBoy_DusclopsHideout::
# 63 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 64 "data/maps/DusclopsHideout/scripts.pory"
	faceplayer
# 65 "data/maps/DusclopsHideout/scripts.pory"
	msgbox BoyText_DusclopsHideout
# 66 "data/maps/DusclopsHideout/scripts.pory"
	waitmessage
# 67 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


# 86 "data/maps/DusclopsHideout/scripts.pory"
PushPlayerToRight_DusclopsHideout:
# 87 "data/maps/DusclopsHideout/scripts.pory"
	walk_right
# 87 "data/maps/DusclopsHideout/scripts.pory"
	walk_right
	step_end

GENGAR_BATTLE_TWO_DUSCLOPSHIDEOUT::
# 91 "data/maps/DusclopsHideout/scripts.pory"
	trainerbattle_single TRAINER_GENGAR_SECONDPOSSESED, GENGAR_BATTLE_TWO_INTRO, GENGAR_BATTLE_TWO_OUTRO, GENGAR_BATTLE_TWO_POSTBATTLE
	return


GENGAR_BATTLE_TWO_POSTBATTLE::
# 103 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 104 "data/maps/DusclopsHideout/scripts.pory"
	faceplayer
# 105 "data/maps/DusclopsHideout/scripts.pory"
	msgbox GENGAR_BATTLE_TWO_POSTBATTLE_Text_0
# 106 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


GENGAR_BATTLE_THREE_SETUP_A::
# 110 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 111 "data/maps/DusclopsHideout/scripts.pory"
	applymovement 6, GENGAR_BATTLE_THREE_STEN_MOVEMENT_A
# 112 "data/maps/DusclopsHideout/scripts.pory"
	waitmovement 0
# 113 "data/maps/DusclopsHideout/scripts.pory"
	msgbox GENGAR_BATTLE_THREE_SETUP_A_Text_0
# 114 "data/maps/DusclopsHideout/scripts.pory"
	call GENGAR_BATTLE_THREE_DUSCLOPSHIDEOUT
# 115 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


GENGAR_BATTLE_THREE_SETUP_B::
# 118 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 119 "data/maps/DusclopsHideout/scripts.pory"
	applymovement 6, GENGAR_BATTLE_THREE_STEN_MOVEMENT_B
# 120 "data/maps/DusclopsHideout/scripts.pory"
	waitmovement 0
# 121 "data/maps/DusclopsHideout/scripts.pory"
	msgbox GENGAR_BATTLE_THREE_SETUP_A_Text_0
# 122 "data/maps/DusclopsHideout/scripts.pory"
	call GENGAR_BATTLE_THREE_DUSCLOPSHIDEOUT
# 123 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


GENGAR_BATTLE_THREE_SETUP_C::
# 126 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 127 "data/maps/DusclopsHideout/scripts.pory"
	applymovement 6, GENGAR_BATTLE_THREE_STEN_MOVEMENT_C
# 128 "data/maps/DusclopsHideout/scripts.pory"
	waitmovement 0
# 129 "data/maps/DusclopsHideout/scripts.pory"
	msgbox GENGAR_BATTLE_THREE_SETUP_A_Text_0
# 130 "data/maps/DusclopsHideout/scripts.pory"
	call GENGAR_BATTLE_THREE_DUSCLOPSHIDEOUT
# 131 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


# 134 "data/maps/DusclopsHideout/scripts.pory"
GENGAR_BATTLE_THREE_STEN_MOVEMENT_A:
# 135 "data/maps/DusclopsHideout/scripts.pory"
	walk_down
# 136 "data/maps/DusclopsHideout/scripts.pory"
	walk_left
# 137 "data/maps/DusclopsHideout/scripts.pory"
	walk_down
	step_end

# 139 "data/maps/DusclopsHideout/scripts.pory"
GENGAR_BATTLE_THREE_STEN_MOVEMENT_B:
# 140 "data/maps/DusclopsHideout/scripts.pory"
	walk_down
# 140 "data/maps/DusclopsHideout/scripts.pory"
	walk_down
	step_end

# 142 "data/maps/DusclopsHideout/scripts.pory"
GENGAR_BATTLE_THREE_STEN_MOVEMENT_C:
# 143 "data/maps/DusclopsHideout/scripts.pory"
	walk_down
# 144 "data/maps/DusclopsHideout/scripts.pory"
	walk_right
# 145 "data/maps/DusclopsHideout/scripts.pory"
	walk_down
	step_end

GENGAR_BATTLE_THREE_DUSCLOPSHIDEOUT::
# 149 "data/maps/DusclopsHideout/scripts.pory"
	trainerbattle_single TRAINER_GENGAR_THIRDPOSSESED, GENGAR_BATTLE_THREE_INTRO, GENGAR_BATTLE_THREE_OUTRO, GENGAR_BATTLE_THREE_FINISHED
	return


GENGAR_BATTLE_THREE_FINISHED::
# 157 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 158 "data/maps/DusclopsHideout/scripts.pory"
	setvar DUSCLOPS_STATE, 5
# 159 "data/maps/DusclopsHideout/scripts.pory"
	msgbox GENGAR_BATTLE_THREE_FINISHED_Text_0
# 160 "data/maps/DusclopsHideout/scripts.pory"
	waitmessage
# 161 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


GENGAR_FINAL_BATTLE::
# 170 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 171 "data/maps/DusclopsHideout/scripts.pory"
	faceplayer
# 172 "data/maps/DusclopsHideout/scripts.pory"
	msgbox GENGAR_FINAL_BATTLE_Text_0
# 173 "data/maps/DusclopsHideout/scripts.pory"
	waitmessage
# 174 "data/maps/DusclopsHideout/scripts.pory"
	call GENGAR_BATTLE_FINAL_DUSCLOPSHIDEOUT
# 175 "data/maps/DusclopsHideout/scripts.pory"
	release
	return


GENGAR_BATTLE_FINAL_DUSCLOPSHIDEOUT::
# 179 "data/maps/DusclopsHideout/scripts.pory"
	trainerbattle_single TRAINER_GENGAR_FINAL_BATTLE, GENGAR_BATTLE_FINAL_INTRO, GENGAR_BATTLE_FINAL_OUTRO, GENGAR_BATTLE_FINAL_FINISHED
	return


GENGAR_BATTLE_FINAL_FINISHED::
# 187 "data/maps/DusclopsHideout/scripts.pory"
	lock
# 188 "data/maps/DusclopsHideout/scripts.pory"
	msgbox GENGAR_BATTLE_FINAL_FINISHED_Text_0
# 189 "data/maps/DusclopsHideout/scripts.pory"
	waitmessage
# 190 "data/maps/DusclopsHideout/scripts.pory"
	giveitem ITEM_GENGARITE, 1
# 191 "data/maps/DusclopsHideout/scripts.pory"
	special LoadPlayerParty
# 192 "data/maps/DusclopsHideout/scripts.pory"
	setvar DUSCLOPS_STATE, 6
# 193 "data/maps/DusclopsHideout/scripts.pory"
	msgbox GENGAR_BATTLE_FINAL_FINISHED_Text_1
# 194 "data/maps/DusclopsHideout/scripts.pory"
	waitmessage
# 195 "data/maps/DusclopsHideout/scripts.pory"
	fadescreen FADE_TO_BLACK
# 196 "data/maps/DusclopsHideout/scripts.pory"
	warpteleport MAP_FORTREE_CITY, 9
# 197 "data/maps/DusclopsHideout/scripts.pory"
	setvar DUSCLOPS_STATE, 3
# 198 "data/maps/DusclopsHideout/scripts.pory"
	setflag FLAG_DUSCLOPS_COMPLETED
# 199 "data/maps/DusclopsHideout/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 200 "data/maps/DusclopsHideout/scripts.pory"
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
# 105 "data/maps/DusclopsHideout/scripts.pory"
	.string "What ever is going on... you have to stop\n"
	.string "it {PLAYER}!$"

GENGAR_BATTLE_THREE_SETUP_A_Text_0:
# 113 "data/maps/DusclopsHideout/scripts.pory"
	.string "I will... beat you...$"

GENGAR_BATTLE_THREE_FINISHED_Text_0:
# 159 "data/maps/DusclopsHideout/scripts.pory"
	.string "Wow... Give Gengar a beating for me will\n"
	.string "you?$"

GENGAR_FINAL_BATTLE_Text_0:
# 172 "data/maps/DusclopsHideout/scripts.pory"
	.string "Wow you beat Sten? How very rude of\n"
	.string "you. I know, I know, you want to battle\l"
	.string "me next...$"

GENGAR_BATTLE_FINAL_FINISHED_Text_0:
# 188 "data/maps/DusclopsHideout/scripts.pory"
	.string "I guess I will have to make right now...\n"
	.string "KEKEKE...$"

GENGAR_BATTLE_FINAL_FINISHED_Text_1:
# 193 "data/maps/DusclopsHideout/scripts.pory"
	.string "Okay I will also return everyone...$"

BoyText_DusclopsHideout::
# 70 "data/maps/DusclopsHideout/scripts.pory"
	.string "I have no idea where I am... or where my\n"
	.string "Pokemon are! I just had them on me! Do\l"
	.string "you have yours?$"

MatsText_DusclopsHideout::
# 74 "data/maps/DusclopsHideout/scripts.pory"
	.string "{PLAYER}! No wild Pokemon either, this\n"
	.string "is very strange. You got to sort this\l"
	.string "out and beat Gengar!$"

JensText_DusclopsHideout::
# 78 "data/maps/DusclopsHideout/scripts.pory"
	.string "Man... without pokemon I'm not worth\n"
	.string "anything, have you got any? Maybe\l"
	.string "there's something around here\l"
	.string "somewhere.$"

NurseJoy_DusclopsHideout::
# 82 "data/maps/DusclopsHideout/scripts.pory"
	.string "I'm no good to help you in your battles,\n"
	.string "but I can heal your pokemon. Here, I'll\l"
	.string "sort you out.$"

GENGAR_BATTLE_TWO_INTRO::
# 94 "data/maps/DusclopsHideout/scripts.pory"
	.string "YOU.. SHOULD.. NOT.. HAVE.. POKEMON!$"

GENGAR_BATTLE_TWO_OUTRO::
# 98 "data/maps/DusclopsHideout/scripts.pory"
	.string "What is happening...?$"

GENGAR_BATTLE_THREE_INTRO::
# 152 "data/maps/DusclopsHideout/scripts.pory"
	.string "...$"

GENGAR_BATTLE_THREE_OUTRO::
# 164 "data/maps/DusclopsHideout/scripts.pory"
	.string "I'm so sorry {PLAYER}! I don't know\n"
	.string "what happened to me.$"

GENGAR_BATTLE_FINAL_INTRO::
# 182 "data/maps/DusclopsHideout/scripts.pory"
	.string "{PLAYER} YOU WILL NOT TAKE ME DOWN\n"
	.string "EASILY$"

GENGAR_BATTLE_FINAL_OUTRO::
# 203 "data/maps/DusclopsHideout/scripts.pory"
	.string "KEH.... That's it then...$"
