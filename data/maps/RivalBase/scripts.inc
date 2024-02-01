RivalBase_MapScripts::
# 2 "data/maps/RivalBase/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Starter_EventScript_Obtained
	.byte 0


Starter_EventScript_Obtained::
# 6 "data/maps/RivalBase/scripts.pory"
	goto_if_set FLAG_STARTER_OBTAINED, Starter_EventScript_Obtained_1
	return

Starter_EventScript_Obtained_1:
# 7 "data/maps/RivalBase/scripts.pory"
	removeobject 1
# 8 "data/maps/RivalBase/scripts.pory"
	removeobject 2
# 9 "data/maps/RivalBase/scripts.pory"
	removeobject 3
	return


Starter_EventScript_Sten::
# 14 "data/maps/RivalBase/scripts.pory"
	lock
# 15 "data/maps/RivalBase/scripts.pory"
	faceplayer
# 16 "data/maps/RivalBase/scripts.pory"
	waitmessage
# 17 "data/maps/RivalBase/scripts.pory"
	goto_if_unset FLAG_STARTER_OBTAINED, Starter_EventScript_Sten_2
# 48 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Sten_Text_5
Starter_EventScript_Sten_1:
# 50 "data/maps/RivalBase/scripts.pory"
	waitmessage
# 51 "data/maps/RivalBase/scripts.pory"
	release
	end

Starter_EventScript_Sten_2:
# 18 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Sten_Text_0
# 19 "data/maps/RivalBase/scripts.pory"
	showmonpic SPECIES_MACHOP, 10, 3
# 20 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Sten_Text_1, MSGBOX_YESNO
# 21 "data/maps/RivalBase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Starter_EventScript_Sten_5
# 43 "data/maps/RivalBase/scripts.pory"
	hidemonpic
# 44 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Sten_Text_4
	goto Starter_EventScript_Sten_1

Starter_EventScript_Sten_5:
# 22 "data/maps/RivalBase/scripts.pory"
	givemon SPECIES_MACHOP, 5, ITEM_SITRUS_BERRY
# 23 "data/maps/RivalBase/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Starter_EventScript_Sten_8
# 30 "data/maps/RivalBase/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Starter_EventScript_Sten_9
# 38 "data/maps/RivalBase/scripts.pory"
	hidemonpic
# 39 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Sten_Text_3
	goto Starter_EventScript_Sten_1

Starter_EventScript_Sten_8:
# 24 "data/maps/RivalBase/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 25 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Sten_Text_2
# 26 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_STARTER_OBTAINED
# 27 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 28 "data/maps/RivalBase/scripts.pory"
	call NicknamePartyMon
	goto Starter_EventScript_Sten_1

Starter_EventScript_Sten_9:
# 31 "data/maps/RivalBase/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 32 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Sten_Text_2
# 33 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_STARTER_OBTAINED
# 34 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 35 "data/maps/RivalBase/scripts.pory"
	call NicknameBoxMon
	goto Starter_EventScript_Sten_1


Starter_EventScript_Jens::
# 57 "data/maps/RivalBase/scripts.pory"
	lock
# 58 "data/maps/RivalBase/scripts.pory"
	faceplayer
# 59 "data/maps/RivalBase/scripts.pory"
	goto_if_unset FLAG_STARTER_OBTAINED, Starter_EventScript_Jens_2
# 90 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Jens_Text_4
Starter_EventScript_Jens_1:
# 92 "data/maps/RivalBase/scripts.pory"
	waitmessage
# 93 "data/maps/RivalBase/scripts.pory"
	release
	end

Starter_EventScript_Jens_2:
# 60 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Jens_Text_0
# 61 "data/maps/RivalBase/scripts.pory"
	showmonpic SPECIES_KYOGRE, 10, 3
# 62 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Jens_Text_1, MSGBOX_YESNO
# 63 "data/maps/RivalBase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Starter_EventScript_Jens_5
# 85 "data/maps/RivalBase/scripts.pory"
	hidemonpic
# 86 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Jens_Text_3
	goto Starter_EventScript_Jens_1

Starter_EventScript_Jens_5:
# 64 "data/maps/RivalBase/scripts.pory"
	givemon SPECIES_KYOGRE, 5, ITEM_BLUE_ORB
# 65 "data/maps/RivalBase/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Starter_EventScript_Jens_8
# 72 "data/maps/RivalBase/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Starter_EventScript_Jens_9
# 80 "data/maps/RivalBase/scripts.pory"
	hidemonpic
