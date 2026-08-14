# 1 "data/maps/OldaleTown/scripts.pory"

# 2 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 3 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 4 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 5 "data/maps/OldaleTown/scripts.pory"

# 6 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 7 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 8 "data/maps/OldaleTown/scripts.pory"
	call OldaleTown_EventScriptOnTransition
# 9 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 10 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 11 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 12 "data/maps/OldaleTown/scripts.pory"
	end
# 13 "data/maps/OldaleTown/scripts.pory"

# 14 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 15 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 16 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 17 "data/maps/OldaleTown/scripts.pory"
	return
# 18 "data/maps/OldaleTown/scripts.pory"

# 19 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 20 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_OLDALE_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 21 "data/maps/OldaleTown/scripts.pory"
	return
# 22 "data/maps/OldaleTown/scripts.pory"

# 23 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 24 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 25 "data/maps/OldaleTown/scripts.pory"
	end
# 26 "data/maps/OldaleTown/scripts.pory"

# 27 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 28 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 29 "data/maps/OldaleTown/scripts.pory"
	end
# 30 "data/maps/OldaleTown/scripts.pory"

# 31 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 32 "data/maps/OldaleTown/scripts.pory"
	lock
# 33 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 34 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 35 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 36 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 37 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 38 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 39 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 40 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 41 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 42 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 43 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 44 "data/maps/OldaleTown/scripts.pory"
	end
# 45 "data/maps/OldaleTown/scripts.pory"

# 46 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 47 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 48 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerSouth
# 49 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 50 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 51 "data/maps/OldaleTown/scripts.pory"
	end
# 52 "data/maps/OldaleTown/scripts.pory"

# 53 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 54 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 55 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerNorth
# 56 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 57 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 58 "data/maps/OldaleTown/scripts.pory"
	end
# 59 "data/maps/OldaleTown/scripts.pory"

# 60 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 61 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_PlayerEast
# 62 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 63 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 64 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 65 "data/maps/OldaleTown/scripts.pory"
	end
# 66 "data/maps/OldaleTown/scripts.pory"

# 67 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 68 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 69 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 70 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 71 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 72 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 73 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 74 "data/maps/OldaleTown/scripts.pory"
	release
# 75 "data/maps/OldaleTown/scripts.pory"
	end
# 76 "data/maps/OldaleTown/scripts.pory"

# 77 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 78 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 79 "data/maps/OldaleTown/scripts.pory"
	release
# 80 "data/maps/OldaleTown/scripts.pory"
	end
# 81 "data/maps/OldaleTown/scripts.pory"

# 82 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 83 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 84 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 85 "data/maps/OldaleTown/scripts.pory"
	release
# 86 "data/maps/OldaleTown/scripts.pory"
	end
# 87 "data/maps/OldaleTown/scripts.pory"

# 88 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 89 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 90 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 91 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 92 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 93 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 94 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 95 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 96 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 97 "data/maps/OldaleTown/scripts.pory"
	step_end
# 98 "data/maps/OldaleTown/scripts.pory"

# 99 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 100 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 101 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 102 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 103 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 104 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 105 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 106 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 107 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 108 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 109 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 110 "data/maps/OldaleTown/scripts.pory"
	step_end
# 111 "data/maps/OldaleTown/scripts.pory"

# 112 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 113 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 115 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 116 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 117 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 118 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 119 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 120 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 121 "data/maps/OldaleTown/scripts.pory"
	step_end
# 122 "data/maps/OldaleTown/scripts.pory"

# 123 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 124 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 125 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 126 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 127 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 128 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 129 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 130 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 131 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 132 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 133 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 134 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 135 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 136 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 137 "data/maps/OldaleTown/scripts.pory"
	step_end
# 138 "data/maps/OldaleTown/scripts.pory"

# 139 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 140 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 141 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 142 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 143 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 144 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 145 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 146 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 147 "data/maps/OldaleTown/scripts.pory"
	step_end
