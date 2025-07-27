Town_Spragholt_MapScripts::
# 2 "data/maps/Town_Spragholt/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Town_Spragholt_HideShaman
	.byte 0


Town_Spragholt_HideShaman::
# 6 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_2
	return


Town_Spragholt_EventScript_FireMan::
# 13 "data/maps/Town_Spragholt/scripts.pory"
	lock
# 14 "data/maps/Town_Spragholt/scripts.pory"
	faceplayer
# 15 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_F, 0
	goto_if_eq Town_Spragholt_EventScript_FireMan_2
Town_Spragholt_EventScript_FireMan_1:
# 18 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_F, 1
	goto_if_eq Town_Spragholt_EventScript_FireMan_5
Town_Spragholt_EventScript_FireMan_4:
# 21 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_F, 2
	goto_if_eq Town_Spragholt_EventScript_FireMan_8
Town_Spragholt_EventScript_FireMan_7:
# 24 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_F, 3
	goto_if_eq Town_Spragholt_EventScript_FireMan_11
Town_Spragholt_EventScript_FireMan_10:
# 27 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_F, 4
	goto_if_eq Town_Spragholt_EventScript_FireMan_14
Town_Spragholt_EventScript_FireMan_13:
# 30 "data/maps/Town_Spragholt/scripts.pory"
	goto_if_set FLAG_TEMP_1, Town_Spragholt_EventScript_FireMan_17
# 37 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_EventScript_FireMan_Text_7
Town_Spragholt_EventScript_FireMan_16:
# 39 "data/maps/Town_Spragholt/scripts.pory"
	release
	end

Town_Spragholt_EventScript_FireMan_2:
# 16 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_EventScript_FireMan_Text_0
	goto Town_Spragholt_EventScript_FireMan_1

Town_Spragholt_EventScript_FireMan_5:
# 19 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_EventScript_FireMan_Text_1
	goto Town_Spragholt_EventScript_FireMan_4

Town_Spragholt_EventScript_FireMan_8:
# 22 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_EventScript_FireMan_Text_2
	goto Town_Spragholt_EventScript_FireMan_7

Town_Spragholt_EventScript_FireMan_11:
# 25 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_EventScript_FireMan_Text_3
	goto Town_Spragholt_EventScript_FireMan_10

Town_Spragholt_EventScript_FireMan_14:
# 28 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_EventScript_FireMan_Text_4
	goto Town_Spragholt_EventScript_FireMan_13

Town_Spragholt_EventScript_FireMan_17:
# 31 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_EventScript_FireMan_Text_5
# 32 "data/maps/Town_Spragholt/scripts.pory"
	multichoice 22, 8, MULTI_FAST_OR_CRISPY, TRUE
# 33 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_EventScript_FireMan_Text_6
# 34 "data/maps/Town_Spragholt/scripts.pory"
	clearflag FLAG_TEMP_1
	goto Town_Spragholt_EventScript_FireMan_16


Town_Spragholt_Trigger_AwayFromFire::
# 44 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_F, 0
	return


Town_Spragholt_Trigger_StandAtFireNorth::
# 48 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_F, 3
	goto_if_eq Town_Spragholt_Trigger_StandAtFireNorth_2
Town_Spragholt_Trigger_StandAtFireNorth_1:
# 51 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_F, 1
	return

Town_Spragholt_Trigger_StandAtFireNorth_2:
# 49 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_1
	goto Town_Spragholt_Trigger_StandAtFireNorth_1


Town_Spragholt_Trigger_StandAtFireEast::
# 55 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_F, 4
	goto_if_eq Town_Spragholt_Trigger_StandAtFireEast_2
Town_Spragholt_Trigger_StandAtFireEast_1:
# 58 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_F, 2
	return

Town_Spragholt_Trigger_StandAtFireEast_2:
# 56 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_1
	goto Town_Spragholt_Trigger_StandAtFireEast_1


Town_Spragholt_Trigger_StandAtFireSouth::
# 62 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_F, 1
	goto_if_eq Town_Spragholt_Trigger_StandAtFireSouth_2
