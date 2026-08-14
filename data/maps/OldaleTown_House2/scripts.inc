# 1 "data/maps/OldaleTown_House2/scripts.pory"

# 2 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_MapScripts::
# 3 "data/maps/OldaleTown_House2/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_House2/scripts.pory"

# 5 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_EventScript_Woman::
# 6 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
# 7 "data/maps/OldaleTown_House2/scripts.pory"
	end
# 8 "data/maps/OldaleTown_House2/scripts.pory"

# 9 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_EventScript_Man::
# 10 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
# 11 "data/maps/OldaleTown_House2/scripts.pory"
	end
# 12 "data/maps/OldaleTown_House2/scripts.pory"

# 13 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_Text_PokemonLevelUp:
# 14 "data/maps/OldaleTown_House2/scripts.pory"
	.string "When POKéMON battle, they eventually\n"
# 15 "data/maps/OldaleTown_House2/scripts.pory"
	.string "level up and become stronger.$"
# 16 "data/maps/OldaleTown_House2/scripts.pory"

# 17 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
# 18 "data/maps/OldaleTown_House2/scripts.pory"
	.string "If the POKéMON with you become\n"
# 19 "data/maps/OldaleTown_House2/scripts.pory"
	.string "stronger, you'll be able to go farther\l"
# 20 "data/maps/OldaleTown_House2/scripts.pory"
	.string "away from here.$"

OldaleTown_House2_EventScript_Locke::
# 25 "data/maps/OldaleTown_House2/scripts.pory"
	lock
# 26 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 1, LockeMovement1
# 27 "data/maps/OldaleTown_House2/scripts.pory"
	waitmovement 0
# 28 "data/maps/OldaleTown_House2/scripts.pory"
	goto_if_unset FLAG_LOCKE, OldaleTown_House2_EventScript_Locke_1
# 59 "data/maps/OldaleTown_House2/scripts.pory"
	lock
# 60 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 1, LockeMovement1
# 61 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_EventScript_Locke_Text_4
# 62 "data/maps/OldaleTown_House2/scripts.pory"
	release
	return

OldaleTown_House2_EventScript_Locke_1:
# 30 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_EventScript_Locke_Text_0
# 31 "data/maps/OldaleTown_House2/scripts.pory"
	yesnobox YES, NO
# 32 "data/maps/OldaleTown_House2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OldaleTown_House2_EventScript_Locke_5
OldaleTown_House2_EventScript_Locke_4:
# 45 "data/maps/OldaleTown_House2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OldaleTown_House2_EventScript_Locke_8
OldaleTown_House2_EventScript_Locke_7:
# 55 "data/maps/OldaleTown_House2/scripts.pory"
	release
	return

OldaleTown_House2_EventScript_Locke_5:
# 34 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_EventScript_Locke_Text_1
# 35 "data/maps/OldaleTown_House2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 36 "data/maps/OldaleTown_House2/scripts.pory"
	giveitem ITEM_INFINITY_CANDY
# 37 "data/maps/OldaleTown_House2/scripts.pory"
	waitfanfare
# 38 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_EventScript_Locke_Text_2
# 43 "data/maps/OldaleTown_House2/scripts.pory"
	setflag FLAG_LOCKE
	goto OldaleTown_House2_EventScript_Locke_4

OldaleTown_House2_EventScript_Locke_8:
# 47 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_EventScript_Locke_Text_3
# 48 "data/maps/OldaleTown_House2/scripts.pory"
	closemessage
# 49 "data/maps/OldaleTown_House2/scripts.pory"
	applymovement 1, Lockemovement2
# 50 "data/maps/OldaleTown_House2/scripts.pory"
	waitmovement 0
	goto OldaleTown_House2_EventScript_Locke_7


# 67 "data/maps/OldaleTown_House2/scripts.pory"
LockeMovement1:
# 69 "data/maps/OldaleTown_House2/scripts.pory"
	face_player
	step_end

# 71 "data/maps/OldaleTown_House2/scripts.pory"
Lockemovement2:
# 73 "data/maps/OldaleTown_House2/scripts.pory"
	face_left
	step_end

OldaleTown_House2_EventScript_Locke_Text_0:
# 30 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Yo, what's up!\pThe name's Locke, Nuz Locke.\nWhat? League..?\pOhh, you mean the Pokémon League!\pNah, too much effort for me.\pAnyway, you like challenges?$"

OldaleTown_House2_EventScript_Locke_Text_1:
# 34 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Hell yeah! Here, take this!$"

OldaleTown_House2_EventScript_Locke_Text_2:
# 38 "data/maps/OldaleTown_House2/scripts.pory"
	.string "That right there is some special candy!\p"
	.string "It powers up your Pokémon quick, but\n"
	.string "only up to a certain amount.\p"
	.string "The stronger you get as a trainer, the\n"
	.string "more you can power up!\p"
	.string "With great power, comes great\n"
	.string "responsiblity...\p"
	.string "Well, good luck on your journey!$"

OldaleTown_House2_EventScript_Locke_Text_3:
# 47 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Ah, yeah. Figures.\p"
	.string "You are not the one.$"

OldaleTown_House2_EventScript_Locke_Text_4:
# 61 "data/maps/OldaleTown_House2/scripts.pory"
	.string "I hope your challenge is going well!$"
