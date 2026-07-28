# 1 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_MapScripts::
# 3 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePikeRoom_OnResume
# 4 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePikeRoom_OnTransition
# 5 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeRoomNormal_OnFrame
# 6 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeRoom_OnWarp
# 7 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 9 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_OnFrame:
# 10 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom
# 11 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.2byte 0
# 12 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 13 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterRoom::
# 14 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_TEMP_0, 1
# 15 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getroomtype
# 16 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 17 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_SINGLE_BATTLE, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom
# 18 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_HEAL_FULL, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterFullHealRoom
# 19 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_STATUS, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom
# 20 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_HARD_BATTLE, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterHardBattleRoom
# 21 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_DOUBLE_BATTLE, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterDoubleBattleRoom
# 22 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_BRAIN, BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom
# 23 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 24 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 25 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterSingleBattleRoom::
# 26 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 27 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 28 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_ApproachPlayer
# 29 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 30 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_gettrainerintro 0
# 31 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 32 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 33 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 34 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	releaseall
# 35 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_PIKE_SINGLE
# 36 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_0x8005, 0
# 37 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DoSpecialTrainerBattle
# 38 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 39 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 1, BattleFrontier_BattlePikeRoomNormal_EventScript_WonSingleBattle
# 40 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost::
# 41 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 42 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY, 5, 6
# 43 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 44 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 45 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 46 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_WonSingleBattle::
# 47 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_NPCExit
# 48 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 49 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 50 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 51 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterHardBattleRoom::
# 52 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 53 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 54 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer, MSGBOX_DEFAULT
# 55 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 56 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 57 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_ApproachPlayer
# 58 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 59 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_gettrainerintro 0
# 60 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 61 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 62 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 63 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	releaseall
# 64 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_PIKE_SINGLE
# 65 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_0x8005, 0
# 66 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DoSpecialTrainerBattle
# 67 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 68 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 1, BattleFrontier_BattlePikeRoomNormal_EventScript_WonHardBattle
# 69 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost
# 70 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 71 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 72 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_WonHardBattle::
# 73 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_NPCExit
# 74 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 75 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_HealNPCApproachPlayer
# 76 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 77 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock
# 78 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	faceplayer
# 79 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth, MSGBOX_DEFAULT
# 80 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 81 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 82 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special HealPlayerParty
# 83 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge2, MSGBOX_DEFAULT
# 84 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 85 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	release
# 86 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_NPCExit
# 87 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 88 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 89 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 90 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterBrainRoom::
# 91 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 22
# 92 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 93 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_PreQueenHealNPCApproachPlayer
# 94 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 95 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_prequeenheal
# 96 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 97 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 0, BattleFrontier_BattlePikeRoomNormal_EventScript_PreQueenNoHeal
# 98 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 1, BattleFrontier_BattlePikeRoomNormal_EventScript_PreQueenHealOneMon
# 99 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 2, BattleFrontier_BattlePikeRoomNormal_EventScript_PreQueenHealTwoMons
# 100 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 101 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter::
# 102 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ShallFetchOurMaster, MSGBOX_DEFAULT
# 103 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 104 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special SpawnCameraObject
# 105 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_CAMERA, BattleFrontier_BattlePikeRoomNormal_Movement_CameraPanUp
# 106 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_HealNPCExitForLucy
# 107 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 108 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playse SE_PIKE_CURTAIN_CLOSE
# 109 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesLittleClosed
# 110 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 111 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesMostlyClosed
# 112 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 113 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesClosed
# 114 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 115 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 116 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 60
# 117 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playse SE_PIKE_CURTAIN_OPEN
# 118 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 65
# 119 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesMostlyClosed
# 120 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	showobjectat LOCALID_PIKE_ROOM_NPC_1, MAP_BATTLE_FRONTIER_BATTLE_PIKE_ROOM_NORMAL
# 121 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 122 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesLittleClosed
# 123 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 4
# 124 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesOpen
# 125 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 126 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_LucyEnter
# 127 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 128 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getbrainstatus
# 129 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 130 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattlePikeRoomNormal_EventScript_IntroLucyGold
# 131 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver
# 132 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold
# 133 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 134 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver
# 135 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ImThePikeQueen, MSGBOX_DEFAULT
# 136 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 137 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucySilver::
# 138 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck, MSGBOX_DEFAULT
# 139 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_DoPikeQueenBattle
# 140 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucySilver
# 141 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost
# 142 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 143 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucySilver::
# 144 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_getsymbols
# 145 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy
# 146 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass, MSGBOX_DEFAULT
# 147 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 148 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 149 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_ReceivedLuckSymbol
# 150 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 151 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 152 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_givesymbol
# 153 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear, MSGBOX_DEFAULT
# 154 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 155 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy
# 156 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 157 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_IntroLucyGold::
# 158 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 159 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold
# 160 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_LucyYouAgain, MSGBOX_DEFAULT
# 161 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
# 162 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_BattleLucyGold::
# 163 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_NowComeOn, MSGBOX_DEFAULT
# 164 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoomNormal_EventScript_DoPikeQueenBattle
# 165 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucyGold
# 166 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost
# 167 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 168 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucyGold::
# 169 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_getsymbols
# 170 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto_if_eq VAR_RESULT, 2, BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy
# 171 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_LucyFrontierPass, MSGBOX_DEFAULT
# 172 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 173 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_OBTAIN_SYMBOL
# 174 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_LuckSymbolTookGoldenShine
# 175 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 176 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 177 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	frontier_givesymbol
# 178 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_IWontForget, MSGBOX_DEFAULT
# 179 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 180 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy
# 181 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 182 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 183 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DefeatedLucy::
# 184 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_LucyMoveAside
# 185 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 186 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_Movement_PlayerWalkUp2
# 187 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 188 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_get PIKE_DATA_WIN_STREAK
# 189 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	addvar VAR_RESULT, 1
# 190 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_set PIKE_DATA_WIN_STREAK, VAR_RESULT
# 191 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call BattleFrontier_BattlePikeRoom_EventScript_WarpToFinalRoom
# 192 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 193 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 194 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 195 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_PreQueenNoHeal::
# 196 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomNoHeal, MSGBOX_DEFAULT
# 197 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter
# 198 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 199 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 200 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_PreQueenHealOneMon::
# 201 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomHealOne, MSGBOX_DEFAULT
# 202 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 203 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 204 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter
# 205 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 206 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 207 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_PreQueenHealTwoMons::
# 208 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomHealTwo, MSGBOX_DEFAULT
# 209 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 210 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 211 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_LucyEnter
# 212 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 213 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 214 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterFullHealRoom::
# 215 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 216 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 217 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_ApproachPlayer
# 218 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 219 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreToFullHealth
# 220 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 221 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 222 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 223 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special HealPlayerParty
# 224 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge, MSGBOX_DEFAULT
# 225 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 226 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_NPCExit
# 227 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 228 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	releaseall
# 229 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 230 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 231 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterDoubleBattleRoom::
# 232 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 233 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 234 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_Trainer1WalkRight
# 235 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_Trainer2WalkLeft
# 236 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 237 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_DoubleTrainersWalkDown
# 238 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_DoubleTrainersWalkDown
# 239 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 240 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_Trainer1FacePlayer
# 241 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_Trainer2FacePlayer
# 242 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 243 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceTrainer1
# 244 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 245 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_gettrainerintro 0
# 246 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 247 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 248 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay 16
# 249 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceTrainer2
# 250 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 251 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_gettrainerintro 1
# 252 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 253 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 254 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_PIKE_DOUBLE
# 255 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_0x8005, 0
# 256 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DoSpecialTrainerBattle
# 257 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 258 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case 1, BattleFrontier_BattlePikeRoomNormal_EventScript_WonDoubleBattle
# 259 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	goto BattleFrontier_BattlePikeRoomNormal_EventScript_WarpToLobbyLost
# 260 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 261 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 262 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_WonDoubleBattle::
# 263 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceTrainer2
# 264 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 265 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_Trainer1Exit
# 266 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 267 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_Trainer2Exit
# 268 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 269 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceUp
# 270 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 271 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 272 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 273 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_EnterStatusRoom::
# 274 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lockall
# 275 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_WatchOut
# 276 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_MonApproachPlayer
# 277 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 278 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getstatusmon
# 279 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 280 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_0x8004, PIKE_STATUSMON_KIRLIA, BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack
# 281 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_0x8004, PIKE_STATUSMON_DUSCLOPS, BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack
# 282 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_AttacksWhenStartled, MSGBOX_DEFAULT
# 283 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 284 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	releaseall
# 285 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 286 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 287 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaAttack::
# 288 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_KirliaStop, MSGBOX_DEFAULT
# 289 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 290 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 291 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 292 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 293 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getstatus
# 294 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_RESULT, PIKE_STATUS_TOXIC, BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedToxic
# 295 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_RESULT, PIKE_STATUS_BURN, BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedWillOWisp
# 296 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_RESULT, PIKE_STATUS_PARALYSIS, BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedThunderWave
# 297 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_RESULT, PIKE_STATUS_SLEEP, BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedHypnosis
# 298 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_flashscreen
# 299 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 300 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_NPCApproachMon
# 301 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 302 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_MonFaceNPC
# 303 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 304 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 305 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 306 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 307 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough, MSGBOX_DEFAULT
# 308 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 309 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_KIRLIA, CRY_MODE_NORMAL
# 310 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 311 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 312 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_MonMoveAside
# 313 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_StatusNPCApproachPlayer
# 314 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 315 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForKirlia, MSGBOX_DEFAULT
# 316 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 317 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 318 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsAttack::
# 319 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_DusclopsStop, MSGBOX_DEFAULT
# 320 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 321 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 322 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_DUSCLOPS, CRY_MODE_NORMAL
# 323 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 324 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getstatus
# 325 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_RESULT, PIKE_STATUS_FREEZE, BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsUsedIceBeam
# 326 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_RESULT, PIKE_STATUS_BURN, BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsUsedWillOWisp
# 327 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_flashscreen
# 328 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitstate
# 329 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_NPCApproachMon
# 330 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 331 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_MonFaceNPC
# 332 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 333 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 334 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_DUSCLOPS, CRY_MODE_NORMAL
# 335 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 336 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough, MSGBOX_DEFAULT
# 337 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitse
# 338 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playmoncry SPECIES_DUSCLOPS, CRY_MODE_NORMAL
# 339 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmoncry
# 340 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 341 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_MonMoveAside
# 342 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_StatusNPCApproachPlayer
# 343 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 344 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops, MSGBOX_DEFAULT
# 345 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 346 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 347 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedToxic::
# 348 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedToxic
# 349 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 350 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 351 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 352 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedWillOWisp::
# 353 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp
# 354 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 355 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 356 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 357 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedThunderWave::
# 358 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedThunderWave
# 359 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 360 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 361 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 362 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_KirliaUsedHypnosis::
# 363 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedHypnosis
# 364 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 365 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 366 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 367 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsUsedIceBeam::
# 368 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedIceBeam
# 369 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 370 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 371 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 372 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DusclopsUsedWillOWisp::
# 373 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	message BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp
# 374 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 375 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 376 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 377 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_DoPikeQueenBattle::
# 378 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 379 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePikeRoomNormal_Movement_PlayerWalkUp2
# 380 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 381 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_0x8004, SPECIAL_BATTLE_PIKE_SINGLE
# 382 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setvar VAR_0x8005, 0
# 383 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DoSpecialTrainerBattle
# 384 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 385 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 386 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_ApproachPlayer:
# 387 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 388 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 389 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 390 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 391 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_NPCExit:
# 392 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 393 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 394 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 395 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 396 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 397 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 398 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 399 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_HealNPCExit:
# 400 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 401 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 402 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 403 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 404 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 405 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_NPCApproachMon:
# 406 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 407 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 408 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 409 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_StatusNPCApproachPlayer:
# 410 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 411 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_left
# 412 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay_16
# 413 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	delay_16
# 414 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_down
# 415 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 416 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 417 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_MonApproachPlayer:
# 418 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_fast_down
# 419 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_fast_right
# 420 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_fast_right
# 421 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_fast_down
# 422 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_fast_left
# 423 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_down
# 424 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 425 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 426 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_MonFaceNPC:
# 427 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_up
# 428 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 429 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 430 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_MonMoveAside:
# 431 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_left
# 432 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_MonFaceRight:
# 433 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_right
# 434 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 435 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 436 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_HealNPCApproachPlayer:
# 437 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 438 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 439 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_right
# 440 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_down
# 441 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 442 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 443 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceTrainer1:
# 444 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_left
# 445 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 446 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 447 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceTrainer2:
# 448 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_right
# 449 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 450 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 451 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_PlayerFaceUp:
# 452 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_up
# 453 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 454 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 455 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_Trainer1WalkRight:
# 456 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_right
# 457 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 458 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 459 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_Trainer2WalkLeft:
# 460 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_left
# 461 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 462 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 463 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_DoubleTrainersWalkDown:
# 464 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 465 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 466 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 467 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 468 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_Trainer1FacePlayer:
# 469 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_right
# 470 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 471 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 472 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_Trainer2FacePlayer:
# 473 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_left
# 474 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 475 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 476 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_Trainer1Exit:
# 477 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 478 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 479 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 480 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_right
# 481 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 482 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 483 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 484 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 485 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 486 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_Trainer2Exit:
# 487 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 488 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 489 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 490 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_left
# 491 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 492 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 493 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 494 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 495 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 496 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ For approaching Lucy and exiting room after defeating Lucy
# 497 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_PlayerWalkUp2:
# 498 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 499 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 500 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 501 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 502 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_PreQueenHealNPCApproachPlayer:
# 503 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 504 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 505 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 506 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 507 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_HealNPCExitForLucy:
# 508 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 509 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 510 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 511 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_invisible
# 512 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 513 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 514 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_LucyEnter:
# 515 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	set_visible
# 516 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 517 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 518 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 519 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_LucyMoveAside:
# 520 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_left
# 521 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	face_right
# 522 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 523 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 524 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_NPC::
# 525 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getroomtype
# 526 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	switch VAR_RESULT
# 527 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_NPC, BattleFrontier_BattlePikeRoomNormal_EventScript_NormalNPC
# 528 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_STATUS, BattleFrontier_BattlePikeRoomNormal_EventScript_StatusNPC
# 529 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	case PIKE_ROOM_HEAL_PART, BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC
# 530 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_NormalNPC::
# 531 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock
# 532 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	faceplayer
# 533 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_getnpcmsg
# 534 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox gStringVar4, MSGBOX_DEFAULT
# 535 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmessage
# 536 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 537 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	release
# 538 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 539 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 540 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_StatusNPC::
# 541 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock
# 542 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	faceplayer
# 543 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine, MSGBOX_DEFAULT
# 544 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 545 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	release
# 546 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 547 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 548 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_HealNPC::
# 549 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	pike_healonetwomons
# 550 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_RESULT, 2, BattleFrontier_BattlePikeRoomNormal_EventScript_WillRestoreTwoMons
# 551 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	call_if_eq VAR_RESULT, 1, BattleFrontier_BattlePikeRoomNormal_EventScript_WillRestoreOneMon
# 552 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	playfanfare MUS_HEAL
# 553 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitfanfare
# 554 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_BestOfLuckFarewell, MSGBOX_DEFAULT
# 555 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 556 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	release
# 557 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_1, BattleFrontier_BattlePikeRoomNormal_Movement_HealNPCExit
# 558 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 559 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 560 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 561 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_WillRestoreOneMon::
# 562 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock
# 563 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	faceplayer
# 564 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreOneMon, MSGBOX_DEFAULT
# 565 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 566 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 567 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 568 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_WillRestoreTwoMons::
# 569 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock
# 570 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	faceplayer
# 571 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreTwoMons, MSGBOX_DEFAULT
# 572 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 573 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 574 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 575 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Dusclops or Kirlia
# 576 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_StatusMon::
# 577 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	lock
# 578 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	faceplayer
# 579 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	msgbox BattleFrontier_BattlePikeRoomNormal_Text_Silence, MSGBOX_DEFAULT
# 580 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	closemessage
# 581 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	release
# 582 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	applymovement LOCALID_PIKE_ROOM_NPC_2, BattleFrontier_BattlePikeRoomNormal_Movement_MonFaceRight
# 583 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	waitmovement 0
# 584 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	end
# 585 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 586 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesMostlyClosed::
# 587 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 1, METATILE_BattlePike_Curtain_Stage1_Tile0, TRUE
# 588 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 2, METATILE_BattlePike_Curtain_Stage1_Tile1, TRUE
# 589 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 2, METATILE_BattlePike_Curtain_Stage1_Tile2, TRUE
# 590 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 2, METATILE_BattlePike_Curtain_Stage1_Tile3, TRUE
# 591 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 3, METATILE_BattlePike_Curtain_Stage1_Tile4, TRUE
# 592 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 3, METATILE_BattlePike_Curtain_Stage1_Tile5, FALSE
# 593 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 3, METATILE_BattlePike_Curtain_Stage1_Tile6, TRUE
# 594 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DrawWholeMapView
# 595 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 596 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 597 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesLittleClosed::
# 598 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 1, METATILE_BattlePike_Curtain_Stage2_Tile0, TRUE
# 599 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 2, METATILE_BattlePike_Curtain_Stage2_Tile1, TRUE
# 600 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 2, METATILE_BattlePike_Curtain_Stage2_Tile2, TRUE
# 601 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 2, METATILE_BattlePike_Curtain_Stage2_Tile3, TRUE
# 602 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 3, METATILE_BattlePike_Curtain_Stage2_Tile4, TRUE
# 603 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 3, METATILE_BattlePike_Curtain_Stage2_Tile5, FALSE
# 604 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 3, METATILE_BattlePike_Curtain_Stage2_Tile6, TRUE
# 605 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DrawWholeMapView
# 606 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 607 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 608 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesOpen::
# 609 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 1, METATILE_BattlePike_Curtain_Stage3_Tile0, TRUE
# 610 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 2, METATILE_BattlePike_Curtain_Stage3_Tile1, TRUE
# 611 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 2, METATILE_BattlePike_Curtain_Stage3_Tile2, TRUE
# 612 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 2, METATILE_BattlePike_Curtain_Stage3_Tile3, TRUE
# 613 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 3, METATILE_BattlePike_Curtain_Stage3_Tile4, TRUE
# 614 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 3, METATILE_BattlePike_Curtain_Stage3_Tile5, FALSE
# 615 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 3, METATILE_BattlePike_Curtain_Stage3_Tile6, TRUE
# 616 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DrawWholeMapView
# 617 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 618 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 619 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_EventScript_SetCurtainTilesClosed::
# 620 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 1, METATILE_BattlePike_Curtain_Stage0_Tile0, TRUE
# 621 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 2, METATILE_BattlePike_Curtain_Stage0_Tile1, TRUE
# 622 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 2, METATILE_BattlePike_Curtain_Stage0_Tile2, TRUE
# 623 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 2, METATILE_BattlePike_Curtain_Stage0_Tile3, TRUE
# 624 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 3, 3, METATILE_BattlePike_Curtain_Stage0_Tile4, TRUE
# 625 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 4, 3, METATILE_BattlePike_Curtain_Stage0_Tile5, FALSE
# 626 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	setmetatile 5, 3, METATILE_BattlePike_Curtain_Stage0_Tile6, TRUE
# 627 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	special DrawWholeMapView
# 628 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	return
# 629 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 630 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_CameraPanUp:
# 631 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 632 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_up
# 633 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 634 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 635 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Unused
# 636 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Movement_CameraPanDown:
# 637 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 638 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	walk_down
# 639 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	step_end
# 640 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 641 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreToFullHealth:
# 642 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Welcome…\n"
# 643 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "You must be commended for your luck…\p"
# 644 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Your POKéMON shall be restored\n"
# 645 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "to full health…$"
# 646 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 647 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge:
# 648 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I urge you to enjoy the rest of your\n"
# 649 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Battle Choice challenge…$"
# 650 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 651 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreOneMon:
# 652 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Ah, you're a lucky one.\n"
# 653 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I'm in somewhat-good spirits now.\p"
# 654 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I will restore one of your POKéMON\n"
# 655 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "to full health.$"
# 656 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 657 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_BestOfLuckFarewell:
# 658 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "The best of luck to you.\n"
# 659 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Farewell.$"
# 660 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 661 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Seems there was a planned room type where the player could choose to battle and would be healed if they won
# 662 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Possibly replaced/superseded by the hard battle room, which is the same but the battle isnt optional
# 663 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Unused
# 664 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_CareForBattleWillRestoreMons:
# 665 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Excuse me…\p"
# 666 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Would you care for a battle?\n"
# 667 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I'll restore your POKéMON if you win.$"
# 668 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 669 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Unused
# 670 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_NowShallWe:
# 671 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Very well…\n"
# 672 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Now, shall we?$"
# 673 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 674 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Unused
# 675 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_HowUnsportingOfYou:
# 676 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I see…\n"
# 677 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "How unsporting of you…$"
# 678 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 679 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Unused
# 680 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreMonsAsPromised:
# 681 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Magnificent…\p"
# 682 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "As promised, I shall restore your\n"
# 683 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "POKéMON to full health.$"
# 684 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 685 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Unused
# 686 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_BestOfLuckFarewell2:
# 687 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "The best of luck to you.\n"
# 688 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Farewell.$"
# 689 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 690 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_WatchOut:
# 691 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Oh, my!\p"
# 692 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Watch out!$"
# 693 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 694 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_KirliaStop:
# 695 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Now, now!\n"
# 696 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA, stop that!$"
# 697 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 698 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_DusclopsStop:
# 699 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Now, now!\n"
# 700 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "DUSCLOPS, stop that!$"
# 701 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 702 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedToxic:
# 703 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA used TOXIC!$"
# 704 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 705 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedHypnosis:
# 706 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA used HYPNOSIS!$"
# 707 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 708 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedThunderWave:
# 709 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA used THUNDER WAVE!$"
# 710 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 711 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_KirliaUsedWillOWisp:
# 712 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "KIRLIA used WILL-O-WISP!$"
# 713 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 714 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedWillOWisp:
# 715 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "DUSCLOPS used WILL-O-WISP!$"
# 716 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 717 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_DusclopsUsedIceBeam:
# 718 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "DUSCLOPS used ICE BEAM!$"
# 719 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 720 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ThatsEnough:
# 721 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Look here!\n"
# 722 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "That's quite enough!$"
# 723 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 724 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForKirlia:
# 725 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I must apologize to you…\p"
# 726 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "My KIRLIA has a TIMID nature…$"
# 727 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 728 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ApologizeForDusclops:
# 729 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I must apologize to you…\p"
# 730 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "My DUSCLOPS has a TIMID nature…$"
# 731 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 732 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_AttacksWhenStartled:
# 733 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "It attacks without warning if it is\n"
# 734 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "startled by another person…\p"
# 735 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Are you and your POKéMON all right?$"
# 736 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 737 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ApologizeHopeMonsAreFine:
# 738 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I do apologize for what happened…\n"
# 739 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I do hope your POKéMON are fine.$"
# 740 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 741 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_Silence:
# 742 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "… … … … … …\n"
# 743 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "… … … … … …$"
# 744 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 745 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_BattleSomewhatToughTrainer:
# 746 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Welcome…\p"
# 747 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Here, we will have you battle\n"
# 748 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "a somewhat-tough TRAINER…$"
# 749 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 750 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_RestoreToFullHealth:
# 751 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "How wonderful…\p"
# 752 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "To honor your victory, your POKéMON\n"
# 753 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "shall be restored to full health…$"
# 754 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 755 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_EnjoyRestOfChallenge2:
# 756 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I urge you to enjoy the rest of your\n"
# 757 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Battle Choice challenge…$"
# 758 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 759 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ImThePikeQueen:
# 760 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I am LUCY…\n"
# 761 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I am the law here…\l"
# 762 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "For I am the PIKE QUEEN…\p"
# 763 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "You already know it, but to advance,\n"
# 764 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "you must defeat me…\p"
# 765 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…I'm not one for idle chatter.\n"
# 766 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Hurry. Come on…$"
# 767 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 768 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_HopeYouDidntUseUpLuck:
# 769 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Your luck…\n"
# 770 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I hope you didn't use it all up here…$"
# 771 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 772 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_LucyShowMeFrontierPass:
# 773 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "LUCY: … … … … … …\n"
# 774 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Show me your FRONTIER PASS…$"
# 775 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 776 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ReceivedLuckSymbol:
# 777 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "The Luck Symbol was embossed on\n"
# 778 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "the FRONTIER PASS!$"
# 779 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 780 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_AllThereIsDisappear:
# 781 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…That's all there is…\n"
# 782 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Disappear already…$"
# 783 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 784 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_LucyYouAgain:
# 785 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "LUCY: …You again…\p"
# 786 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "… … … … … …\p"
# 787 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…I've trampled flowers and braved\n"
# 788 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "storms to get to where I am…\p"
# 789 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I don't feel any compulsion to keep\n"
# 790 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "losing to the same opponent…\p"
# 791 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "… … … … … …\n"
# 792 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Fine… I'll do it…$"
# 793 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 794 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_NowComeOn:
# 795 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Now!\n"
# 796 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Come on!$"
# 797 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 798 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_LucyFrontierPass:
# 799 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "LUCY: … … … … … …\p"
# 800 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…FRONTIER PASS…$"
# 801 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 802 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_LuckSymbolTookGoldenShine:
# 803 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "The Luck Symbol took on\n"
# 804 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "a golden shine!$"
# 805 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 806 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_IWontForget:
# 807 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…You, I won't forget…\n"
# 808 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "…Ever…$"
# 809 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 810 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomNoHeal:
# 811 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I welcome you…\p"
# 812 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Giggle…\n"
# 813 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "You seem to be bereft of luck…\p"
# 814 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "If only you hadn't chosen this room,\n"
# 815 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "your POKéMON could have been healed…$"
# 816 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 817 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomHealOne:
# 818 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I welcome you…\p"
# 819 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Since you have chosen this room, I will\n"
# 820 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "restore one POKéMON to full health…$"
# 821 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 822 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ChoseRoomHealTwo:
# 823 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I welcome you…\p"
# 824 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Since you have chosen this room, I will\n"
# 825 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "restore two POKéMON to full health…$"
# 826 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 827 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
@ Unused
# 828 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreAllMons:
# 829 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I welcome you…\p"
# 830 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Giggle…\n"
# 831 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "You should thank your lucky stars…\p"
# 832 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Since you have chosen this room,\n"
# 833 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "all your POKéMON will be restored…$"
# 834 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 835 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_ShallFetchOurMaster:
# 836 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I shall go fetch our master…$"
# 837 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"

# 838 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
BattleFrontier_BattlePikeRoomNormal_Text_WillRestoreTwoMons:
# 839 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "Ah, you're a lucky one!\n"
# 840 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I'm in good spirits now.\p"
# 841 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "I will restore two of your POKéMON\n"
# 842 "data/maps/BattleFrontier_BattlePikeRoomNormal/scripts.pory"
	.string "to full health!$"
