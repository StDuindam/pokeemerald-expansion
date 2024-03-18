# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 3 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 4 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 6 "data/maps/LittlerootTown/scripts.pory"

# 7 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 8 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 9 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 10 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 11 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 12 "data/maps/LittlerootTown/scripts.pory"

# 13 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 14 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 18 "data/maps/LittlerootTown/scripts.pory"

# 19 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 23 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 24 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 27 "data/maps/LittlerootTown/scripts.pory"

# 28 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 29 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 30 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 31 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 35 "data/maps/LittlerootTown/scripts.pory"

# 36 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 37 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 40 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 41 "data/maps/LittlerootTown/scripts.pory"

# 42 "data/maps/LittlerootTown/scripts.pory"

# 43 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 44 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 45 "data/maps/LittlerootTown/scripts.pory"
	call Setup_RivalBattle_StenFirst
# 46 "data/maps/LittlerootTown/scripts.pory"
	call Birch_Post_league_IslandEventSetup
# 47 "data/maps/LittlerootTown/scripts.pory"
	call SetUpDusclopsLittleRoot
# 48 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 51 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_MAY, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 54 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 55 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 56 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 57 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 58 "data/maps/LittlerootTown/scripts.pory"
	end
# 59 "data/maps/LittlerootTown/scripts.pory"

# 60 "data/maps/LittlerootTown/scripts.pory"

# 61 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 62 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 63 "data/maps/LittlerootTown/scripts.pory"
	return
# 64 "data/maps/LittlerootTown/scripts.pory"

# 65 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 66 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 67 "data/maps/LittlerootTown/scripts.pory"
	return
# 68 "data/maps/LittlerootTown/scripts.pory"

# 69 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 70 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 71 "data/maps/LittlerootTown/scripts.pory"
	return
# 72 "data/maps/LittlerootTown/scripts.pory"

# 73 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 74 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 75 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 76 "data/maps/LittlerootTown/scripts.pory"
	return
# 77 "data/maps/LittlerootTown/scripts.pory"

# 78 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 79 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 80 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 81 "data/maps/LittlerootTown/scripts.pory"
	return
# 82 "data/maps/LittlerootTown/scripts.pory"

# 83 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 84 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 85 "data/maps/LittlerootTown/scripts.pory"
	return
# 86 "data/maps/LittlerootTown/scripts.pory"

# 87 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 88 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 89 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 90 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 91 "data/maps/LittlerootTown/scripts.pory"
	return
# 92 "data/maps/LittlerootTown/scripts.pory"

# 93 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 94 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 95 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 96 "data/maps/LittlerootTown/scripts.pory"
	return
# 97 "data/maps/LittlerootTown/scripts.pory"

# 98 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 99 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 100 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 101 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 102 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 103 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 104 "data/maps/LittlerootTown/scripts.pory"
	return
# 105 "data/maps/LittlerootTown/scripts.pory"

# 106 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 107 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 108 "data/maps/LittlerootTown/scripts.pory"
	return
# 109 "data/maps/LittlerootTown/scripts.pory"

# 110 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 111 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 112 "data/maps/LittlerootTown/scripts.pory"
	return
# 113 "data/maps/LittlerootTown/scripts.pory"

# 114 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 115 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 116 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 117 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 118 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 119 "data/maps/LittlerootTown/scripts.pory"

# 120 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 121 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 122 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 123 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 124 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 125 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 126 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 127 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 128 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 129 "data/maps/LittlerootTown/scripts.pory"
	end
# 130 "data/maps/LittlerootTown/scripts.pory"

# 131 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 132 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 133 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 134 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 135 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 136 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 137 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 138 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 139 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 140 "data/maps/LittlerootTown/scripts.pory"
	end
# 141 "data/maps/LittlerootTown/scripts.pory"

# 142 "data/maps/LittlerootTown/scripts.pory"

# 143 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_WIPE_PARTY::
# 144 "data/maps/LittlerootTown/scripts.pory"
	special SavePlayerParty
