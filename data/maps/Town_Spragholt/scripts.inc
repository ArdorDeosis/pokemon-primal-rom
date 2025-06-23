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
	goto_if_set FLAG_TEMP_1, Town_Spragholt_EventScript_FireMan_2
# 21 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_EventScript_FireMan_Text_2
Town_Spragholt_EventScript_FireMan_1:
# 23 "data/maps/Town_Spragholt/scripts.pory"
	release
	end

Town_Spragholt_EventScript_FireMan_2:
# 16 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_EventScript_FireMan_Text_0
# 17 "data/maps/Town_Spragholt/scripts.pory"
	multichoice 22, 8, MULTI_FAST_OR_CRISPY, TRUE
# 18 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_EventScript_FireMan_Text_1
	goto Town_Spragholt_EventScript_FireMan_1


Town_Spragholt_Trigger_AwayFromFire::
# 28 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_F, 0
	return


Town_Spragholt_Trigger_StandAtFireNorth::
# 32 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_F, 3
	goto_if_eq Town_Spragholt_Trigger_StandAtFireNorth_2
Town_Spragholt_Trigger_StandAtFireNorth_1:
# 35 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_F, 1
	return

Town_Spragholt_Trigger_StandAtFireNorth_2:
# 33 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_1
	goto Town_Spragholt_Trigger_StandAtFireNorth_1


Town_Spragholt_Trigger_StandAtFireEast::
# 39 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_F, 4
	goto_if_eq Town_Spragholt_Trigger_StandAtFireEast_2
Town_Spragholt_Trigger_StandAtFireEast_1:
# 42 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_F, 2
	return

Town_Spragholt_Trigger_StandAtFireEast_2:
# 40 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_1
	goto Town_Spragholt_Trigger_StandAtFireEast_1


Town_Spragholt_Trigger_StandAtFireSouth::
# 46 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_F, 1
	goto_if_eq Town_Spragholt_Trigger_StandAtFireSouth_2
Town_Spragholt_Trigger_StandAtFireSouth_1:
# 49 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_F, 3
	return

Town_Spragholt_Trigger_StandAtFireSouth_2:
# 47 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_1
	goto Town_Spragholt_Trigger_StandAtFireSouth_1


Town_Spragholt_Trigger_StandAtFireWest::
# 53 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_F, 2
	goto_if_eq Town_Spragholt_Trigger_StandAtFireWest_2
Town_Spragholt_Trigger_StandAtFireWest_1:
# 56 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_F, 4
	return

Town_Spragholt_Trigger_StandAtFireWest_2:
# 54 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_1
	goto Town_Spragholt_Trigger_StandAtFireWest_1


Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_North::
# 62 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_0, 1
# 63 "data/maps/Town_Spragholt/scripts.pory"
	call Town_Spragholt_Trigger_TryToLeaveWithoutPokemon
	return


Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_South::
# 67 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_0, 2
# 68 "data/maps/Town_Spragholt/scripts.pory"
	call Town_Spragholt_Trigger_TryToLeaveWithoutPokemon
	return


Town_Spragholt_Trigger_TryToLeaveWithoutPokemon::
# 72 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 1
	goto_if_gt Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_2
# 75 "data/maps/Town_Spragholt/scripts.pory"
	lockall
# 76 "data/maps/Town_Spragholt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_0
# 77 "data/maps/Town_Spragholt/scripts.pory"
	waitmovement
# 78 "data/maps/Town_Spragholt/scripts.pory"
	switch VAR_TEMP_0
# 79 "data/maps/Town_Spragholt/scripts.pory"
	case 1, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_6
# 80 "data/maps/Town_Spragholt/scripts.pory"
	case 2, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_6
# 83 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Text_1
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_4:
# 85 "data/maps/Town_Spragholt/scripts.pory"
	clearflag FLAG_TEMP_2
# 86 "data/maps/Town_Spragholt/scripts.pory"
	addobject LOCALID_SPRAGHOLT_TOWN_SHAMAN
# 87 "data/maps/Town_Spragholt/scripts.pory"
	waitmessage
# 88 "data/maps/Town_Spragholt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_1
# 89 "data/maps/Town_Spragholt/scripts.pory"
	switch VAR_TEMP_0
# 90 "data/maps/Town_Spragholt/scripts.pory"
	case 1, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_10
# 92 "data/maps/Town_Spragholt/scripts.pory"
	case 2, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_11
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_8:
# 95 "data/maps/Town_Spragholt/scripts.pory"
	waitmovement
# 96 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Text_2
# 98 "data/maps/Town_Spragholt/scripts.pory"
	switch VAR_TEMP_0
# 99 "data/maps/Town_Spragholt/scripts.pory"
	case 1, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_14
# 113 "data/maps/Town_Spragholt/scripts.pory"
	case 2, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_15
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_12:
# 128 "data/maps/Town_Spragholt/scripts.pory"
	waitmovement
