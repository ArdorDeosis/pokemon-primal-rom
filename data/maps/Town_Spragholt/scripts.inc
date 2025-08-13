Town_Spragholt_MapScripts::
# 24 "data/maps/Town_Spragholt/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Town_Spragholt_SetupMap
	.byte 0


Town_Spragholt_SetupMap::
# 28 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_2
# 29 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_3
	return


Town_Spragholt_EventScript_FireMan::
# 36 "data/maps/Town_Spragholt/scripts.pory"
	lock
# 37 "data/maps/Town_Spragholt/scripts.pory"
	faceplayer
# 38 "data/maps/Town_Spragholt/scripts.pory"
	goto_if_set FLAG_TEMP_1, Town_Spragholt_EventScript_FireMan_2
# 45 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_EventScript_FireMan_Text_2
Town_Spragholt_EventScript_FireMan_1:
# 47 "data/maps/Town_Spragholt/scripts.pory"
	release
	end

Town_Spragholt_EventScript_FireMan_2:
# 39 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_EventScript_FireMan_Text_0
# 40 "data/maps/Town_Spragholt/scripts.pory"
	multichoice 22, 8, MULTI_FAST_OR_CRISPY, TRUE
# 41 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_EventScript_FireMan_Text_1
# 42 "data/maps/Town_Spragholt/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Town_Spragholt_EventScript_FireMan_1


Town_Spragholt_Trigger_AwayFromFire::
# 52 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_2, 0
	return


Town_Spragholt_Trigger_StandAtFireNorth::
# 56 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq Town_Spragholt_Trigger_StandAtFireNorth_2
Town_Spragholt_Trigger_StandAtFireNorth_1:
# 59 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_2, 1
	return

Town_Spragholt_Trigger_StandAtFireNorth_2:
# 57 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_1
	goto Town_Spragholt_Trigger_StandAtFireNorth_1


Town_Spragholt_Trigger_StandAtFireEast::
# 63 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_2, 3
	goto_if_eq Town_Spragholt_Trigger_StandAtFireEast_2
Town_Spragholt_Trigger_StandAtFireEast_1:
# 66 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_2, 4
	return

Town_Spragholt_Trigger_StandAtFireEast_2:
# 64 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_1
	goto Town_Spragholt_Trigger_StandAtFireEast_1


Town_Spragholt_Trigger_StandAtFireSouth::
# 70 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq Town_Spragholt_Trigger_StandAtFireSouth_2
Town_Spragholt_Trigger_StandAtFireSouth_1:
# 73 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_2, 2
	return

Town_Spragholt_Trigger_StandAtFireSouth_2:
# 71 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_1
	goto Town_Spragholt_Trigger_StandAtFireSouth_1


Town_Spragholt_Trigger_StandAtFireWest::
# 77 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_2, 4
	goto_if_eq Town_Spragholt_Trigger_StandAtFireWest_2
Town_Spragholt_Trigger_StandAtFireWest_1:
# 80 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_2, 3
	return

Town_Spragholt_Trigger_StandAtFireWest_2:
# 78 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_1
	goto Town_Spragholt_Trigger_StandAtFireWest_1


Town_Spragholt_Trigger_TryToLeave_North::
# 86 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_1, 1
# 87 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 3
	goto_if_le Town_Spragholt_Trigger_TryToLeave_North_1
# 90 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 8
	goto_if_ge Town_Spragholt_Trigger_TryToLeave_North_3
	return

Town_Spragholt_Trigger_TryToLeave_North_1:
# 88 "data/maps/Town_Spragholt/scripts.pory"
	call TryToLeaveWithoutPokemon
	return

Town_Spragholt_Trigger_TryToLeave_North_2:
# 91 "data/maps/Town_Spragholt/scripts.pory"
	call TryToLeaveWithoutPokedex
	return

Town_Spragholt_Trigger_TryToLeave_North_3:
# 90 "data/maps/Town_Spragholt/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, Town_Spragholt_Trigger_TryToLeave_North_2
	return


Town_Spragholt_Trigger_TryToLeave_South::
# 96 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_1, 2
# 97 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 3
	goto_if_le Town_Spragholt_Trigger_TryToLeave_South_1
# 100 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 8
	goto_if_ge Town_Spragholt_Trigger_TryToLeave_South_3
	return

Town_Spragholt_Trigger_TryToLeave_South_1:
# 98 "data/maps/Town_Spragholt/scripts.pory"
	call TryToLeaveWithoutPokemon
	return

Town_Spragholt_Trigger_TryToLeave_South_2:
# 101 "data/maps/Town_Spragholt/scripts.pory"
	call TryToLeaveWithoutPokedex
	return

