# 1 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 2 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_MapScripts::
# 3 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 5 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner::
# 6 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lockall
# 7 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	applymovement LOCALID_MOVE_RELEARNER, Common_Movement_FacePlayer
# 8 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
# 9 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_set FLAG_TEMP_1, FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
# 10 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor, MSGBOX_DEFAULT
# 11 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setflag FLAG_TEMP_1
# 12 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove
# 13 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 14 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 15 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove::
# 16 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 17 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 18 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
# 19 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	switch VAR_RESULT
# 20 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 21 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 22 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 23 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 24 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
# 25 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 26 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 27 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 28 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special IsSelectedMonEgg
# 29 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
# 30 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, 0, FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
# 31 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
# 32 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 33 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 34 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
# 35 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
# 36 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 37 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, 0, FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 38 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
# 39 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 40 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 41 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 42 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 43 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
# 44 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 45 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 46 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 47 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 48 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg::
# 49 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
# 50 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 51 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 52 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 53 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
# 54 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
# 55 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
# 56 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 57 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 58 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor:
# 59 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm the MOVE TUTOR.\p"
# 60 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I know all the moves that POKéMON\n"
# 61 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "learn--every one of them--and I can\l"
# 62 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "teach POKéMON those moves.\p"
# 63 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach a move to a POKéMON\n"
# 64 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "of yours if you'd like.\p"
# 65 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'll do it for a HEART SCALE.\n"
# 66 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm collecting those now.$"
# 67 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 68 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
# 69 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Oh! That's it! That's an honest to\n"
# 70 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "goodness HEART SCALE!\p"
# 71 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Let me guess, you want me to teach\n"
# 72 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "a move?$"
# 73 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 74 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon:
# 75 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which POKéMON needs tutoring?$"
# 76 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 77 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove:
# 78 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which move should I teach?$"
# 79 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 80 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
# 81 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Sorry…\p"
# 82 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't appear as if I have any move\n"
# 83 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach that POKéMON.$"
# 84 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 85 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale:
# 86 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} handed over one HEART SCALE\n"
# 87 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "in exchange.$"
# 88 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 89 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
# 90 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "If your POKéMON need to learn a move,\n"
# 91 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "come back with a HEART SCALE.$"
# 92 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 93 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg:
# 94 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hunh? There isn't a single move that\n"
# 95 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach an EGG.$"

EventScript_FallarborTown_MoveRelearner::
# 100 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lock
# 101 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	faceplayer
# 102 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_Text_0
# 104 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_Text_1
# 106 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_Text_2
# 108 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 109 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_FallarborTown_MoveRelearner_ComeBackLater
# 110 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_FallarborTown_MoveRelearner_AskForMoves
	return


EventScript_FallarborTown_MoveRelearner_ComeBackLater::
# 115 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_ComeBackLater_Text_0
# 118 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	closemessage
# 119 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	return


EventScript_FallarborTown_MoveRelearner_ComebackAnothertime::
# 124 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_ComebackAnothertime_Text_0
# 126 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	clearflag FLAG_EGG_MOVES_TUTOR
# 127 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	closemessage
# 128 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	return


EventScript_FallarborTown_MoveRelearner_AskForMoves::
# 133 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	applymovement LOCALID_MOVE_RELEARNER_GUY, MoveRelearnerWoah
# 134 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playse SE_PIN
# 135 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
# 136 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_AskForMoves_Text_0
# 139 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	yesnobox YES, NO
# 140 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_FallarborTown_MoveRelearner_AskForMoves_2
# 144 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_FallarborTown_MoveRelearner_AskForMoves_3
EventScript_FallarborTown_MoveRelearner_AskForMoves_1:
# 148 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	closemessage
# 149 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	return

EventScript_FallarborTown_MoveRelearner_AskForMoves_2:
# 142 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_TeachEggMoves
	goto EventScript_FallarborTown_MoveRelearner_AskForMoves_1

EventScript_FallarborTown_MoveRelearner_AskForMoves_3:
# 146 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_AskForMoves2
	goto EventScript_FallarborTown_MoveRelearner_AskForMoves_1


