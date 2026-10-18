# 1 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 2 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_MapScripts::
# 3 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 5 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove::
# 6 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 7 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 8 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
# 9 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	switch VAR_RESULT
# 10 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 11 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 12 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 13 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 14 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
# 15 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 16 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 17 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 18 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special IsSelectedMonEgg
# 19 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
# 20 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, 0, FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
# 21 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
# 22 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 23 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 24 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
# 25 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
# 26 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 27 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, 0, FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 28 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
# 29 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 30 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 31 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 32 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 33 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
# 34 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 35 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 36 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 37 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 38 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg::
# 39 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
# 40 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 41 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 42 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 43 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
# 44 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
# 45 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
# 46 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 47 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 48 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor:
# 49 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm the MOVE TUTOR.\p"
# 50 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I know all the moves that POKéMON\n"
# 51 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "learn--every one of them--and I can\l"
# 52 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "teach POKéMON those moves.\p"
# 53 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach a move to a POKéMON\n"
# 54 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "of yours if you'd like.\p"
# 55 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'll do it for a HEART SCALE.\n"
# 56 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm collecting those now.$"
# 57 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 58 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
# 59 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Oh! That's it! That's an honest to\n"
# 60 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "goodness HEART SCALE!\p"
# 61 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Let me guess, you want me to teach\n"
# 62 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "a move?$"
# 63 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 64 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon:
# 65 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which POKéMON needs tutoring?$"
# 66 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 67 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove:
# 68 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which move should I teach?$"
# 69 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 70 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
# 71 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Sorry…\p"
# 72 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "It doesn't appear as if I have any move\n"
# 73 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach that POKéMON.$"
# 74 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 75 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale:
# 76 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} handed over one HEART SCALE\n"
# 77 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "in exchange.$"
# 78 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 79 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
# 80 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "If your POKéMON need to learn a move,\n"
# 81 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "come back with a HEART SCALE.$"
# 82 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 83 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg:
# 84 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hunh? There isn't a single move that\n"
# 85 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach an EGG.$"

EventScript_FallarborTown_MoveRelearner::
# 90 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lock
# 91 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	faceplayer
# 92 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_Text_0
# 94 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_Text_1
# 96 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_Text_2
# 98 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 99 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_FallarborTown_MoveRelearner_ComeBackLater
# 100 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_FallarborTown_MoveRelearner_AskForMoves
	return


EventScript_FallarborTown_MoveRelearner_ComeBackLater::
# 105 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_ComeBackLater_Text_0
# 108 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	closemessage
# 109 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	return


EventScript_FallarborTown_MoveRelearner_ComebackAnothertime::
# 114 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_ComebackAnothertime_Text_0
# 116 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	clearflag FLAG_EGG_MOVES_TUTOR
# 117 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	closemessage
# 118 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	return


EventScript_FallarborTown_MoveRelearner_AskForMoves::
# 123 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	applymovement LOCALID_MOVE_RELEARNER_GUY, MoveRelearnerWoah
# 124 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	playse SE_PIN
# 125 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitmovement 0
# 126 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_AskForMoves_Text_0
# 129 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	yesnobox YES, NO
# 130 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_FallarborTown_MoveRelearner_AskForMoves_2
# 134 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_FallarborTown_MoveRelearner_AskForMoves_3
EventScript_FallarborTown_MoveRelearner_AskForMoves_1:
# 138 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	closemessage
# 139 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	return

EventScript_FallarborTown_MoveRelearner_AskForMoves_2:
# 132 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_TeachEggMoves
	goto EventScript_FallarborTown_MoveRelearner_AskForMoves_1

EventScript_FallarborTown_MoveRelearner_AskForMoves_3:
# 136 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_AskForMoves2
	goto EventScript_FallarborTown_MoveRelearner_AskForMoves_1


EventScript_FallarborTown_MoveRelearner_AskForMoves2::
# 144 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_AskForMoves2_Text_0
# 146 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	yesnobox YES, NO
# 147 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_FallarborTown_MoveRelearner_AskForMoves2_2
# 151 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_FallarborTown_MoveRelearner_AskForMoves2_3
EventScript_FallarborTown_MoveRelearner_AskForMoves2_1:
# 155 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	closemessage
# 156 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	return

