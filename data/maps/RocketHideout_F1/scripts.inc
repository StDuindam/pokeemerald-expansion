RocketHideout_F1_MapScripts::
	.byte 0


EventScript_RocketOne_RocketHideout::
# 6 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETF_ONE_ROCKETHIDEOUTF1, PreBattle_TextOne_RocketHideoutF1, PostBattle_TextOne_RocketHideoutF1, EventScript_RocketOne_PostBattle_RocketHideOutF1
	return


EventScript_RocketOne_PostBattle_RocketHideOutF1::
# 17 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 18 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 19 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextOne_RocketHideoutF1
# 20 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 21 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketTwo_RocketHideout::
# 25 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETF_TWO_ROCKETHIDEOUTF1, PreBattle_TextTwo_RocketHideoutF1, PostBattle_TextTwo_RocketHideoutF1, EventScript_RocketTwo_PostBattle_RocketHideOutF1
	return


EventScript_RocketTwo_PostBattle_RocketHideOutF1::
# 36 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 37 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 38 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextTwo_RocketHideoutF1
# 39 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 40 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketThree_RocketHideout::
# 44 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_THREE_ROCKETHIDEOUTF1, PreBattle_TextThree_RocketHideoutF1, PostBattle_TextThree_RocketHideoutF1, EventScript_RocketThree_PostBattle_RocketHideOutF1
	return


EventScript_RocketThree_PostBattle_RocketHideOutF1::
# 56 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 57 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 58 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextThree_RocketHideoutF1
# 59 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 60 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketFour_RocketHideout::
# 64 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_FOUR_ROCKETHIDEOUTF1, PreBattle_TextFour_RocketHideoutF1, PostBattle_TextFour_RocketHideoutF1, EventScript_RocketFour_PostBattle_RocketHideOutF1
	return


EventScript_RocketFour_PostBattle_RocketHideOutF1::
# 76 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 77 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 78 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextFour_RocketHideoutF1
# 79 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 80 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketFive_RocketHideout::
# 84 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETF_FIVE_ROCKETHIDEOUTF1, PreBattle_TextFive_RocketHideoutF1, PostBattle_TextFive_RocketHideoutF1, EventScript_RocketFive_PostBattle_RocketHideOutF1
# 85 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_RocketFive_PostBattle_RocketHideOutF1
	return


EventScript_RocketFive_PostBattle_RocketHideOutF1::
# 97 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 98 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 99 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextFive_RocketHideoutF1
# 100 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 101 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_Scientist_One_RocketHideout::
# 105 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETSCIENTIST_ONE_ROCKETHIDEOUTF1, PreBattle_TextSix_RocketHideoutF1, PostBattle_TextSix_RocketHideoutF1, EventScript_Scientist_One_PostBattle_RocketHideOutF1
	return


EventScript_Scientist_One_PostBattle_RocketHideOutF1::
# 117 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 118 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 119 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextSix_RocketHideoutF1
# 120 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 121 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_Scientist_Two_RocketHideout::
# 125 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETSCIENTIST_TWO_ROCKETHIDEOUTF1, PreBattle_TextSeven_RocketHideoutF1, PostBattle_TextSeven_RocketHideoutF1, EventScript_Scientist_Two_PostBattle_RocketHideOutF1
	return


EventScript_Scientist_Two_PostBattle_RocketHideOutF1::
# 137 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 138 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 139 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextSeven_RocketHideoutF1
# 140 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 141 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketSix_RocketHideout::
# 145 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 146 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 147 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox EventScript_RocketSix_RocketHideout_Text_0
# 148 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 149 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketSix_RocketHideout_Text_0:
# 147 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Beat it, no one is coming down here.$"

PreBattle_TextOne_RocketHideoutF1::
# 9 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Hold right there intruder!$"

PostBattle_TextOne_RocketHideoutF1::
# 13 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Do not dare disturb us on our mission!\n"
	.string "The boss will take care of you.$"

PreBattle_TextTwo_RocketHideoutF1::
# 27 "data/maps/RocketHideout_F1/scripts.pory"
	.string "The boss has given us plenty strong\n"
	.string "pokes to beat someone like you!$"

PostBattle_TextTwo_RocketHideoutF1::
# 31 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I need some stronger ones.$"

PreBattle_TextThree_RocketHideoutF1::
# 47 "data/maps/RocketHideout_F1/scripts.pory"
	.string "You aren't allowed upstairs. Get out!$"

PostBattle_TextThree_RocketHideoutF1::
# 51 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Fine, I guess I can't stop you. You are\n"
	.string "about to be in a world of trouble.$"

PreBattle_TextFour_RocketHideoutF1::
# 67 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I'M HIGH ON THE POWER OF TEAM ROCKET!$"

PostBattle_TextFour_RocketHideoutF1::
# 71 "data/maps/RocketHideout_F1/scripts.pory"
	.string "How did I lose?$"

PreBattle_TextFive_RocketHideoutF1::
# 88 "data/maps/RocketHideout_F1/scripts.pory"
	.string "You should not be here, punk!$"

PostBattle_TextFive_RocketHideoutF1::
# 92 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I've got nothing to tell you.$"

PreBattle_TextSix_RocketHideoutF1::
# 108 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Ah you see, our technology has allowed\n"
	.string "us to create Pokemon however we like!$"

PostBattle_TextSix_RocketHideoutF1::
# 112 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I have taken notes of your team.$"

PreBattle_TextSeven_RocketHideoutF1::
# 128 "data/maps/RocketHideout_F1/scripts.pory"
	.string "If we add 1 then subtract- hold on, who\n"
	.string "are you?$"

PostBattle_TextSeven_RocketHideoutF1::
# 132 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I'm left with 0 Pokemon...$"
