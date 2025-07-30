Spragholt_ShamanCave_MapScripts::
# 17 "data/maps/Spragholt_ShamanCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HideFollowingPokemon
# 18 "data/maps/Spragholt_ShamanCave/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Spragholt_ShamanCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Spragholt_ShamanCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 19 "data/maps/Spragholt_ShamanCave/scripts.pory"
	map_script_2 VAR_GAME_INTRO_STAGE, 1, GettingDraggedIn
	.2byte 0


HideFollowingPokemon:
# 24 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setflag FLAG_TEMP_2
	return


Spragholt_ShamanCave_Shaman::
# 29 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 30 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 2
	goto_if_le Spragholt_ShamanCave_Shaman_2
Spragholt_ShamanCave_Shaman_1:
# 39 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	return

Spragholt_ShamanCave_Shaman_2:
# 31 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Shaman_Text_0, MSGBOX_NPC
# 36 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
	goto Spragholt_ShamanCave_Shaman_1


Spragholt_ShamanCave_PlaceholderPokemon::
# 43 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 44 "data/maps/Spragholt_ShamanCave/scripts.pory"
	showmonpic SPECIES_ONIX, 10, 3
# 45 "data/maps/Spragholt_ShamanCave/scripts.pory"
	playmoncry SPECIES_ONIX, CRY_MODE_NORMAL
# 46 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_PlaceholderPokemon_Text_0, MSGBOX_YESNO
# 47 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Spragholt_ShamanCave_PlaceholderPokemon_2
Spragholt_ShamanCave_PlaceholderPokemon_1:
# 55 "data/maps/Spragholt_ShamanCave/scripts.pory"
	hidemonpic
# 56 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_PlaceholderPokemon_Text_1
# 57 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
# 58 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 59 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement LOCALID_PLACEHOLDER_STARTER_BALL, Spragholt_ShamanCave_PlaceholderPokemon_Movement_0
# 60 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 61 "data/maps/Spragholt_ShamanCave/scripts.pory"
	getobjectxy LOCALID_PLACEHOLDER_STARTER_BALL, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 62 "data/maps/Spragholt_ShamanCave/scripts.pory"
	removeobject LOCALID_PLACEHOLDER_STARTER_BALL
# 63 "data/maps/Spragholt_ShamanCave/scripts.pory"
	addobject ONIX_FOLLOW
# 64 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setobjectxy ONIX_FOLLOW, VAR_TEMP_1, VAR_TEMP_2
# 65 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement ONIX_FOLLOW, Spragholt_ShamanCave_PlaceholderPokemon_Movement_1
# 66 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	end

Spragholt_ShamanCave_PlaceholderPokemon_2:
# 48 "data/maps/Spragholt_ShamanCave/scripts.pory"
	givemon SPECIES_ONIX, 5, ITEM_NONE, ITEM_WEAK_POKEBALL
# 49 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spragholt_ShamanCave_PlaceholderPokemon_4
	goto Spragholt_ShamanCave_PlaceholderPokemon_1

Spragholt_ShamanCave_PlaceholderPokemon_4:
# 50 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 3
# 51 "data/maps/Spragholt_ShamanCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 52 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto Spragholt_ShamanCave_PlaceholderPokemon_1


ChosePokemonSpeech:
# 71 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox ChosePokemonSpeech_Text_0
# 81 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 2
# 82 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
	return


Spragholt_ShamanCave_Trigger_LowerFloorBottleneck::
# 86 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 2
	goto_if_lt Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_1
# 88 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 2
	goto_if_eq Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_2
	return

Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_1:
# 87 "data/maps/Spragholt_ShamanCave/scripts.pory"
	call GettingCalledOver
	return

Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_2:
# 89 "data/maps/Spragholt_ShamanCave/scripts.pory"
	call GettingCalledBack
	return


Spragholt_ShamanCave_Trigger_PokemonCaveEntrance::
# 94 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 3
	goto_if_eq Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_1
	return

Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_1:
# 95 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 96 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement LOCALID_SHAMAN, Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_0
# 97 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 98 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Text_0
# 104 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 105 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 4
# 106 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement LOCALID_SHAMAN, Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_1
# 107 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 108 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	return


GettingDraggedIn:
# 113 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 114 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GettingDraggedIn_Movement_0
# 123 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 124 "data/maps/Spragholt_ShamanCave/scripts.pory"
	call ChosePokemonSpeech
# 125 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	return


GettingCalledOver:
# 129 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 130 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement LOCALID_SHAMAN, GettingCalledOver_Movement_0
# 131 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 132 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox GettingCalledOver_Text_0
# 136 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 137 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GettingCalledOver_Movement_1
# 142 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 143 "data/maps/Spragholt_ShamanCave/scripts.pory"
	call ChosePokemonSpeech