EventScript_FallarborTown_MoveRelearner_AskForMoves2_2:
# 149 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_TeachLevelUpMoves
	goto EventScript_FallarborTown_MoveRelearner_AskForMoves2_1

EventScript_FallarborTown_MoveRelearner_AskForMoves2_3:
# 153 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_ComebackAnothertime
	goto EventScript_FallarborTown_MoveRelearner_AskForMoves2_1


EventScript_FallarborTown_MoveRelearner_AskForMoves3::
# 162 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_AskForMoves3_Text_0
# 164 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	yesnobox YES, NO
# 165 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_FallarborTown_MoveRelearner_AskForMoves3_2
# 169 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_FallarborTown_MoveRelearner_AskForMoves3_3
EventScript_FallarborTown_MoveRelearner_AskForMoves3_1:
# 173 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	closemessage
# 174 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	return

EventScript_FallarborTown_MoveRelearner_AskForMoves3_2:
# 167 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_TeachEggMoves
	goto EventScript_FallarborTown_MoveRelearner_AskForMoves3_1

EventScript_FallarborTown_MoveRelearner_AskForMoves3_3:
# 171 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_AskForMoves2
	goto EventScript_FallarborTown_MoveRelearner_AskForMoves3_1


EventScript_FallarborTown_MoveRelearner_TeachEggMoves::
# 180 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setflag ( FLAG_EGG_MOVES_TUTOR )
# 181 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_TeachEggMoves_Text_0
# 183 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_MoveTeaching
# 184 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, 0, EventScript_FallarborTown_MoveRelearner_TeachEggMoves
# 185 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_TeachEggMoves_Text_1
# 187 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 188 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_WelcomeAnytime
	return


EventScript_FallarborTown_MoveRelearner_MoveTeaching::
# 193 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 194 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 195 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special IsSelectedMonEgg
# 196 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, EventScript_FallarborTown_MoveRelearnersHouse_CantTeachEgg
# 197 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_set FLAG_EGG_MOVES_TUTOR, EventScript_FallarborTown_MoveRelearner_MoveTeaching_2
# 203 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, 0, EventScript_FallarborTown_MoveRelearnersHouse_NoMoveToTeachMon
EventScript_FallarborTown_MoveRelearner_MoveTeaching_1:
# 205 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_MoveTeaching_Text_0
# 207 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 208 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	clearflag FLAG_EGG_MOVES_TUTOR
# 209 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_AskForMoves3
	return

EventScript_FallarborTown_MoveRelearner_MoveTeaching_2:
# 199 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, 0, EventScript_FallarborTown_MoveRelearnersHouse_NoEggMoveToTeachMon
	goto EventScript_FallarborTown_MoveRelearner_MoveTeaching_1


EventScript_FallarborTown_MoveRelearner_TeachLevelUpMoves::
# 215 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_TeachLevelUpMoves_Text_0
# 217 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_MoveTeaching
# 218 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, 0, EventScript_FallarborTown_MoveRelearner_TeachLevelUpMoves
# 219 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_TeachEggMoves_Text_1
# 221 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 222 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto EventScript_FallarborTown_MoveRelearner_WelcomeAnytime
	return


EventScript_FallarborTown_MoveRelearner_WelcomeAnytime::
# 227 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearner_WelcomeAnytime_Text_0
# 230 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	clearflag FLAG_EGG_MOVES_TUTOR
# 231 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	closemessage
# 232 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	return


EventScript_FallarborTown_MoveRelearnersHouse_CantTeachEgg::
# 237 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearnersHouse_CantTeachEgg_Text_0
# 241 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	clearflag FLAG_EGG_MOVES_TUTOR
# 242 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	closemessage
# 243 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	return


EventScript_FallarborTown_MoveRelearnersHouse_NoMoveToTeachMon::
# 247 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearnersHouse_NoMoveToTeachMon_Text_0
# 251 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	clearflag FLAG_EGG_MOVES_TUTOR
# 252 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	closemessage
# 253 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	return