# 148 "data/maps/OldaleTown/scripts.pory"

# 149 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 150 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 151 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 152 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 153 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 154 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 155 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 156 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 157 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 158 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 159 "data/maps/OldaleTown/scripts.pory"
	step_end
# 160 "data/maps/OldaleTown/scripts.pory"

# 161 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 162 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 163 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 164 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 165 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 166 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 167 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 168 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 169 "data/maps/OldaleTown/scripts.pory"
	step_end
# 170 "data/maps/OldaleTown/scripts.pory"

# 171 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 172 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 173 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 174 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 175 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 176 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 177 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 179 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 180 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 183 "data/maps/OldaleTown/scripts.pory"
	step_end
# 184 "data/maps/OldaleTown/scripts.pory"

# 185 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 186 "data/maps/OldaleTown/scripts.pory"
	lockall
# 187 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, Common_Movement_FacePlayer
# 188 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 189 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 190 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 191 "data/maps/OldaleTown/scripts.pory"
	end
# 192 "data/maps/OldaleTown/scripts.pory"

# 193 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 194 "data/maps/OldaleTown/scripts.pory"
	lockall
# 195 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 196 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 197 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 198 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 199 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 200 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 201 "data/maps/OldaleTown/scripts.pory"
	end
# 202 "data/maps/OldaleTown/scripts.pory"

# 203 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 204 "data/maps/OldaleTown/scripts.pory"
	lockall
# 205 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 206 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 207 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 208 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 209 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 210 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 211 "data/maps/OldaleTown/scripts.pory"
	end
# 212 "data/maps/OldaleTown/scripts.pory"

# 213 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 214 "data/maps/OldaleTown/scripts.pory"
	lockall
# 215 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 216 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 217 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 218 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 219 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 220 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 221 "data/maps/OldaleTown/scripts.pory"
	end
# 222 "data/maps/OldaleTown/scripts.pory"

# 223 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 224 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 225 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 226 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 227 "data/maps/OldaleTown/scripts.pory"
	end
# 228 "data/maps/OldaleTown/scripts.pory"

# 229 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 230 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayMessage, MSGBOX_DEFAULT
# 231 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 232 "data/maps/OldaleTown/scripts.pory"
	end
# 233 "data/maps/OldaleTown/scripts.pory"

# 234 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 235 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 236 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 237 "data/maps/OldaleTown/scripts.pory"
	end
# 238 "data/maps/OldaleTown/scripts.pory"

# 239 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 240 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 241 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 242 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 243 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 244 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 245 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_OLDALE_RIVAL
# 246 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 247 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 248 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 249 "data/maps/OldaleTown/scripts.pory"
	end
# 250 "data/maps/OldaleTown/scripts.pory"

# 251 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 252 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 253 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 254 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 255 "data/maps/OldaleTown/scripts.pory"
	return
# 256 "data/maps/OldaleTown/scripts.pory"

# 257 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 258 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 259 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_OLDALE_RIVAL, OldaleTown_Movement_RivalExit
# 260 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 261 "data/maps/OldaleTown/scripts.pory"
	return
# 262 "data/maps/OldaleTown/scripts.pory"

# 263 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 264 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 265 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 266 "data/maps/OldaleTown/scripts.pory"
	step_end
# 267 "data/maps/OldaleTown/scripts.pory"

# 268 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 269 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 270 "data/maps/OldaleTown/scripts.pory"
	step_end
# 271 "data/maps/OldaleTown/scripts.pory"

# 272 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 273 "data/maps/OldaleTown/scripts.pory"
	face_left
# 274 "data/maps/OldaleTown/scripts.pory"
	step_end
# 275 "data/maps/OldaleTown/scripts.pory"

# 276 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 277 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 278 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 279 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 280 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 281 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 282 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 283 "data/maps/OldaleTown/scripts.pory"
	step_end
# 284 "data/maps/OldaleTown/scripts.pory"

