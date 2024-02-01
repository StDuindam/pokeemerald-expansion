Route_104_House_MapScripts::
# 2 "data/maps/Route_104_House/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Setup_RivalBattle_MatsFirst
	.byte 0


Setup_RivalBattle_MatsFirst::
# 7 "data/maps/Route_104_House/scripts.pory"
	goto_if_unset FLAG_STARTER_OBTAINED, Setup_RivalBattle_MatsFirst_1
# 14 "data/maps/Route_104_House/scripts.pory"
	compare RIVAL_STATE_MATS, 0
	goto_if_eq Setup_RivalBattle_MatsFirst_4
# 17 "data/maps/Route_104_House/scripts.pory"
	setflag FLAG_MATS_BATTLE_ONE
	return

Setup_RivalBattle_MatsFirst_1:
# 10 "data/maps/Route_104_House/scripts.pory"
	setflag FLAG_MATS_BATTLE_ONE
# 11 "data/maps/Route_104_House/scripts.pory"
	setvar RIVAL_STATE_MATS, 0
	return

Setup_RivalBattle_MatsFirst_4:
# 15 "data/maps/Route_104_House/scripts.pory"
	clearflag FLAG_MATS_BATTLE_ONE
	return


Starter_ShinyIntroDialogue_Mats::
# 23 "data/maps/Route_104_House/scripts.pory"
	lock
# 24 "data/maps/Route_104_House/scripts.pory"
	faceplayer
# 25 "data/maps/Route_104_House/scripts.pory"
	msgbox MatsGiveShinyCharm
# 26 "data/maps/Route_104_House/scripts.pory"
	waitmessage
# 27 "data/maps/Route_104_House/scripts.pory"
	msgbox Starter_ShinyIntroDialogue_Mats_Text_0, MSGBOX_YESNO
# 28 "data/maps/Route_104_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Starter_ShinyIntroDialogue_Mats_2
# 31 "data/maps/Route_104_House/scripts.pory"
	msgbox Starter_ShinyIntroDialogue_Mats_Text_1
Starter_ShinyIntroDialogue_Mats_1:
# 33 "data/maps/Route_104_House/scripts.pory"
	waitmessage
# 34 "data/maps/Route_104_House/scripts.pory"
	release
	return

Starter_ShinyIntroDialogue_Mats_2:
# 29 "data/maps/Route_104_House/scripts.pory"
	call Starter_RivalBattleMats_One
	goto Starter_ShinyIntroDialogue_Mats_1


Starter_RivalBattleMats_One::
# 39 "data/maps/Route_104_House/scripts.pory"
	trainerbattle_single TRAINER_MATS_FIRST_BATTLE, Mats_Intro, Mats_Outro, RivalBattle_EventScript_MatsBattleOver
	return


RivalBattle_EventScript_MatsBattleOver::
# 43 "data/maps/Route_104_House/scripts.pory"
	lockall
# 44 "data/maps/Route_104_House/scripts.pory"
	giveitem ITEM_SHINY_CHARM
# 45 "data/maps/Route_104_House/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 46 "data/maps/Route_104_House/scripts.pory"
	special EnableNationalPokedex
# 47 "data/maps/Route_104_House/scripts.pory"
	applymovement 1, MatsLeave
# 48 "data/maps/Route_104_House/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route_104_House/scripts.pory"
	removeobject 1
# 50 "data/maps/Route_104_House/scripts.pory"
	setflag FLAG_MATS_BATTLE_ONE
# 51 "data/maps/Route_104_House/scripts.pory"
	setvar RIVAL_STATE_MATS, 1
# 52 "data/maps/Route_104_House/scripts.pory"
	release
	return


# 63 "data/maps/Route_104_House/scripts.pory"
MatsLeave:
# 64 "data/maps/Route_104_House/scripts.pory"
	walk_up
# 65 "data/maps/Route_104_House/scripts.pory"
	walk_left
# 65 "data/maps/Route_104_House/scripts.pory"
	walk_left
# 65 "data/maps/Route_104_House/scripts.pory"
	walk_left
# 65 "data/maps/Route_104_House/scripts.pory"
	walk_left
# 65 "data/maps/Route_104_House/scripts.pory"
	walk_left
# 65 "data/maps/Route_104_House/scripts.pory"
	walk_left
# 66 "data/maps/Route_104_House/scripts.pory"
	walk_down
# 66 "data/maps/Route_104_House/scripts.pory"
	walk_down
# 66 "data/maps/Route_104_House/scripts.pory"
	walk_down
	step_end

Starter_ShinyIntroDialogue_Mats_Text_0:
# 27 "data/maps/Route_104_House/scripts.pory"
	.string "Do you want to battle Mats?$"

Starter_ShinyIntroDialogue_Mats_Text_1:
# 31 "data/maps/Route_104_House/scripts.pory"
	.string "Some other time maybe.$"

Mats_Intro::
# 55 "data/maps/Route_104_House/scripts.pory"
	.string "Let's see how you battle!$"

Mats_Outro::
# 59 "data/maps/Route_104_House/scripts.pory"
	.string "Ha! That was great...$"

MatsGiveShinyCharm::
# 69 "data/maps/Route_104_House/scripts.pory"
	.string "Hey, of the three brothers I am the one\n"
	.string "always hunting for rare versions of\l"
	.string "Pokemon, maybe you have seen them.\l"
	.string "Specifically with a different colour.\l"
	.string "Beat me in a battle and I will give you\l"
	.string "an item that might help encountering\l"
	.string "them.$"