# 145 "data/maps/LittlerootTown/scripts.pory"
	special CallDusclopsFunction
# 146 "data/maps/LittlerootTown/scripts.pory"
	end
# 147 "data/maps/LittlerootTown/scripts.pory"

# 148 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_RESTORE_PARTY::
# 149 "data/maps/LittlerootTown/scripts.pory"
	special LoadPlayerParty
# 150 "data/maps/LittlerootTown/scripts.pory"
	end
# 151 "data/maps/LittlerootTown/scripts.pory"

# 152 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 153 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 154 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 155 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 156 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 157 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 158 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 159 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 160 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 161 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 162 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 163 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 164 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 165 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 166 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 167 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 168 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 169 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 170 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 171 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 172 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 173 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 174 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 175 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 176 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 177 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 178 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 179 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 180 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 181 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 182 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 183 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 184 "data/maps/LittlerootTown/scripts.pory"
	return
# 185 "data/maps/LittlerootTown/scripts.pory"

# 186 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 187 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 188 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 189 "data/maps/LittlerootTown/scripts.pory"

# 190 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 191 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 192 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 193 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 194 "data/maps/LittlerootTown/scripts.pory"

# 195 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 196 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 197 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 198 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 199 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 200 "data/maps/LittlerootTown/scripts.pory"

# 201 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 202 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 203 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 204 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 205 "data/maps/LittlerootTown/scripts.pory"

# 206 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 207 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 208 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 209 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 210 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 211 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 212 "data/maps/LittlerootTown/scripts.pory"

# 213 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 214 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 215 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 216 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 217 "data/maps/LittlerootTown/scripts.pory"

# 218 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 219 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 220 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 221 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 222 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 223 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 224 "data/maps/LittlerootTown/scripts.pory"

# 225 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 226 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 227 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 228 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 229 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 230 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 231 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 232 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 233 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 234 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 235 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 236 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 237 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 238 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 239 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 240 "data/maps/LittlerootTown/scripts.pory"
	end
# 241 "data/maps/LittlerootTown/scripts.pory"

# 242 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 243 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 244 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 245 "data/maps/LittlerootTown/scripts.pory"

# 246 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 247 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 248 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 249 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 250 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 251 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 252 "data/maps/LittlerootTown/scripts.pory"
	end
# 253 "data/maps/LittlerootTown/scripts.pory"

# 254 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 255 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 256 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 257 "data/maps/LittlerootTown/scripts.pory"
	end
# 258 "data/maps/LittlerootTown/scripts.pory"

# 259 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 260 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 261 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 262 "data/maps/LittlerootTown/scripts.pory"
	end
# 263 "data/maps/LittlerootTown/scripts.pory"

# 264 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 265 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 266 "data/maps/LittlerootTown/scripts.pory"
	end
# 267 "data/maps/LittlerootTown/scripts.pory"

# 268 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 269 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 270 "data/maps/LittlerootTown/scripts.pory"
	end
# 271 "data/maps/LittlerootTown/scripts.pory"

# 272 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 273 "data/maps/LittlerootTown/scripts.pory"
	lock
# 274 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 275 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 276 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 277 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 278 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 279 "data/maps/LittlerootTown/scripts.pory"
	release
# 280 "data/maps/LittlerootTown/scripts.pory"
	end
# 281 "data/maps/LittlerootTown/scripts.pory"

# 282 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 283 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 284 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 285 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 286 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 287 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 288 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 289 "data/maps/LittlerootTown/scripts.pory"
	release
# 290 "data/maps/LittlerootTown/scripts.pory"
	end
# 291 "data/maps/LittlerootTown/scripts.pory"

# 292 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 293 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 294 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 295 "data/maps/LittlerootTown/scripts.pory"
	release
# 296 "data/maps/LittlerootTown/scripts.pory"
	end
# 297 "data/maps/LittlerootTown/scripts.pory"

