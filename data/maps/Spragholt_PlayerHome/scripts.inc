Spragholt_PlayerHome_MapScripts::
	.byte 0


Spragholt_PlayerHome_EventScript_FatherBeforePokemon::
# 4 "data/maps/Spragholt_PlayerHome/scripts.pory"
	lock
# 5 "data/maps/Spragholt_PlayerHome/scripts.pory"
	faceplayer
# 6 "data/maps/Spragholt_PlayerHome/scripts.pory"
	msgbox Spragholt_PlayerHome_EventScript_FatherBeforePokemon_Text_0
# 7 "data/maps/Spragholt_PlayerHome/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 8 "data/maps/Spragholt_PlayerHome/scripts.pory"
	release
	end


Spragholt_PlayerHome_EventScript_FatherBeforePokemon_Text_0:
# 6 "data/maps/Spragholt_PlayerHome/scripts.pory"
	.string "Are you ready, {PLAYER}? The shaman\n"
	.string "wants to see you before you start your\l"
	.string "journey.\p"
	.string "...\p"
	.string "I'm...\p"
	.string "...\p"
	.string "I'm really proud of you.$"
