RivalDojo_MapScripts::
# 2 "data/maps/RivalDojo/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetupDojo_RIVALDOJO
	.byte 0


SetupDojo_RIVALDOJO::
# 6 "data/maps/RivalDojo/scripts.pory"
	setvar VAR_RIVAL_BATTLE_DOJO, 0
	return


Pick_Jens_RivalDojo::
# 10 "data/maps/RivalDojo/scripts.pory"
	lock
# 11 "data/maps/RivalDojo/scripts.pory"
	faceplayer
# 12 "data/maps/RivalDojo/scripts.pory"
	compare VAR_RIVAL_BATTLE_DOJO, 0
	goto_if_ne Pick_Jens_RivalDojo_2
# 18 "data/maps/RivalDojo/scripts.pory"
	msgbox Jens_Intro_battle_RIVALDOJO
# 19 "data/maps/RivalDojo/scripts.pory"
	waitmessage
# 20 "data/maps/RivalDojo/scripts.pory"
	msgbox Pick_Jens_RivalDojo_Text_1, MSGBOX_YESNO
# 21 "data/maps/RivalDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pick_Jens_RivalDojo_5
# 29 "data/maps/RivalDojo/scripts.pory"
	msgbox Pick_Jens_RivalDojo_Text_3
# 30 "data/maps/RivalDojo/scripts.pory"
	waitmessage
Pick_Jens_RivalDojo_1:
# 33 "data/maps/RivalDojo/scripts.pory"
	release
	return

Pick_Jens_RivalDojo_2:
# 14 "data/maps/RivalDojo/scripts.pory"
	msgbox Pick_Jens_RivalDojo_Text_0
# 15 "data/maps/RivalDojo/scripts.pory"
	waitmessage
	end

Pick_Jens_RivalDojo_5:
# 22 "data/maps/RivalDojo/scripts.pory"
	msgbox Pick_Jens_RivalDojo_Text_2
# 23 "data/maps/RivalDojo/scripts.pory"
	waitmessage
# 24 "data/maps/RivalDojo/scripts.pory"
	applymovement 2, Move_Jens_Gym_RIVALDOJO
# 25 "data/maps/RivalDojo/scripts.pory"
	waitmovement 0
# 26 "data/maps/RivalDojo/scripts.pory"
	setvar VAR_RIVAL_BATTLE_DOJO, 1
	goto Pick_Jens_RivalDojo_1


Pick_Mats_RivalDojo::
# 37 "data/maps/RivalDojo/scripts.pory"
	lock
# 38 "data/maps/RivalDojo/scripts.pory"
	faceplayer
# 39 "data/maps/RivalDojo/scripts.pory"
	compare VAR_RIVAL_BATTLE_DOJO, 0
	goto_if_ne Pick_Mats_RivalDojo_2
# 45 "data/maps/RivalDojo/scripts.pory"
	msgbox Mats_Intro_battle_RIVALDOJO
# 46 "data/maps/RivalDojo/scripts.pory"
	waitmessage
# 47 "data/maps/RivalDojo/scripts.pory"
	msgbox Pick_Mats_RivalDojo_Text_0, MSGBOX_YESNO
# 48 "data/maps/RivalDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pick_Mats_RivalDojo_5
# 56 "data/maps/RivalDojo/scripts.pory"
	msgbox Pick_Mats_RivalDojo_Text_2
# 57 "data/maps/RivalDojo/scripts.pory"
	waitmessage
Pick_Mats_RivalDojo_1:
# 60 "data/maps/RivalDojo/scripts.pory"
	release
	return

Pick_Mats_RivalDojo_2:
# 41 "data/maps/RivalDojo/scripts.pory"
	msgbox Pick_Jens_RivalDojo_Text_0
# 42 "data/maps/RivalDojo/scripts.pory"
	waitmessage
	end

Pick_Mats_RivalDojo_5:
# 49 "data/maps/RivalDojo/scripts.pory"
	msgbox Pick_Mats_RivalDojo_Text_1
# 50 "data/maps/RivalDojo/scripts.pory"
	waitmessage
# 51 "data/maps/RivalDojo/scripts.pory"
	applymovement 1, Move_Mats_Gym_RivalDojo
# 52 "data/maps/RivalDojo/scripts.pory"
	waitmovement 0
# 53 "data/maps/RivalDojo/scripts.pory"
	setvar VAR_RIVAL_BATTLE_DOJO, 2
	goto Pick_Mats_RivalDojo_1


