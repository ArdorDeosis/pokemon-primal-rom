Spragholt_PlayerHome_MapScripts::
# 16 "data/maps/Spragholt_PlayerHome/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Spragholt_PlayerHome_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Spragholt_PlayerHome_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/Spragholt_PlayerHome/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, CheckEntranceTriggerAfterWarp
	.2byte 0


Spragholt_PlayerHome_EventScript_Father::
# 22 "data/maps/Spragholt_PlayerHome/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 5
	goto_if_le Spragholt_PlayerHome_EventScript_Father_1
# 25 "data/maps/Spragholt_PlayerHome/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, Spragholt_PlayerHome_EventScript_Father_2
# 29 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Father_Default
	return

Spragholt_PlayerHome_EventScript_Father_1:
# 23 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Father_Intro
	return

Spragholt_PlayerHome_EventScript_Father_2:
# 26 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Father_Reconciled
	return


Father_Default:
	return


Father_Intro:
# 39 "data/maps/Spragholt_PlayerHome/scripts.pory"
	lockall
# 40 "data/maps/Spragholt_PlayerHome/scripts.pory"
	switch VAR_TEMP_1
# 41 "data/maps/Spragholt_PlayerHome/scripts.pory"
	case 0, Father_Intro_3
# 43 "data/maps/Spragholt_PlayerHome/scripts.pory"
	case 1, Father_Intro_4
# 45 "data/maps/Spragholt_PlayerHome/scripts.pory"
	case 2, Father_Intro_5
# 47 "data/maps/Spragholt_PlayerHome/scripts.pory"
	case 3, Father_Intro_6
Father_Intro_6:
# 49 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Father_Intro4
Father_Intro_1:
# 51 "data/maps/Spragholt_PlayerHome/scripts.pory"
	addvar VAR_TEMP_1, 1
# 52 "data/maps/Spragholt_PlayerHome/scripts.pory"
	releaseall
	return

Father_Intro_3:
# 42 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Father_Intro1
	goto Father_Intro_1

Father_Intro_4:
# 44 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Father_Intro2
	goto Father_Intro_1

Father_Intro_5:
# 46 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Father_Intro3
	goto Father_Intro_1


Father_Intro1:
# 56 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox Father_Intro1_Text_0
# 57 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmessage
	return


Father_Intro2:
# 61 "data/maps/Spragholt_PlayerHome/scripts.pory"
	faceplayer
# 62 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox Father_Intro2_Text_0
# 63 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmessage
	return


Father_Intro3:
# 67 "data/maps/Spragholt_PlayerHome/scripts.pory"
	faceplayer
# 68 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox Father_Intro3_Text_0
# 73 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmessage
# 74 "data/maps/Spragholt_PlayerHome/scripts.pory"
	applymovement ID_Father_PlayerHome, Father_Intro3_Movement_0
# 75 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmovement
	return


Father_Intro4:
# 79 "data/maps/Spragholt_PlayerHome/scripts.pory"
	faceplayer
# 80 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox Father_Intro4_Text_0
# 85 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmessage
# 86 "data/maps/Spragholt_PlayerHome/scripts.pory"
	applymovement ID_Father_PlayerHome, Father_Intro3_Movement_0
# 87 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmovement
	return


Spragholt_PlayerHome_Trigger_Entrance::
# 91 "data/maps/Spragholt_PlayerHome/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 5
	goto_if_gt Spragholt_PlayerHome_Trigger_Entrance_2
	return

Spragholt_PlayerHome_Trigger_Entrance_1:
# 92 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call FatherGivePokedex
	return

Spragholt_PlayerHome_Trigger_Entrance_2:
# 91 "data/maps/Spragholt_PlayerHome/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, Spragholt_PlayerHome_Trigger_Entrance_1
	return


CheckEntranceTriggerAfterWarp:
# 96 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Spragholt_PlayerHome_Trigger_Entrance
# 97 "data/maps/Spragholt_PlayerHome/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


FatherGivePokedex:
# 101 "data/maps/Spragholt_PlayerHome/scripts.pory"
	lockall
# 102 "data/maps/Spragholt_PlayerHome/scripts.pory"
	special SpawnCameraObject
