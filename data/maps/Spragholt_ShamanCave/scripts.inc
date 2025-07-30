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
	compare VAR_GAME_INTRO_STAGE, 3
	goto_if_lt Spragholt_ShamanCave_Shaman_2
# 38 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 3
	goto_if_ge Spragholt_ShamanCave_Shaman_8
Spragholt_ShamanCave_Shaman_6:
# 45 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 5
	goto_if_ge Spragholt_ShamanCave_Shaman_5
Spragholt_ShamanCave_Shaman_1:
# 65 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	return

Spragholt_ShamanCave_Shaman_2:
# 31 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Shaman_Text_0, MSGBOX_NPC
# 36 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
	goto Spragholt_ShamanCave_Shaman_1

Spragholt_ShamanCave_Shaman_3:
# 39 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Shaman_Text_1, MSGBOX_NPC
# 43 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
	goto Spragholt_ShamanCave_Shaman_1

Spragholt_ShamanCave_Shaman_4:
# 46 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Shaman_Text_2
# 50 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
	checkitem ITEM_ISOLDES_POKEBALL
# 0 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Spragholt_ShamanCave_Shaman_12
# 61 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Shaman_Text_4
# 62 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
	goto Spragholt_ShamanCave_Shaman_1

Spragholt_ShamanCave_Shaman_5:
# 45 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 8
	goto_if_lt Spragholt_ShamanCave_Shaman_4
	goto Spragholt_ShamanCave_Shaman_1

Spragholt_ShamanCave_Shaman_8:
# 38 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 5
	goto_if_lt Spragholt_ShamanCave_Shaman_3
	goto Spragholt_ShamanCave_Shaman_6

Spragholt_ShamanCave_Shaman_12:
# 53 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Shaman_Text_3
# 57 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 58 "data/maps/Spragholt_ShamanCave/scripts.pory"
	removeitem ITEM_ISOLDES_POKEBALL
# 59 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 8
	goto Spragholt_ShamanCave_Shaman_1


Spragholt_ShamanCave_PlaceholderPokemon::
# 69 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 70 "data/maps/Spragholt_ShamanCave/scripts.pory"
	showmonpic SPECIES_ONIX, 10, 3
# 71 "data/maps/Spragholt_ShamanCave/scripts.pory"
	playmoncry SPECIES_ONIX, CRY_MODE_NORMAL
# 72 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_PlaceholderPokemon_Text_0, MSGBOX_YESNO
# 73 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Spragholt_ShamanCave_PlaceholderPokemon_2
Spragholt_ShamanCave_PlaceholderPokemon_1:
# 81 "data/maps/Spragholt_ShamanCave/scripts.pory"
	hidemonpic
# 82 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_PlaceholderPokemon_Text_1
# 83 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
# 84 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 85 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement LOCALID_PLACEHOLDER_STARTER_BALL, Spragholt_ShamanCave_PlaceholderPokemon_Movement_0
# 86 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 87 "data/maps/Spragholt_ShamanCave/scripts.pory"
	getobjectxy LOCALID_PLACEHOLDER_STARTER_BALL, CURRENT_POSITION, VAR_TEMP_1, VAR_TEMP_2
# 88 "data/maps/Spragholt_ShamanCave/scripts.pory"
	removeobject LOCALID_PLACEHOLDER_STARTER_BALL
# 89 "data/maps/Spragholt_ShamanCave/scripts.pory"
	addobject ONIX_FOLLOW
# 90 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setobjectxy ONIX_FOLLOW, VAR_TEMP_1, VAR_TEMP_2
# 91 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement ONIX_FOLLOW, Spragholt_ShamanCave_PlaceholderPokemon_Movement_1
# 92 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	end

Spragholt_ShamanCave_PlaceholderPokemon_2:
# 74 "data/maps/Spragholt_ShamanCave/scripts.pory"
	givemon SPECIES_ONIX, 5, ITEM_NONE, ITEM_WEAK_POKEBALL
# 75 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spragholt_ShamanCave_PlaceholderPokemon_4
	goto Spragholt_ShamanCave_PlaceholderPokemon_1

Spragholt_ShamanCave_PlaceholderPokemon_4:
# 76 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 3
# 77 "data/maps/Spragholt_ShamanCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 78 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto Spragholt_ShamanCave_PlaceholderPokemon_1


ChosePokemonSpeech:
# 97 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox ChosePokemonSpeech_Text_0
# 107 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 2
# 108 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
	return


Spragholt_ShamanCave_Trigger_LowerFloorBottleneck::
# 112 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 2
	goto_if_lt Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_1
# 114 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 2
	goto_if_eq Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_2
	return

Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_1:
# 113 "data/maps/Spragholt_ShamanCave/scripts.pory"
	call GettingCalledOver
	return

Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_2:
# 115 "data/maps/Spragholt_ShamanCave/scripts.pory"
	call GettingCalledBack
	return


