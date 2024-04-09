RocketHideout_F1_MapScripts::
	.byte 0


EventScript_RocketOne_RocketHideout::
# 6 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETF_ONE_ROCKETHIDEOUTF1, PreBattle_TextOne_RocketHideoutF1, PostBattle_TextOne_RocketHideoutF1, EventScript_RocketOne_PostBattle_RocketHideOutF1
# 7 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_RocketOne_PostBattle_RocketHideOutF1
	return


EventScript_RocketOne_PostBattle_RocketHideOutF1::
# 18 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 19 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 20 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextOne_RocketHideoutF1
# 21 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 22 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketTwo_RocketHideout::
# 26 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETF_TWO_ROCKETHIDEOUTF1, PreBattle_TextTwo_RocketHideoutF1, PostBattle_TextTwo_RocketHideoutF1, EventScript_RocketTwo_PostBattle_RocketHideOutF1
# 27 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_RocketTwo_PostBattle_RocketHideOutF1
	return


EventScript_RocketTwo_PostBattle_RocketHideOutF1::
# 38 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 39 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 40 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextTwo_RocketHideoutF1
# 41 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 42 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketThree_RocketHideout::
# 46 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_THREE_ROCKETHIDEOUTF1, PreBattle_TextThree_RocketHideoutF1, PostBattle_TextThree_RocketHideoutF1, EventScript_RocketThree_PostBattle_RocketHideOutF1
# 47 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_RocketThree_PostBattle_RocketHideOutF1
	return


EventScript_RocketThree_PostBattle_RocketHideOutF1::
# 59 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 60 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 61 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextThree_RocketHideoutF1
# 62 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 63 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketFour_RocketHideout::
# 67 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_FOUR_ROCKETHIDEOUTF1, PreBattle_TextFour_RocketHideoutF1, PostBattle_TextFour_RocketHideoutF1, EventScript_RocketFour_PostBattle_RocketHideOutF1
# 68 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_RocketFour_PostBattle_RocketHideOutF1
	return


EventScript_RocketFour_PostBattle_RocketHideOutF1::
# 79 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 80 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 81 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextFour_RocketHideoutF1
# 82 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 83 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketFive_RocketHideout::
# 87 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETF_FIVE_ROCKETHIDEOUTF1, PreBattle_TextFive_RocketHideoutF1, PostBattle_TextFive_RocketHideoutF1, EventScript_RocketFive_PostBattle_RocketHideOutF1
# 88 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_RocketFive_PostBattle_RocketHideOutF1
	return


EventScript_RocketFive_PostBattle_RocketHideOutF1::
# 100 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 101 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 102 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextFive_RocketHideoutF1
# 103 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 104 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_Scientist_One_RocketHideout::
# 108 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETSCIENTIST_ONE_ROCKETHIDEOUTF1, PreBattle_TextSix_RocketHideoutF1, PostBattle_TextSix_RocketHideoutF1, EventScript_Scientist_One_PostBattle_RocketHideOutF1
# 109 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_Scientist_One_PostBattle_RocketHideOutF1
	return


EventScript_Scientist_One_PostBattle_RocketHideOutF1::
# 121 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 122 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 123 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextSix_RocketHideoutF1
# 124 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 125 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_Scientist_Two_RocketHideout::
# 129 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETSCIENTIST_TWO_ROCKETHIDEOUTF1, PreBattle_TextSeven_RocketHideoutF1, PostBattle_TextSeven_RocketHideoutF1, EventScript_Scientist_Two_PostBattle_RocketHideOutF1
# 130 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_Scientist_Two_PostBattle_RocketHideOutF1
	return


EventScript_Scientist_Two_PostBattle_RocketHideOutF1::
# 142 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 143 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 144 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextSeven_RocketHideoutF1
# 145 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 146 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketSix_RocketHideout::
# 150 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 151 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 152 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox EventScript_RocketSix_RocketHideout_Text_0
# 153 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 154 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketSix_RocketHideout_Text_0:
# 152 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Beat it, no one is coming down here.$"

PreBattle_TextOne_RocketHideoutF1::
# 10 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Hold right there intruder!$"

PostBattle_TextOne_RocketHideoutF1::
# 14 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Do not dare disturb us on our mission!\n"
	.string "The boss will take care of you.$"

PreBattle_TextTwo_RocketHideoutF1::
# 29 "data/maps/RocketHideout_F1/scripts.pory"
	.string "The boss has given us plenty strong\n"
	.string "pokes to beat someone like you!$"

PostBattle_TextTwo_RocketHideoutF1::
# 33 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I need some stronger ones.$"

PreBattle_TextThree_RocketHideoutF1::
# 50 "data/maps/RocketHideout_F1/scripts.pory"
	.string "You aren't allowed upstairs. Get out!$"

PostBattle_TextThree_RocketHideoutF1::
# 54 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Fine, I guess I can't stop you. You are\n"
	.string "about to be in a world of trouble.$"

PreBattle_TextFour_RocketHideoutF1::
# 70 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I'M HIGH ON THE POWER OF TEAM ROCKET!$"

PostBattle_TextFour_RocketHideoutF1::
# 74 "data/maps/RocketHideout_F1/scripts.pory"
	.string "How did I lose?$"

PreBattle_TextFive_RocketHideoutF1::
# 91 "data/maps/RocketHideout_F1/scripts.pory"
	.string "You should not be here, punk!$"

PostBattle_TextFive_RocketHideoutF1::
# 95 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I've got nothing to tell you.$"

PreBattle_TextSix_RocketHideoutF1::
# 112 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Ah you see, our technology has allowed\n"
	.string "us to create Pokemon however we like!$"

PostBattle_TextSix_RocketHideoutF1::
# 116 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I have taken notes of your team.$"

PreBattle_TextSeven_RocketHideoutF1::
# 133 "data/maps/RocketHideout_F1/scripts.pory"
	.string "If we add 1 then subtract- hold on, who\n"
	.string "are you?$"

PostBattle_TextSeven_RocketHideoutF1::
# 137 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I'm left with 0 Pokemon...$"