EventScript_FallarborTown_MoveRelearner_AskForMoves2::
# 154 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_AskForMoves2_Text_0
# 156 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	yesnobox YES, NO
# 157 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_FallarborTown_MoveRelearner_AskForMoves2_2
# 161 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_FallarborTown_MoveRelearner_AskForMoves2_3
EventScript_FallarborTown_MoveRelearner_AskForMoves2_1:
# 165 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	closemessage
# 166 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	return

EventScript_FallarborTown_MoveRelearner_AskForMoves2_2:
# 159 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_TeachLevelUpMoves
	goto EventScript_FallarborTown_MoveRelearner_AskForMoves2_1

EventScript_FallarborTown_MoveRelearner_AskForMoves2_3:
# 163 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_ComebackAnothertime
	goto EventScript_FallarborTown_MoveRelearner_AskForMoves2_1


EventScript_FallarborTown_MoveRelearner_AskForMoves3::
# 172 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_AskForMoves3_Text_0
# 174 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	yesnobox YES, NO
# 175 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_FallarborTown_MoveRelearner_AskForMoves3_2
# 179 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_FallarborTown_MoveRelearner_AskForMoves3_3
EventScript_FallarborTown_MoveRelearner_AskForMoves3_1:
# 183 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	closemessage
# 184 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	return

EventScript_FallarborTown_MoveRelearner_AskForMoves3_2:
# 177 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_TeachEggMoves
	goto EventScript_FallarborTown_MoveRelearner_AskForMoves3_1

EventScript_FallarborTown_MoveRelearner_AskForMoves3_3:
# 181 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_AskForMoves2
	goto EventScript_FallarborTown_MoveRelearner_AskForMoves3_1


EventScript_FallarborTown_MoveRelearner_TeachEggMoves::
# 190 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setflag ( FLAG_EGG_MOVES_TUTOR )
# 191 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_TeachEggMoves_Text_0
# 193 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_MoveTeaching
# 194 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, 0, EventScript_FallarborTown_MoveRelearner_TeachEggMoves
# 195 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_TeachEggMoves_Text_1
# 197 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 198 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_WelcomeAnytime
	return


EventScript_FallarborTown_MoveRelearner_MoveTeaching::
# 203 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 204 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 205 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special IsSelectedMonEgg
# 206 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_FallarborTown_MoveRelearnersHouse_CantTeachEgg
# 207 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_set FLAG_EGG_MOVES_TUTOR, EventScript_FallarborTown_MoveRelearner_MoveTeaching_2
# 213 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, 0, EventScript_FallarborTown_MoveRelearnersHouse_NoMoveToTeachMon
EventScript_FallarborTown_MoveRelearner_MoveTeaching_1:
# 215 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_MoveTeaching_Text_0
# 217 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 218 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	clearflag FLAG_EGG_MOVES_TUTOR
# 219 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_AskForMoves3
	return

EventScript_FallarborTown_MoveRelearner_MoveTeaching_2:
# 209 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, 0, EventScript_FallarborTown_MoveRelearnersHouse_NoEggMoveToTeachMon
	goto EventScript_FallarborTown_MoveRelearner_MoveTeaching_1


EventScript_FallarborTown_MoveRelearner_TeachLevelUpMoves::
# 225 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_TeachLevelUpMoves_Text_0
# 227 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_MoveTeaching
# 228 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, 0, EventScript_FallarborTown_MoveRelearner_TeachLevelUpMoves
# 229 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_TeachEggMoves_Text_1
# 231 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 232 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_WelcomeAnytime
	return


EventScript_FallarborTown_MoveRelearner_WelcomeAnytime::
# 237 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_WelcomeAnytime_Text_0
# 240 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	clearflag FLAG_EGG_MOVES_TUTOR
# 241 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	closemessage
# 242 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	return


EventScript_FallarborTown_MoveRelearnersHouse_CantTeachEgg::
# 247 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearnersHouse_CantTeachEgg_Text_0
# 251 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	clearflag FLAG_EGG_MOVES_TUTOR
# 252 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	closemessage
# 253 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	return


