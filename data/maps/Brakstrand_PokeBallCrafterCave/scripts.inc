Brakstrand_PokeBallCrafterCave_MapScripts::
	.byte 0


Brakstrand_PokeBallCrafterCave_TalkToCrafter::
# 5 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	lockall
# 6 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	switch VAR_GAME_INTRO_STAGE
# 7 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	case 0, Brakstrand_PokeBallCrafterCave_TalkToCrafter_3
# 8 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	case 1, Brakstrand_PokeBallCrafterCave_TalkToCrafter_3
# 9 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	case 2, Brakstrand_PokeBallCrafterCave_TalkToCrafter_3
# 10 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	case 3, Brakstrand_PokeBallCrafterCave_TalkToCrafter_3
# 12 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	case 4, Brakstrand_PokeBallCrafterCave_TalkToCrafter_4
# 15 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	call Brakstrand_PokeBallCrafterCave_TalkToCrafter_Default
Brakstrand_PokeBallCrafterCave_TalkToCrafter_1:
# 18 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	releaseall
	return

Brakstrand_PokeBallCrafterCave_TalkToCrafter_3:
# 11 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	call Brakstrand_PokeBallCrafterCave_TalkToCrafter_StageLess4
	goto Brakstrand_PokeBallCrafterCave_TalkToCrafter_1

Brakstrand_PokeBallCrafterCave_TalkToCrafter_4:
# 13 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	call Brakstrand_PokeBallCrafterCave_TalkToCrafter_Stage4
	goto Brakstrand_PokeBallCrafterCave_TalkToCrafter_1


Brakstrand_PokeBallCrafterCave_TalkToCrafter_Default::
# 23 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox Brakstrand_PokeBallCrafterCave_TalkToCrafter_Default_Text_0
# 24 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmessage
	return


Brakstrand_PokeBallCrafterCave_TalkToCrafter_StageLess4::
# 28 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox Brakstrand_PokeBallCrafterCave_TalkToCrafter_StageLess4_Text_0
# 29 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmessage
# 30 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 4
	return


Brakstrand_PokeBallCrafterCave_TalkToCrafter_Stage4::
	checkitem ITEM_APRICORN
# 0 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Brakstrand_PokeBallCrafterCave_TalkToCrafter_Stage4_1
# 44 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox Brakstrand_PokeBallCrafterCave_TalkToCrafter_Stage4_Text_1
# 45 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmessage
# 46 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	giveitem ITEM_APRICORN
# 47 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	giveitem ITEM_FIRM_APRICORN
# 48 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	giveitem ITEM_DENSE_APRICORN
	return

Brakstrand_PokeBallCrafterCave_TalkToCrafter_Stage4_1:
# 35 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	removeitem ITEM_APRICORN
# 36 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	msgbox Brakstrand_PokeBallCrafterCave_TalkToCrafter_Stage4_Text_0
# 37 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	waitmessage
# 38 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	giveitem ITEM_WEAK_POKEBALL
# 39 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	giveitem ITEM_STURDY_POKEBALL
# 40 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	giveitem ITEM_REINFORCED_POKEBALL
# 41 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	setvar VAR_GAME_INTRO_STAGE, 5
	return


Brakstrand_PokeBallCrafterCave_TalkToCrafter_Default_Text_0:
# 23 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "Default talk.$"

Brakstrand_PokeBallCrafterCave_TalkToCrafter_StageLess4_Text_0:
# 28 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "Get APRICORN.$"

Brakstrand_PokeBallCrafterCave_TalkToCrafter_Stage4_Text_0:
# 36 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "I took APRICORN.$"

Brakstrand_PokeBallCrafterCave_TalkToCrafter_Stage4_Text_1:
# 44 "data/maps/Brakstrand_PokeBallCrafterCave/scripts.pory"
	.string "No APRICORN yet? Look near beach.$"