Spragholt_ShamanCave_Trigger_PokemonCaveEntrance::
# 120 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 3
	goto_if_eq Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_1
	return

Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_1:
# 121 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 122 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement LOCALID_SHAMAN, Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_0
# 123 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 124 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Text_0
# 130 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 131 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 4
# 132 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement LOCALID_SHAMAN, Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_1
# 133 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 134 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	return


GettingDraggedIn:
# 139 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 140 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GettingDraggedIn_Movement_0
# 149 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 150 "data/maps/Spragholt_ShamanCave/scripts.pory"
	call ChosePokemonSpeech
# 151 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	return


GettingCalledOver:
# 155 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 156 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement LOCALID_SHAMAN, GettingCalledOver_Movement_0
# 157 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 158 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox GettingCalledOver_Text_0
# 162 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 163 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GettingCalledOver_Movement_1
# 168 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 169 "data/maps/Spragholt_ShamanCave/scripts.pory"
	call ChosePokemonSpeech
# 170 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	return


GettingCalledBack:
# 174 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 175 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox GettingCalledBack_Text_0
# 179 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 180 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GettingCalledBack_Movement_0
# 181 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 182 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	return


# 85 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_PlaceholderPokemon_Movement_0:
# 85 "data/maps/Spragholt_ShamanCave/scripts.pory"
	jump_in_place_left_right
	step_end

# 91 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_PlaceholderPokemon_Movement_1:
# 91 "data/maps/Spragholt_ShamanCave/scripts.pory"
	face_player
	step_end

# 122 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_0:
# 122 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_right
# 122 "data/maps/Spragholt_ShamanCave/scripts.pory"
	face_up
	step_end

# 132 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_1:
# 132 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_left
# 132 "data/maps/Spragholt_ShamanCave/scripts.pory"
	face_right
	step_end

# 140 "data/maps/Spragholt_ShamanCave/scripts.pory"
GettingDraggedIn_Movement_0:
# 141 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 142 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 142 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 143 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 143 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 144 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_down
# 144 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_down
# 145 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 145 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 145 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 145 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 145 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 146 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 146 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 147 "data/maps/Spragholt_ShamanCave/scripts.pory"
	step_end

# 156 "data/maps/Spragholt_ShamanCave/scripts.pory"
GettingCalledOver_Movement_0:
# 156 "data/maps/Spragholt_ShamanCave/scripts.pory"
	emote_exclamation_mark
	step_end

# 163 "data/maps/Spragholt_ShamanCave/scripts.pory"
GettingCalledOver_Movement_1:
# 164 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 164 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 164 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 164 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 165 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 165 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 166 "data/maps/Spragholt_ShamanCave/scripts.pory"
	step_end

# 180 "data/maps/Spragholt_ShamanCave/scripts.pory"
GettingCalledBack_Movement_0:
# 180 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 180 "data/maps/Spragholt_ShamanCave/scripts.pory"
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

Spragholt_ShamanCave_Shaman_Text_1:
# 40 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Do you have my Poké Ball yet? No? Then\n"
	.string "what are you flappin' your gums here\l"
	.string "for? Go on!$"

Spragholt_ShamanCave_Shaman_Text_2:
# 47 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "You look like a bag of chewed roots. Sit\n"
	.string "still for a second.$"

Spragholt_ShamanCave_Shaman_Text_3:
# 54 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Ahh, there it is. My Poké Ball, finally.\n"
	.string "Off you go now.\p"
	.string "Maybe go see your father before you\n"
	.string "vanish into the grass.$"

Spragholt_ShamanCave_Shaman_Text_4:
# 61 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Still no Poké Ball? Then what are you\n"
	.string "even doing here? Shoo!$"

Spragholt_ShamanCave_PlaceholderPokemon_Text_0:
# 72 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Take ONIX?$"

Spragholt_ShamanCave_PlaceholderPokemon_Text_1:
# 82 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "You received ONIX!$"

ChosePokemonSpeech_Text_0:
# 98 "data/maps/Spragholt_ShamanCave/scripts.pory"
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
# 125 "data/maps/Spragholt_ShamanCave/scripts.pory"
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
# 159 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Ah, there you are.\p"
	.string "About time. I was close to sending a\n"
	.string "Geodude to drag you in by the hair.\p"
	.string "Come on, move those legs before they\n"
	.string "fossilize.$"

GettingCalledBack_Text_0:
# 176 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Where do you think you're waddling off\n"
	.string "to?\p"
	.string "The Pokémon are right behind me, genius.\p"
	.string "Go pick one before I assign you the\n"
	.string "loudest one on purpose.$"