# 81 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Sten_Text_3
	goto Starter_EventScript_Jens_1

Starter_EventScript_Jens_8:
# 66 "data/maps/RivalBase/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 67 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Jens_Text_2
# 68 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_STARTER_OBTAINED
# 69 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 70 "data/maps/RivalBase/scripts.pory"
	call NicknamePartyMon
	goto Starter_EventScript_Jens_1

Starter_EventScript_Jens_9:
# 73 "data/maps/RivalBase/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 74 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Jens_Text_2
# 75 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_STARTER_OBTAINED
# 76 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 77 "data/maps/RivalBase/scripts.pory"
	call NicknameBoxMon
	goto Starter_EventScript_Jens_1


Starter_EventScript_Mats::
# 99 "data/maps/RivalBase/scripts.pory"
	lock
# 100 "data/maps/RivalBase/scripts.pory"
	faceplayer
# 101 "data/maps/RivalBase/scripts.pory"
	goto_if_unset FLAG_STARTER_OBTAINED, Starter_EventScript_Mats_2
# 132 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Mats_Text_4
Starter_EventScript_Mats_1:
# 135 "data/maps/RivalBase/scripts.pory"
	waitmessage
# 136 "data/maps/RivalBase/scripts.pory"
	release
	end

Starter_EventScript_Mats_2:
# 102 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Mats_Text_0
# 103 "data/maps/RivalBase/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 104 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Mats_Text_1, MSGBOX_YESNO
# 105 "data/maps/RivalBase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Starter_EventScript_Mats_5
# 127 "data/maps/RivalBase/scripts.pory"
	hidemonpic
# 128 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Mats_Text_3
	goto Starter_EventScript_Mats_1

Starter_EventScript_Mats_5:
# 106 "data/maps/RivalBase/scripts.pory"
	givemon SPECIES_CHARMANDER, 5, ITEM_SITRUS_BERRY
# 107 "data/maps/RivalBase/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Starter_EventScript_Mats_8
# 114 "data/maps/RivalBase/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Starter_EventScript_Mats_9
# 122 "data/maps/RivalBase/scripts.pory"
	hidemonpic
# 123 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Sten_Text_3
	goto Starter_EventScript_Mats_1

Starter_EventScript_Mats_8:
# 108 "data/maps/RivalBase/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 109 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Mats_Text_2
# 110 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_STARTER_OBTAINED
# 111 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 112 "data/maps/RivalBase/scripts.pory"
	call NicknamePartyMon
	goto Starter_EventScript_Mats_1

Starter_EventScript_Mats_9:
# 115 "data/maps/RivalBase/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 116 "data/maps/RivalBase/scripts.pory"
	msgbox Starter_EventScript_Mats_Text_2
# 117 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_STARTER_OBTAINED
# 118 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 119 "data/maps/RivalBase/scripts.pory"
	call NicknameBoxMon
	goto Starter_EventScript_Mats_1


NicknamePartyMon::
# 142 "data/maps/RivalBase/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 143 "data/maps/RivalBase/scripts.pory"
	hidemonpic
# 144 "data/maps/RivalBase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 145 "data/maps/RivalBase/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 146 "data/maps/RivalBase/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 154 "data/maps/RivalBase/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 155 "data/maps/RivalBase/scripts.pory"
	hidemonpic
# 156 "data/maps/RivalBase/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 159 "data/maps/RivalBase/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 157 "data/maps/RivalBase/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


MegaStones_Bag_One_Items::
# 165 "data/maps/RivalBase/scripts.pory"
	lock
# 166 "data/maps/RivalBase/scripts.pory"
	msgbox MegaStones_Bag_One_Items_Text_0
# 167 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_PIDGEOTITE, 1
# 168 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_SCIZORITE, 1
# 169 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_PINSIRITE, 1
# 170 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_HERACRONITE, 1
# 171 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_SCIZORITE, 1
# 172 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_BEEDRILLITE, 1
# 173 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_ALTARIANITE, 1
# 174 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_ITEMBAG_MEGASTONES_ONE
# 175 "data/maps/RivalBase/scripts.pory"
	waitmessage
# 176 "data/maps/RivalBase/scripts.pory"
	release
	return


MegaStones_Bag_Two_Items::
# 180 "data/maps/RivalBase/scripts.pory"
	lock