# 285 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 286 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 287 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 288 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 289 "data/maps/OldaleTown/scripts.pory"
	step_end
# 290 "data/maps/OldaleTown/scripts.pory"

# 291 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 292 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 293 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 294 "data/maps/OldaleTown/scripts.pory"
	step_end
# 295 "data/maps/OldaleTown/scripts.pory"

# 296 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 297 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 298 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 299 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 300 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 301 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 302 "data/maps/OldaleTown/scripts.pory"
	step_end
# 303 "data/maps/OldaleTown/scripts.pory"

# 304 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 305 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 306 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 307 "data/maps/OldaleTown/scripts.pory"
	step_end
# 308 "data/maps/OldaleTown/scripts.pory"

# 309 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 310 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 311 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 312 "data/maps/OldaleTown/scripts.pory"

# 313 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 314 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 315 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 316 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 317 "data/maps/OldaleTown/scripts.pory"

# 318 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 319 "data/maps/OldaleTown/scripts.pory"
	.string "This is a POKéMON MART.\n"
# 320 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 321 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 322 "data/maps/OldaleTown/scripts.pory"
	.string "POKé BALLS for catching POKéMON.\p"
# 323 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 324 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 325 "data/maps/OldaleTown/scripts.pory"

# 326 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 327 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 328 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a POKéMON CENTER\l"
# 329 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 330 "data/maps/OldaleTown/scripts.pory"

# 331 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 332 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 333 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 334 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 335 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 336 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 337 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 338 "data/maps/OldaleTown/scripts.pory"

# 339 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 340 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 341 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 342 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 343 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 344 "data/maps/OldaleTown/scripts.pory"

# 345 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 346 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 347 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON.\p"
# 348 "data/maps/OldaleTown/scripts.pory"
	.string "But it turns out they were only my\n"
# 349 "data/maps/OldaleTown/scripts.pory"
	.string "own footprints…$"
# 350 "data/maps/OldaleTown/scripts.pory"

# 351 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 352 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 353 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 354 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 355 "data/maps/OldaleTown/scripts.pory"

# 356 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 357 "data/maps/OldaleTown/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 358 "data/maps/OldaleTown/scripts.pory"
	.string "LAB now.\l"
# 359 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 360 "data/maps/OldaleTown/scripts.pory"

# 361 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 362 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 363 "data/maps/OldaleTown/scripts.pory"
	.string "“Where things start off scarce.”$"

OldaleTown_EventScriptOnTransition::
# 368 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKEDEX_FROM_BIRCH, OldaleTown_EventScriptOnTransition_1
# 374 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_TEMP_0, 0
	return

OldaleTown_EventScriptOnTransition_1:
# 370 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


OldaleTown_EventScript_RanchLady::
# 381 "data/maps/OldaleTown/scripts.pory"
	lock
# 382 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 383 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, OldaleTown_EventScript_RanchLady_2
# 389 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_RanchLady_Text_1
OldaleTown_EventScript_RanchLady_1:
# 391 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleTown_EventScript_RanchLady_2:
# 385 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_RanchLady_Text_0
	goto OldaleTown_EventScript_RanchLady_1


# 394 "data/maps/OldaleTown/scripts.pory"
PlayerMovementRanch:
# 396 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 397 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 401 "data/maps/OldaleTown/scripts.pory"
RanchLadyMovement:
# 403 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 404 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 406 "data/maps/OldaleTown/scripts.pory"
RanchLadyMovement2:
# 408 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 409 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 411 "data/maps/OldaleTown/scripts.pory"
RanchLadyMovement3:
# 413 "data/maps/OldaleTown/scripts.pory"
	face_left
# 414 "data/maps/OldaleTown/scripts.pory"
	emote_exclamation_mark
	step_end

OldaleTown_EventScript_RanchLadyTrigger::
# 420 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, OldaleTown_EventScript_RanchLadyTrigger_1
	return