# 103 "data/maps/Spragholt_PlayerHome/scripts.pory"
	applymovement LOCALID_CAMERA, FatherGivePokedex_Movement_0
# 104 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmovement
# 105 "data/maps/Spragholt_PlayerHome/scripts.pory"
	applymovement ID_Father_PlayerHome, FatherGivePokedex_Movement_1
# 106 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmovement
# 107 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox FatherGivePokedex_Text_0
# 108 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmessage
# 109 "data/maps/Spragholt_PlayerHome/scripts.pory"
	applymovement ID_Father_PlayerHome, FatherGivePokedex_Movement_2
# 114 "data/maps/Spragholt_PlayerHome/scripts.pory"
	applymovement LOCALID_CAMERA, FatherGivePokedex_Movement_3
# 115 "data/maps/Spragholt_PlayerHome/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Father_Intro3_Movement_0
# 116 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmovement
# 117 "data/maps/Spragholt_PlayerHome/scripts.pory"
	special RemoveCameraObject
# 119 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Spragholt_Pokedex_Speech_Part1
# 121 "data/maps/Spragholt_PlayerHome/scripts.pory"
	applymovement ID_Father_PlayerHome, FatherGivePokedex_Movement_4
# 126 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmovement
# 128 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Spragholt_Pokedex_Speech_Part2
# 130 "data/maps/Spragholt_PlayerHome/scripts.pory"
	applymovement ID_Father_PlayerHome, FatherGivePokedex_Movement_5
# 135 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmovement
# 136 "data/maps/Spragholt_PlayerHome/scripts.pory"
	releaseall
	return


Spragholt_Pokedex_Speech_Part1::
# 140 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox Spragholt_Pokedex_Speech_Part1_Text_0
# 147 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmessage
# 148 "data/maps/Spragholt_PlayerHome/scripts.pory"
	giveitem ITEM_WEAK_POKEBALL, 5
# 149 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox Spragholt_Pokedex_Speech_Part1_Text_1
# 155 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmessage
# 156 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call AddStuffToPokedex
# 157 "data/maps/Spragholt_PlayerHome/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
	return


Spragholt_Pokedex_Speech_Part2::
# 160 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox Spragholt_Pokedex_Speech_Part2_Text_0
# 164 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmessage
	return


Father_Reconciled:
# 168 "data/maps/Spragholt_PlayerHome/scripts.pory"
	lockall
# 169 "data/maps/Spragholt_PlayerHome/scripts.pory"
	faceplayer
# 170 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox Spragholt_Pokedex_Speech_Part2_Text_0
# 174 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmessage
# 175 "data/maps/Spragholt_PlayerHome/scripts.pory"
	releaseall
	return


AddStuffToPokedex:
# 179 "data/maps/Spragholt_PlayerHome/scripts.pory"
	setcaughtmon SPECIES_PIDGEY
# 180 "data/maps/Spragholt_PlayerHome/scripts.pory"
	setcaughtmon SPECIES_SENTRET
# 181 "data/maps/Spragholt_PlayerHome/scripts.pory"
	setseenmon SPECIES_MANKEY
# 182 "data/maps/Spragholt_PlayerHome/scripts.pory"
	setseenmon SPECIES_WINGULL
# 183 "data/maps/Spragholt_PlayerHome/scripts.pory"
	setseenmon SPECIES_DWEBBLE
	return


# 74 "data/maps/Spragholt_PlayerHome/scripts.pory"
Father_Intro3_Movement_0:
# 74 "data/maps/Spragholt_PlayerHome/scripts.pory"
	face_up
	step_end

# 103 "data/maps/Spragholt_PlayerHome/scripts.pory"
FatherGivePokedex_Movement_0:
# 103 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_up
# 103 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_up
# 103 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_up
# 103 "data/maps/Spragholt_PlayerHome/scripts.pory"
	step_end

# 105 "data/maps/Spragholt_PlayerHome/scripts.pory"
FatherGivePokedex_Movement_1:
# 105 "data/maps/Spragholt_PlayerHome/scripts.pory"
	emote_question_mark
# 105 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_in_place_fast_down
	step_end

