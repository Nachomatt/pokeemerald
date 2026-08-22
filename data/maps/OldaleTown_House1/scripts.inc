# 1 "data/maps/OldaleTown_House1/scripts.pory"

# 2 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_MapScripts::
# 3 "data/maps/OldaleTown_House1/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_House1/scripts.pory"

# 5 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_EventScript_Woman::
# 6 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_Text_LeftPokemonGoesOutFirst, MSGBOX_NPC
# 7 "data/maps/OldaleTown_House1/scripts.pory"
	end
# 8 "data/maps/OldaleTown_House1/scripts.pory"

# 9 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_Text_LeftPokemonGoesOutFirst:
# 10 "data/maps/OldaleTown_House1/scripts.pory"
	.string "When a POKéMON battle starts, the one\n"
# 11 "data/maps/OldaleTown_House1/scripts.pory"
	.string "at the left of the list goes out first.\p"
# 12 "data/maps/OldaleTown_House1/scripts.pory"
	.string "So, when you get more POKéMON in your\n"
# 13 "data/maps/OldaleTown_House1/scripts.pory"
	.string "party, try switching around the order\l"
# 14 "data/maps/OldaleTown_House1/scripts.pory"
	.string "of your POKéMON.\p"
# 15 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It could give you an advantage.$"

EventScript_Route_103_EggLady::
# 20 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 21 "data/maps/OldaleTown_House1/scripts.pory"
	faceplayer
# 22 "data/maps/OldaleTown_House1/scripts.pory"
	goto_if_unset FLAG_EGGLADY, EventScript_Route_103_EggLady_2
# 70 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox EventScript_Route_103_EggLady_Text_3
EventScript_Route_103_EggLady_1:
# 73 "data/maps/OldaleTown_House1/scripts.pory"
	closemessage
# 74 "data/maps/OldaleTown_House1/scripts.pory"
	release
	return

EventScript_Route_103_EggLady_2:
# 24 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox EventScript_Route_103_EggLady_Text_0
# 26 "data/maps/OldaleTown_House1/scripts.pory"
	yesnobox YES, NO
# 27 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Route_103_EggLady_5
# 63 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EventScript_Route_103_EggLady_6
	goto EventScript_Route_103_EggLady_1

EventScript_Route_103_EggLady_5:
# 29 "data/maps/OldaleTown_House1/scripts.pory"
	getpartysize
# 30 "data/maps/OldaleTown_House1/scripts.pory"
	compare VAR_RESULT, 6
# 31 "data/maps/OldaleTown_House1/scripts.pory"
	goto_if_eq EventScript_PartyIsFull
# 32 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox EventScript_Route_103_EggLady_Text_1
# 33 "data/maps/OldaleTown_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 34 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox EventScript_Route_103_EggLady_Text_2
# 35 "data/maps/OldaleTown_House1/scripts.pory"
	random 10
# 36 "data/maps/OldaleTown_House1/scripts.pory"
	switch VAR_RESULT
# 38 "data/maps/OldaleTown_House1/scripts.pory"
	case 0, EventScript_Route_103_EggLady_11
# 40 "data/maps/OldaleTown_House1/scripts.pory"
	case 1, EventScript_Route_103_EggLady_12
# 42 "data/maps/OldaleTown_House1/scripts.pory"
	case 2, EventScript_Route_103_EggLady_13
# 44 "data/maps/OldaleTown_House1/scripts.pory"
	case 3, EventScript_Route_103_EggLady_14
# 46 "data/maps/OldaleTown_House1/scripts.pory"
	case 4, EventScript_Route_103_EggLady_15
# 48 "data/maps/OldaleTown_House1/scripts.pory"
	case 5, EventScript_Route_103_EggLady_16
# 50 "data/maps/OldaleTown_House1/scripts.pory"
	case 6, EventScript_Route_103_EggLady_17
# 52 "data/maps/OldaleTown_House1/scripts.pory"
	case 7, EventScript_Route_103_EggLady_18
# 54 "data/maps/OldaleTown_House1/scripts.pory"
	case 8, EventScript_Route_103_EggLady_19
# 56 "data/maps/OldaleTown_House1/scripts.pory"
	case 9, EventScript_Route_103_EggLady_20
