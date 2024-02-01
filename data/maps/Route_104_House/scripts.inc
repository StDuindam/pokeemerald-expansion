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
	msgbox MatsUpgradePokedex
# 46 "data/maps/Route_104_House/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 47 "data/maps/Route_104_House/scripts.pory"
	special EnableNationalPokedex
# 48 "data/maps/Route_104_House/scripts.pory"
	msgbox RivalBattle_EventScript_MatsBattleOver_Text_0
# 49 "data/maps/Route_104_House/scripts.pory"
	applymovement 1, MatsLeave
# 50 "data/maps/Route_104_House/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route_104_House/scripts.pory"
	removeobject 1
# 52 "data/maps/Route_104_House/scripts.pory"
	setflag FLAG_MATS_BATTLE_ONE
# 53 "data/maps/Route_104_House/scripts.pory"
	setvar RIVAL_STATE_MATS, 1
# 54 "data/maps/Route_104_House/scripts.pory"
	release
	return


# 65 "data/maps/Route_104_House/scripts.pory"
MatsLeave:
# 66 "data/maps/Route_104_House/scripts.pory"
	walk_up
# 67 "data/maps/Route_104_House/scripts.pory"
	walk_left
# 67 "data/maps/Route_104_House/scripts.pory"
	walk_left
# 67 "data/maps/Route_104_House/scripts.pory"
	walk_left
# 67 "data/maps/Route_104_House/scripts.pory"
	walk_left
# 67 "data/maps/Route_104_House/scripts.pory"
	walk_left
# 67 "data/maps/Route_104_House/scripts.pory"
	walk_left
# 68 "data/maps/Route_104_House/scripts.pory"
	walk_down
# 68 "data/maps/Route_104_House/scripts.pory"
	walk_down
# 68 "data/maps/Route_104_House/scripts.pory"
	walk_down
	step_end

Starter_ShinyIntroDialogue_Mats_Text_0:
# 27 "data/maps/Route_104_House/scripts.pory"
	.string "Do you want to battle Mats?$"

Starter_ShinyIntroDialogue_Mats_Text_1:
# 31 "data/maps/Route_104_House/scripts.pory"
	.string "Some other time maybe.$"

RivalBattle_EventScript_MatsBattleOver_Text_0:
# 48 "data/maps/Route_104_House/scripts.pory"
	.string "Your Pokedex has been upgraded!$"

Mats_Intro::
# 57 "data/maps/Route_104_House/scripts.pory"
	.string "Let's see how you battle!$"

Mats_Outro::
# 61 "data/maps/Route_104_House/scripts.pory"
	.string "Ha! That was great...$"

MatsGiveShinyCharm::
# 71 "data/maps/Route_104_House/scripts.pory"
	.string "Hey, of the three brothers I am the one\n"
	.string "always hunting for rare versions of\l"
	.string "Pokemon, maybe you have seen them.\l"
	.string "Specifically with a different colour.\l"
	.string "Beat me in a battle and I will give you\l"
	.string "an item that might help encountering\l"
	.string "them.$"

MatsUpgradePokedex::
# 76 "data/maps/Route_104_House/scripts.pory"
	.string "Oh by the way, let me upgrade that\n"
	.string "pokedex of yours too. So you know where\l"
	.string "to find all these rare pokes. See you\l"
	.string "around!$"
