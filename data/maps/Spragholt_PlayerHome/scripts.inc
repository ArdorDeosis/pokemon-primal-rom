Spragholt_PlayerHome_MapScripts::
# 15 "data/maps/Spragholt_PlayerHome/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Spragholt_PlayerHome_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Spragholt_PlayerHome_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/Spragholt_PlayerHome/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, CheckEntranceTriggerAfterWarp
	.2byte 0


Spragholt_PlayerHome_EventScript_Father::
# 21 "data/maps/Spragholt_PlayerHome/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 4
	goto_if_le Spragholt_PlayerHome_EventScript_Father_1
# 24 "data/maps/Spragholt_PlayerHome/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, Spragholt_PlayerHome_EventScript_Father_2
# 28 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Father_Default
	return

Spragholt_PlayerHome_EventScript_Father_1:
# 22 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Father_Intro
	return

Spragholt_PlayerHome_EventScript_Father_2:
# 25 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Father_Reconciled
	return


Father_Default:
	return


Father_Intro:
# 38 "data/maps/Spragholt_PlayerHome/scripts.pory"
	lockall
# 39 "data/maps/Spragholt_PlayerHome/scripts.pory"
	switch VAR_TEMP_1
# 40 "data/maps/Spragholt_PlayerHome/scripts.pory"
	case 0, Father_Intro_3
# 42 "data/maps/Spragholt_PlayerHome/scripts.pory"
	case 1, Father_Intro_4
# 44 "data/maps/Spragholt_PlayerHome/scripts.pory"
	case 2, Father_Intro_5
# 46 "data/maps/Spragholt_PlayerHome/scripts.pory"
	case 3, Father_Intro_6
Father_Intro_6:
# 48 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Father_Intro4
Father_Intro_1:
# 50 "data/maps/Spragholt_PlayerHome/scripts.pory"
	addvar VAR_TEMP_1, 1
# 51 "data/maps/Spragholt_PlayerHome/scripts.pory"
	releaseall
	return

Father_Intro_3:
# 41 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Father_Intro1
	goto Father_Intro_1

Father_Intro_4:
# 43 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Father_Intro2
	goto Father_Intro_1

Father_Intro_5:
# 45 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Father_Intro3
	goto Father_Intro_1


Father_Intro1:
# 55 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox Father_Intro1_Text_0
# 56 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmessage
	return


Father_Intro2:
# 60 "data/maps/Spragholt_PlayerHome/scripts.pory"
	faceplayer
# 61 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox Father_Intro2_Text_0
# 62 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmessage
	return


Father_Intro3:
# 66 "data/maps/Spragholt_PlayerHome/scripts.pory"
	faceplayer
# 67 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox Father_Intro3_Text_0
# 72 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmessage
# 73 "data/maps/Spragholt_PlayerHome/scripts.pory"
	applymovement ID_Father_PlayerHome, Father_Intro3_Movement_0
# 74 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmovement
	return


Father_Intro4:
# 78 "data/maps/Spragholt_PlayerHome/scripts.pory"
	faceplayer
# 79 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox Father_Intro4_Text_0
# 84 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmessage
# 85 "data/maps/Spragholt_PlayerHome/scripts.pory"
	applymovement ID_Father_PlayerHome, Father_Intro3_Movement_0
# 86 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmovement
	return


Spragholt_PlayerHome_Trigger_Entrance::
# 90 "data/maps/Spragholt_PlayerHome/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 4
	goto_if_gt Spragholt_PlayerHome_Trigger_Entrance_2
	return

Spragholt_PlayerHome_Trigger_Entrance_1:
# 91 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call FatherGivePokedex
	return

Spragholt_PlayerHome_Trigger_Entrance_2:
# 90 "data/maps/Spragholt_PlayerHome/scripts.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, Spragholt_PlayerHome_Trigger_Entrance_1
	return


CheckEntranceTriggerAfterWarp:
# 95 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Spragholt_PlayerHome_Trigger_Entrance
# 96 "data/maps/Spragholt_PlayerHome/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