# 144 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	return


GettingCalledBack:
# 148 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 149 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox GettingCalledBack_Text_0
# 153 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 154 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GettingCalledBack_Movement_0
# 155 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 156 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	return


# 59 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_PlaceholderPokemon_Movement_0:
# 59 "data/maps/Spragholt_ShamanCave/scripts.pory"
	jump_in_place_left_right
	step_end

# 65 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_PlaceholderPokemon_Movement_1:
# 65 "data/maps/Spragholt_ShamanCave/scripts.pory"
	face_player
	step_end

# 96 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_0:
# 96 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_right
# 96 "data/maps/Spragholt_ShamanCave/scripts.pory"
	face_up
	step_end

# 106 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_1:
# 106 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_left
# 106 "data/maps/Spragholt_ShamanCave/scripts.pory"
	face_right
	step_end

# 114 "data/maps/Spragholt_ShamanCave/scripts.pory"
GettingDraggedIn_Movement_0:
# 115 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 116 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 116 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 117 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 117 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 118 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_down
# 118 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_down
# 119 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 119 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 119 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 119 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 119 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 120 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 120 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 121 "data/maps/Spragholt_ShamanCave/scripts.pory"
	step_end

# 130 "data/maps/Spragholt_ShamanCave/scripts.pory"
GettingCalledOver_Movement_0:
# 130 "data/maps/Spragholt_ShamanCave/scripts.pory"
	emote_exclamation_mark
	step_end

# 137 "data/maps/Spragholt_ShamanCave/scripts.pory"
GettingCalledOver_Movement_1:
# 138 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 138 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 138 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 138 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 139 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 139 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 140 "data/maps/Spragholt_ShamanCave/scripts.pory"
	step_end

# 154 "data/maps/Spragholt_ShamanCave/scripts.pory"
GettingCalledBack_Movement_0:
# 154 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 154 "data/maps/Spragholt_ShamanCave/scripts.pory"
	step_end

Spragholt_ShamanCave_Shaman_Text_0:
# 32 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Still here?\p"
	.string "What, need me to hold your hand?\n"
	.string "They're behind me!\p"
	.string "Big ones, small ones... all with teeth and\n"
	.string "attitude.\p"
	.string "Pick one, before they start pickin' each\n"
	.string "other.$"

Spragholt_ShamanCave_PlaceholderPokemon_Text_0:
# 46 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Take ONIX?$"

Spragholt_ShamanCave_PlaceholderPokemon_Text_1:
# 56 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "You received ONIX!$"

ChosePokemonSpeech_Text_0:
# 72 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "There you are.\p"
	.string "Took you long enough - my joints are\n"
	.string "older than this cave, ya know.\p"
	.string "Your father's not thrilled. Didn't say\n"
	.string "much, but he didn't need to.\p"
	.string "He's not angry at you. Not really.\p"
	.string "Just doesn't know what to do with all\n"
	.string "that worry.\p"
	.string "Don't hold it against him.\p"
	.string "Watching your child walk toward\n"
	.string "danger... no easy thing.\p"
	.string "But here you are anyway. Stubborn as\n"
	.string "dried clay.\p"
	.string "Behind me are three Pokémon. They'll\n"
	.string "test you, trip you, maybe bite you.\p"
	.string "Pick one.\p"
	.string "And if you drop it on your foot, don't\n"
	.string "come limping back to me.\p"
	.string "Go on, before I change my mind and make\n"
	.string "you take the loud one.$"

Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Text_0:
# 99 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "So you picked Onix, huh?\p"
	.string "Well, someone's gotta love the grumpy\n"
	.string "ones.\p"
	.string "That Poké Ball it came from wasn't free,\n"
	.string "y'know. I had Korken, the Poké Ball\l"
	.string "Crafter over in Brakstrand, make me a\l"
	.string "new one.\p"
	.string "Go fetch it, would ya?\n"
	.string "And don't dawdle - if I fall asleep\l"
	.string "waitin', I might not wake up!$"

GettingCalledOver_Text_0:
# 133 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Ah, there you are.\p"
	.string "About time. I was close to sending a\n"
	.string "Geodude to drag you in by the hair.\p"
	.string "Come on, move those legs before they\n"
	.string "fossilize.$"

GettingCalledBack_Text_0:
# 150 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Where do you think you're waddling off\n"
	.string "to?\p"
	.string "The Pokémon are right behind me, genius.\p"
	.string "Go pick one before I assign you the\n"
	.string "loudest one on purpose.$"