Pick_Sten_RivalDojo::
# 64 "data/maps/RivalDojo/scripts.pory"
	lock
# 65 "data/maps/RivalDojo/scripts.pory"
	faceplayer
# 66 "data/maps/RivalDojo/scripts.pory"
	compare VAR_RIVAL_BATTLE_DOJO, 0
	goto_if_ne Pick_Sten_RivalDojo_2
# 72 "data/maps/RivalDojo/scripts.pory"
	msgbox Sten_Intro_battle_RIVALDOJO
# 73 "data/maps/RivalDojo/scripts.pory"
	waitmessage
# 74 "data/maps/RivalDojo/scripts.pory"
	msgbox Pick_Sten_RivalDojo_Text_0, MSGBOX_YESNO
# 75 "data/maps/RivalDojo/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Pick_Sten_RivalDojo_5
# 83 "data/maps/RivalDojo/scripts.pory"
	msgbox Pick_Sten_RivalDojo_Text_1
# 84 "data/maps/RivalDojo/scripts.pory"
	waitmessage
Pick_Sten_RivalDojo_1:
# 87 "data/maps/RivalDojo/scripts.pory"
	release
	return

Pick_Sten_RivalDojo_2:
# 68 "data/maps/RivalDojo/scripts.pory"
	msgbox Pick_Jens_RivalDojo_Text_0
# 69 "data/maps/RivalDojo/scripts.pory"
	waitmessage
	end

Pick_Sten_RivalDojo_5:
# 76 "data/maps/RivalDojo/scripts.pory"
	msgbox Pick_Mats_RivalDojo_Text_1
# 77 "data/maps/RivalDojo/scripts.pory"
	waitmessage
# 78 "data/maps/RivalDojo/scripts.pory"
	applymovement 3, Move_Sten_Gym_RIVALDOJO
# 79 "data/maps/RivalDojo/scripts.pory"
	waitmovement 0
# 80 "data/maps/RivalDojo/scripts.pory"
	setvar VAR_RIVAL_BATTLE_DOJO, 3
	goto Pick_Sten_RivalDojo_1


BattleJens_RivalDojo::
# 91 "data/maps/RivalDojo/scripts.pory"
	lock
# 92 "data/maps/RivalDojo/scripts.pory"
	faceplayer
# 93 "data/maps/RivalDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movement_Look_Left
# 94 "data/maps/RivalDojo/scripts.pory"
	msgbox BattleJens_RivalDojo_Text_0
# 95 "data/maps/RivalDojo/scripts.pory"
	waitmessage
# 96 "data/maps/RivalDojo/scripts.pory"
	call ActualBattleJens_RIVALDOJO
# 97 "data/maps/RivalDojo/scripts.pory"
	release
	return


BattleMats_RivalDojo::
# 101 "data/maps/RivalDojo/scripts.pory"
	lock
# 102 "data/maps/RivalDojo/scripts.pory"
	faceplayer
# 103 "data/maps/RivalDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movement_Look_Left
# 104 "data/maps/RivalDojo/scripts.pory"
	msgbox BattleMats_RivalDojo_Text_0
# 105 "data/maps/RivalDojo/scripts.pory"
	waitmessage
# 106 "data/maps/RivalDojo/scripts.pory"
	call ActualBattleMats_RIVALDOJO
# 107 "data/maps/RivalDojo/scripts.pory"
	release
	return


BattleSten_RivalDojo::
# 111 "data/maps/RivalDojo/scripts.pory"
	lock
# 112 "data/maps/RivalDojo/scripts.pory"
	faceplayer
# 113 "data/maps/RivalDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movement_Look_Left
# 114 "data/maps/RivalDojo/scripts.pory"
	msgbox BattleSten_RivalDojo_Text_0
# 115 "data/maps/RivalDojo/scripts.pory"
	waitmessage
# 116 "data/maps/RivalDojo/scripts.pory"
	call ActualBattleSten_RIVALDOJO
# 117 "data/maps/RivalDojo/scripts.pory"
	release
	return


ActualBattleJens_RIVALDOJO::
# 121 "data/maps/RivalDojo/scripts.pory"
	trainerbattle_single TRAINER_JENS_FOURTH_BATTLE, RIVAL_BATTLE_JENS_START_MATCH, RIVAL_BATTLE_JENS_POST_MATCH, JensBattleFinished_RIVALDOJO
	return