# 298 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 299 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 300 "data/maps/LittlerootTown/scripts.pory"
	release
# 301 "data/maps/LittlerootTown/scripts.pory"
	end
# 302 "data/maps/LittlerootTown/scripts.pory"

# 303 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 304 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 305 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 306 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 307 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 308 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 309 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 310 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 311 "data/maps/LittlerootTown/scripts.pory"
	end
# 312 "data/maps/LittlerootTown/scripts.pory"

# 313 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 314 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 315 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 316 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 317 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 318 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 319 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 320 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 321 "data/maps/LittlerootTown/scripts.pory"
	return
# 322 "data/maps/LittlerootTown/scripts.pory"

# 323 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 324 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 325 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 326 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 327 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 328 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 329 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 330 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 331 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 332 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 333 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 335 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 336 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 337 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 338 "data/maps/LittlerootTown/scripts.pory"

# 339 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 340 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 341 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 342 "data/maps/LittlerootTown/scripts.pory"

# 343 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 344 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 345 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 346 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 347 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 348 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 349 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 350 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 351 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 352 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 353 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 354 "data/maps/LittlerootTown/scripts.pory"

# 355 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 356 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 357 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 358 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 359 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 360 "data/maps/LittlerootTown/scripts.pory"

# 361 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 362 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 363 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 364 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 365 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 366 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 367 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 368 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 369 "data/maps/LittlerootTown/scripts.pory"
	end
# 370 "data/maps/LittlerootTown/scripts.pory"

# 371 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 372 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 373 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 374 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 375 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 376 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 379 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 380 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 381 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 382 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 383 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 384 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 385 "data/maps/LittlerootTown/scripts.pory"

# 386 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 387 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 388 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 389 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 390 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 391 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 392 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 393 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 394 "data/maps/LittlerootTown/scripts.pory"

# 395 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 396 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 397 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 398 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 399 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 400 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 401 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 402 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 403 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 404 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 405 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 406 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 407 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 408 "data/maps/LittlerootTown/scripts.pory"
	end
# 409 "data/maps/LittlerootTown/scripts.pory"

# 410 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 411 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 412 "data/maps/LittlerootTown/scripts.pory"
	end
# 413 "data/maps/LittlerootTown/scripts.pory"

# 414 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 415 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 416 "data/maps/LittlerootTown/scripts.pory"
	end
# 417 "data/maps/LittlerootTown/scripts.pory"

# 418 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 419 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 420 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 421 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 422 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 423 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 424 "data/maps/LittlerootTown/scripts.pory"
	end
# 425 "data/maps/LittlerootTown/scripts.pory"

# 426 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 427 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 428 "data/maps/LittlerootTown/scripts.pory"
	return
# 429 "data/maps/LittlerootTown/scripts.pory"

# 430 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 431 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 432 "data/maps/LittlerootTown/scripts.pory"
	return
# 433 "data/maps/LittlerootTown/scripts.pory"

# 434 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 435 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 436 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 437 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 438 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 439 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 440 "data/maps/LittlerootTown/scripts.pory"
	end
# 441 "data/maps/LittlerootTown/scripts.pory"

# 442 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 443 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 444 "data/maps/LittlerootTown/scripts.pory"
	return
# 445 "data/maps/LittlerootTown/scripts.pory"

# 446 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 447 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 448 "data/maps/LittlerootTown/scripts.pory"
	return
# 449 "data/maps/LittlerootTown/scripts.pory"

# 450 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 451 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 452 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 453 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 454 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 455 "data/maps/LittlerootTown/scripts.pory"
	end
# 456 "data/maps/LittlerootTown/scripts.pory"

# 457 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 458 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 459 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 460 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 461 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 462 "data/maps/LittlerootTown/scripts.pory"
	end
# 463 "data/maps/LittlerootTown/scripts.pory"

# 464 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 465 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 466 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 467 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 468 "data/maps/LittlerootTown/scripts.pory"
	end