FatherGivePokedex:
# 100 "data/maps/Spragholt_PlayerHome/scripts.pory"
	lockall
# 101 "data/maps/Spragholt_PlayerHome/scripts.pory"
	special SpawnCameraObject
# 102 "data/maps/Spragholt_PlayerHome/scripts.pory"
	applymovement LOCALID_CAMERA, FatherGivePokedex_Movement_0
# 103 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmovement
# 104 "data/maps/Spragholt_PlayerHome/scripts.pory"
	applymovement ID_Father_PlayerHome, FatherGivePokedex_Movement_1
# 105 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmovement
# 106 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox FatherGivePokedex_Text_0
# 107 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmessage
# 108 "data/maps/Spragholt_PlayerHome/scripts.pory"
	applymovement ID_Father_PlayerHome, FatherGivePokedex_Movement_2
# 113 "data/maps/Spragholt_PlayerHome/scripts.pory"
	applymovement LOCALID_CAMERA, FatherGivePokedex_Movement_3
# 114 "data/maps/Spragholt_PlayerHome/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Father_Intro3_Movement_0
# 115 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmovement
# 116 "data/maps/Spragholt_PlayerHome/scripts.pory"
	special RemoveCameraObject
# 118 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Spragholt_Pokedex_Speech_Part1
# 120 "data/maps/Spragholt_PlayerHome/scripts.pory"
	applymovement ID_Father_PlayerHome, FatherGivePokedex_Movement_4
# 125 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmovement
# 127 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call Spragholt_Pokedex_Speech_Part2
# 129 "data/maps/Spragholt_PlayerHome/scripts.pory"
	applymovement ID_Father_PlayerHome, FatherGivePokedex_Movement_5
# 134 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmovement
# 135 "data/maps/Spragholt_PlayerHome/scripts.pory"
	releaseall
	return


Spragholt_Pokedex_Speech_Part1::
# 139 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox Spragholt_Pokedex_Speech_Part1_Text_0
# 146 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmessage
# 147 "data/maps/Spragholt_PlayerHome/scripts.pory"
	giveitem ITEM_WEAK_POKEBALL, 5
# 148 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox Spragholt_Pokedex_Speech_Part1_Text_1
# 154 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmessage
# 155 "data/maps/Spragholt_PlayerHome/scripts.pory"
	call AddStuffToPokedex
# 156 "data/maps/Spragholt_PlayerHome/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
	return


Spragholt_Pokedex_Speech_Part2::
# 159 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox Spragholt_Pokedex_Speech_Part2_Text_0
# 163 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmessage
	return


Father_Reconciled:
# 167 "data/maps/Spragholt_PlayerHome/scripts.pory"
	lockall
# 168 "data/maps/Spragholt_PlayerHome/scripts.pory"
	faceplayer
# 169 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox Spragholt_Pokedex_Speech_Part2_Text_0
# 173 "data/maps/Spragholt_PlayerHome/scripts.pory"
	waitmessage
# 174 "data/maps/Spragholt_PlayerHome/scripts.pory"
	releaseall
	return


AddStuffToPokedex:
# 178 "data/maps/Spragholt_PlayerHome/scripts.pory"
	setcaughtmon SPECIES_PIDGEY
# 179 "data/maps/Spragholt_PlayerHome/scripts.pory"
	setcaughtmon SPECIES_SENTRET
# 180 "data/maps/Spragholt_PlayerHome/scripts.pory"
	setseenmon SPECIES_MANKEY
# 181 "data/maps/Spragholt_PlayerHome/scripts.pory"
	setseenmon SPECIES_WINGULL
# 182 "data/maps/Spragholt_PlayerHome/scripts.pory"
	setseenmon SPECIES_DWEBBLE
	return


# 73 "data/maps/Spragholt_PlayerHome/scripts.pory"
Father_Intro3_Movement_0:
# 73 "data/maps/Spragholt_PlayerHome/scripts.pory"
	face_up
	step_end