# 181 "data/maps/RivalBase/scripts.pory"
	msgbox MegaStones_Bag_Two_Items_Text_0
# 182 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_GENGARITE
# 183 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_BANETTITE
# 184 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_SABLENITE
# 185 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_ABSOLITE
# 186 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_GARDEVOIRITE
# 187 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_GALLADITE
# 188 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_ALAKAZITE
# 189 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_ITEMBAG_MEGASTONES_TWO
# 190 "data/maps/RivalBase/scripts.pory"
	waitmessage
# 191 "data/maps/RivalBase/scripts.pory"
	release
	return


MegaStones_Bag_Three_items::
# 195 "data/maps/RivalBase/scripts.pory"
	lock
# 196 "data/maps/RivalBase/scripts.pory"
	msgbox MegaStones_Bag_Three_items_Text_0
# 197 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_CAMERUPTITE
# 198 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_HOUNDOOMINITE
# 199 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_ITEMBAG_MEGASTONES_THREE
# 200 "data/maps/RivalBase/scripts.pory"
	waitmessage
# 201 "data/maps/RivalBase/scripts.pory"
	release
	return


Megastones_Bag_Four_Items::
# 205 "data/maps/RivalBase/scripts.pory"
	lock
# 206 "data/maps/RivalBase/scripts.pory"
	msgbox Megastones_Bag_Four_Items_Text_0
# 207 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_AMPHAROSITE
# 208 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_MAWILITE
# 209 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_MEDICHAMITE
# 210 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_PIDGEOTITE
# 211 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_STEELIXITE
# 212 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_SLOWBRONITE
# 213 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_AGGRONITE
# 214 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_LOPUNNITE
# 215 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_MANECTITE
# 216 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_SHARPEDONITE
# 217 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_ITEMBAG_MEGASTONES_FOUR
# 218 "data/maps/RivalBase/scripts.pory"
	waitmessage
# 219 "data/maps/RivalBase/scripts.pory"
	release
	return


Megastones_Bag_Five_Items::
# 223 "data/maps/RivalBase/scripts.pory"
	lock
# 224 "data/maps/RivalBase/scripts.pory"
	msgbox Megastones_Bag_Five_Items_Text_0
# 225 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_GLALITITE
# 226 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_LUCARIONITE
# 227 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_METAGROSSITE
# 228 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_TYRANITARITE
# 229 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_GYARADOSITE
# 230 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_SALAMENCITE
# 231 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_KANGASKHANITE
# 232 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_GARCHOMPITE
# 233 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_ITEMBAG_FIVE
# 234 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_ABOMASITE
# 235 "data/maps/RivalBase/scripts.pory"
	waitmessage
# 236 "data/maps/RivalBase/scripts.pory"
	release
	return


Find_Applin_Items::
# 240 "data/maps/RivalBase/scripts.pory"
	lock
# 241 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_TART_APPLE
# 242 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_SWEET_APPLE
# 243 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_SYRUPY_APPLE
# 244 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_ITEM_APPLIN_SET
# 245 "data/maps/RivalBase/scripts.pory"
	release
	return


Find_Ability_Capsule::
# 249 "data/maps/RivalBase/scripts.pory"
	lock
# 250 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_ABILITY_CAPSULE
# 251 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_ITEM_ABILITY_CAPSULE
# 252 "data/maps/RivalBase/scripts.pory"
	release
	return


Find_CharcadetEvoStuff::
# 256 "data/maps/RivalBase/scripts.pory"
	lock
# 257 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_AUSPICIOUS_ARMOR
# 258 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_MALICIOUS_ARMOR
# 259 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_ITEM_ARMAROUGE_SET
# 260 "data/maps/RivalBase/scripts.pory"
	release
	return


Find_SinisteaSet::
# 264 "data/maps/RivalBase/scripts.pory"
	lock
# 265 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_CRACKED_POT
# 266 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_CHIPPED_POT
# 267 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_ITEM_SINISTEA_SET
# 268 "data/maps/RivalBase/scripts.pory"
	release
	return


Find_TeacupSet::
# 272 "data/maps/RivalBase/scripts.pory"
	lock
# 273 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_UNREMARKABLE_TEACUP
# 274 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_MASTERPIECE_TEACUP
# 275 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_ITEM_TEACUP_CRACKEDPOT_CHIPPEDPOT_SET
# 276 "data/maps/RivalBase/scripts.pory"
	release
	return


