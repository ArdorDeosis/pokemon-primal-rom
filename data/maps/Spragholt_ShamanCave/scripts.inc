Spragholt_ShamanCave_MapScripts::
# 22 "data/maps/Spragholt_ShamanCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Spragholt_ShamanCave_SetupCave
# 23 "data/maps/Spragholt_ShamanCave/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Spragholt_ShamanCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Spragholt_ShamanCave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 24 "data/maps/Spragholt_ShamanCave/scripts.pory"
	map_script_2 VAR_GAME_INTRO_STAGE, 1, GettingDraggedIn
	.2byte 0


Spragholt_ShamanCave_SetupCave:
# 30 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 1
	goto_if_eq Spragholt_ShamanCave_SetupCave_2
Spragholt_ShamanCave_SetupCave_1:
# 35 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setflag FLAG_TEMP_1
	return

Spragholt_ShamanCave_SetupCave_2:
# 31 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setobjectxyperm LOCALID_SHAMAN, 16, 16
# 32 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setobjectmovementtype LOCALID_SHAMAN, MOVEMENT_TYPE_FACE_UP
	goto Spragholt_ShamanCave_SetupCave_1


Spragholt_ShamanCave_Shaman::
# 40 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 41 "data/maps/Spragholt_ShamanCave/scripts.pory"
	faceplayer
# 42 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 4
	goto_if_lt Spragholt_ShamanCave_Shaman_2
# 50 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 4
	goto_if_ge Spragholt_ShamanCave_Shaman_8
Spragholt_ShamanCave_Shaman_6:
# 57 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 6
	goto_if_ge Spragholt_ShamanCave_Shaman_5
Spragholt_ShamanCave_Shaman_1:
# 77 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	return

Spragholt_ShamanCave_Shaman_2:
# 43 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Shaman_Text_0, MSGBOX_NPC
# 48 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
	goto Spragholt_ShamanCave_Shaman_1

Spragholt_ShamanCave_Shaman_3:
# 51 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Shaman_Text_1, MSGBOX_NPC
# 55 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
	goto Spragholt_ShamanCave_Shaman_1

Spragholt_ShamanCave_Shaman_4:
# 58 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Shaman_Text_2
# 62 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
	checkitem ITEM_ISOLDES_POKEBALL
# 0 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Spragholt_ShamanCave_Shaman_12
# 73 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Shaman_Text_4
# 74 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
	goto Spragholt_ShamanCave_Shaman_1

Spragholt_ShamanCave_Shaman_5:
# 57 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 9
	goto_if_lt Spragholt_ShamanCave_Shaman_4
	goto Spragholt_ShamanCave_Shaman_1

Spragholt_ShamanCave_Shaman_8:
# 50 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 6
	goto_if_lt Spragholt_ShamanCave_Shaman_3
	goto Spragholt_ShamanCave_Shaman_6

Spragholt_ShamanCave_Shaman_12:
# 65 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Shaman_Text_3
# 69 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 70 "data/maps/Spragholt_ShamanCave/scripts.pory"
	removeitem ITEM_ISOLDES_POKEBALL
# 71 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 9
	goto Spragholt_ShamanCave_Shaman_1


Spragholt_ShamanCave_StarterTurtwig::
# 81 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 82 "data/maps/Spragholt_ShamanCave/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 83 "data/maps/Spragholt_ShamanCave/scripts.pory"
	playmoncry SPECIES_TURTWIG, CRY_MODE_NORMAL
# 84 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_StarterTurtwig_Text_0, MSGBOX_YESNO
# 85 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Spragholt_ShamanCave_StarterTurtwig_2
Spragholt_ShamanCave_StarterTurtwig_1:
# 89 "data/maps/Spragholt_ShamanCave/scripts.pory"
	hidemonpic
# 91 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	end

Spragholt_ShamanCave_StarterTurtwig_2:
# 86 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setfollowernpc ID_CAVE_STARTER_TURTWIG, FNPC_NONE
# 87 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 3
	goto Spragholt_ShamanCave_StarterTurtwig_1


ChosePokemonSpeech:
# 96 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox ChosePokemonSpeech_Text_0
# 105 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 2
# 106 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
	return


Spragholt_ShamanCave_Trigger_LowerFloorBottleneck::
# 110 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 2
	goto_if_lt Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_1
# 112 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 2
	goto_if_eq Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_2
	return

Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_1:
# 111 "data/maps/Spragholt_ShamanCave/scripts.pory"
	call GettingCalledOver
	return

Spragholt_ShamanCave_Trigger_LowerFloorBottleneck_2:
# 113 "data/maps/Spragholt_ShamanCave/scripts.pory"
	call GettingCalledBack
	return


Spragholt_ShamanCave_Trigger_PokemonCaveEntrance::
# 118 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 3
	goto_if_eq Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_1
	return

Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_1:
# 119 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 120 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement LOCALID_SHAMAN, Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_0
# 121 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_1
# 122 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 123 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Text_0
# 124 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 126 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement LOCALID_SHAMAN, Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_2
# 127 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 128 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_3
# 129 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 130 "data/maps/Spragholt_ShamanCave/scripts.pory"
	destroyfollowernpc