EventScript_FallarborTown_MoveRelearnersHouse_NoMoveToTeachMon::
# 257 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearnersHouse_NoMoveToTeachMon_Text_0
# 261 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	clearflag FLAG_EGG_MOVES_TUTOR
# 262 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	closemessage
# 263 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	return


EventScript_FallarborTown_MoveRelearnersHouse_NoEggMoveToTeachMon::
# 268 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearnersHouse_NoEggMoveToTeachMon_Text_0
# 275 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	clearflag FLAG_EGG_MOVES_TUTOR
# 276 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	closemessage
# 277 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	return


# 280 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
MoveRelearnerWoah:
# 281 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	emote_exclamation_mark
	step_end

EventScript_FallarborTown_MoveRelearner_Text_0:
# 102 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Zzzz... Huh? Oh, I'm the MOVE RELEARNER.\n"
	.string "I know every move your POKÉMON learn!$"

EventScript_FallarborTown_MoveRelearner_Text_1:
# 104 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Pretty neat huh? I can make them \n"
	.string "remember these moves, but not for free!$"

EventScript_FallarborTown_MoveRelearner_Text_2:
# 106 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "You know HEART SCALES? I loove those.\n"
	.string "If you have any, I'll help you out.$"

EventScript_FallarborTown_MoveRelearner_ComeBackLater_Text_0:
# 115 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Aww, don't have any? That's cool.\n"
	.string "If you have some, you know where to\l"
	.string "find me!$"

EventScript_FallarborTown_MoveRelearner_ComebackAnothertime_Text_0:
# 124 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "That's cool. If you need any moves, you \n"
	.string "know where to find me!$"

EventScript_FallarborTown_MoveRelearner_AskForMoves_Text_0:
# 136 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Yo! You have some HEART SCALES! sweet!\n"
	.string "Alright. would you like to re-learn some \l"
	.string "egg moves?$"

EventScript_FallarborTown_MoveRelearner_AskForMoves2_Text_0:
# 154 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Would you like to re-learn some \n"
	.string "level-up moves?$"

EventScript_FallarborTown_MoveRelearner_AskForMoves3_Text_0:
# 172 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Would you like to re-learn some \n"
	.string "egg moves?$"

EventScript_FallarborTown_MoveRelearner_TeachEggMoves_Text_0:
# 191 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Alright! What POKÉMON would you like\n"
	.string "to make remember an egg move?$"

EventScript_FallarborTown_MoveRelearner_TeachEggMoves_Text_1:
# 195 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} handed the MOVE RELEARNER a\n"
	.string "HEART SCALE.$"

EventScript_FallarborTown_MoveRelearner_MoveTeaching_Text_0:
# 215 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which move would you like to make \n"
	.string "your POKéMON remember?$"

EventScript_FallarborTown_MoveRelearner_TeachLevelUpMoves_Text_0:
# 225 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Alright! What POKÉMON would you like\n"
	.string "to make remember a move?$"

EventScript_FallarborTown_MoveRelearner_WelcomeAnytime_Text_0:
# 237 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hope you're happy with that move! Come\n"
	.string "back with a HEART SCALE if you need any\l"
	.string "other moves!$"

EventScript_FallarborTown_MoveRelearnersHouse_CantTeachEgg_Text_0:
# 247 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Woahhh dude, is that an EGG?\n"
	.string "Radd. I can't teach those anything\l"
	.string "though. Come back when it's hatched,\l"
	.string "okay? Then I'll be able to help you.$"

EventScript_FallarborTown_MoveRelearnersHouse_NoMoveToTeachMon_Text_0:
# 257 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Aww man. I can't teach that guy any\n"
	.string "moves. Maybe come back when it's a\l"
	.string "little stronger? Then I'll be able to\l"
	.string "help you out.$"

EventScript_FallarborTown_MoveRelearnersHouse_NoEggMoveToTeachMon_Text_0:
# 268 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Woahh man. I don't know any egg moves\n"
	.string "that guy can learn! Total bummer. Its\l"
	.string "parents didn't even bother. Probably\l"
	.string "just raised itself. Kinda badass,\l"
	.string "honestly.\l"
	.string "Anyway, come back whenever you need\l"
	.string "any move re-learning.$"
