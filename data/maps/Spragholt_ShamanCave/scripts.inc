Spragholt_ShamanCave_MapScripts::
# 2 "data/maps/Spragholt_ShamanCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideFollowingPokemon
# 3 "data/maps/Spragholt_ShamanCave/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Spragholt_ShamanCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Spragholt_ShamanCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Spragholt_ShamanCave/scripts.pory"
	map_script_2 VAR_GAME_INTRO_STAGE, 1, Spragholt_ShamanCave_GettingDraggedIn
	.2byte 0


HideFollowingPokemon::
# 9 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setflag FLAG_TEMP_2
	return


Spragholt_ShamanCave_GetPlaceholderPokemon::
# 13 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 14 "data/maps/Spragholt_ShamanCave/scripts.pory"
	showmonpic SPECIES_ONIX, 10, 3
# 15 "data/maps/Spragholt_ShamanCave/scripts.pory"
	playmoncry SPECIES_ONIX, CRY_MODE_NORMAL
# 16 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_GetPlaceholderPokemon_Text_0, MSGBOX_YESNO
# 17 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Spragholt_ShamanCave_GetPlaceholderPokemon_2
Spragholt_ShamanCave_GetPlaceholderPokemon_1:
# 25 "data/maps/Spragholt_ShamanCave/scripts.pory"
	hidemonpic
# 26 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_GetPlaceholderPokemon_Text_1
# 27 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
# 28 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 29 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement LOCALID_PLACEHOLDER_STARTER_BALL, Spragholt_ShamanCave_GetPlaceholderPokemon_Movement_0
# 30 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 31 "data/maps/Spragholt_ShamanCave/scripts.pory"
	getobjectxy LOCALID_PLACEHOLDER_STARTER_BALL, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 32 "data/maps/Spragholt_ShamanCave/scripts.pory"
	removeobject LOCALID_PLACEHOLDER_STARTER_BALL
# 33 "data/maps/Spragholt_ShamanCave/scripts.pory"
	addobject ONIX_FOLLOW
# 34 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setobjectxy ONIX_FOLLOW, VAR_TEMP_1, VAR_TEMP_2
# 35 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement ONIX_FOLLOW, Spragholt_ShamanCave_GetPlaceholderPokemon_Movement_1
# 36 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	end

Spragholt_ShamanCave_GetPlaceholderPokemon_2:
# 18 "data/maps/Spragholt_ShamanCave/scripts.pory"
	givemon SPECIES_ONIX, 5, ITEM_NONE, ITEM_WEAK_POKEBALL
# 19 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spragholt_ShamanCave_GetPlaceholderPokemon_4
	goto Spragholt_ShamanCave_GetPlaceholderPokemon_1

Spragholt_ShamanCave_GetPlaceholderPokemon_4:
# 20 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 3
# 21 "data/maps/Spragholt_ShamanCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 22 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto Spragholt_ShamanCave_GetPlaceholderPokemon_1


Spragholt_ShamanCave_GettingDraggedIn::
# 41 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 42 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Spragholt_ShamanCave_GettingDraggedIn_Movement_0
# 51 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 52 "data/maps/Spragholt_ShamanCave/scripts.pory"
	call Spragholt_ShamanCave_ChosePokemonSpeech
	return


Spragholt_ShamanCave_GettingCalledOver::
# 56 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 57 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement LOCALID_SHAMAN, Spragholt_ShamanCave_GettingCalledOver_Movement_0
# 58 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 59 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_GettingCalledOver_Text_0
# 60 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 61 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Spragholt_ShamanCave_GettingCalledOver_Movement_1
# 66 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 67 "data/maps/Spragholt_ShamanCave/scripts.pory"
	call Spragholt_ShamanCave_ChosePokemonSpeech
	return


Spragholt_ShamanCave_ChosePokemonSpeech::
# 71 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_ChosePokemonSpeech_Text_0
# 72 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 2
# 73 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 74 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	end


Spragholt_ShamanCave_Trigger_LowerFloorBottleneck::
# 79 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 2
	goto_if_lt Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_2
# 83 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 2
	goto_if_eq Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_4
	return

Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_2:
# 80 "data/maps/Spragholt_ShamanCave/scripts.pory"
	call Spragholt_ShamanCave_GettingCalledOver
	end

Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_4:
# 84 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 85 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_Text_0
# 86 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 87 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_Movement_0
# 88 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 89 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	end


Spragholt_ShamanCave_Shaman::
# 95 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 2
	goto_if_le Spragholt_ShamanCave_Shaman_1
	return

Spragholt_ShamanCave_Shaman_1:
# 96 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 97 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Shaman_Text_0, MSGBOX_NPC
# 98 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	end


# 29 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_GetPlaceholderPokemon_Movement_0:
# 29 "data/maps/Spragholt_ShamanCave/scripts.pory"
	jump_in_place_left_right
	step_end

# 35 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_GetPlaceholderPokemon_Movement_1:
# 35 "data/maps/Spragholt_ShamanCave/scripts.pory"
	face_player
	step_end

# 42 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_GettingDraggedIn_Movement_0:
# 43 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 44 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 44 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 45 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 45 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 46 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_down
# 46 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_down
# 47 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 47 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 47 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 47 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 47 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 48 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 48 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 49 "data/maps/Spragholt_ShamanCave/scripts.pory"
	step_end

# 57 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_GettingCalledOver_Movement_0:
# 57 "data/maps/Spragholt_ShamanCave/scripts.pory"
	emote_exclamation_mark
	step_end

# 61 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_GettingCalledOver_Movement_1:
# 62 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 62 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 62 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 62 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 63 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 63 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 64 "data/maps/Spragholt_ShamanCave/scripts.pory"
	step_end

# 87 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_Movement_0:
# 87 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 87 "data/maps/Spragholt_ShamanCave/scripts.pory"
	step_end

Spragholt_ShamanCave_GetPlaceholderPokemon_Text_0:
# 16 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Take ONIX?$"

Spragholt_ShamanCave_GetPlaceholderPokemon_Text_1:
# 26 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "You received ONIX!$"

Spragholt_ShamanCave_GettingCalledOver_Text_0:
# 59 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Ah, {PLAYER}.\p"
	.string "You're late.\p"
	.string "Come here, will ya?$"

Spragholt_ShamanCave_ChosePokemonSpeech_Text_0:
# 71 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "bla bla bla\p"
	.string "Chose your Pokémon!$"

Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_Text_0:
# 85 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Where are you going? You haven't\n"
	.string "chosen a Pokémon yet!$"

Spragholt_ShamanCave_Shaman_Text_0:
# 97 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Go on then, chose a Pokémon. They are in\n"
	.string "the room behind me.$"