# 469 "data/maps/LittlerootTown/scripts.pory"

# 470 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 471 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 472 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 473 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 474 "data/maps/LittlerootTown/scripts.pory"
	end
# 475 "data/maps/LittlerootTown/scripts.pory"

# 476 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 477 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 478 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 479 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 480 "data/maps/LittlerootTown/scripts.pory"
	end
# 481 "data/maps/LittlerootTown/scripts.pory"

# 482 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 483 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 484 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 485 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 486 "data/maps/LittlerootTown/scripts.pory"
	end
# 487 "data/maps/LittlerootTown/scripts.pory"

# 488 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 489 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 490 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 491 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 492 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 493 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 494 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 495 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 496 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 497 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 498 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 499 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 500 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 501 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 502 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 503 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 504 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 505 "data/maps/LittlerootTown/scripts.pory"
	end
# 506 "data/maps/LittlerootTown/scripts.pory"

# 507 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 508 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 509 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 510 "data/maps/LittlerootTown/scripts.pory"
	return
# 511 "data/maps/LittlerootTown/scripts.pory"

# 512 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 513 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 514 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 515 "data/maps/LittlerootTown/scripts.pory"
	return
# 516 "data/maps/LittlerootTown/scripts.pory"

# 517 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 518 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 519 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 520 "data/maps/LittlerootTown/scripts.pory"
	return
# 521 "data/maps/LittlerootTown/scripts.pory"

# 522 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 523 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 524 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 525 "data/maps/LittlerootTown/scripts.pory"
	return
# 526 "data/maps/LittlerootTown/scripts.pory"

# 527 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 528 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 529 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 530 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 531 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 532 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 533 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 534 "data/maps/LittlerootTown/scripts.pory"
	return
# 535 "data/maps/LittlerootTown/scripts.pory"

# 536 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 537 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 538 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 539 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 540 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 541 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 542 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 543 "data/maps/LittlerootTown/scripts.pory"
	return
# 544 "data/maps/LittlerootTown/scripts.pory"

# 545 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 546 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 547 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 548 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 549 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 550 "data/maps/LittlerootTown/scripts.pory"
	return
# 551 "data/maps/LittlerootTown/scripts.pory"

# 552 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 553 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 554 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 555 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 556 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 557 "data/maps/LittlerootTown/scripts.pory"
	return
# 558 "data/maps/LittlerootTown/scripts.pory"

# 559 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 560 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 561 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 562 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 563 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 564 "data/maps/LittlerootTown/scripts.pory"
	return
# 565 "data/maps/LittlerootTown/scripts.pory"

# 566 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 567 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 568 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 569 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 570 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 571 "data/maps/LittlerootTown/scripts.pory"
	return
# 572 "data/maps/LittlerootTown/scripts.pory"

# 573 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 574 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 575 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 576 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 577 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 578 "data/maps/LittlerootTown/scripts.pory"
	return
# 579 "data/maps/LittlerootTown/scripts.pory"

# 580 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 581 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 582 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 583 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 584 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 585 "data/maps/LittlerootTown/scripts.pory"
	return
# 586 "data/maps/LittlerootTown/scripts.pory"

# 587 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 588 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 589 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 590 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 591 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 592 "data/maps/LittlerootTown/scripts.pory"
	return
# 593 "data/maps/LittlerootTown/scripts.pory"

# 594 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 595 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 596 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 597 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 598 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 599 "data/maps/LittlerootTown/scripts.pory"
	return
# 600 "data/maps/LittlerootTown/scripts.pory"

# 601 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 602 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 603 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 604 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 605 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 606 "data/maps/LittlerootTown/scripts.pory"
	return
# 607 "data/maps/LittlerootTown/scripts.pory"

# 608 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 609 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 610 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 611 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 612 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 613 "data/maps/LittlerootTown/scripts.pory"
	return
# 614 "data/maps/LittlerootTown/scripts.pory"

