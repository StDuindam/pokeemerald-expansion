RocketHideout_F1_MapScripts::
# 3 "data/maps/RocketHideout_F1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EventScript_OnTransition_RocketHideoutF1
	.byte 0


EventScript_OnTransition_RocketHideoutF1::
# 8 "data/maps/RocketHideout_F1/scripts.pory"
	compare VAR_ROCKET_ARC_STATE, 7
	goto_if_ne EventScript_OnTransition_RocketHideoutF1_1
# 12 "data/maps/RocketHideout_F1/scripts.pory"
	clearflag FLAG_MATSROCKETHIDEOUT_VISIBLE
	return

EventScript_OnTransition_RocketHideoutF1_1:
# 10 "data/maps/RocketHideout_F1/scripts.pory"
	setflag FLAG_MATSROCKETHIDEOUT_VISIBLE
	return


EventScript_RocketOne_RocketHideout::
# 18 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETF_ONE_ROCKETHIDEOUTF1, PreBattle_TextOne_RocketHideoutF1, PostBattle_TextOne_RocketHideoutF1, EventScript_RocketOne_PostBattle_RocketHideOutF1
# 19 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_RocketOne_PostBattle_RocketHideOutF1
	return


EventScript_MatsRocketHideout::
# 23 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 24 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 25 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox EventScript_MatsRocketHideout_Text_0
# 26 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 27 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketOne_PostBattle_RocketHideOutF1::
# 38 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 39 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 40 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextOne_RocketHideoutF1
# 41 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 42 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketTwo_RocketHideout::
# 46 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETF_TWO_ROCKETHIDEOUTF1, PreBattle_TextTwo_RocketHideoutF1, PostBattle_TextTwo_RocketHideoutF1, EventScript_RocketTwo_PostBattle_RocketHideOutF1
# 47 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_RocketTwo_PostBattle_RocketHideOutF1
	return


EventScript_RocketTwo_PostBattle_RocketHideOutF1::
# 58 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 59 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 60 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextTwo_RocketHideoutF1
# 61 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 62 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketThree_RocketHideout::
# 66 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_THREE_ROCKETHIDEOUTF1, PreBattle_TextThree_RocketHideoutF1, PostBattle_TextThree_RocketHideoutF1, EventScript_RocketThree_PostBattle_RocketHideOutF1
# 67 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_RocketThree_PostBattle_RocketHideOutF1
	return


EventScript_RocketThree_PostBattle_RocketHideOutF1::
# 79 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 80 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 81 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextThree_RocketHideoutF1
# 82 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 83 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketFour_RocketHideout::
# 87 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_FOUR_ROCKETHIDEOUTF1, PreBattle_TextFour_RocketHideoutF1, PostBattle_TextFour_RocketHideoutF1, EventScript_RocketFour_PostBattle_RocketHideOutF1
# 88 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_RocketFour_PostBattle_RocketHideOutF1
	return


EventScript_RocketFour_PostBattle_RocketHideOutF1::
# 99 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 100 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 101 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextFour_RocketHideoutF1
# 102 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 103 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketFive_RocketHideout::
# 107 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETF_FIVE_ROCKETHIDEOUTF1, PreBattle_TextFive_RocketHideoutF1, PostBattle_TextFive_RocketHideoutF1, EventScript_RocketFive_PostBattle_RocketHideOutF1
# 108 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_RocketFive_PostBattle_RocketHideOutF1
	return


EventScript_RocketFive_PostBattle_RocketHideOutF1::
# 120 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 121 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 122 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextFive_RocketHideoutF1
# 123 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 124 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_Scientist_One_RocketHideout::
# 128 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETSCIENTIST_ONE_ROCKETHIDEOUTF1, PreBattle_TextSix_RocketHideoutF1, PostBattle_TextSix_RocketHideoutF1, EventScript_Scientist_One_PostBattle_RocketHideOutF1
# 129 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_Scientist_One_PostBattle_RocketHideOutF1
	return


EventScript_Scientist_One_PostBattle_RocketHideOutF1::
# 141 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 142 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 143 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextSix_RocketHideoutF1
# 144 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 145 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_Scientist_Two_RocketHideout::
# 149 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETSCIENTIST_TWO_ROCKETHIDEOUTF1, PreBattle_TextSeven_RocketHideoutF1, PostBattle_TextSeven_RocketHideoutF1, EventScript_Scientist_Two_PostBattle_RocketHideOutF1
# 150 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_Scientist_Two_PostBattle_RocketHideOutF1
	return


EventScript_Scientist_Two_PostBattle_RocketHideOutF1::
# 162 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 163 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 164 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextSeven_RocketHideoutF1
# 165 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 166 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketSix_RocketHideout::
# 170 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 171 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 172 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox EventScript_RocketSix_RocketHideout_Text_0
# 173 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 174 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_MatsRocketHideout_Text_0:
# 25 "data/maps/RocketHideout_F1/scripts.pory"
	.string "MATS: This place... not good! Did you\n"
	.string "hear what Giovanni said? You need to go\l"
	.string "over to the professor and tell him\l"
	.string "everything right now, I'll keep an eye\l"
	.string "out here.$"

EventScript_RocketSix_RocketHideout_Text_0:
# 172 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Beat it, no one is coming down here.$"

PreBattle_TextOne_RocketHideoutF1::
# 30 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Hold right there intruder!$"

PostBattle_TextOne_RocketHideoutF1::
# 34 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Do not dare disturb us on our mission!\n"
	.string "The boss will take care of you.$"

PreBattle_TextTwo_RocketHideoutF1::
# 49 "data/maps/RocketHideout_F1/scripts.pory"
	.string "The boss has given us plenty strong\n"
	.string "pokes to beat someone like you!$"

PostBattle_TextTwo_RocketHideoutF1::
# 53 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I need some stronger ones.$"

PreBattle_TextThree_RocketHideoutF1::
# 70 "data/maps/RocketHideout_F1/scripts.pory"
	.string "You aren't allowed upstairs. Get out!$"

PostBattle_TextThree_RocketHideoutF1::
# 74 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Fine, I guess I can't stop you. You are\n"
	.string "about to be in a world of trouble.$"

PreBattle_TextFour_RocketHideoutF1::
# 90 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I'M HIGH ON THE POWER OF TEAM ROCKET!$"

PostBattle_TextFour_RocketHideoutF1::
# 94 "data/maps/RocketHideout_F1/scripts.pory"
	.string "How did I lose?$"

PreBattle_TextFive_RocketHideoutF1::
# 111 "data/maps/RocketHideout_F1/scripts.pory"
	.string "You should not be here, punk!$"

PostBattle_TextFive_RocketHideoutF1::
# 115 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I've got nothing to tell you.$"

PreBattle_TextSix_RocketHideoutF1::
# 132 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Ah you see, our technology has allowed\n"
	.string "us to create Pokemon however we like!$"

PostBattle_TextSix_RocketHideoutF1::
# 136 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I have taken notes of your team.$"

PreBattle_TextSeven_RocketHideoutF1::
# 153 "data/maps/RocketHideout_F1/scripts.pory"
	.string "If we add 1 then subtract- hold on, who\n"
	.string "are you?$"

PostBattle_TextSeven_RocketHideoutF1::
# 157 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I'm left with 0 Pokemon...$"