# 102 "data/maps/Spragholt_PlayerHome/scripts.pory"
FatherGivePokedex_Movement_0:
# 102 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_up
# 102 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_up
# 102 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_up
# 102 "data/maps/Spragholt_PlayerHome/scripts.pory"
	step_end

# 104 "data/maps/Spragholt_PlayerHome/scripts.pory"
FatherGivePokedex_Movement_1:
# 104 "data/maps/Spragholt_PlayerHome/scripts.pory"
	emote_question_mark
# 104 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_in_place_fast_down
	step_end

# 108 "data/maps/Spragholt_PlayerHome/scripts.pory"
FatherGivePokedex_Movement_2:
# 109 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_down
# 109 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_down
# 109 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_down
# 110 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_right
# 111 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_down
# 111 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_down
	step_end

# 113 "data/maps/Spragholt_PlayerHome/scripts.pory"
FatherGivePokedex_Movement_3:
# 113 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_down
# 113 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_down
# 113 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_down
# 113 "data/maps/Spragholt_PlayerHome/scripts.pory"
	step_end

# 120 "data/maps/Spragholt_PlayerHome/scripts.pory"
FatherGivePokedex_Movement_4:
# 121 "data/maps/Spragholt_PlayerHome/scripts.pory"
	lock_facing_direction
# 122 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_up
# 123 "data/maps/Spragholt_PlayerHome/scripts.pory"
	unlock_facing_direction
	step_end

# 129 "data/maps/Spragholt_PlayerHome/scripts.pory"
FatherGivePokedex_Movement_5:
# 130 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_up
# 130 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_up
# 130 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_up
# 130 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_up
# 131 "data/maps/Spragholt_PlayerHome/scripts.pory"
	walk_left
# 132 "data/maps/Spragholt_PlayerHome/scripts.pory"
	face_up
	step_end

Father_Intro1_Text_0:
# 55 "data/maps/Spragholt_PlayerHome/scripts.pory"
	.string "Hmpf.$"

Father_Intro2_Text_0:
# 61 "data/maps/Spragholt_PlayerHome/scripts.pory"
	.string "WHAT?\p"
	.string "...\p"
	.string "You're really going through with this?\p"
	.string "Running off to challenge the High King?\p"
	.string "With a wild beast at your side and some\n"
	.string "old bones' blessing?$"

Father_Intro3_Text_0:
# 68 "data/maps/Spragholt_PlayerHome/scripts.pory"
	.string "You're still a kid!\p"
	.string "You don't know the world, {PLAYER}.\n"
	.string "Out there, it's not like Spragholt.\p"
	.string "Out there, things bite and don't let go.\p"
	.string "... But you won't listen, will you?$"

Father_Intro4_Text_0:
# 80 "data/maps/Spragholt_PlayerHome/scripts.pory"
	.string "Fine. Run off then. Play hero.\p"
	.string "But don't expect me to sit here waiting\n"
	.string "for bad news.\p"
	.string "Hmpf.\p"
	.string "... Go see the shaman. Get your Pokémon.\n"
	.string "Do what you think you have to.$"

FatherGivePokedex_Text_0:
# 106 "data/maps/Spragholt_PlayerHome/scripts.pory"
	.string "{PLAYER}!\p"
	.string "You're still here?!$"

Spragholt_Pokedex_Speech_Part1_Text_0:
# 140 "data/maps/Spragholt_PlayerHome/scripts.pory"
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
# 149 "data/maps/Spragholt_PlayerHome/scripts.pory"
	.string "And this Journal... It's full of notes\n"
	.string "from when I still wandered. But it's only\l"
	.string "half-finished. You'll need to write the\l"
	.string "rest. Every Pokémon you meet, every one\l"
	.string "you catch. Sketch it. Study it. It's your\l"
	.string "best chance to beat the High King.$"

Spragholt_Pokedex_Speech_Part2_Text_0:
# 160 "data/maps/Spragholt_PlayerHome/scripts.pory"
	.string "I'm proud of you, {PLAYER}.\p"
	.string "Now go! But come back to Spragholt now\n"
	.string "and then, will you?$"