# 131 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement LOCALID_SHAMAN, Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_4
# 132 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 133 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Text_1
# 134 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 137 "data/maps/Spragholt_ShamanCave/scripts.pory"
	givemon SPECIES_TURTWIG, 5, ITEM_NONE, ITEM_WEAK_POKEBALL
# 138 "data/maps/Spragholt_ShamanCave/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_4
Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_3:
# 141 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 142 "data/maps/Spragholt_ShamanCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 143 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Text_2
# 144 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 145 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Text_3
# 149 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 150 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 5
# 151 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement LOCALID_SHAMAN, Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_5
# 152 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 153 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	return

Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_4:
# 139 "data/maps/Spragholt_ShamanCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 4
	goto Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_3


GettingDraggedIn:
# 158 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 159 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement LOCALID_SHAMAN, GettingDraggedIn_Movement_0
# 166 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GettingDraggedIn_Movement_1
# 174 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 175 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox GettingDraggedIn_Text_0
# 176 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 177 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement LOCALID_SHAMAN, GettingDraggedIn_Movement_2
# 188 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GettingDraggedIn_Movement_3
# 203 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 204 "data/maps/Spragholt_ShamanCave/scripts.pory"
	call ChosePokemonSpeech
# 205 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	return


GettingCalledOver:
# 209 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 210 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement LOCALID_SHAMAN, GettingCalledOver_Movement_0
# 211 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 212 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox GettingCalledOver_Text_0
# 216 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 217 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GettingCalledOver_Movement_1
# 224 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 225 "data/maps/Spragholt_ShamanCave/scripts.pory"
	call ChosePokemonSpeech
# 226 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	return


GettingCalledBack:
# 230 "data/maps/Spragholt_ShamanCave/scripts.pory"
	lockall
# 231 "data/maps/Spragholt_ShamanCave/scripts.pory"
	msgbox GettingCalledBack_Text_0
# 235 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmessage
# 236 "data/maps/Spragholt_ShamanCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GettingCalledBack_Movement_0
# 237 "data/maps/Spragholt_ShamanCave/scripts.pory"
	waitmovement
# 238 "data/maps/Spragholt_ShamanCave/scripts.pory"
	releaseall
	return


# 120 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_0:
# 120 "data/maps/Spragholt_ShamanCave/scripts.pory"
	face_right
	step_end

# 121 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_1:
# 121 "data/maps/Spragholt_ShamanCave/scripts.pory"
	face_left
	step_end

# 126 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_2:
# 126 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_up
# 126 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_in_place_slow_right
	step_end

# 128 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_3:
# 128 "data/maps/Spragholt_ShamanCave/scripts.pory"
	enter_pokeball
# 128 "data/maps/Spragholt_ShamanCave/scripts.pory"
	delay_16
# 128 "data/maps/Spragholt_ShamanCave/scripts.pory"
	delay_16
# 128 "data/maps/Spragholt_ShamanCave/scripts.pory"
	delay_16
	step_end

# 131 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_4:
# 131 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_down
# 131 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_in_place_slow_right
	step_end

# 151 "data/maps/Spragholt_ShamanCave/scripts.pory"
Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Movement_5:
# 151 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_down
# 151 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_in_place_slow_left
	step_end

# 159 "data/maps/Spragholt_ShamanCave/scripts.pory"
GettingDraggedIn_Movement_0:
# 160 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_left
# 161 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_up
# 162 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_left
# 162 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_left
# 163 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_down
# 164 "data/maps/Spragholt_ShamanCave/scripts.pory"
	step_end

# 166 "data/maps/Spragholt_ShamanCave/scripts.pory"
GettingDraggedIn_Movement_1:
# 167 "data/maps/Spragholt_ShamanCave/scripts.pory"
	delay_16
# 167 "data/maps/Spragholt_ShamanCave/scripts.pory"
	delay_16
# 168 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 169 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 170 "data/maps/Spragholt_ShamanCave/scripts.pory"
	delay_16
# 170 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 171 "data/maps/Spragholt_ShamanCave/scripts.pory"
	delay_16
# 171 "data/maps/Spragholt_ShamanCave/scripts.pory"
	delay_16
# 171 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 171 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 172 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_in_place_down
	step_end

# 177 "data/maps/Spragholt_ShamanCave/scripts.pory"
GettingDraggedIn_Movement_2:
# 178 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_down
# 179 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_left
# 179 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_left
# 180 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_up
# 181 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_left
# 182 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_up
# 183 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_up
# 184 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_left
# 184 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_left
# 184 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_slow_left
# 185 "data/maps/Spragholt_ShamanCave/scripts.pory"
	face_down
# 186 "data/maps/Spragholt_ShamanCave/scripts.pory"
	step_end

# 188 "data/maps/Spragholt_ShamanCave/scripts.pory"
GettingDraggedIn_Movement_3:
# 189 "data/maps/Spragholt_ShamanCave/scripts.pory"
	face_left