Town_Spragholt_Trigger_TryToLeave_South_3:
# 100 "data/maps/Town_Spragholt/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, Town_Spragholt_Trigger_TryToLeave_South_2
	return


TryToLeaveWithoutPokemon:
# 106 "data/maps/Town_Spragholt/scripts.pory"
	lockall
# 107 "data/maps/Town_Spragholt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TryToLeaveWithoutPokemon_Movement_0
# 108 "data/maps/Town_Spragholt/scripts.pory"
	waitmovement
# 109 "data/maps/Town_Spragholt/scripts.pory"
	msgbox TryToLeaveWithoutPokemon_Text_0, MSGBOX_NPC
# 110 "data/maps/Town_Spragholt/scripts.pory"
	clearflag FLAG_TEMP_2
# 111 "data/maps/Town_Spragholt/scripts.pory"
	addobject LOCALID_SPRAGHOLT_TOWN_SHAMAN
# 112 "data/maps/Town_Spragholt/scripts.pory"
	waitmessage
# 113 "data/maps/Town_Spragholt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TryToLeaveWithoutPokemon_Movement_1
# 114 "data/maps/Town_Spragholt/scripts.pory"
	switch VAR_TEMP_1
# 115 "data/maps/Town_Spragholt/scripts.pory"
	case 1, TryToLeaveWithoutPokemon_3
# 117 "data/maps/Town_Spragholt/scripts.pory"
	case 2, TryToLeaveWithoutPokemon_4
TryToLeaveWithoutPokemon_1:
# 120 "data/maps/Town_Spragholt/scripts.pory"
	waitmovement
# 121 "data/maps/Town_Spragholt/scripts.pory"
	msgbox TryToLeaveWithoutPokemon_Text_1
# 127 "data/maps/Town_Spragholt/scripts.pory"
	switch VAR_TEMP_1
# 128 "data/maps/Town_Spragholt/scripts.pory"
	case 1, TryToLeaveWithoutPokemon_7
# 153 "data/maps/Town_Spragholt/scripts.pory"
	case 2, TryToLeaveWithoutPokemon_8
TryToLeaveWithoutPokemon_5:
# 179 "data/maps/Town_Spragholt/scripts.pory"
	waitmovement
# 180 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 1
# 181 "data/maps/Town_Spragholt/scripts.pory"
	warp MAP_SPRAGHOLT_SHAMAN_CAVE, 0
# 182 "data/maps/Town_Spragholt/scripts.pory"
	releaseall
	end

TryToLeaveWithoutPokemon_3:
# 116 "data/maps/Town_Spragholt/scripts.pory"
	applymovement LOCALID_SPRAGHOLT_TOWN_SHAMAN, TryToLeaveWithoutPokemon_Movement_2
	goto TryToLeaveWithoutPokemon_1

TryToLeaveWithoutPokemon_4:
# 118 "data/maps/Town_Spragholt/scripts.pory"
	applymovement LOCALID_SPRAGHOLT_TOWN_SHAMAN, TryToLeaveWithoutPokemon_Movement_3
	goto TryToLeaveWithoutPokemon_1

TryToLeaveWithoutPokemon_7:
# 129 "data/maps/Town_Spragholt/scripts.pory"
	applymovement LOCALID_SPRAGHOLT_TOWN_SHAMAN, TryToLeaveWithoutPokemon_Movement_4
# 136 "data/maps/Town_Spragholt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TryToLeaveWithoutPokemon_Movement_5
	goto TryToLeaveWithoutPokemon_5

TryToLeaveWithoutPokemon_8:
# 154 "data/maps/Town_Spragholt/scripts.pory"
	applymovement LOCALID_SPRAGHOLT_TOWN_SHAMAN, TryToLeaveWithoutPokemon_Movement_6
# 161 "data/maps/Town_Spragholt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TryToLeaveWithoutPokemon_Movement_7
	goto TryToLeaveWithoutPokemon_5


TryToLeaveWithoutPokedex:
# 188 "data/maps/Town_Spragholt/scripts.pory"
	lockall
# 189 "data/maps/Town_Spragholt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TryToLeaveWithoutPokemon_Movement_0
# 190 "data/maps/Town_Spragholt/scripts.pory"
	waitmovement
# 191 "data/maps/Town_Spragholt/scripts.pory"
	clearflag FLAG_TEMP_3
# 192 "data/maps/Town_Spragholt/scripts.pory"
	addobject ID_Father_Spragholt
# 193 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq TryToLeaveWithoutPokedex_2
TryToLeaveWithoutPokedex_1:
# 197 "data/maps/Town_Spragholt/scripts.pory"
	msgbox TryToLeaveWithoutPokedex_Text_0, MSGBOX_NPC
