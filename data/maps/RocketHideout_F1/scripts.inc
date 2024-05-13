RocketHideout_F1_MapScripts::
# 3 "data/maps/RocketHideout_F1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EventScript_OnTransition_RocketHideoutF1
	.byte 0


EventScript_OnTransition_RocketHideoutF1::
# 8 "data/maps/RocketHideout_F1/scripts.pory"
	compare VAR_ROCKET_ARC_STATE, 7
	goto_if_ne EventScript_OnTransition_RocketHideoutF1_2
# 12 "data/maps/RocketHideout_F1/scripts.pory"
	clearflag FLAG_MATSROCKETHIDEOUT_VISIBLE
EventScript_OnTransition_RocketHideoutF1_1:
# 14 "data/maps/RocketHideout_F1/scripts.pory"
	compare VAR_ROCKET_ARC_STATE, 8
	goto_if_eq EventScript_OnTransition_RocketHideoutF1_5
# 17 "data/maps/RocketHideout_F1/scripts.pory"
	setflag FLAG_NOTINROCKETSTATE_8
	return

EventScript_OnTransition_RocketHideoutF1_2:
# 10 "data/maps/RocketHideout_F1/scripts.pory"
	setflag FLAG_MATSROCKETHIDEOUT_VISIBLE
	goto EventScript_OnTransition_RocketHideoutF1_1

EventScript_OnTransition_RocketHideoutF1_5:
# 15 "data/maps/RocketHideout_F1/scripts.pory"
	clearflag FLAG_NOTINROCKETSTATE_8
	return


EventScript_RocketOne_RocketHideout::
# 22 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETF_ONE_ROCKETHIDEOUTF1, PreBattle_TextOne_RocketHideoutF1, PostBattle_TextOne_RocketHideoutF1, EventScript_RocketOne_PostBattle_RocketHideOutF1
# 23 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_RocketOne_PostBattle_RocketHideOutF1
	return


EventScript_MatsRocketHideout::
# 27 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 28 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 29 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox EventScript_MatsRocketHideout_Text_0
# 30 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 31 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketOne_PostBattle_RocketHideOutF1::
# 42 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 43 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 44 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextOne_RocketHideoutF1
# 45 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 46 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketTwo_RocketHideout::
# 50 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETF_TWO_ROCKETHIDEOUTF1, PreBattle_TextTwo_RocketHideoutF1, PostBattle_TextTwo_RocketHideoutF1, EventScript_RocketTwo_PostBattle_RocketHideOutF1
# 51 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_RocketTwo_PostBattle_RocketHideOutF1
	return


EventScript_RocketTwo_PostBattle_RocketHideOutF1::
# 62 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 63 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 64 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextTwo_RocketHideoutF1
# 65 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 66 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketThree_RocketHideout::
# 70 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_THREE_ROCKETHIDEOUTF1, PreBattle_TextThree_RocketHideoutF1, PostBattle_TextThree_RocketHideoutF1, EventScript_RocketThree_PostBattle_RocketHideOutF1
# 71 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_RocketThree_PostBattle_RocketHideOutF1
	return


EventScript_RocketThree_PostBattle_RocketHideOutF1::
# 83 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 84 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 85 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextThree_RocketHideoutF1
# 86 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 87 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketFour_RocketHideout::
# 91 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETM_FOUR_ROCKETHIDEOUTF1, PreBattle_TextFour_RocketHideoutF1, PostBattle_TextFour_RocketHideoutF1, EventScript_RocketFour_PostBattle_RocketHideOutF1
# 92 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_RocketFour_PostBattle_RocketHideOutF1
	return


EventScript_RocketFour_PostBattle_RocketHideOutF1::
# 103 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 104 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 105 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextFour_RocketHideoutF1
# 106 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 107 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketFive_RocketHideout::
# 111 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETF_FIVE_ROCKETHIDEOUTF1, PreBattle_TextFive_RocketHideoutF1, PostBattle_TextFive_RocketHideoutF1, EventScript_RocketFive_PostBattle_RocketHideOutF1
# 112 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_RocketFive_PostBattle_RocketHideOutF1
	return


EventScript_RocketFive_PostBattle_RocketHideOutF1::
# 124 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 125 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 126 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextFive_RocketHideoutF1
# 127 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 128 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_Scientist_One_RocketHideout::
# 132 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETSCIENTIST_ONE_ROCKETHIDEOUTF1, PreBattle_TextSix_RocketHideoutF1, PostBattle_TextSix_RocketHideoutF1, EventScript_Scientist_One_PostBattle_RocketHideOutF1
# 133 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_Scientist_One_PostBattle_RocketHideOutF1
	return


EventScript_Scientist_One_PostBattle_RocketHideOutF1::
# 145 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 146 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 147 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextSix_RocketHideoutF1
# 148 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 149 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_Scientist_Two_RocketHideout::
# 153 "data/maps/RocketHideout_F1/scripts.pory"
	trainerbattle_single TRAINER_ROCKETSCIENTIST_TWO_ROCKETHIDEOUTF1, PreBattle_TextSeven_RocketHideoutF1, PostBattle_TextSeven_RocketHideoutF1, EventScript_Scientist_Two_PostBattle_RocketHideOutF1
# 154 "data/maps/RocketHideout_F1/scripts.pory"
	call EventScript_Scientist_Two_PostBattle_RocketHideOutF1
	return


EventScript_Scientist_Two_PostBattle_RocketHideOutF1::
# 166 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 167 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 168 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox PostBattle_TextSeven_RocketHideoutF1
# 169 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 170 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_RocketSix_RocketHideout::
# 174 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 175 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 176 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox EventScript_RocketSix_RocketHideout_Text_0
# 177 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 178 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


