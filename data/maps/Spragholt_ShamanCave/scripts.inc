Spragholt_ShamanCave_MapScripts::
	.byte 0


Spragholt_ShamanCave_GetPlaceholderPokemon::
# 4 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 5 "data/maps/Spragholt_ShamanCave/scripts.pory"
	showmonpic SPECIES_ONIX, 10, 3
# 6 "data/maps/Spragholt_ShamanCave/scripts.pory"
	playmoncry SPECIES_ONIX, CRY_MODE_NORMAL
# 7 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_GetPlaceholderPokemon_Text_0, MSGBOX_YESNO
# 8 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Spragholt_ShamanCave_GetPlaceholderPokemon_2
Spragholt_ShamanCave_GetPlaceholderPokemon_1:
# 16 "data/maps/Spragholt_ShamanCave/scripts.pory"
	hidemonpic
# 17 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 18 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	end

Spragholt_ShamanCave_GetPlaceholderPokemon_2:
# 9 "data/maps/Spragholt_ShamanCave/scripts.pory"
	givemon SPECIES_ONIX, 5
# 10 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spragholt_ShamanCave_GetPlaceholderPokemon_4
	goto Spragholt_ShamanCave_GetPlaceholderPokemon_1

Spragholt_ShamanCave_GetPlaceholderPokemon_4:
# 11 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_GetPlaceholderPokemon_Text_1
# 12 "data/maps/Spragholt_ShamanCave/scripts.pory"
	removeobject LOCALID_PLACEHOLDER_STARTER_BALL
# 13 "data/maps/Spragholt_ShamanCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
	goto Spragholt_ShamanCave_GetPlaceholderPokemon_1


Spragholt_ShamanCave_GetPlaceholderPokemon_Text_0:
# 7 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Take ONIX?$"

Spragholt_ShamanCave_GetPlaceholderPokemon_Text_1:
# 11 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "You received ONIX!$"
