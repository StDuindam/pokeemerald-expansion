FallarborTown_ShadyTrader_MapScripts::
	.byte 0


FallarbortTown_ShadyTrader::
# 6 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	lock
# 7 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	faceplayer
# 8 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	msgbox ShadyTraderIntro
# 9 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	waitmessage
# 10 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	pokemart ShadyTraderItems
# 11 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	msgbox ShadyTraderOutro
# 12 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	waitmessage
# 13 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	release
	end


	.align 2
# 18 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
ShadyTraderItems:
# 19 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 20 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	.2byte ITEM_EVIOLITE
# 21 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 22 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 23 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 24 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 25 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 26 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 27 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 28 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
# 29 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 30 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 31 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 32 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 33 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 34 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	.2byte ITEM_AIR_BALLOON
	.2byte ITEM_NONE

ShadyTraderIntro::
# 37 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	.string "Listen, don't tell anyone about my\n"
	.string "little business, ok?$"

ShadyTraderOutro::
# 41 "data/maps/FallarborTown_ShadyTrader/scripts.pory"
	.string "See you around, remember to keep hush.$"