EventScript_FallarborTown_MoveRelearnersHouse_NoEggMoveToTeachMon::
# 258 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox EventScript_FallarborTown_MoveRelearnersHouse_NoEggMoveToTeachMon_Text_0
# 265 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	clearflag FLAG_EGG_MOVES_TUTOR
# 266 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	closemessage
# 267 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	return


# 270 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
MoveRelearnerWoah:
# 271 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	emote_exclamation_mark
	step_end

EventScript_FallarborTown_MoveRelearner_Text_0:
# 92 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Zzzz... Huh? Oh, I'm the MOVE RELEARNER.\n"
	.string "I know every move your POKÉMON learn!$"

EventScript_FallarborTown_MoveRelearner_Text_1:
# 94 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Pretty neat huh? I can make them \n"
	.string "remember these moves, but not for free!$"

EventScript_FallarborTown_MoveRelearner_Text_2:
# 96 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "You know HEART SCALES? I loove those.\n"
	.string "If you have any, I'll help you out.$"

EventScript_FallarborTown_MoveRelearner_ComeBackLater_Text_0:
# 105 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Aww, don't have any? That's cool.\n"
	.string "If you have some, you know where to\l"
	.string "find me!$"

EventScript_FallarborTown_MoveRelearner_ComebackAnothertime_Text_0:
# 114 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "That's cool. If you need any moves, you \n"
	.string "know where to find me!$"

EventScript_FallarborTown_MoveRelearner_AskForMoves_Text_0:
# 126 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Yo! You have some HEART SCALES! sweet!\n"
	.string "Alright. would you like to re-learn some \l"
	.string "egg moves?$"

EventScript_FallarborTown_MoveRelearner_AskForMoves2_Text_0:
# 144 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Would you like to re-learn some \n"
	.string "level-up moves?$"

EventScript_FallarborTown_MoveRelearner_AskForMoves3_Text_0:
# 162 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Would you like to re-learn some \n"
	.string "egg moves?$"

EventScript_FallarborTown_MoveRelearner_TeachEggMoves_Text_0:
# 181 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Alright! What POKéMON would you like\n"
	.string "to make remember an egg move?$"

EventScript_FallarborTown_MoveRelearner_TeachEggMoves_Text_1:
# 185 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} handed the MOVE RELEARNER a\n"
	.string "HEART SCALE.$"

EventScript_FallarborTown_MoveRelearner_MoveTeaching_Text_0:
# 205 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which move would you like to make \n"
	.string "your POKéMON remember?$"

EventScript_FallarborTown_MoveRelearner_TeachLevelUpMoves_Text_0:
# 215 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Alright! What POKéMON would you like\n"
	.string "to make remember a move?$"

EventScript_FallarborTown_MoveRelearner_WelcomeAnytime_Text_0:
# 227 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hope you're happy with that move! Come\n"
	.string "back with a HEART SCALE if you need any\l"
	.string "other moves!$"

EventScript_FallarborTown_MoveRelearnersHouse_CantTeachEgg_Text_0:
# 237 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Woahhh dude, is that an EGG?\n"
	.string "Radd. I can't teach those anything\l"
	.string "though. Come back when it's hatched,\l"
	.string "okay? Then I'll be able to help you.$"

EventScript_FallarborTown_MoveRelearnersHouse_NoMoveToTeachMon_Text_0:
# 247 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Aww man. I can't teach that guy any\n"
	.string "moves. Maybe come back when it's a\l"
	.string "little stronger? Then I'll be able to\l"
	.string "help you out.$"

EventScript_FallarborTown_MoveRelearnersHouse_NoEggMoveToTeachMon_Text_0:
# 258 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Woahh man. I don't know any egg moves\n"
	.string "that guy can learn! Total bummer. Its\l"
	.string "parents didn't even bother. Probably\l"
	.string "just raised itself. Kinda badass,\l"
	.string "honestly.\l"
	.string "Anyway, come back whenever you need\l"
	.string "any move re-learning.$"