# 615 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 616 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 617 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 618 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 619 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 620 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 621 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 622 "data/maps/LittlerootTown/scripts.pory"
	return
# 623 "data/maps/LittlerootTown/scripts.pory"

# 624 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 625 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 626 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 627 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 628 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 629 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 630 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 631 "data/maps/LittlerootTown/scripts.pory"
	return
# 632 "data/maps/LittlerootTown/scripts.pory"

# 633 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 634 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 635 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 636 "data/maps/LittlerootTown/scripts.pory"
	return
# 637 "data/maps/LittlerootTown/scripts.pory"

# 638 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 639 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 640 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 641 "data/maps/LittlerootTown/scripts.pory"
	return
# 642 "data/maps/LittlerootTown/scripts.pory"

# 643 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 644 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 645 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 646 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 647 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 648 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 649 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 650 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 651 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 652 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 653 "data/maps/LittlerootTown/scripts.pory"
	return
# 654 "data/maps/LittlerootTown/scripts.pory"

# 655 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 656 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 657 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 658 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 659 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 660 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 661 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 662 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 663 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 664 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 665 "data/maps/LittlerootTown/scripts.pory"
	return
# 666 "data/maps/LittlerootTown/scripts.pory"

# 667 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 668 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 669 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 670 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 671 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 672 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 673 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 674 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 675 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 676 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 677 "data/maps/LittlerootTown/scripts.pory"
	return
# 678 "data/maps/LittlerootTown/scripts.pory"

# 679 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 680 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 681 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 682 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 683 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 684 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 685 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 686 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 687 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 688 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 689 "data/maps/LittlerootTown/scripts.pory"
	return
# 690 "data/maps/LittlerootTown/scripts.pory"

# 691 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 692 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 693 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 694 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 695 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 696 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 697 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 698 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 699 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 700 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 701 "data/maps/LittlerootTown/scripts.pory"
	return
# 702 "data/maps/LittlerootTown/scripts.pory"

# 703 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 704 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 705 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 706 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 707 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 708 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 709 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 710 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 711 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 712 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 713 "data/maps/LittlerootTown/scripts.pory"
	return
# 714 "data/maps/LittlerootTown/scripts.pory"

# 715 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 716 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 717 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 718 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 719 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 720 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 721 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 722 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 723 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 724 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 725 "data/maps/LittlerootTown/scripts.pory"
	return
# 726 "data/maps/LittlerootTown/scripts.pory"

# 727 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 728 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 729 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 730 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 731 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 732 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 733 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 734 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 735 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 736 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 737 "data/maps/LittlerootTown/scripts.pory"
	return
# 738 "data/maps/LittlerootTown/scripts.pory"

# 739 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 740 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 741 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 742 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 743 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 744 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 745 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 746 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 747 "data/maps/LittlerootTown/scripts.pory"

# 748 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 749 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 751 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 752 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 753 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 754 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 755 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 756 "data/maps/LittlerootTown/scripts.pory"

# 757 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 758 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 759 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 760 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 761 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 762 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 763 "data/maps/LittlerootTown/scripts.pory"

# 764 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 765 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 766 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 767 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 768 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 769 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 770 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 771 "data/maps/LittlerootTown/scripts.pory"

# 772 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 773 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 774 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 775 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 776 "data/maps/LittlerootTown/scripts.pory"

# 777 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 778 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 779 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 780 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 781 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 782 "data/maps/LittlerootTown/scripts.pory"

# 783 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 784 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 785 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 786 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 787 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 788 "data/maps/LittlerootTown/scripts.pory"

# 789 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 790 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 791 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 792 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 793 "data/maps/LittlerootTown/scripts.pory"

# 794 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 795 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 796 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 797 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 798 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 799 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 800 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 801 "data/maps/LittlerootTown/scripts.pory"

# 802 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 803 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 804 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 805 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 806 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 807 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 808 "data/maps/LittlerootTown/scripts.pory"