Town_Spragholt_Trigger_StandAtFireSouth_1:
# 65 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_F, 3
	return

Town_Spragholt_Trigger_StandAtFireSouth_2:
# 63 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_1
	goto Town_Spragholt_Trigger_StandAtFireSouth_1


Town_Spragholt_Trigger_StandAtFireWest::
# 69 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_F, 2
	goto_if_eq Town_Spragholt_Trigger_StandAtFireWest_2
Town_Spragholt_Trigger_StandAtFireWest_1:
# 72 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_F, 4
	return

Town_Spragholt_Trigger_StandAtFireWest_2:
# 70 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_1
	goto Town_Spragholt_Trigger_StandAtFireWest_1


Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_North::
# 78 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_1, 1
# 79 "data/maps/Town_Spragholt/scripts.pory"
	call Town_Spragholt_Trigger_TryToLeaveWithoutPokemon
	return


Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_South::
# 83 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_1, 2
# 84 "data/maps/Town_Spragholt/scripts.pory"
	call Town_Spragholt_Trigger_TryToLeaveWithoutPokemon
	return


Town_Spragholt_Trigger_TryToLeaveWithoutPokemon::
# 88 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 1
	goto_if_gt Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_2
# 91 "data/maps/Town_Spragholt/scripts.pory"
	lockall
# 92 "data/maps/Town_Spragholt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_0
# 93 "data/maps/Town_Spragholt/scripts.pory"
	waitmovement
# 94 "data/maps/Town_Spragholt/scripts.pory"
	switch VAR_TEMP_1
# 95 "data/maps/Town_Spragholt/scripts.pory"
	case 1, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_6
# 96 "data/maps/Town_Spragholt/scripts.pory"
	case 2, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_6
# 99 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Text_1
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_4:
# 101 "data/maps/Town_Spragholt/scripts.pory"
	clearflag FLAG_TEMP_2
# 102 "data/maps/Town_Spragholt/scripts.pory"
	addobject LOCALID_SPRAGHOLT_TOWN_SHAMAN
# 103 "data/maps/Town_Spragholt/scripts.pory"
	waitmessage
# 104 "data/maps/Town_Spragholt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_1
# 105 "data/maps/Town_Spragholt/scripts.pory"
	switch VAR_TEMP_1
# 106 "data/maps/Town_Spragholt/scripts.pory"
	case 1, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_10
# 108 "data/maps/Town_Spragholt/scripts.pory"
	case 2, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_11
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_8:
# 111 "data/maps/Town_Spragholt/scripts.pory"
	waitmovement
# 112 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Text_2
# 114 "data/maps/Town_Spragholt/scripts.pory"
	switch VAR_TEMP_1
# 115 "data/maps/Town_Spragholt/scripts.pory"
	case 1, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_14
# 129 "data/maps/Town_Spragholt/scripts.pory"
	case 2, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_15
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_12:
# 144 "data/maps/Town_Spragholt/scripts.pory"
	waitmovement
# 145 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 1
# 146 "data/maps/Town_Spragholt/scripts.pory"
	warp MAP_SPRAGHOLT_SHAMAN_CAVE, 0
# 147 "data/maps/Town_Spragholt/scripts.pory"
	releaseall
	end

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_2:
	end

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_6:
# 97 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Text_0, MSGBOX_NPC
	goto Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_4

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_10:
# 107 "data/maps/Town_Spragholt/scripts.pory"
	applymovement LOCALID_SPRAGHOLT_TOWN_SHAMAN, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_2
	goto Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_8

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_11:
# 109 "data/maps/Town_Spragholt/scripts.pory"
	applymovement LOCALID_SPRAGHOLT_TOWN_SHAMAN, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_3
	goto Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_8

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_14:
# 116 "data/maps/Town_Spragholt/scripts.pory"
	applymovement LOCALID_SPRAGHOLT_TOWN_SHAMAN, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_4
# 123 "data/maps/Town_Spragholt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_5
	goto Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_12

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_15:
# 130 "data/maps/Town_Spragholt/scripts.pory"
	applymovement LOCALID_SPRAGHOLT_TOWN_SHAMAN, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_6