# 198 "data/maps/Town_Spragholt/scripts.pory"
	waitmessage
# 199 "data/maps/Town_Spragholt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TryToLeaveWithoutPokedex_Movement_1
# 200 "data/maps/Town_Spragholt/scripts.pory"
	applymovement ID_Father_Spragholt, TryToLeaveWithoutPokedex_Movement_2
# 201 "data/maps/Town_Spragholt/scripts.pory"
	waitmovement
# 203 "data/maps/Town_Spragholt/scripts.pory"
	call Spragholt_Pokedex_Speech_Part1
# 205 "data/maps/Town_Spragholt/scripts.pory"
	applymovement ID_Father_Spragholt, TryToLeaveWithoutPokedex_Movement_3
# 210 "data/maps/Town_Spragholt/scripts.pory"
	waitmovement
# 212 "data/maps/Town_Spragholt/scripts.pory"
	call Spragholt_Pokedex_Speech_Part2
# 214 "data/maps/Town_Spragholt/scripts.pory"
	applymovement ID_Father_Spragholt, TryToLeaveWithoutPokedex_Movement_4
# 219 "data/maps/Town_Spragholt/scripts.pory"
	waitmovement
# 220 "data/maps/Town_Spragholt/scripts.pory"
	releaseall
	return

TryToLeaveWithoutPokedex_2:
# 195 "data/maps/Town_Spragholt/scripts.pory"
	applymovement ID_Father_Spragholt, TryToLeaveWithoutPokedex_Movement_0
	goto TryToLeaveWithoutPokedex_1


# 107 "data/maps/Town_Spragholt/scripts.pory"
TryToLeaveWithoutPokemon_Movement_0:
# 107 "data/maps/Town_Spragholt/scripts.pory"
	emote_question_mark
	step_end

# 113 "data/maps/Town_Spragholt/scripts.pory"
TryToLeaveWithoutPokemon_Movement_1:
# 113 "data/maps/Town_Spragholt/scripts.pory"
	face_right
	step_end

# 116 "data/maps/Town_Spragholt/scripts.pory"
TryToLeaveWithoutPokemon_Movement_2:
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_up
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_up
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_up
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_up
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_up
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_up
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_up
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_left
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_left
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_left
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_left
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_left
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_left
	step_end

# 118 "data/maps/Town_Spragholt/scripts.pory"
TryToLeaveWithoutPokemon_Movement_3:
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_up
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_up
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_up
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_up
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_up
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_up
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_left
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_left
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_left
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_left
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_left
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_left
	step_end

# 129 "data/maps/Town_Spragholt/scripts.pory"
TryToLeaveWithoutPokemon_Movement_4:
# 130 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_right
# 130 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_right
# 130 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_right
# 130 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_right
# 130 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_right
# 130 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_right
# 131 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_down
# 131 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_down
# 131 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_down
# 131 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_down
# 131 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_down
# 131 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_down
# 131 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_down
# 131 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_down
# 132 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_left
# 132 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_left
# 132 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_left
# 133 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_up
# 134 "data/maps/Town_Spragholt/scripts.pory"
	set_invisible
	step_end

# 136 "data/maps/Town_Spragholt/scripts.pory"
TryToLeaveWithoutPokemon_Movement_5:
# 137 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_right
# 138 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_right
# 139 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 139 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 139 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 139 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 140 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 140 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 141 "data/maps/Town_Spragholt/scripts.pory"
	delay_8
# 141 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 141 "data/maps/Town_Spragholt/scripts.pory"
	delay_8
# 142 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 142 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 142 "data/maps/Town_Spragholt/scripts.pory"
	face_down
# 143 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 143 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 143 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 143 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 144 "data/maps/Town_Spragholt/scripts.pory"
	face_right
# 144 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 144 "data/maps/Town_Spragholt/scripts.pory"
	face_left
# 145 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 145 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 145 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 146 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 146 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 146 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 146 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 146 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 147 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 147 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 148 "data/maps/Town_Spragholt/scripts.pory"
	face_right
# 149 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 149 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 149 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 149 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 150 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 150 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 151 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
	step_end

# 154 "data/maps/Town_Spragholt/scripts.pory"
TryToLeaveWithoutPokemon_Movement_6:
# 155 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_right
# 155 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_right
# 155 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_right
# 155 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_right
# 155 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_right
# 155 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_right
# 156 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_down
# 156 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_down
# 156 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_down
# 156 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_down
# 156 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_down
# 156 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_down
# 156 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_down
# 157 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_left
# 157 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_left
# 157 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_left
# 158 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_up
# 159 "data/maps/Town_Spragholt/scripts.pory"
	set_invisible
	step_end