# 809 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 810 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 811 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 812 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 813 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 814 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 815 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 816 "data/maps/LittlerootTown/scripts.pory"

# 817 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 818 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 819 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 820 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 821 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 822 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 823 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 824 "data/maps/LittlerootTown/scripts.pory"

# 825 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 826 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 827 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 828 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 829 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 830 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 831 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 832 "data/maps/LittlerootTown/scripts.pory"

# 833 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 834 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 835 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 836 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 837 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 838 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 839 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 840 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 841 "data/maps/LittlerootTown/scripts.pory"

# 842 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 843 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 844 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 845 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 846 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 847 "data/maps/LittlerootTown/scripts.pory"

# 848 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 849 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 850 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 851 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 852 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 853 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 854 "data/maps/LittlerootTown/scripts.pory"

# 855 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 856 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 857 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 858 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 859 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 860 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 861 "data/maps/LittlerootTown/scripts.pory"

# 862 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 863 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 864 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 865 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 866 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 867 "data/maps/LittlerootTown/scripts.pory"

# 868 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 869 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 870 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 871 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 872 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 873 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 874 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 875 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 876 "data/maps/LittlerootTown/scripts.pory"

# 877 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 878 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 879 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 880 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 881 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 882 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 883 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 884 "data/maps/LittlerootTown/scripts.pory"

# 885 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 886 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 887 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 888 "data/maps/LittlerootTown/scripts.pory"

# 889 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 890 "data/maps/LittlerootTown/scripts.pory"
	lock
# 891 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 892 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 893 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 894 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 895 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 896 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 897 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 898 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 899 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 900 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 901 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 902 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 903 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 904 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 905 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 906 "data/maps/LittlerootTown/scripts.pory"
	end
# 907 "data/maps/LittlerootTown/scripts.pory"

# 908 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 909 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 910 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 911 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 912 "data/maps/LittlerootTown/scripts.pory"
	release
# 913 "data/maps/LittlerootTown/scripts.pory"
	end
# 914 "data/maps/LittlerootTown/scripts.pory"

# 915 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 916 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 917 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 918 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 919 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 920 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 921 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 922 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 923 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 924 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 925 "data/maps/LittlerootTown/scripts.pory"
	return
# 926 "data/maps/LittlerootTown/scripts.pory"

# 927 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 928 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 929 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 930 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 931 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 932 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 933 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 934 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 935 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 936 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 937 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 938 "data/maps/LittlerootTown/scripts.pory"

# 939 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 940 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 941 "data/maps/LittlerootTown/scripts.pory"

# 942 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 943 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 944 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 945 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 946 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 947 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 948 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 949 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 950 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 951 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 952 "data/maps/LittlerootTown/scripts.pory"

# 953 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 954 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 955 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 956 "data/maps/LittlerootTown/scripts.pory"

# 957 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 958 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 959 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 960 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 961 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 962 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 963 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 964 "data/maps/LittlerootTown/scripts.pory"

# 965 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 966 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 967 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 968 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 969 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 970 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 971 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 972 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 973 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 974 "data/maps/LittlerootTown/scripts.pory"

# 975 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 976 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 977 "data/maps/LittlerootTown/scripts.pory"
	.string "and POKéMON.\p"
# 978 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 979 "data/maps/LittlerootTown/scripts.pory"

# 980 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 981 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 982 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 983 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 984 "data/maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 985 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 986 "data/maps/LittlerootTown/scripts.pory"

# 987 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 988 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 989 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 990 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 991 "data/maps/LittlerootTown/scripts.pory"

# 992 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 993 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 994 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 995 "data/maps/LittlerootTown/scripts.pory"

# 996 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 997 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 998 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 999 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 1000 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 1001 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 1002 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 1003 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 1004 "data/maps/LittlerootTown/scripts.pory"

# 1005 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1006 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 1007 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 1008 "data/maps/LittlerootTown/scripts.pory"