EventScript_Route_103_EggLady_9:
# 59 "data/maps/OldaleTown_House1/scripts.pory"
	waitfanfare
# 60 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox EventScript_Route_103_EggLady_Text_3
# 61 "data/maps/OldaleTown_House1/scripts.pory"
	setflag FLAG_EGGLADY
	goto EventScript_Route_103_EggLady_1

EventScript_Route_103_EggLady_6:
# 65 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox EventScript_Route_103_EggLady_Text_4
	goto EventScript_Route_103_EggLady_1

EventScript_Route_103_EggLady_11:
# 39 "data/maps/OldaleTown_House1/scripts.pory"
	giveegg SPECIES_ELEKID
	goto EventScript_Route_103_EggLady_9

EventScript_Route_103_EggLady_12:
# 41 "data/maps/OldaleTown_House1/scripts.pory"
	giveegg SPECIES_SMOOCHUM
	goto EventScript_Route_103_EggLady_9

EventScript_Route_103_EggLady_13:
# 43 "data/maps/OldaleTown_House1/scripts.pory"
	giveegg SPECIES_MAGBY
	goto EventScript_Route_103_EggLady_9

EventScript_Route_103_EggLady_14:
# 45 "data/maps/OldaleTown_House1/scripts.pory"
	giveegg SPECIES_PICHU
	goto EventScript_Route_103_EggLady_9

EventScript_Route_103_EggLady_15:
# 47 "data/maps/OldaleTown_House1/scripts.pory"
	giveegg SPECIES_IGGLYBUFF
	goto EventScript_Route_103_EggLady_9

EventScript_Route_103_EggLady_16:
# 49 "data/maps/OldaleTown_House1/scripts.pory"
	giveegg SPECIES_CLEFFA
	goto EventScript_Route_103_EggLady_9

EventScript_Route_103_EggLady_17:
# 51 "data/maps/OldaleTown_House1/scripts.pory"
	giveegg SPECIES_WYNAUT
	goto EventScript_Route_103_EggLady_9

EventScript_Route_103_EggLady_18:
# 53 "data/maps/OldaleTown_House1/scripts.pory"
	giveegg SPECIES_TYROGUE
	goto EventScript_Route_103_EggLady_9

EventScript_Route_103_EggLady_19:
# 55 "data/maps/OldaleTown_House1/scripts.pory"
	giveegg SPECIES_TOGEPI
	goto EventScript_Route_103_EggLady_9

EventScript_Route_103_EggLady_20:
# 57 "data/maps/OldaleTown_House1/scripts.pory"
	giveegg SPECIES_AZURILL
	goto EventScript_Route_103_EggLady_9


EventScript_PartyIsFull::
# 79 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox EventScript_PartyIsFull_Text_0
# 80 "data/maps/OldaleTown_House1/scripts.pory"
	closemessage
# 81 "data/maps/OldaleTown_House1/scripts.pory"
	release
	return


EventScript_Route_103_EggLady_Text_0:
# 24 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Ah. Hello there young trainer.\p"
	.string "Are you just starting your adventure?\n"
	.string "I have a request for you.\p"
	.string "I have this egg my sister gave to me,\n"
	.string "she lives in OLDALE TOWN.\p"
	.string "Would you please take care of it?$"

EventScript_Route_103_EggLady_Text_1:
# 32 "data/maps/OldaleTown_House1/scripts.pory"
	.string "I knew right away you'd know what to do.\p"
	.string "Please take good care of it!$"

EventScript_Route_103_EggLady_Text_2:
# 34 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Obtained the egg from the kind lady!$"

EventScript_Route_103_EggLady_Text_3:
# 60 "data/maps/OldaleTown_House1/scripts.pory"
	.string "I hope you take good care of that\n"
	.string "little one!$"

EventScript_Route_103_EggLady_Text_4:
# 65 "data/maps/OldaleTown_House1/scripts.pory"
	.string "I see. I will hold onto it then.\p"
	.string "If you change your mind, please return.$"

EventScript_PartyIsFull_Text_0:
# 79 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Oh dear. It seems your party is full.\p"
	.string "Please come back when you have some\n"
	.string "room.$"
