Brakstrand_PokeBallCrafterCave_MapScripts::
# 15 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetupCave
	.byte 0


SetupCave:
# 21 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 4
	goto_if_le SetupCave_2
# 22 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 5
	goto_if_eq SetupCave_5
SetupCave_1:
# 27 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 7
	goto_if_ge SetupCave_8
	return

SetupCave_2:
# 23 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	setobjectxyperm LOCALID_BALL_CRAFTER, 3, 3
# 24 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	setobjectmovementtype LOCALID_BALL_CRAFTER, MOVEMENT_TYPE_FACE_UP
	goto SetupCave_1

SetupCave_5:
	checkitem ITEM_APRICORN
# 0 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SetupCave_2
	goto SetupCave_1

SetupCave_8:
# 28 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	setflag FLAG_TEMP_2
# 29 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	removeobject LOCALID_POKEBALL
	return


Brakstrand_PokeBallCrafterCave_Crafter::
# 35 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	lockall
# 36 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	faceplayer
# 37 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	switch VAR_GAME_INTRO_STAGE
# 38 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	case 4, Brakstrand_PokeBallCrafterCave_Crafter_3
# 40 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	case 5, Brakstrand_PokeBallCrafterCave_Crafter_4
# 42 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	case 6, Brakstrand_PokeBallCrafterCave_Crafter_5
# 45 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	call CrafterInteraction_Default
Brakstrand_PokeBallCrafterCave_Crafter_1:
# 48 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	releaseall
	return

Brakstrand_PokeBallCrafterCave_Crafter_3:
# 39 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	call CrafterInteraction_Introduction
	goto Brakstrand_PokeBallCrafterCave_Crafter_1

Brakstrand_PokeBallCrafterCave_Crafter_4:
# 41 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	call CrafterInteraction_CollectApricorn
	goto Brakstrand_PokeBallCrafterCave_Crafter_1

Brakstrand_PokeBallCrafterCave_Crafter_5:
# 43 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	call CrafterInteraction_TakePokeball
	goto Brakstrand_PokeBallCrafterCave_Crafter_1


CrafterInteraction_Default:
# 53 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox CrafterInteraction_Default_Text_0
# 54 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmessage
	return


CrafterInteraction_Introduction:
# 59 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox CrafterInteraction_Introduction_Text_0
# 68 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmessage
# 69 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 5
	return


CrafterInteraction_CollectApricorn:
	checkitem ITEM_APRICORN
# 0 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CrafterInteraction_CollectApricorn_1
# 78 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	faceplayer
# 79 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox CrafterInteraction_CollectApricorn_Text_0
# 83 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmessage
# 84 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	setobjectmovementtype LOCALID_BALL_CRAFTER, MOVEMENT_TYPE_FACE_UP
	return

CrafterInteraction_CollectApricorn_1:
# 75 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	call HandOverApricorn
	return


CrafterInteraction_TakePokeball:
# 90 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	faceplayer
# 91 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox CrafterInteraction_TakePokeball_Text_0
# 95 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmessage
	return


Brakstrand_PokeBallCrafterCave_Pokeball::
# 100 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	lockall
# 101 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 6
	goto_if_lt Brakstrand_PokeBallCrafterCave_Pokeball_2
# 113 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	giveitem ITEM_ISOLDES_POKEBALL
# 114 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	removeobject LOCALID_POKEBALL
# 115 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	setflag FLAG_TEMP_2
# 116 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 7
Brakstrand_PokeBallCrafterCave_Pokeball_1:
# 118 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	releaseall
	return

Brakstrand_PokeBallCrafterCave_Pokeball_2:
# 102 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	applymovement LOCALID_BALL_CRAFTER, Brakstrand_PokeBallCrafterCave_Pokeball_Movement_0
# 103 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmovement
# 104 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox Brakstrand_PokeBallCrafterCave_Pokeball_Text_0
# 108 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmessage
# 109 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Brakstrand_PokeBallCrafterCave_Pokeball_Movement_1
# 110 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmovement
# 111 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	call HandOverApricorn
	goto Brakstrand_PokeBallCrafterCave_Pokeball_1


HandOverApricorn:
	checkitem ITEM_APRICORN, 2
# 0 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HandOverApricorn_2
# 129 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox HandOverApricorn_Text_1
HandOverApricorn_1:
# 131 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox HandOverApricorn_Text_2
# 135 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmessage
# 136 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	removeitem ITEM_APRICORN
# 137 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 6
# 138 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	call CrafterInteraction_TakePokeball
# 139 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox HandOverApricorn_Text_3
# 140 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmessage
	return

HandOverApricorn_2:
# 124 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox HandOverApricorn_Text_0
	goto HandOverApricorn_1


# 102 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
Brakstrand_PokeBallCrafterCave_Pokeball_Movement_0:
# 102 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	walk_in_place_fast_left
# 102 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	emote_question_mark
	step_end

# 109 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
Brakstrand_PokeBallCrafterCave_Pokeball_Movement_1:
# 109 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	walk_in_place_down
	step_end

CrafterInteraction_Default_Text_0:
# 53 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "Poké Ball crafting is not implemented\n"
	.string "yet!$"

CrafterInteraction_Introduction_Text_0:
# 60 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "Eh? What do you want?\p"
	.string "...\p"
	.string "Oh! Poké Balls. Yes. Yes! I craft those!\p"
	.string "From Apricorns, of course. But it takes\n"
	.string "time and... passion.\p"
	.string "...\p"
	.string "So you're the one Isolde sent. She said\n"
	.string "someone would come for her Poké Ball.\p"
	.string "Lucky for you, I've been fondling that\n"
	.string "ball all morning. Nearly done!\p"
	.string "Bring me an Apricorn and it's yours.\p"
	.string "You'll find Apricorn trees just south of\n"
	.string "here, lounging near the beach like lazy\l"
	.string "Slakoth.$"

CrafterInteraction_CollectApricorn_Text_0:
# 80 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "Did you get me an Apricorn?\p"
	.string "Trees south of here should have some -\n"
	.string "assuming the wind hasn't talked them\l"
	.string "into hiding.$"

CrafterInteraction_TakePokeball_Text_0:
# 92 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "The Poké Ball on the table is yours.\p"
	.string "Careful, though - it's freshly hardened.\n"
	.string "Let it cool a moment before tossing it\l"
	.string "around.$"

Brakstrand_PokeBallCrafterCave_Pokeball_Text_0:
# 105 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "Eh! Hands off unless you've brought me\n"
	.string "an Apricorn!\p"
	.string "...Wait, you have? Well then - hand it\n"
	.string "over!$"

HandOverApricorn_Text_0:
# 125 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "Oho! A fine bunch of Ripe Apricorns.\n"
	.string "Juicy little things. I'll take one, thank\l"
	.string "you very much!$"

HandOverApricorn_Text_1:
# 129 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "Ah. A lone Ripe Apricorn. Juicy little\n"
	.string "thing.$"

HandOverApricorn_Text_2:
# 132 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "I can make higher quality Poké Balls\n"
	.string "from Firm Apricorns - the ones that\l"
	.string "aren't quite ripe yet.\p"
	.string "But this one will have to do, I guess.$"

HandOverApricorn_Text_3:
# 139 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "My regards to Isolde!\p"
	.string "And bring more Apricorns if you want\n"
	.string "more Poké Balls made.$"