# 1009 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1010 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1011 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1012 "data/maps/LittlerootTown/scripts.pory"

# 1013 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1014 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1015 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1016 "data/maps/LittlerootTown/scripts.pory"

# 1017 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1018 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 1019 "data/maps/LittlerootTown/scripts.pory"

# 1020 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1021 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1022 "data/maps/LittlerootTown/scripts.pory"

# 1023 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1024 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 1025 "data/maps/LittlerootTown/scripts.pory"

# 1026 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1027 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 1028 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1029 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1030 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1031 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1032 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1033 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1034 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1035 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"

LittleRootTown_EventScript_NewSign::
# 1039 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1040 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittleRootTown_EventScript_NewSign_Text_0
# 1041 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


Setup_RivalBattle_StenFirst::
# 1059 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_STARTER_OBTAINED, Setup_RivalBattle_StenFirst_1
# 1067 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_STEN_BATTLE_ONE
# 1068 "data/maps/LittlerootTown/scripts.pory"
	setvar RIVAL_STATE_STEN, 0
	return

Setup_RivalBattle_StenFirst_1:
# 1061 "data/maps/LittlerootTown/scripts.pory"
	compare RIVAL_STATE_STEN, 0
	goto_if_eq Setup_RivalBattle_StenFirst_4
# 1064 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_STEN_BATTLE_ONE
	return

Setup_RivalBattle_StenFirst_4:
# 1062 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_STEN_BATTLE_ONE
	return


RivalBattle_EventScript_StenFirst::
# 1074 "data/maps/LittlerootTown/scripts.pory"
	trainerbattle_single TRAINER_STEN_FIRST_BATTLE, Sten_Intro, Sten_Outro, RivalBattle_EventScript_StenBattleOver
# 1076 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
	end


RivalBattle_EventScript_StenBattleOver::
# 1081 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 1082 "data/maps/LittlerootTown/scripts.pory"
	applymovement 9, StenLeave
# 1083 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1084 "data/maps/LittlerootTown/scripts.pory"
	removeobject 9
# 1085 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_STEN_BATTLE_ONE
# 1086 "data/maps/LittlerootTown/scripts.pory"
	setvar RIVAL_STATE_STEN, 1
# 1087 "data/maps/LittlerootTown/scripts.pory"
	release
	return


# 1092 "data/maps/LittlerootTown/scripts.pory"
StenLeave:
# 1093 "data/maps/LittlerootTown/scripts.pory"
	face_left
# 1094 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 1095 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1095 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1095 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1095 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1095 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1095 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1095 "data/maps/LittlerootTown/scripts.pory"
	walk_left
	step_end

EventScript_GetAStarterFirst::
# 1113 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1114 "data/maps/LittlerootTown/scripts.pory"
	msgbox EventScript_GetAStarterFirst_Text_0
# 1115 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BumpPlayerLeft
# 1116 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1117 "data/maps/LittlerootTown/scripts.pory"
	release
	return


# 1120 "data/maps/LittlerootTown/scripts.pory"
BumpPlayerLeft:
# 1121 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 1121 "data/maps/LittlerootTown/scripts.pory"
	walk_left
	step_end

SetUpDusclopsLittleRoot::
# 1125 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set DUSCLOPS_LITTLEROOT, SetUpDusclopsLittleRoot_1
# 1132 "data/maps/LittlerootTown/scripts.pory"
	compare DUSCLOPS_STATE, 0
	goto_if_eq SetUpDusclopsLittleRoot_4
# 1135 "data/maps/LittlerootTown/scripts.pory"
	setflag DUSCLOPS_LITTLEROOT
	return

SetUpDusclopsLittleRoot_1:
# 1128 "data/maps/LittlerootTown/scripts.pory"
	setflag DUSCLOPS_LITTLEROOT
	return