ActualBattleMats_RIVALDOJO::
# 125 "data/maps/RivalDojo/scripts.pory"
	trainerbattle_single TRAINER_MATS_FIFTH_BATTLE, RIVAL_BATTLE_Mats_START_MATCH, RIVAL_BATTLE_Mats_POST_MATCH, MatsBattleFinished_RIVALDOJO
	return


ActualBattleSten_RIVALDOJO::
# 129 "data/maps/RivalDojo/scripts.pory"
	trainerbattle_single TRAINER_STEN_SECOND_BATTLE, RIVAL_BATTLE_STEN_START_MATCH, RIVAL_BATTLE_STEN_POST_MATCH, StenBattleFinished_RIVALDOJO
	return


JensBattleFinished_RIVALDOJO::
# 157 "data/maps/RivalDojo/scripts.pory"
	lock
# 158 "data/maps/RivalDojo/scripts.pory"
	msgbox JensBattleFinished_RIVALDOJO_Text_0
# 159 "data/maps/RivalDojo/scripts.pory"
	applymovement 2, Move_Return_Jens_RivalDojo
# 160 "data/maps/RivalDojo/scripts.pory"
	waitmovement 0
# 161 "data/maps/RivalDojo/scripts.pory"
	cleartrainerflag TRAINER_JENS_FOURTH_BATTLE
# 162 "data/maps/RivalDojo/scripts.pory"
	setvar VAR_RIVAL_BATTLE_DOJO, 0
# 163 "data/maps/RivalDojo/scripts.pory"
	release
	return


MatsBattleFinished_RIVALDOJO::
# 167 "data/maps/RivalDojo/scripts.pory"
	lock
# 168 "data/maps/RivalDojo/scripts.pory"
	msgbox MatsBattleFinished_RIVALDOJO_Text_0
# 169 "data/maps/RivalDojo/scripts.pory"
	applymovement 1, Move_Return_Mats_RivalDojo
# 170 "data/maps/RivalDojo/scripts.pory"
	waitmovement 0
# 171 "data/maps/RivalDojo/scripts.pory"
	cleartrainerflag TRAINER_MATS_FIFTH_BATTLE
# 172 "data/maps/RivalDojo/scripts.pory"
	setvar VAR_RIVAL_BATTLE_DOJO, 0
# 173 "data/maps/RivalDojo/scripts.pory"
	release
	return


StenBattleFinished_RIVALDOJO::
# 176 "data/maps/RivalDojo/scripts.pory"
	lock
# 177 "data/maps/RivalDojo/scripts.pory"
	msgbox StenBattleFinished_RIVALDOJO_Text_0
# 178 "data/maps/RivalDojo/scripts.pory"
	applymovement 3, Move_Return_Sten_RivalDojo
# 179 "data/maps/RivalDojo/scripts.pory"
	waitmovement 0
# 180 "data/maps/RivalDojo/scripts.pory"
	cleartrainerflag TRAINER_STEN_SECOND_BATTLE
# 181 "data/maps/RivalDojo/scripts.pory"
	setvar VAR_RIVAL_BATTLE_DOJO, 0
# 182 "data/maps/RivalDojo/scripts.pory"
	release
	return


AlertJens_RIVALDOJO_A::
# 186 "data/maps/RivalDojo/scripts.pory"
	lock
# 187 "data/maps/RivalDojo/scripts.pory"
	msgbox AlertJens_RIVALDOJO_A_Text_0
# 188 "data/maps/RivalDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MOVE_DOWN_ONE_RIVALDOJO
# 189 "data/maps/RivalDojo/scripts.pory"
	waitmovement 0
# 190 "data/maps/RivalDojo/scripts.pory"
	release
	return


AlertJens_RIVALDOJO_B::
# 194 "data/maps/RivalDojo/scripts.pory"
	lock
# 195 "data/maps/RivalDojo/scripts.pory"
	msgbox AlertJens_RIVALDOJO_A_Text_0
# 196 "data/maps/RivalDojo/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MOVE_UP_ONE_RIVALDOJO
# 197 "data/maps/RivalDojo/scripts.pory"
	waitmovement 0
# 198 "data/maps/RivalDojo/scripts.pory"
	release
	return


# 213 "data/maps/RivalDojo/scripts.pory"
movement_Look_Left:
# 214 "data/maps/RivalDojo/scripts.pory"
	walk_in_place_left
	step_end

# 217 "data/maps/RivalDojo/scripts.pory"
Move_Jens_Gym_RIVALDOJO:
# 218 "data/maps/RivalDojo/scripts.pory"
	walk_left
# 218 "data/maps/RivalDojo/scripts.pory"
	walk_left