# 109 "data/maps/Spragholt_PlayerHome/scripts.pory"
FatherGivePokedex_Movement_2:
# 110 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_down
# 110 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_down
# 110 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_down
# 111 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_right
# 112 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_down
# 112 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_down
	step_end

# 114 "data/maps/Spragholt_PlayerHome/scripts.pory"
FatherGivePokedex_Movement_3:
# 114 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_down
# 114 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_down
# 114 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_down
# 114 "data/maps/Spragholt_PlayerHome/scripts.pory"
	step_end

# 121 "data/maps/Spragholt_PlayerHome/scripts.pory"
FatherGivePokedex_Movement_4:
# 122 "data/maps/Spragholt_PlayerHome/scripts.pory"
	lock_facing_direction
# 123 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_up
# 124 "data/maps/Spragholt_PlayerHome/scripts.pory"
	unlock_facing_direction
	step_end

# 130 "data/maps/Spragholt_PlayerHome/scripts.pory"
FatherGivePokedex_Movement_5:
# 131 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_up
# 131 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_up
# 131 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_up
# 131 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_up
# 132 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_left
# 133 "data/maps/Spragholt_PlayerHome/scripts.pory"
	face_up
	step_end

Father_Intro1_Text_0:
# 56 "data/maps/Spragholt_PlayerHome/scripts.pory"
	.string "Hmpf.$"

Father_Intro2_Text_0:
# 62 "data/maps/Spragholt_PlayerHome/scripts.pory"
	.string "WHAT?\p"
	.string "...\p"
	.string "You're really going through with this?\p"
	.string "Running off to challenge the High King?\p"
	.string "With a wild beast at your side and some\n"
	.string "old bones' blessing?$"

Father_Intro3_Text_0:
# 69 "data/maps/Spragholt_PlayerHome/scripts.pory"
	.string "You're still a kid!\p"
	.string "You don't know the world, {PLAYER}.\n"
	.string "Out there, it's not like Spragholt.\p"
	.string "Out there, things bite and don't let go.\p"
	.string "... But you won't listen, will you?$"

Father_Intro4_Text_0:
# 81 "data/maps/Spragholt_PlayerHome/scripts.pory"
	.string "Fine. Run off then. Play hero.\p"
	.string "But don't expect me to sit here waiting\n"
	.string "for bad news.\p"
	.string "Hmpf.\p"
	.string "... Go see the shaman. Get your Pokémon.\n"
	.string "Do what you think you have to.$"

FatherGivePokedex_Text_0:
# 107 "data/maps/Spragholt_PlayerHome/scripts.pory"
	.string "{PLAYER}!\p"
	.string "You're still here?!$"

Spragholt_Pokedex_Speech_Part1_Text_0:
# 141 "data/maps/Spragholt_PlayerHome/scripts.pory"
	.string "I...\n"
	.string "I'm sorry.\p"
	.string "I shouldn't have yelled. I was scared.\n"
	.string "Still am. Scared of losing you. Scared of\l"
	.string "watching you vanish like so many did\l"
	.string "before.\p"
	.string "My days out there... before I hid here...\n"
	.string "They taught me how small we really are.\p"
	.string "You've got heart. And a fire that\n"
	.string "doesn't flinch. But you've got a lot to\l"
	.string "learn, still.\p"
	.string "Here. These Poké Balls should help you\n"
	.string "keep your teeth.$"

Spragholt_Pokedex_Speech_Part1_Text_1:
# 150 "data/maps/Spragholt_PlayerHome/scripts.pory"
	.string "And this Journal... It's full of notes\n"
	.string "from when I still wandered. But it's only\l"
	.string "half-finished. You'll need to write the\l"
	.string "rest. Every Pokémon you meet, every one\l"
	.string "you catch. Sketch it. Study it. It's your\l"
	.string "best chance to beat the High King.$"

Spragholt_Pokedex_Speech_Part2_Text_0:
# 161 "data/maps/Spragholt_PlayerHome/scripts.pory"
	.string "I'm proud of you, {PLAYER}.\p"
	.string "Now go! But come back to Spragholt now\n"
	.string "and then, will you?$"