# 161 "data/maps/Town_Spragholt/scripts.pory"
TryToLeaveWithoutPokemon_Movement_7:
# 162 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_right
# 163 "data/maps/Town_Spragholt/scripts.pory"
	walk_slow_right
# 164 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 164 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 164 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 164 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 165 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 165 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 166 "data/maps/Town_Spragholt/scripts.pory"
	delay_8
# 166 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 166 "data/maps/Town_Spragholt/scripts.pory"
	delay_8
# 167 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 167 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 167 "data/maps/Town_Spragholt/scripts.pory"
	face_down
# 168 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 168 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 168 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 168 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 169 "data/maps/Town_Spragholt/scripts.pory"
	face_right
# 169 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 169 "data/maps/Town_Spragholt/scripts.pory"
	face_left
# 170 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 170 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 170 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 171 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 171 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 171 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 172 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 172 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 173 "data/maps/Town_Spragholt/scripts.pory"
	face_right
# 174 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 174 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 174 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 174 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 175 "data/maps/Town_Spragholt/scripts.pory"
	delay_16
# 175 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 176 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
	step_end

# 195 "data/maps/Town_Spragholt/scripts.pory"
TryToLeaveWithoutPokedex_Movement_0:
# 195 "data/maps/Town_Spragholt/scripts.pory"
	walk_faster_up
	step_end

# 199 "data/maps/Town_Spragholt/scripts.pory"
TryToLeaveWithoutPokedex_Movement_1:
# 199 "data/maps/Town_Spragholt/scripts.pory"
	walk_in_place_right
	step_end

# 200 "data/maps/Town_Spragholt/scripts.pory"
TryToLeaveWithoutPokedex_Movement_2:
# 200 "data/maps/Town_Spragholt/scripts.pory"
	walk_fast_left
# 200 "data/maps/Town_Spragholt/scripts.pory"
	walk_fast_left
# 200 "data/maps/Town_Spragholt/scripts.pory"
	walk_fast_left
# 200 "data/maps/Town_Spragholt/scripts.pory"
	walk_fast_left
# 200 "data/maps/Town_Spragholt/scripts.pory"
	walk_fast_left
# 200 "data/maps/Town_Spragholt/scripts.pory"
	walk_fast_left
# 200 "data/maps/Town_Spragholt/scripts.pory"
	walk_fast_left
	step_end

# 205 "data/maps/Town_Spragholt/scripts.pory"
TryToLeaveWithoutPokedex_Movement_3:
# 206 "data/maps/Town_Spragholt/scripts.pory"
	lock_facing_direction
# 207 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 208 "data/maps/Town_Spragholt/scripts.pory"
	unlock_facing_direction
	step_end

# 214 "data/maps/Town_Spragholt/scripts.pory"
TryToLeaveWithoutPokedex_Movement_4:
# 215 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 215 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 215 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 215 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 215 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 216 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 216 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 217 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 217 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
	step_end

Town_Spragholt_EventScript_FireMan_Text_0:
# 39 "data/maps/Town_Spragholt/scripts.pory"
	.string "BY THE GREAT PILOWSWINE! You jumped\n"
	.string "the fire!\p"
	.string "So...\p"
	.string "FAST or CRISPY butt?$"

Town_Spragholt_EventScript_FireMan_Text_1:
# 41 "data/maps/Town_Spragholt/scripts.pory"
	.string "Thought as much...$"

Town_Spragholt_EventScript_FireMan_Text_2:
# 45 "data/maps/Town_Spragholt/scripts.pory"
	.string "Cool cave dwellers can make fire. But\n"
	.string "REALLY cool cave dwellers...\p"
	.string "they dare to jump over it!\p"
	.string "You'll need a FAST butt, or you get a\n"
	.string "CRISPY butt.\p"
	.string "Dare you?$"

TryToLeaveWithoutPokemon_Text_0:
# 109 "data/maps/Town_Spragholt/scripts.pory"
	.string "Wait!$"

TryToLeaveWithoutPokemon_Text_1:
# 122 "data/maps/Town_Spragholt/scripts.pory"
	.string "Where do you think you're waddling off\n"
	.string "to?\p"
	.string "You try sneakin' off like that again,\n"
	.string "and I swear I'll tie a rope 'round your\l"
	.string "ankle.\p"
	.string "Get in here and act like you've got a\n"
	.string "brain cell or two.\p"
	.string "You've got business to finish.$"

TryToLeaveWithoutPokedex_Text_0:
# 197 "data/maps/Town_Spragholt/scripts.pory"
	.string "{PLAYER}!$"