OldaleTown_EventScript_RanchLadyTrigger_1:
# 422 "data/maps/OldaleTown/scripts.pory"
	lock
# 423 "data/maps/OldaleTown/scripts.pory"
	playse SE_PIN
# 424 "data/maps/OldaleTown/scripts.pory"
	applymovement 4, RanchLadyMovement3
# 425 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 426 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_RanchLadyTrigger_Text_0
# 427 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 428 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_PLAYER, PlayerMovementRanch
# 429 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 430 "data/maps/OldaleTown/scripts.pory"
	applymovement 4, RanchLadyMovement
# 431 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 432 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_RanchLadyTrigger_Text_1
# 433 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 434 "data/maps/OldaleTown/scripts.pory"
	applymovement 4, RanchLadyMovement2
# 435 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 436 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleTown_FootprintsMan::
# 443 "data/maps/OldaleTown/scripts.pory"
	lock
# 444 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 445 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_FootprintsMan_Text_0
# 446 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 447 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleTown_Girl::
# 452 "data/maps/OldaleTown/scripts.pory"
	lock
# 453 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 454 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Girl_Text_0
# 455 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 456 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleTown_MartEmployee::
# 460 "data/maps/OldaleTown/scripts.pory"
	lock
# 461 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 462 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_MartEmployee_Text_0
# 463 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 464 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleTown_EventScript_HCNuzlocke::
# 479 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_HCNuzlocke_Text_0
# 480 "data/maps/OldaleTown/scripts.pory"
	closemessage
	return


OldaleTown_EventScript_RanchLady_Text_0:
# 385 "data/maps/OldaleTown/scripts.pory"
	.string "Hello! Uhm, the Pokémon are pretty\n"
	.string "restless here. Please come back later,\l"
	.string "okay?$"

OldaleTown_EventScript_RanchLady_Text_1:
# 389 "data/maps/OldaleTown/scripts.pory"
	.string "They seem to have calmed down. You\n"
	.string "should be fine, probably. Maybe.\l"
	.string "Hopefully. Possibly.$"

OldaleTown_EventScript_RanchLadyTrigger_Text_0:
# 426 "data/maps/OldaleTown/scripts.pory"
	.string "Hold on there!$"

OldaleTown_EventScript_RanchLadyTrigger_Text_1:
# 432 "data/maps/OldaleTown/scripts.pory"
	.string "The Pokémon are restless, I can't let\n"
	.string "you go in there!$"

OldaleTown_FootprintsMan_Text_0:
# 445 "data/maps/OldaleTown/scripts.pory"
	.string "I used to look for footprints\n"
	.string "on ROUTE 102.\p"
	.string "But the forest has grown so dense no\n"
	.string "one can even get through.\p"
	.string "Guess I gotta look for feet elsewhere..$"

OldaleTown_Girl_Text_0:
# 454 "data/maps/OldaleTown/scripts.pory"
	.string "My family lives in PETALBURG CITY.\p"
	.string "It's gonna be harder for them to come\n"
	.string "visit now.\p"
	.string "Good riddance.$"

OldaleTown_MartEmployee_Text_0:
# 462 "data/maps/OldaleTown/scripts.pory"
	.string "Hello there!\n"
	.string "Huh? Free potions?\p"
	.string "Oh that promotion ended many years\n"
	.string "ago, I'm sorry.\p"
	.string "We do sell high quality goods though!$"

OldaleTown_EventScript_HCNuzlocke_Text_0:
# 479 "data/maps/OldaleTown/scripts.pory"
	.string "Locke's House\n"
	.string "Only real challengers allowed.$"

OldaleTown_Text_MayMessage::
# 468 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: C'mon, {PLAYER}!\pDid you get your Pokémon healed?\pLet's head back to the LAB!$"

OldaleTown_Text_BrendanMessage::
# 472 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: C'mon, {PLAYER}!\pDid you get your Pokémon healed?\pLet's head back to the LAB!$"