# 137 "data/maps/Town_Spragholt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_7
	goto Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_12


# 92 "data/maps/Town_Spragholt/scripts.pory"
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_0:
# 92 "data/maps/Town_Spragholt/scripts.pory"
	emote_question_mark
	step_end

# 104 "data/maps/Town_Spragholt/scripts.pory"
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_1:
# 104 "data/maps/Town_Spragholt/scripts.pory"
	face_right
	step_end

# 107 "data/maps/Town_Spragholt/scripts.pory"
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_2:
# 107 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 107 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 107 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 107 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 107 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 107 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 107 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 107 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 107 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 107 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 107 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 107 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 107 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
	step_end

# 109 "data/maps/Town_Spragholt/scripts.pory"
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_3:
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
	step_end

# 116 "data/maps/Town_Spragholt/scripts.pory"
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_4:
# 117 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 117 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 117 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 117 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 117 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 117 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 119 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 119 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 119 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 120 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 121 "data/maps/Town_Spragholt/scripts.pory"
	set_invisible
	step_end

# 123 "data/maps/Town_Spragholt/scripts.pory"
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_5:
# 124 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 124 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 124 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 124 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 124 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 124 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 124 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 125 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 125 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 125 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 125 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 125 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 125 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 125 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 125 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 126 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 126 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 126 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 127 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
	step_end

# 130 "data/maps/Town_Spragholt/scripts.pory"
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_6:
# 131 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 131 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 131 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 131 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 131 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 131 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 132 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 132 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 132 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 132 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 132 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 132 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 132 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 133 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 133 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 133 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 134 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 135 "data/maps/Town_Spragholt/scripts.pory"
	set_invisible
	step_end

# 137 "data/maps/Town_Spragholt/scripts.pory"
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_7:
# 138 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 138 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 138 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 138 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 138 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 138 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 138 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 139 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 139 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 139 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 139 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 139 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 139 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 139 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 140 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 140 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 140 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 141 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
	step_end

Town_Spragholt_EventScript_FireMan_Text_0:
# 16 "data/maps/Town_Spragholt/scripts.pory"
	.string "0$"

Town_Spragholt_EventScript_FireMan_Text_1:
# 19 "data/maps/Town_Spragholt/scripts.pory"
	.string "1$"

Town_Spragholt_EventScript_FireMan_Text_2:
# 22 "data/maps/Town_Spragholt/scripts.pory"
	.string "2$"

Town_Spragholt_EventScript_FireMan_Text_3:
# 25 "data/maps/Town_Spragholt/scripts.pory"
	.string "3$"

Town_Spragholt_EventScript_FireMan_Text_4:
# 28 "data/maps/Town_Spragholt/scripts.pory"
	.string "4$"

Town_Spragholt_EventScript_FireMan_Text_5:
# 31 "data/maps/Town_Spragholt/scripts.pory"
	.string "BY THE GREAT PILOWSWINE! You jumped\n"
	.string "the fire!\p"
	.string "So...\p"
	.string "FAST or CRISPY butt?$"

Town_Spragholt_EventScript_FireMan_Text_6:
# 33 "data/maps/Town_Spragholt/scripts.pory"
	.string "Thought as much...$"

Town_Spragholt_EventScript_FireMan_Text_7:
# 37 "data/maps/Town_Spragholt/scripts.pory"
	.string "Cool cave dwellers can make fire. But\n"
	.string "REALLY cool cave dwellers...\p"
	.string "they dare to jump over it!\p"
	.string "You'll need a FAST butt, or you get a\n"
	.string "CRISPY butt.\p"
	.string "Dare you?$"

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Text_0:
# 97 "data/maps/Town_Spragholt/scripts.pory"
	.string "Wait!$"

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Text_1:
# 99 "data/maps/Town_Spragholt/scripts.pory"
	.string "For fuck's sake!$"

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Text_2:
# 112 "data/maps/Town_Spragholt/scripts.pory"
	.string "Hasn't your father told you to come see\n"
	.string "me?\p"
	.string "It's rude to keep an old lady waiting.\p"
	.string "Come...$"