# 190 "data/maps/Spragholt_ShamanCave/scripts.pory"
	delay_16
# 190 "data/maps/Spragholt_ShamanCave/scripts.pory"
	delay_16
# 190 "data/maps/Spragholt_ShamanCave/scripts.pory"
	delay_16
# 190 "data/maps/Spragholt_ShamanCave/scripts.pory"
	delay_16
# 190 "data/maps/Spragholt_ShamanCave/scripts.pory"
	delay_16
# 191 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_down
# 191 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_down
# 192 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_in_place_left
# 193 "data/maps/Spragholt_ShamanCave/scripts.pory"
	delay_16
# 193 "data/maps/Spragholt_ShamanCave/scripts.pory"
	delay_16
# 194 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 194 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 194 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 195 "data/maps/Spragholt_ShamanCave/scripts.pory"
	face_up
# 196 "data/maps/Spragholt_ShamanCave/scripts.pory"
	delay_16
# 196 "data/maps/Spragholt_ShamanCave/scripts.pory"
	delay_16
# 197 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 197 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 198 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 198 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 199 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 200 "data/maps/Spragholt_ShamanCave/scripts.pory"
	face_up
# 201 "data/maps/Spragholt_ShamanCave/scripts.pory"
	step_end

# 210 "data/maps/Spragholt_ShamanCave/scripts.pory"
GettingCalledOver_Movement_0:
# 210 "data/maps/Spragholt_ShamanCave/scripts.pory"
	emote_exclamation_mark
	step_end

# 217 "data/maps/Spragholt_ShamanCave/scripts.pory"
GettingCalledOver_Movement_1:
# 218 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 218 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 218 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 218 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 219 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 219 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_up
# 220 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 221 "data/maps/Spragholt_ShamanCave/scripts.pory"
	face_up
# 222 "data/maps/Spragholt_ShamanCave/scripts.pory"
	step_end

# 236 "data/maps/Spragholt_ShamanCave/scripts.pory"
GettingCalledBack_Movement_0:
# 236 "data/maps/Spragholt_ShamanCave/scripts.pory"
	walk_left
# 236 "data/maps/Spragholt_ShamanCave/scripts.pory"
	step_end

Spragholt_ShamanCave_Shaman_Text_0:
# 44 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Still here?\p"
	.string "What, need me to hold your hand?\n"
	.string "They're behind me!\p"
	.string "Big ones, small ones... all with teeth and\n"
	.string "attitude.\p"
	.string "Pick one, before they start pickin' each\n"
	.string "other.$"

Spragholt_ShamanCave_Shaman_Text_1:
# 52 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Do you have my Poké Ball yet? No? Then\n"
	.string "what are you flappin' your gums here\l"
	.string "for? Go on!$"

Spragholt_ShamanCave_Shaman_Text_2:
# 59 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "You look like a bag of chewed roots. Sit\n"
	.string "still for a second.$"

Spragholt_ShamanCave_Shaman_Text_3:
# 66 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Ahh, there it is. My Poké Ball, finally.\n"
	.string "Off you go now.\p"
	.string "Maybe go see your father before you\n"
	.string "vanish into the grass.$"

Spragholt_ShamanCave_Shaman_Text_4:
# 73 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Still no Poké Ball? Then what are you\n"
	.string "even doing here? Shoo!$"

Spragholt_ShamanCave_StarterTurtwig_Text_0:
# 84 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "It tries to bite you, when you approach.\p"
	.string "Take Turtwig?$"

ChosePokemonSpeech_Text_0:
# 97 "data/maps/Spragholt_ShamanCave/scripts.pory"
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
# 123 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "So you picked Turtwig, huh?\p"
	.string "Well, someone's gotta love the grumpy\n"
	.string "ones.\p"
	.string "Let me help you with this...$"

Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Text_1:
# 133 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "There you go.$"

Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Text_2:
# 143 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "You received Turtwig!$"

Spragholt_ShamanCave_Trigger_PokemonCaveEntrance_Text_3:
# 146 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Poké Balls aren't easy to come by,\n"
	.string "y'know. I had Korken, the Poké Ball\l"
	.string "Crafter over in Brakstrand, make me a\l"
	.string "new one.\p"
	.string "Go fetch it, would ya?\n"
	.string "And don't dawdle - if I fall asleep\l"
	.string "waitin', I might not wake up!$"

GettingDraggedIn_Text_0:
# 175 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Why do I...\p"
	.string "the oldest person in town...\p"
	.string "live in the only cave...\p"
	.string "with FUCKING STAIRS!$"

GettingCalledOver_Text_0:
# 213 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Ah, there you are.\p"
	.string "Took you long enough - my joints are\n"
	.string "older than this cave, ya know.\p"
	.string "Come on, move those legs before I die.$"

GettingCalledBack_Text_0:
# 232 "data/maps/Spragholt_ShamanCave/scripts.pory"
	.string "Where do you think you're waddling off\n"
	.string "to?\p"
	.string "The Pokémon are right behind me, genius.\p"
	.string "Go pick one before I assign you the\n"
	.string "loudest one on purpose.$"