SetUpDusclopsLittleRoot_4:
# 1133 "data/maps/LittlerootTown/scripts.pory"
	clearflag DUSCLOPS_LITTLEROOT
	return


LittleRoot_EventScript_Dusclops::
# 1141 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1142 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1143 "data/maps/LittlerootTown/scripts.pory"
	removeobject 10
# 1144 "data/maps/LittlerootTown/scripts.pory"
	setflag DUSCLOPS_LITTLEROOT
# 1145 "data/maps/LittlerootTown/scripts.pory"
	setvar DUSCLOPS_STATE, 1
# 1146 "data/maps/LittlerootTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1147 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittleRoot_EventScript_Dusclops_Text_0
# 1148 "data/maps/LittlerootTown/scripts.pory"
	release
	return


Birch_Post_league_IslandEventSetup::
# 1152 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, Birch_Post_league_IslandEventSetup_1
# 1157 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_BIRCH_ISLAND_EVENT
	return

Birch_Post_league_IslandEventSetup_1:
# 1153 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_ROCKET_ARC_STATE, 0
	goto_if_eq Birch_Post_league_IslandEventSetup_4
	return

Birch_Post_league_IslandEventSetup_4:
# 1154 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_BIRCH_ISLAND_EVENT
	return


Birch_Conversation_Island::
# 1162 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1163 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 1164 "data/maps/LittlerootTown/scripts.pory"
	msgbox BirchChatsAboutHouse
# 1165 "data/maps/LittlerootTown/scripts.pory"
	waitmessage
# 1166 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BumpPlayerUp
# 1167 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1168 "data/maps/LittlerootTown/scripts.pory"
	applymovement 8, BirchLeaveHousePostIslandConversation
# 1169 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 1170 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_ROCKET_ARC_STATE, 1
# 1171 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_BIRCH_ISLAND_EVENT
# 1172 "data/maps/LittlerootTown/scripts.pory"
	removeobject 8
# 1173 "data/maps/LittlerootTown/scripts.pory"
	release
	return


# 1180 "data/maps/LittlerootTown/scripts.pory"
BirchLeaveHousePostIslandConversation:
# 1181 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1181 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1181 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 1182 "data/maps/LittlerootTown/scripts.pory"
	walk_down
	step_end

# 1185 "data/maps/LittlerootTown/scripts.pory"
BumpPlayerUp:
# 1186 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 1187 "data/maps/LittlerootTown/scripts.pory"
	face_down
	step_end

LittleRootTown_EventScript_NewSign_Text_0:
# 1040 "data/maps/LittlerootTown/scripts.pory"
	.string "Rietgans 12$"

EventScript_GetAStarterFirst_Text_0:
# 1114 "data/maps/LittlerootTown/scripts.pory"
	.string "You should get a starter first...$"

LittleRoot_EventScript_Dusclops_Text_0:
# 1147 "data/maps/LittlerootTown/scripts.pory"
	.string "That was strange... was that a Pokemon?$"

Sten_Intro::
# 1098 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's see how you use that \n"
	.string "newly obtained Poke.$"

Sten_Outro::
# 1103 "data/maps/LittlerootTown/scripts.pory"
	.string "You seem ready. Best of luck!$"

Sten_PostBattle::
# 1107 "data/maps/LittlerootTown/scripts.pory"
	.string "I keep seeing Gengar, weird right? \n"
	.string "See you around.$"

BirchChatsAboutHouse::
# 1176 "data/maps/LittlerootTown/scripts.pory"
	.string "Ah, just in time. We have received\n"
	.string "exciting news, you see, a new island has\l"
	.string "been discovered! At current time we\l"
	.string "expect that it is due to the events\l"
	.string "following Kyogre and Groudon's battle.\l"
	.string "What do you say, are you up for an\l"
	.string "adventure? Why don't you join us, you\l"
	.string "are the strongest trainer after all.\l"
	.string "Once you are prepared meet me in\l"
	.string "Slateport city's harbour. See you\l"
	.string "there!$"
