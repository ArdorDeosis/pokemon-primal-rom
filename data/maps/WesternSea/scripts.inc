WesternSea_MapScripts::
# 17 "data/maps/WesternSea/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, WesternSea_SetupMap
	.byte 0


WesternSea_SetupMap::
# 21 "data/maps/WesternSea/scripts.pory"
	compare VAR_APRICORN_WESTERN_SEA_1_STEP_COUNTER, REGROW_STEP_COUNT_APRICORN
	goto_if_ge WesternSea_SetupMap_2
WesternSea_SetupMap_1:
# 25 "data/maps/WesternSea/scripts.pory"
	compare VAR_APRICORN_WESTERN_SEA_2_STEP_COUNTER, REGROW_STEP_COUNT_APRICORN
	goto_if_ge WesternSea_SetupMap_5
WesternSea_SetupMap_4:
# 29 "data/maps/WesternSea/scripts.pory"
	compare VAR_APRICORN_WESTERN_SEA_3_STEP_COUNTER, REGROW_STEP_COUNT_APRICORN
	goto_if_ge WesternSea_SetupMap_7
	return

WesternSea_SetupMap_2:
# 22 "data/maps/WesternSea/scripts.pory"
	setflag FLAG_TEMP_1
# 23 "data/maps/WesternSea/scripts.pory"
	setmetatile 27, 3, 0x0B1, FALSE
	goto WesternSea_SetupMap_1

WesternSea_SetupMap_5:
# 26 "data/maps/WesternSea/scripts.pory"
	setflag FLAG_TEMP_2
# 27 "data/maps/WesternSea/scripts.pory"
	setmetatile 29, 4, 0x0B1, FALSE
	goto WesternSea_SetupMap_4

WesternSea_SetupMap_7:
# 30 "data/maps/WesternSea/scripts.pory"
	setflag FLAG_TEMP_3
# 31 "data/maps/WesternSea/scripts.pory"
	setmetatile 31, 3, 0x0B1, FALSE
	return


WesternSea_EventScript_ApricornTree1::
# 36 "data/maps/WesternSea/scripts.pory"
	lockall
# 40 "data/maps/WesternSea/scripts.pory"
	goto_if_set FLAG_TEMP_1, WesternSea_EventScript_ApricornTree1_2
# 48 "data/maps/WesternSea/scripts.pory"
	call NoApricornYet
WesternSea_EventScript_ApricornTree1_1:
# 50 "data/maps/WesternSea/scripts.pory"
	releaseall
	end

WesternSea_EventScript_ApricornTree1_2:
# 41 "data/maps/WesternSea/scripts.pory"
	giveitem ITEM_APRICORN
# 42 "data/maps/WesternSea/scripts.pory"
	clearflag FLAG_TEMP_1
# 43 "data/maps/WesternSea/scripts.pory"
	setvar VAR_APRICORN_WESTERN_SEA_1_STEP_COUNTER, 0
# 44 "data/maps/WesternSea/scripts.pory"
	setmetatile 27, 3, 0x0B0, FALSE
# 45 "data/maps/WesternSea/scripts.pory"
	special DrawWholeMapView
	goto WesternSea_EventScript_ApricornTree1_1


WesternSea_EventScript_ApricornTree2::
# 55 "data/maps/WesternSea/scripts.pory"
	lockall
# 56 "data/maps/WesternSea/scripts.pory"
	goto_if_set FLAG_TEMP_2, WesternSea_EventScript_ApricornTree2_2
# 64 "data/maps/WesternSea/scripts.pory"
	call NoApricornYet
WesternSea_EventScript_ApricornTree2_1:
# 66 "data/maps/WesternSea/scripts.pory"
	releaseall
	end

WesternSea_EventScript_ApricornTree2_2:
# 57 "data/maps/WesternSea/scripts.pory"
	giveitem ITEM_APRICORN
# 58 "data/maps/WesternSea/scripts.pory"
	clearflag FLAG_TEMP_2
# 59 "data/maps/WesternSea/scripts.pory"
	setvar VAR_APRICORN_WESTERN_SEA_2_STEP_COUNTER, 0
# 60 "data/maps/WesternSea/scripts.pory"
	setmetatile 29, 4, 0x0B0, FALSE
# 61 "data/maps/WesternSea/scripts.pory"
	special DrawWholeMapView
	goto WesternSea_EventScript_ApricornTree2_1


WesternSea_EventScript_ApricornTree3::
# 71 "data/maps/WesternSea/scripts.pory"
	lockall
# 72 "data/maps/WesternSea/scripts.pory"
	goto_if_set FLAG_TEMP_3, WesternSea_EventScript_ApricornTree3_2
# 80 "data/maps/WesternSea/scripts.pory"
	call NoApricornYet
WesternSea_EventScript_ApricornTree3_1:
# 82 "data/maps/WesternSea/scripts.pory"
	releaseall
	end

WesternSea_EventScript_ApricornTree3_2:
# 73 "data/maps/WesternSea/scripts.pory"
	giveitem ITEM_APRICORN
# 74 "data/maps/WesternSea/scripts.pory"
	clearflag FLAG_TEMP_3
# 75 "data/maps/WesternSea/scripts.pory"
	setvar VAR_APRICORN_WESTERN_SEA_3_STEP_COUNTER, 0
# 76 "data/maps/WesternSea/scripts.pory"
	setmetatile 31, 3, 0x0B0, FALSE
# 77 "data/maps/WesternSea/scripts.pory"
	special DrawWholeMapView
	goto WesternSea_EventScript_ApricornTree3_1


NoApricornYet:
# 87 "data/maps/WesternSea/scripts.pory"
	msgbox NoApricornYet_Text_0
# 88 "data/maps/WesternSea/scripts.pory"
	waitmessage
	return


NoApricornYet_Text_0:
# 87 "data/maps/WesternSea/scripts.pory"
	.string "Nothing has grown here yet.$"