Find_BlackSludge::
# 280 "data/maps/RivalBase/scripts.pory"
	lock
# 281 "data/maps/RivalBase/scripts.pory"
	finditem ITEM_BLACK_SLUDGE
# 282 "data/maps/RivalBase/scripts.pory"
	setflag FLAG_ITEM_BLACK_SLUDGE
# 283 "data/maps/RivalBase/scripts.pory"
	release
	return


Starter_EventScript_Sten_Text_0:
# 18 "data/maps/RivalBase/scripts.pory"
	.string "Yo, I'm Sten. Looks like you are going on\n"
	.string "an adventure? I got something to get\l"
	.string "you started with.$"

Starter_EventScript_Sten_Text_1:
# 20 "data/maps/RivalBase/scripts.pory"
	.string "Do you want to choose Machop?$"

Starter_EventScript_Sten_Text_2:
# 25 "data/maps/RivalBase/scripts.pory"
	.string "Obtained Machop!$"

Starter_EventScript_Sten_Text_3:
# 39 "data/maps/RivalBase/scripts.pory"
	.string "No More Room.$"

Starter_EventScript_Sten_Text_4:
# 44 "data/maps/RivalBase/scripts.pory"
	.string "All good.$"

Starter_EventScript_Sten_Text_5:
# 48 "data/maps/RivalBase/scripts.pory"
	.string "Good luck, champ!$"

Starter_EventScript_Jens_Text_0:
# 60 "data/maps/RivalBase/scripts.pory"
	.string "Hey, my name is Jens. I'm the strongest\n"
	.string "and always chase legendaries. The best\l"
	.string "defense is offense! Want a headstart?$"

Starter_EventScript_Jens_Text_1:
# 62 "data/maps/RivalBase/scripts.pory"
	.string "Do you want to choose Kyogre?$"

Starter_EventScript_Jens_Text_2:
# 67 "data/maps/RivalBase/scripts.pory"
	.string "Obtained Kyogre!$"

Starter_EventScript_Jens_Text_3:
# 86 "data/maps/RivalBase/scripts.pory"
	.string "Don't cry when you lose.$"

Starter_EventScript_Jens_Text_4:
# 90 "data/maps/RivalBase/scripts.pory"
	.string "Remember, hit 'em hard!$"

Starter_EventScript_Mats_Text_0:
# 102 "data/maps/RivalBase/scripts.pory"
	.string "Hello, I'm Mats. Rare pokes are what\n"
	.string "keeps me excited. I chase them all\l"
	.string "around. This one used to be my\l"
	.string "favourite, take it if you want.$"

Starter_EventScript_Mats_Text_1:
# 104 "data/maps/RivalBase/scripts.pory"
	.string "Do you want to choose Charmander?$"

Starter_EventScript_Mats_Text_2:
# 109 "data/maps/RivalBase/scripts.pory"
	.string "Obtained Charmander!$"

Starter_EventScript_Mats_Text_3:
# 128 "data/maps/RivalBase/scripts.pory"
	.string "No problem.$"

Starter_EventScript_Mats_Text_4:
# 132 "data/maps/RivalBase/scripts.pory"
	.string "Keep an eye out for rare coloured\n"
	.string "Pokemon!$"

NicknamePartyMon_Text_0:
# 142 "data/maps/RivalBase/scripts.pory"
	.string "Give it a nickname?$"

MegaStones_Bag_One_Items_Text_0:
# 166 "data/maps/RivalBase/scripts.pory"
	.string "Great! Someone must have left these to\n"
	.string "pick up.$"

MegaStones_Bag_Two_Items_Text_0:
# 181 "data/maps/RivalBase/scripts.pory"
	.string "Wow, some spooky mega stones!$"

MegaStones_Bag_Three_items_Text_0:
# 196 "data/maps/RivalBase/scripts.pory"
	.string "This bag is on fire!$"

Megastones_Bag_Four_Items_Text_0:
# 206 "data/maps/RivalBase/scripts.pory"
	.string "A collection of rare stones!$"

Megastones_Bag_Five_Items_Text_0:
# 224 "data/maps/RivalBase/scripts.pory"
	.string "Megastone jackpot!$"

NewProfessor_NotChosen::
# 286 "data/maps/RivalBase/scripts.pory"
	.string "You did not choose the Pokemon$"