EventScript_PushPlayerBack_RocketHideoutF1_1::
# 182 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 183 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox EventScript_PushPlayerBack_RocketHideoutF1_1_Text_0
# 184 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 185 "data/maps/RocketHideout_F1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BumpRight_RocketHideoutF1
# 186 "data/maps/RocketHideout_F1/scripts.pory"
	waitmovement 0
# 187 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


Eventscript_TalkToWattson_RocketHideoutF1::
# 191 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 192 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox Eventscript_TalkToWattson_RocketHideoutF1_Text_0
# 193 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 194 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


Eventscript_TalkToMats_RocketHideoutF1::
# 198 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 199 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox Eventscript_TalkToMats_RocketHideoutF1_Text_0
# 200 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 201 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


Eventscript_TalkToMatsRocket_RocketHideoutF1::
# 204 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 205 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox Eventscript_TalkToMatsRocket_RocketHideoutF1_Text_0
# 206 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 207 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


Eventscript_TalkToJens_RocketHideoutF1::
# 211 "data/maps/RocketHideout_F1/scripts.pory"
	lock
# 212 "data/maps/RocketHideout_F1/scripts.pory"
	faceplayer
# 213 "data/maps/RocketHideout_F1/scripts.pory"
	msgbox Eventscript_TalkToJens_RocketHideoutF1_Text_0
# 214 "data/maps/RocketHideout_F1/scripts.pory"
	waitmessage
# 215 "data/maps/RocketHideout_F1/scripts.pory"
	release
	return


# 218 "data/maps/RocketHideout_F1/scripts.pory"
BumpRight_RocketHideoutF1:
# 219 "data/maps/RocketHideout_F1/scripts.pory"
	walk_right
	step_end

EventScript_MatsRocketHideout_Text_0:
# 29 "data/maps/RocketHideout_F1/scripts.pory"
	.string "MATS: This place... not good! Did you\n"
	.string "hear what Giovanni said? You need to go\l"
	.string "over to the professor and tell him\l"
	.string "everything right now, I'll keep an eye\l"
	.string "out here.$"

EventScript_RocketSix_RocketHideout_Text_0:
# 176 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Beat it, no one is coming down here.$"

EventScript_PushPlayerBack_RocketHideoutF1_1_Text_0:
# 183 "data/maps/RocketHideout_F1/scripts.pory"
	.string "WATTSON: Stay out of this one Kid, I'll\n"
	.string "zap the grunts and keep them back!$"

Eventscript_TalkToWattson_RocketHideoutF1_Text_0:
# 192 "data/maps/RocketHideout_F1/scripts.pory"
	.string "WATTSON: I got to focus kid, you move\n"
	.string "on!$"

Eventscript_TalkToMats_RocketHideoutF1_Text_0:
# 199 "data/maps/RocketHideout_F1/scripts.pory"
	.string "MATS: This Grunt was no match for me,\n"
	.string "easy, you move on while I make sure they\l"
	.string "don't do anything weird.$"

Eventscript_TalkToMatsRocket_RocketHideoutF1_Text_0:
# 205 "data/maps/RocketHideout_F1/scripts.pory"
	.string "GRUNT: This Mats guy was really tough...$"

Eventscript_TalkToJens_RocketHideoutF1_Text_0:
# 213 "data/maps/RocketHideout_F1/scripts.pory"
	.string "JENS: Yo! I think I easily beat 50 of\n"
	.string "those Rocket noobs. Help is underway, I\l"
	.string "think the big boss is downstairs, do you\l"
	.string "want to take the lead? We will be right\l"
	.string "behind you.$"

PreBattle_TextOne_RocketHideoutF1::
# 34 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Hold right there intruder!$"

PostBattle_TextOne_RocketHideoutF1::
# 38 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Do not dare disturb us on our mission!\n"
	.string "The boss will take care of you.$"

PreBattle_TextTwo_RocketHideoutF1::
# 53 "data/maps/RocketHideout_F1/scripts.pory"
	.string "The boss has given us plenty strong\n"
	.string "pokes to beat someone like you!$"

PostBattle_TextTwo_RocketHideoutF1::
# 57 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I need some stronger ones.$"

PreBattle_TextThree_RocketHideoutF1::
# 74 "data/maps/RocketHideout_F1/scripts.pory"
	.string "You aren't allowed upstairs. Get out!$"

PostBattle_TextThree_RocketHideoutF1::
# 78 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Fine, I guess I can't stop you. You are\n"
	.string "about to be in a world of trouble.$"

PreBattle_TextFour_RocketHideoutF1::
# 94 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I'M HIGH ON THE POWER OF TEAM ROCKET!$"

PostBattle_TextFour_RocketHideoutF1::
# 98 "data/maps/RocketHideout_F1/scripts.pory"
	.string "How did I lose?$"

PreBattle_TextFive_RocketHideoutF1::
# 115 "data/maps/RocketHideout_F1/scripts.pory"
	.string "You should not be here, punk!$"

PostBattle_TextFive_RocketHideoutF1::
# 119 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I've got nothing to tell you.$"

PreBattle_TextSix_RocketHideoutF1::
# 136 "data/maps/RocketHideout_F1/scripts.pory"
	.string "Ah you see, our technology has allowed\n"
	.string "us to create Pokemon however we like!$"

PostBattle_TextSix_RocketHideoutF1::
# 140 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I have taken notes of your team.$"

PreBattle_TextSeven_RocketHideoutF1::
# 157 "data/maps/RocketHideout_F1/scripts.pory"
	.string "If we add 1 then subtract- hold on, who\n"
	.string "are you?$"

PostBattle_TextSeven_RocketHideoutF1::
# 161 "data/maps/RocketHideout_F1/scripts.pory"
	.string "I'm left with 0 Pokemon...$"