# 218 "data/maps/RivalDojo/scripts.pory"
	walk_left
# 218 "data/maps/RivalDojo/scripts.pory"
	walk_left
# 219 "data/maps/RivalDojo/scripts.pory"
	walk_up
# 219 "data/maps/RivalDojo/scripts.pory"
	walk_up
# 219 "data/maps/RivalDojo/scripts.pory"
	walk_up
# 219 "data/maps/RivalDojo/scripts.pory"
	walk_up
# 220 "data/maps/RivalDojo/scripts.pory"
	walk_in_place_right
	step_end

# 223 "data/maps/RivalDojo/scripts.pory"
MOVE_DOWN_ONE_RIVALDOJO:
# 224 "data/maps/RivalDojo/scripts.pory"
	walk_down
	step_end

# 227 "data/maps/RivalDojo/scripts.pory"
MOVE_UP_ONE_RIVALDOJO:
# 228 "data/maps/RivalDojo/scripts.pory"
	walk_up
	step_end

# 231 "data/maps/RivalDojo/scripts.pory"
Move_Sten_Gym_RIVALDOJO:
# 232 "data/maps/RivalDojo/scripts.pory"
	walk_right
# 232 "data/maps/RivalDojo/scripts.pory"
	walk_right
# 232 "data/maps/RivalDojo/scripts.pory"
	walk_right
# 233 "data/maps/RivalDojo/scripts.pory"
	walk_up
# 233 "data/maps/RivalDojo/scripts.pory"
	walk_up
# 233 "data/maps/RivalDojo/scripts.pory"
	walk_up
# 233 "data/maps/RivalDojo/scripts.pory"
	walk_up
# 234 "data/maps/RivalDojo/scripts.pory"
	walk_in_place_right
	step_end

# 237 "data/maps/RivalDojo/scripts.pory"
Move_Mats_Gym_RivalDojo:
# 238 "data/maps/RivalDojo/scripts.pory"
	walk_up
# 239 "data/maps/RivalDojo/scripts.pory"
	walk_right
# 239 "data/maps/RivalDojo/scripts.pory"
	walk_right
# 239 "data/maps/RivalDojo/scripts.pory"
	walk_right
# 239 "data/maps/RivalDojo/scripts.pory"
	walk_right
# 240 "data/maps/RivalDojo/scripts.pory"
	walk_up
# 240 "data/maps/RivalDojo/scripts.pory"
	walk_up
# 240 "data/maps/RivalDojo/scripts.pory"
	walk_up
# 241 "data/maps/RivalDojo/scripts.pory"
	walk_in_place_right
	step_end

# 244 "data/maps/RivalDojo/scripts.pory"
Move_Return_Mats_RivalDojo:
# 245 "data/maps/RivalDojo/scripts.pory"
	walk_down
# 245 "data/maps/RivalDojo/scripts.pory"
	walk_down
# 245 "data/maps/RivalDojo/scripts.pory"
	walk_down
# 246 "data/maps/RivalDojo/scripts.pory"
	walk_left
# 246 "data/maps/RivalDojo/scripts.pory"
	walk_left
# 246 "data/maps/RivalDojo/scripts.pory"
	walk_left
# 246 "data/maps/RivalDojo/scripts.pory"
	walk_left
# 247 "data/maps/RivalDojo/scripts.pory"
	walk_down
# 248 "data/maps/RivalDojo/scripts.pory"
	walk_in_place_right
	step_end

# 250 "data/maps/RivalDojo/scripts.pory"
Move_Return_Jens_RivalDojo:
# 251 "data/maps/RivalDojo/scripts.pory"
	walk_down
# 251 "data/maps/RivalDojo/scripts.pory"
	walk_down
# 251 "data/maps/RivalDojo/scripts.pory"
	walk_down
# 251 "data/maps/RivalDojo/scripts.pory"
	walk_down
# 252 "data/maps/RivalDojo/scripts.pory"
	walk_right
# 252 "data/maps/RivalDojo/scripts.pory"
	walk_right
# 252 "data/maps/RivalDojo/scripts.pory"
	walk_right
# 252 "data/maps/RivalDojo/scripts.pory"
	walk_right
# 253 "data/maps/RivalDojo/scripts.pory"
	walk_in_place_down
	step_end

# 256 "data/maps/RivalDojo/scripts.pory"
Move_Return_Sten_RivalDojo:
# 257 "data/maps/RivalDojo/scripts.pory"
	walk_down
# 257 "data/maps/RivalDojo/scripts.pory"
	walk_down
