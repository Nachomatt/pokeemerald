# 1 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_MapScripts::
# 3 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleDomeLobby_OnResume
# 4 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleDomeLobby_OnFrame
# 5 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleDomeLobby_OnWarp
# 6 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.byte 0
# 7 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 8 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_OnResume:
# 9 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_initresultstree
# 10 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 11 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 12 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_OnWarp:
# 13 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleDomeLobby_EventScript_TurnPlayerNorth
# 14 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.2byte 0
# 15 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 16 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TurnPlayerNorth::
# 17 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 19 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 20 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 21 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_OnFrame:
# 22 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattleDomeLobby_EventScript_GetChallengeStatus
# 23 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleDomeLobby_EventScript_QuitWithoutSaving
# 24 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleDomeLobby_EventScript_ResumeChallenge
# 25 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_WON, BattleFrontier_BattleDomeLobby_EventScript_WonChallenge
# 26 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST, BattleFrontier_BattleDomeLobby_EventScript_LostChallenge
# 27 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.2byte 0
# 28 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 29 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_GetChallengeStatus::
# 30 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_getstatus
# 31 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 32 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 33 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_QuitWithoutSaving::
# 34 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 35 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting, MSGBOX_DEFAULT
# 36 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 37 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK, 0
# 38 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, FALSE
# 39 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 40 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 41 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 42 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 43 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 45 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WonChallenge::
# 46 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 47 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 48 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_isbrain
# 49 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleDomeLobby_EventScript_DefeatedAce
# 50 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney, MSGBOX_DEFAULT
# 51 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_GiveBattlePoints
# 52 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 53 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DefeatedAce::
# 54 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker, MSGBOX_DEFAULT
# 55 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_GiveBattlePoints::
# 56 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints, MSGBOX_DEFAULT
# 57 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_givepoints
# 58 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 59 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved
# 60 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 61 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 62 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 63 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkairshow
# 64 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 65 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_HAS_WON_CHALLENGE, TRUE
# 66 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, TRUE
# 67 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 68 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 69 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle
# 70 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 71 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_LostChallenge::
# 72 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 73 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 74 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved
# 75 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 76 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 77 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 78 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkairshow
# 79 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_WIN_STREAK_ACTIVE, FALSE
# 80 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_set DOME_DATA_ATTEMPTED_CHALLENGE, TRUE
# 81 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 82 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 83 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskRecordBattle::
# 84 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_save 0
# 85 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	playse SE_SAVE
# 86 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitse
# 87 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 88 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattleDomeLobby_EventScript_EndChallenge
# 89 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_RecordLastMatch
# 90 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 91 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
# 92 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 93 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 1, BattleFrontier_BattleDomeLobby_EventScript_EndChallenge
# 94 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 0, BattleFrontier_BattleDomeLobby_EventScript_RecordBattle
# 95 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_EndChallenge
# 96 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 97 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RecordBattle::
# 98 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 99 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_EndChallenge::
# 100 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain, MSGBOX_DEFAULT
# 101 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 102 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 103 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 104 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 105 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 106 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ResumeChallenge::
# 107 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 108 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou, MSGBOX_DEFAULT
# 109 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge2
# 110 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 111 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_save CHALLENGE_STATUS_SAVING
# 112 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	playse SE_SAVE
# 113 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitse
# 114 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 115 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 116 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EnterChallenge
# 117 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 118 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendant::
# 119 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lock
# 120 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	faceplayer
# 121 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
# 122 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 123 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome
# 124 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 125 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 126 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendant::
# 127 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lock
# 128 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	faceplayer
# 129 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
# 130 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES
# 131 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome
# 132 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 133 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 134 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AttendantWelcome::
# 135 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special SavePlayerParty
# 136 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_WelcomeSingles
# 137 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_WelcomeDoubles
# 138 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge::
# 139 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_TakeSinglesChallenge
# 140 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_TakeDoublesChallenge
# 141 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 142 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, FALSE
# 143 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 144 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 0, BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge
# 145 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 1, BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge
# 146 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 2, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 147 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 148 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 149 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TryEnterChallenge::
# 150 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_WhichLevelMode
# 151 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 152 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, FALSE
# 153 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 154 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 155 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 156 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_checkineligible
# 157 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_0x8004, TRUE, BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons
# 158 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 159 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 160 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 161 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 162 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 163 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 164 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 165 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
# 166 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge, MSGBOX_YESNO
# 167 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 168 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case NO, BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
# 169 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case YES, BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge
# 170 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge
# 171 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 172 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SaveBeforeChallenge::
# 173 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 174 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 175 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_init
# 176 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 177 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 178 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 179 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 180 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	delay 2
# 181 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 182 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
# 183 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleDomeLobby_EventScript_CancelChallengeSaveFailed
# 184 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_inittrainers
# 185 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_EnterChallenge::
# 186 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special SavePlayerParty
# 187 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 188 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_settrainers
# 189 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome, MSGBOX_DEFAULT
# 190 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closemessage
# 191 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor
# 192 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special HealPlayerParty
# 193 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_CORRIDOR, 23, 6
# 194 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	setvar VAR_TEMP_CHALLENGE_STATUS, 0
# 195 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitstate
# 196 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 197 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 198 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainChallenge::
# 199 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_ExplainSinglesChallenge
# 200 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_ExplainDoublesChallenge
# 201 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_AskTakeChallenge
# 202 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 203 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMons::
# 204 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 205 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLv50
# 206 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLvOpen
# 207 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 208 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLv50::
# 209 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 210 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge
# 211 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 212 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_NotEnoughValidMonsLvOpen::
# 213 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 214 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge
# 215 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 216 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CancelChallengeSaveFailed::
# 217 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 218 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge
# 219 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 220 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_LoadPartyCancelChallenge::
# 221 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special LoadPlayerParty
# 222 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CancelChallenge::
# 223 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain, MSGBOX_DEFAULT
# 224 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_EndCancelChallenge::
# 225 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	release
# 226 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 227 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 228 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WalkToDoor::
# 229 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantWalkToDoor
# 230 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantWalkToDoor
# 231 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor
# 232 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmovement 0
# 233 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_OpenSinglesDoor
# 234 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_OpenDoublesDoor
# 235 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitdooranim
# 236 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantEnterDoor
# 237 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantEnterDoor
# 238 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_PLAYER, BattleFrontier_BattleDomeLobby_Movement_PlayerEnterDoor
# 239 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmovement 0
# 240 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES, BattleFrontier_BattleDomeLobby_EventScript_CloseSinglesDoor
# 241 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_DOUBLES, BattleFrontier_BattleDomeLobby_EventScript_CloseDoublesDoor
# 242 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitdooranim
# 243 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 244 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 245 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantWalkToDoor::
# 246 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_SINGLES, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor
# 247 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 248 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 249 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantWalkToDoor::
# 250 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_DOUBLES, BattleFrontier_BattleDomeLobby_Movement_WalkToDoor
# 251 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 252 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 253 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_SinglesAttendantEnterDoor::
# 254 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_SINGLES, BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor
# 255 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 256 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 257 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_DoublesAttendantEnterDoor::
# 258 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	applymovement LOCALID_DOME_ATTENDANT_DOUBLES, BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor
# 259 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 260 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 261 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WelcomeSingles::
# 262 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle, MSGBOX_DEFAULT
# 263 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 264 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 265 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_WelcomeDoubles::
# 266 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle, MSGBOX_DEFAULT
# 267 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 268 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 269 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TakeSinglesChallenge::
# 270 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge
# 271 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 272 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 273 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_TakeDoublesChallenge::
# 274 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge
# 275 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 276 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 277 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainSinglesChallenge::
# 278 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge, MSGBOX_DEFAULT
# 279 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 280 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 281 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExplainDoublesChallenge::
# 282 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge, MSGBOX_DEFAULT
# 283 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 284 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 285 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_OpenSinglesDoor::
# 286 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	opendoor 5, 4
# 287 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 288 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 289 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_OpenDoublesDoor::
# 290 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	opendoor 17, 4
# 291 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 292 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 293 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CloseSinglesDoor::
# 294 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closedoor 5, 4
# 295 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 296 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 297 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_CloseDoublesDoor::
# 298 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	closedoor 17, 4
# 299 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 300 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 301 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Movement_WalkToDoor:
# 302 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 303 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 304 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 305 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 306 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 307 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	step_end
# 308 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 309 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Movement_AttendantEnterDoor:
# 310 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 311 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	set_invisible
# 312 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	step_end
# 313 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 314 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Movement_PlayerEnterDoor:
# 315 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 316 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	walk_up
# 317 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	set_invisible
# 318 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	step_end
# 319 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 320 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowSinglesResults::
# 321 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 322 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_DOME, FRONTIER_MODE_SINGLES
# 323 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitbuttonpress
# 324 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special RemoveRecordsWindow
# 325 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 326 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 327 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 328 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowDoublesResults::
# 329 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 330 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_DOME, FRONTIER_MODE_DOUBLES
# 331 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitbuttonpress
# 332 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	special RemoveRecordsWindow
# 333 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 334 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 335 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 336 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ShowPrevTourneyTree::
# 337 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_get DOME_DATA_PREV_TOURNEY_TYPE
# 338 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_RESULT, 0, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLv50
# 339 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_RESULT, 1, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLv50
# 340 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_RESULT, 2, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLvOpen
# 341 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	call_if_eq VAR_RESULT, 3, BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLvOpen
# 342 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 343 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_showprevtourneytree
# 344 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitstate
# 345 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 346 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 347 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLv50::
# 348 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50, MSGBOX_SIGN
# 349 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 350 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 351 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLv50::
# 352 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50, MSGBOX_SIGN
# 353 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 354 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 355 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsSinglesLvOpen::
# 356 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen, MSGBOX_SIGN
# 357 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 358 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 359 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_PrevTourneyResultsDoublesLvOpen::
# 360 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen, MSGBOX_SIGN
# 361 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	return
# 362 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 363 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_Maniac::
# 364 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	dome_getwinnersname
# 365 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough, MSGBOX_NPC
# 366 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 367 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 368 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_Lass::
# 369 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation, MSGBOX_NPC
# 370 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 371 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 372 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_FatMan::
# 373 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound, MSGBOX_NPC
# 374 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 375 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 376 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_Man::
# 377 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully, MSGBOX_NPC
# 378 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 379 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 380 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ A few OutsideWest event scripts are inserted here instead, two of which are unused
# 381 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man3::
# 382 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier, MSGBOX_NPC
# 383 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 384 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 385 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Unused
# 386 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleDomeSign2::
# 387 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign2, MSGBOX_NPC
# 388 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 389 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 390 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Unused
# 391 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnderConstructionSign::
# 392 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction, MSGBOX_NPC
# 393 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 394 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 395 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesBoard::
# 396 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	lockall
# 397 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 398 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 399 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 400 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 401 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard::
# 402 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_ReadWhichHeading
# 403 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	waitmessage
# 404 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	multichoice 17, 4, MULTI_BATTLE_DOME_RULES, FALSE
# 405 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	switch VAR_RESULT
# 406 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 0, BattleFrontier_BattleDomeLobby_EventScript_RulesMatchup
# 407 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 1, BattleFrontier_BattleDomeLobby_EventScript_RulesTourneyTree
# 408 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 2, BattleFrontier_BattleDomeLobby_EventScript_RulesDoubleKO
# 409 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case 3, BattleFrontier_BattleDomeLobby_EventScript_ExitRules
# 410 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleDomeLobby_EventScript_ExitRules
# 411 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 412 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 413 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesMatchup::
# 414 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules, MSGBOX_DEFAULT
# 415 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 416 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 417 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 418 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesTourneyTree::
# 419 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree, MSGBOX_DEFAULT
# 420 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 421 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 422 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 423 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_RulesDoubleKO::
# 424 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	msgbox BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules, MSGBOX_DEFAULT
# 425 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	goto BattleFrontier_BattleDomeLobby_EventScript_ReadRulesBoard
# 426 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 427 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 428 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_EventScript_ExitRules::
# 429 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	releaseall
# 430 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	end
# 431 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 432 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WelcomeSingleBattle:
# 433 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Where the strategies of TRAINERS\n"
# 434 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "are put to the test!\p"
# 435 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Welcome to the BATTLE DOME!\p"
# 436 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I am your guide to the SINGLE BATTLE\n"
# 437 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Tournament.$"
# 438 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 439 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_TakeSinglesChallenge:
# 440 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Would you like to challenge\n"
# 441 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the SINGLE BATTLE Tournament?$"
# 442 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 443 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_HopeToSeeYouAgain:
# 444 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "We hope to see you again.$"
# 445 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 446 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainSinglesChallenge:
# 447 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The SINGLE BATTLE Tournament\n"
# 448 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "is exactly as the name suggests--\l"
# 449 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "a tournament of SINGLE BATTLES.\p"
# 450 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "All participating TRAINERS must\n"
# 451 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "enter three POKéMON each.\p"
# 452 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "In each battle, one of the three\n"
# 453 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "POKéMON must be held in reserve.\p"
# 454 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The other two POKéMON can battle\n"
# 455 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "one at a time.\p"
# 456 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Choose the two battling POKéMON after\n"
# 457 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "examining the opponent's trio.\p"
# 458 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You win the tournament by defeating\n"
# 459 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "four TRAINERS.\p"
# 460 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Battle Points are awarded to\n"
# 461 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the tournament winner.\p"
# 462 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 463 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "tournament, please save the game.\p"
# 464 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 465 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "you will be disqualified.$"
# 466 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 467 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge:
# 468 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Before I show you to the BATTLE DOME,\n"
# 469 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I must save the data. Is that okay?$"
# 470 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 471 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WhichLevelMode:
# 472 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The tournament offers two levels\n"
# 473 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "of challenge, Level 50 and Open Level.\l"
# 474 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Which is your choice?$"
# 475 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 476 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_SelectThreeMons:
# 477 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Now select the three POKéMON that\n"
# 478 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "you wish to enter, please.$"
# 479 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 480 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLvOpen:
# 481 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Excuse me!\p"
# 482 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You don't have three eligible POKéMON.\p"
# 483 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Also, the POKéMON must be holding\n"
# 484 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "different kinds of items.\p"
# 485 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 486 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 487 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 488 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_NotEnoughValidMonsLv50:
# 489 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Excuse me!\p"
# 490 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You don't have three eligible POKéMON.\p"
# 491 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You must have three different POKéMON\n"
# 492 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "of Level 50 or less to enter.\p"
# 493 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They also must be holding different\n"
# 494 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "kinds of items.\p"
# 495 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "EGGS{STR_VAR_1} ineligible.\p"
# 496 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Please come see me when you are ready.$"
# 497 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 498 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ShowYouToBattleDome:
# 499 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I will now show you to\n"
# 500 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the BATTLE DOME.$"
# 501 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 502 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting:
# 503 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Excuse me!\p"
# 504 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You didn't save before you quit your\n"
# 505 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "challenge last time.\p"
# 506 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Because of that, your challenge so far\n"
# 507 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "has been disqualified. Sorry!$"
# 508 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 509 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_CongratsForWinningTourney:
# 510 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Congratulations for winning\n"
# 511 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "your Battle Tournament!$"
# 512 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 513 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Unused
# 514 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_HereIsYourPrize:
# 515 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Here is your prize for your Battle\n"
# 516 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Tournament victory.$"
# 517 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 518 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Used by Verdanturf Tent
# 519 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ReceivedPrize:
# 520 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
# 521 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 522 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 523 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Unused
# 524 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_BagFullMakeRoom:
# 525 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Oh, your BAG appears to be full.\p"
# 526 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Please make room in your BAG, then come\n"
# 527 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "see me.$"
# 528 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 529 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying:
# 530 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Thank you for playing!$"
# 531 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 532 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved:
# 533 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Your record will be saved.\n"
# 534 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Please wait.$"
# 535 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 536 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WeveBeenWaitingForYou:
# 537 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "We've been waiting for you!$"
# 538 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 539 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_OkayToSaveBeforeChallenge2:
# 540 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Before I show you to the BATTLE DOME,\n"
# 541 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I must save the data. Is that okay?$"
# 542 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 543 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WelcomeDoubleBattle:
# 544 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Where the strategies of TRAINERS\n"
# 545 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "are put to the test!\p"
# 546 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Welcome to the BATTLE DOME!\p"
# 547 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I am your guide to the DOUBLE BATTLE\n"
# 548 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Tournament.$"
# 549 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 550 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_TakeDoublesChallenge:
# 551 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Would you like to challenge\n"
# 552 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the DOUBLE BATTLE Tournament?$"
# 553 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 554 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainDoublesChallenge:
# 555 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The DOUBLE BATTLE Tournament\n"
# 556 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "is exactly as the name suggests--\l"
# 557 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "a tournament of DOUBLE BATTLES.\p"
# 558 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "All participating TRAINERS must\n"
# 559 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "enter three POKéMON each.\p"
# 560 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "In each battle, one of the three\n"
# 561 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "POKéMON must be held in reserve.\p"
# 562 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The remaining two POKéMON must take\n"
# 563 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "part in a DOUBLE BATTLE.\p"
# 564 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Choose the two battling POKéMON after\n"
# 565 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "examining the opponent's trio.\p"
# 566 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You win the tournament by defeating\n"
# 567 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "four TRAINERS.\p"
# 568 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Battle Points are awarded to\n"
# 569 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the tournament winner.\p"
# 570 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "If you want to interrupt your\n"
# 571 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "tournament, please save the game.\p"
# 572 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "If you don't save before interrupting,\n"
# 573 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "you will be disqualified.$"
# 574 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 575 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLv50:
# 576 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
# 577 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Level 50 SINGLE BATTLE Tournament.$"
# 578 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 579 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLv50:
# 580 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
# 581 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Level 50 DOUBLE BATTLE Tournament.$"
# 582 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 583 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsSinglesLvOpen:
# 584 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
# 585 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Open Level SINGLE BATTLE Tournament.$"
# 586 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 587 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_PrevTourneyResultsDoublesLvOpen:
# 588 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "They're the results of the last\n"
# 589 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Open Level DOUBLE BATTLE Tournament.$"
# 590 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 591 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_LastWinnerWasTough:
# 592 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Did you see it?\n"
# 593 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The last Battle Tournament?\p"
# 594 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The winner, {STR_VAR_1}, was seriously\n"
# 595 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "tough.\p"
# 596 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You should check out the results\n"
# 597 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "on the monitor beside the PC.$"
# 598 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 599 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_Text_LongDreamedAboutBattleFrontier:
# 600 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The BATTLE FRONTIER…\n"
# 601 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I've long dreamed about a place like it.$"
# 602 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 603 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Functionally unused
# 604 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleDomeSign2:
# 605 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The BATTLE DOME\n"
# 606 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Become the Unbeatable Superstar!$"
# 607 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 608 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
@ Functionally unused
# 609 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_OutsideWest_Text_QuestionMarkUnderConstruction:
# 610 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The ??????\n"
# 611 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Under Construction!$"
# 612 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 613 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_WinnersGainReputation:
# 614 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "When a TRAINER chains tournament\n"
# 615 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "wins at the BATTLE DOME, he or she\l"
# 616 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "gains a reputation as a star.\p"
# 617 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Tough TRAINERS are drawn by that\n"
# 618 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "reputation to the BATTLE DOME.\p"
# 619 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "A true superstar is a TRAINER who\n"
# 620 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "can keep winning tournaments.$"
# 621 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 622 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_TrashedInFirstRound:
# 623 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I ran into one of the tournament\n"
# 624 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "favorites in the very first round.\p"
# 625 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Of course I got trashed…$"
# 626 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 627 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_NeedToCheckOpponentCarefully:
# 628 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "I would've won if I'd kept this POKéMON\n"
# 629 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "held in reserve.\p"
# 630 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You need to check your opponent's\n"
# 631 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "POKéMON carefully before choosing\l"
# 632 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "your battling POKéMON.$"
# 633 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 634 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_CongratsDefeatedTucker:
# 635 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Congratulations!\p"
# 636 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "You defeated the DOME ACE and won\n"
# 637 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the Battle Tournament!$"
# 638 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 639 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_AwardTheseBattlePoints:
# 640 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "In recognition of your strategy--\n"
# 641 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "a thing of beauty it was, too--\l"
# 642 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "we award you these Battle Point(s)!$"
# 643 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 644 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_RecordLastMatch:
# 645 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Would you like to record your\n"
# 646 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "last BATTLE DOME match on your\l"
# 647 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "FRONTIER PASS?$"
# 648 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 649 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_RulesAreListed:
# 650 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The Battle Tournament rules\n"
# 651 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "are listed.$"
# 652 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 653 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ReadWhichHeading:
# 654 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "Which heading do you want to read?$"
# 655 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 656 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainMatchupRules:
# 657 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The tournament matchups are drawn up\n"
# 658 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "based on the toughness of POKéMON\l"
# 659 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "held by TRAINERS.\p"
# 660 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The matchups avoid having tough\n"
# 661 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "TRAINERS face each other right away.$"
# 662 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 663 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree:
# 664 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The tournament chart, or as we call it,\n"
# 665 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the “Tree,” is available for viewing\l"
# 666 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "in the Waiting Room from any guide.\p"
# 667 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The Tournament Tree will provide\n"
# 668 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "several kinds of data.\p"
# 669 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "The data on view includes the previous\n"
# 670 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "tournament's results, the POKéMON held\l"
# 671 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "by TRAINERS, and the battle styles of\l"
# 672 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "TRAINERS.$"
# 673 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"

# 674 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
BattleFrontier_BattleDomeLobby_Text_ExplainDoubleKORules:
# 675 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "If battling POKéMON faint at the same\n"
# 676 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "time--a double KO--in a tournament\l"
# 677 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "match, the REFEREES will review\l"
# 678 "data/maps/BattleFrontier_BattleDomeLobby/scripts.pory"
	.string "the match and declare the winner.$"
