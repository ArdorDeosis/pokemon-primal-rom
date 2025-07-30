Brakstrand_PokeBallCrafterCave_MapScripts::
# 4 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetupCave
	.byte 0


SetupCave:
# 10 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 3
	goto_if_le SetupCave_2
# 11 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 4
	goto_if_eq SetupCave_5
SetupCave_1:
# 16 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 6
	goto_if_ge SetupCave_8
	return

SetupCave_2:
# 12 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	setobjectxyperm LOCALID_BALL_CRAFTER, 3, 3
# 13 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	setobjectmovementtype LOCALID_BALL_CRAFTER, MOVEMENT_TYPE_FACE_UP
	goto SetupCave_1

SetupCave_5:
	checkitem ITEM_APRICORN
# 0 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SetupCave_2
	goto SetupCave_1

SetupCave_8:
# 17 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	setflag FLAG_TEMP_2
# 18 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	removeobject LOCALID_POKEBALL
	return


Brakstrand_PokeBallCrafterCave_TalkToCrafter::
# 24 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	lockall
# 25 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	faceplayer
# 26 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	switch VAR_GAME_INTRO_STAGE
# 27 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	case 0, Brakstrand_PokeBallCrafterCave_TalkToCrafter_3
# 28 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	case 1, Brakstrand_PokeBallCrafterCave_TalkToCrafter_3
# 29 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	case 2, Brakstrand_PokeBallCrafterCave_TalkToCrafter_3
# 30 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	case 3, Brakstrand_PokeBallCrafterCave_TalkToCrafter_3
# 32 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	case 4, Brakstrand_PokeBallCrafterCave_TalkToCrafter_4
# 34 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	case 5, Brakstrand_PokeBallCrafterCave_TalkToCrafter_5
# 37 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	call CrafterInteraction_Default
Brakstrand_PokeBallCrafterCave_TalkToCrafter_1:
# 40 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	releaseall
	return

Brakstrand_PokeBallCrafterCave_TalkToCrafter_3:
# 31 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	call CrafterInteraction_StageLess4
	goto Brakstrand_PokeBallCrafterCave_TalkToCrafter_1

Brakstrand_PokeBallCrafterCave_TalkToCrafter_4:
# 33 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	call CrafterInteraction_Stage4
	goto Brakstrand_PokeBallCrafterCave_TalkToCrafter_1

Brakstrand_PokeBallCrafterCave_TalkToCrafter_5:
# 35 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	call CrafterInteraction_Stage5
	goto Brakstrand_PokeBallCrafterCave_TalkToCrafter_1


CrafterInteraction_Default:
# 45 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox CrafterInteraction_Default_Text_0
# 46 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmessage
	return


CrafterInteraction_StageLess4:
# 51 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox CrafterInteraction_StageLess4_Text_0
# 57 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmessage
# 58 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 4
	return


CrafterInteraction_Stage4:
	checkitem ITEM_APRICORN
# 0 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne CrafterInteraction_Stage4_1
# 67 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	faceplayer
# 68 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox CrafterInteraction_Stage4_Text_0
# 69 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmessage
# 70 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	setobjectmovementtype LOCALID_BALL_CRAFTER, MOVEMENT_TYPE_FACE_UP
	return

CrafterInteraction_Stage4_1:
# 64 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	call HandOverApricorn
	return


CrafterInteraction_Stage5:
# 76 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	faceplayer
# 77 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox CrafterInteraction_Stage5_Text_0
# 78 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmessage
	return


Brakstrand_PokeBallCrafterCave_Pokeball::
# 83 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	lockall
# 84 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	compare VAR_GAME_INTRO_STAGE, 5
	goto_if_lt Brakstrand_PokeBallCrafterCave_Pokeball_2
# 93 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	giveitem ITEM_WEAK_POKEBALL
# 94 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	removeobject LOCALID_POKEBALL
# 95 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 6
Brakstrand_PokeBallCrafterCave_Pokeball_1:
# 97 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	releaseall
	return

Brakstrand_PokeBallCrafterCave_Pokeball_2:
# 85 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	applymovement LOCALID_BALL_CRAFTER, Brakstrand_PokeBallCrafterCave_Pokeball_Movement_0
# 86 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmovement
# 87 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox Brakstrand_PokeBallCrafterCave_Pokeball_Text_0
# 88 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmessage
# 89 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Brakstrand_PokeBallCrafterCave_Pokeball_Movement_1
# 90 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmovement
# 91 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	call HandOverApricorn
	goto Brakstrand_PokeBallCrafterCave_Pokeball_1


HandOverApricorn:
	checkitem ITEM_APRICORN, 2
# 0 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HandOverApricorn_2
# 105 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox HandOverApricorn_Text_1
HandOverApricorn_1:
# 107 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox HandOverApricorn_Text_2
# 112 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmessage
# 113 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	removeitem ITEM_APRICORN
# 114 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	setflag FLAG_TEMP_2
# 115 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 5
	return

HandOverApricorn_2:
# 103 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox HandOverApricorn_Text_0
	goto HandOverApricorn_1


# 85 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
Brakstrand_PokeBallCrafterCave_Pokeball_Movement_0:
# 85 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	walk_in_place_fast_left
# 85 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	emote_question_mark
	step_end

# 89 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
Brakstrand_PokeBallCrafterCave_Pokeball_Movement_1:
# 89 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	walk_in_place_down
	step_end

CrafterInteraction_Default_Text_0:
# 45 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "Poké Ball crafting is not implemented\n"
	.string "yet!$"

CrafterInteraction_StageLess4_Text_0:
# 52 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "What do you want?\p"
	.string "...\p"
	.string "...\p"
	.string "Ah, I see. You need a Poké Ball. I can\n"
	.string "craft Poké Balls from Apricorns, but it\l"
	.string "is no easy task and it takes a while.\p"
	.string "Lucky for you, I got one nearly\n"
	.string "finished. Get me an Apricorn and you can\l"
	.string "have it. You can find some Apricorn\l"
	.string "trees south of here, near the beach.$"

CrafterInteraction_Stage4_Text_0:
# 68 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "Did you get me an Apricorn? There are\n"
	.string "some trees south of here, near the\l"
	.string "beach.$"

CrafterInteraction_Stage5_Text_0:
# 77 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "You can have the Poké Ball on the table.$"

Brakstrand_PokeBallCrafterCave_Pokeball_Text_0:
# 87 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "Did you get me an Apricorn?$"

HandOverApricorn_Text_0:
# 103 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "Ah. These are quite ripe.$"

HandOverApricorn_Text_1:
# 105 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "Ah. This one is quite ripe.$"

HandOverApricorn_Text_2:
# 108 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "I can make higher quality Poké Balls\n"
	.string "from Firm Apricots, but this will do.\p"
	.string "I finished that Poké Ball on the table,\n"
	.string "you can take it.\p"
	.string "If you need more Poké Balls crafted,\n"
	.string "bring me more Apricorns.$"