# 129 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 1
# 130 "data/maps/Town_Spragholt/scripts.pory"
	warp MAP_SPRAGHOLT_SHAMAN_CAVE, 0
# 131 "data/maps/Town_Spragholt/scripts.pory"
	releaseall
	end

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_2:
	end

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_6:
# 81 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Text_0, MSGBOX_NPC
	goto Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_4

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_10:
# 91 "data/maps/Town_Spragholt/scripts.pory"
	applymovement LOCALID_SPRAGHOLT_TOWN_SHAMAN, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_2
	goto Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_8

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_11:
# 93 "data/maps/Town_Spragholt/scripts.pory"
	applymovement LOCALID_SPRAGHOLT_TOWN_SHAMAN, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_3
	goto Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_8

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_14:
# 100 "data/maps/Town_Spragholt/scripts.pory"
	applymovement LOCALID_SPRAGHOLT_TOWN_SHAMAN, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_4
# 107 "data/maps/Town_Spragholt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_5
	goto Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_12

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_15:
# 114 "data/maps/Town_Spragholt/scripts.pory"
	applymovement LOCALID_SPRAGHOLT_TOWN_SHAMAN, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_6
# 121 "data/maps/Town_Spragholt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_7
	goto Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_12


# 76 "data/maps/Town_Spragholt/scripts.pory"
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_0:
# 76 "data/maps/Town_Spragholt/scripts.pory"
	emote_question_mark
	step_end

# 88 "data/maps/Town_Spragholt/scripts.pory"
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_1:
# 88 "data/maps/Town_Spragholt/scripts.pory"
	face_right
	step_end

# 91 "data/maps/Town_Spragholt/scripts.pory"
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_2:
# 91 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 91 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 91 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 91 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 91 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 91 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 91 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 91 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 91 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 91 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 91 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 91 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 91 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
	step_end

# 93 "data/maps/Town_Spragholt/scripts.pory"
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_3:
# 93 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 93 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 93 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 93 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 93 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 93 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 93 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 93 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 93 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 93 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 93 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 93 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
	step_end

# 100 "data/maps/Town_Spragholt/scripts.pory"
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_4:
# 101 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 101 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 101 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 101 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 101 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 101 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 102 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 102 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 102 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 102 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 102 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 102 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 102 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 102 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 103 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 103 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 103 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 104 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 105 "data/maps/Town_Spragholt/scripts.pory"
	set_invisible
	step_end

# 107 "data/maps/Town_Spragholt/scripts.pory"
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_5:
# 108 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 108 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 108 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 108 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 108 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 108 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 108 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 109 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 110 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 110 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 110 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 111 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
	step_end

# 114 "data/maps/Town_Spragholt/scripts.pory"
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_6:
# 115 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 115 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 115 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 115 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 115 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 115 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 116 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 117 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 117 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 117 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 118 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
# 119 "data/maps/Town_Spragholt/scripts.pory"
	set_invisible
	step_end

# 121 "data/maps/Town_Spragholt/scripts.pory"
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_7:
# 122 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 122 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 122 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 122 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 122 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 122 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 122 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
# 123 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 123 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 123 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 123 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 123 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 123 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 123 "data/maps/Town_Spragholt/scripts.pory"
	walk_down
# 124 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 124 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 124 "data/maps/Town_Spragholt/scripts.pory"
	walk_left
# 125 "data/maps/Town_Spragholt/scripts.pory"
	walk_up
	step_end

Town_Spragholt_EventScript_FireMan_Text_0:
# 16 "data/maps/Town_Spragholt/scripts.pory"
	.string "BY THE GREAT PILOWSWINE! You jumped\n"
	.string "the fire!\p"
	.string "So...\p"
	.string "FAST or CRISPY butt?$"

Town_Spragholt_EventScript_FireMan_Text_1:
# 18 "data/maps/Town_Spragholt/scripts.pory"
	.string "Thought as much...$"

Town_Spragholt_EventScript_FireMan_Text_2:
# 21 "data/maps/Town_Spragholt/scripts.pory"
	.string "Cool cave dwellers can make fire. But\n"
	.string "REALLY cool cave dwellers...\p"
	.string "they dare to jump over it!\p"
	.string "You'll need a FAST butt, or you get a\n"
	.string "CRISPY butt.\p"
	.string "Dare you?$"

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Text_0:
# 81 "data/maps/Town_Spragholt/scripts.pory"
	.string "Wait!$"

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Text_1:
# 83 "data/maps/Town_Spragholt/scripts.pory"
	.string "For fuck's sake!$"

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Text_2:
# 96 "data/maps/Town_Spragholt/scripts.pory"
	.string "Hasn't your father told you to come see\n"
	.string "me?\p"
	.string "It's rude to keep an old lady waiting.\p"
	.string "Come...$"
