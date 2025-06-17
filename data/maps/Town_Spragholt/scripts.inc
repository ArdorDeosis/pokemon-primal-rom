Town_Spragholt_MapScripts::
	.byte 0


Town_Spragholt_EventScript_FireMan::
# 4 "data/maps/Town_Spragholt/scripts.pory"
	lock
# 5 "data/maps/Town_Spragholt/scripts.pory"
	faceplayer
# 6 "data/maps/Town_Spragholt/scripts.pory"
	goto_if_set FLAG_TEMP_1, Town_Spragholt_EventScript_FireMan_2
# 12 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_EventScript_FireMan_Text_2
Town_Spragholt_EventScript_FireMan_1:
# 14 "data/maps/Town_Spragholt/scripts.pory"
	release
	end

Town_Spragholt_EventScript_FireMan_2:
# 7 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_EventScript_FireMan_Text_0
# 8 "data/maps/Town_Spragholt/scripts.pory"
	multichoice 22, 8, MULTI_FAST_OR_CRISPY, TRUE
# 9 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_EventScript_FireMan_Text_1
	goto Town_Spragholt_EventScript_FireMan_1


Town_Spragholt_Trigger_AwayFromFire::
# 19 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_F, 0
	return


Town_Spragholt_Trigger_StandAtFireNorth::
# 23 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_F, 3
	goto_if_eq Town_Spragholt_Trigger_StandAtFireNorth_2
Town_Spragholt_Trigger_StandAtFireNorth_1:
# 26 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_F, 1
	return

Town_Spragholt_Trigger_StandAtFireNorth_2:
# 24 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_1
	goto Town_Spragholt_Trigger_StandAtFireNorth_1


Town_Spragholt_Trigger_StandAtFireEast::
# 30 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_F, 4
	goto_if_eq Town_Spragholt_Trigger_StandAtFireEast_2
Town_Spragholt_Trigger_StandAtFireEast_1:
# 33 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_F, 2
	return

Town_Spragholt_Trigger_StandAtFireEast_2:
# 31 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_1
	goto Town_Spragholt_Trigger_StandAtFireEast_1


Town_Spragholt_Trigger_StandAtFireSouth::
# 37 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_F, 1
	goto_if_eq Town_Spragholt_Trigger_StandAtFireSouth_2
Town_Spragholt_Trigger_StandAtFireSouth_1:
# 40 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_F, 3
	return

Town_Spragholt_Trigger_StandAtFireSouth_2:
# 38 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_1
	goto Town_Spragholt_Trigger_StandAtFireSouth_1


Town_Spragholt_Trigger_StandAtFireWest::
# 44 "data/maps/Town_Spragholt/scripts.pory"
	compare VAR_TEMP_F, 2
	goto_if_eq Town_Spragholt_Trigger_StandAtFireWest_2
Town_Spragholt_Trigger_StandAtFireWest_1:
# 47 "data/maps/Town_Spragholt/scripts.pory"
	setvar VAR_TEMP_F, 4
	return

Town_Spragholt_Trigger_StandAtFireWest_2:
# 45 "data/maps/Town_Spragholt/scripts.pory"
	setflag FLAG_TEMP_1
	goto Town_Spragholt_Trigger_StandAtFireWest_1


Town_Spragholt_Trigger_TryToLeaveWithoutPokemon::
# 51 "data/maps/Town_Spragholt/scripts.pory"
	goto_if_set FLAG_RECEIVED_STARTER, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_2
# 54 "data/maps/Town_Spragholt/scripts.pory"
	lockall
# 55 "data/maps/Town_Spragholt/scripts.pory"
	msgbox Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Text_0
# 56 "data/maps/Town_Spragholt/scripts.pory"
	waitmessage
# 57 "data/maps/Town_Spragholt/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_0
# 58 "data/maps/Town_Spragholt/scripts.pory"
	waitmovement
# 59 "data/maps/Town_Spragholt/scripts.pory"
	release
	end

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_2:
	end


# 57 "data/maps/Town_Spragholt/scripts.pory"
Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Movement_0:
# 57 "data/maps/Town_Spragholt/scripts.pory"
	walk_right
	step_end

Town_Spragholt_EventScript_FireMan_Text_0:
# 7 "data/maps/Town_Spragholt/scripts.pory"
	.string "BY THE GREAT PILOWSWINE! You jumped\n"
	.string "the fire!\p"
	.string "So...\p"
	.string "FAST or CRISPY butt?$"

Town_Spragholt_EventScript_FireMan_Text_1:
# 9 "data/maps/Town_Spragholt/scripts.pory"
	.string "Thought as much...$"

Town_Spragholt_EventScript_FireMan_Text_2:
# 12 "data/maps/Town_Spragholt/scripts.pory"
	.string "Cool cave dwellers can make fire. But\n"
	.string "REALLY cool cave dwellers...\p"
	.string "they dare to jump over it!\p"
	.string "They proof they have a fast butt, or\n"
	.string "they get a crispy butt.\p"
	.string "Dare you?$"

Town_Spragholt_Trigger_TryToLeaveWithoutPokemon_Text_0:
# 55 "data/maps/Town_Spragholt/scripts.pory"
	.string "You should see the shaman before\n"
	.string "wandering off!$"