# 257 "data/maps/RivalDojo/scripts.pory"
	walk_down
# 257 "data/maps/RivalDojo/scripts.pory"
	walk_down
# 258 "data/maps/RivalDojo/scripts.pory"
	walk_right
# 258 "data/maps/RivalDojo/scripts.pory"
	walk_right
# 258 "data/maps/RivalDojo/scripts.pory"
	walk_right
	step_end

Pick_Jens_RivalDojo_Text_0:
# 14 "data/maps/RivalDojo/scripts.pory"
	.string "Someone is already waiting for you$"

Pick_Jens_RivalDojo_Text_1:
# 20 "data/maps/RivalDojo/scripts.pory"
	.string "Do you want to challenge Jens?$"

Pick_Jens_RivalDojo_Text_2:
# 22 "data/maps/RivalDojo/scripts.pory"
	.string "Lets go then!$"

Pick_Jens_RivalDojo_Text_3:
# 29 "data/maps/RivalDojo/scripts.pory"
	.string "Ok, noob.$"

Pick_Mats_RivalDojo_Text_0:
# 47 "data/maps/RivalDojo/scripts.pory"
	.string "Do you want to challenge Mats?$"

Pick_Mats_RivalDojo_Text_1:
# 49 "data/maps/RivalDojo/scripts.pory"
	.string "Alright!$"

Pick_Mats_RivalDojo_Text_2:
# 56 "data/maps/RivalDojo/scripts.pory"
	.string "Another time maybe?$"

Pick_Sten_RivalDojo_Text_0:
# 74 "data/maps/RivalDojo/scripts.pory"
	.string "Do you want to challenge Sten?$"

Pick_Sten_RivalDojo_Text_1:
# 83 "data/maps/RivalDojo/scripts.pory"
	.string "Okay, see you around.$"

BattleJens_RivalDojo_Text_0:
# 94 "data/maps/RivalDojo/scripts.pory"
	.string "Here I go!$"

BattleMats_RivalDojo_Text_0:
# 104 "data/maps/RivalDojo/scripts.pory"
	.string "Bring it on!$"

BattleSten_RivalDojo_Text_0:
# 114 "data/maps/RivalDojo/scripts.pory"
	.string "Good luck!$"

JensBattleFinished_RIVALDOJO_Text_0:
# 158 "data/maps/RivalDojo/scripts.pory"
	.string "Let's do that again sometime$"

MatsBattleFinished_RIVALDOJO_Text_0:
# 168 "data/maps/RivalDojo/scripts.pory"
	.string "I'm around if you want to go again$"

StenBattleFinished_RIVALDOJO_Text_0:
# 177 "data/maps/RivalDojo/scripts.pory"
	.string "You got lucky, rematch!$"

AlertJens_RIVALDOJO_A_Text_0:
# 187 "data/maps/RivalDojo/scripts.pory"
	.string "A rival is waiting, go to your platform!$"

RIVAL_BATTLE_Mats_POST_MATCH::
# 132 "data/maps/RivalDojo/scripts.pory"
	.string "Your team is great too!$"

RIVAL_BATTLE_Mats_START_MATCH::
# 136 "data/maps/RivalDojo/scripts.pory"
	.string "I've assembled some of my favourite\n"
	.string "mons!$"

RIVAL_BATTLE_STEN_POST_MATCH::
# 140 "data/maps/RivalDojo/scripts.pory"
	.string "I'm beat!$"

RIVAL_BATTLE_STEN_START_MATCH::
# 144 "data/maps/RivalDojo/scripts.pory"
	.string "You are about to get messed up!$"

RIVAL_BATTLE_JENS_POST_MATCH::
# 148 "data/maps/RivalDojo/scripts.pory"
	.string "Nice battle!$"

RIVAL_BATTLE_JENS_START_MATCH::
# 152 "data/maps/RivalDojo/scripts.pory"
	.string "Are you ready to face my A-Team?$"

Jens_Intro_battle_RIVALDOJO::
# 201 "data/maps/RivalDojo/scripts.pory"
	.string "Yo, Champ, looks like you got a real\n"
	.string "strong team. How about a battle?$"

Mats_Intro_battle_RIVALDOJO::
# 205 "data/maps/RivalDojo/scripts.pory"
	.string "Hey man, care for a battle? This time\n"
	.string "I'll bring a strong team of mons.$"

Sten_Intro_battle_RIVALDOJO::
# 209 "data/maps/RivalDojo/scripts.pory"
	.string "You and me, let's duke it out.$"
