Brakstrand_ShamanCave_MapScripts::
	.byte 0


PokeCenterShaman::
# 4 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	lockall
# 5 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	msgbox PokeCenterShaman_Text_0, MSGBOX_YESNO
# 6 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeCenterShaman_2
PokeCenterShaman_1:
# 19 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	msgbox PokeCenterShaman_Text_2
# 20 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	releaseall
	return

PokeCenterShaman_2:
# 7 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	applymovement 1, PokeCenterShaman_Movement_0
# 8 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	waitmovement
# 9 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	fadescreen FADE_TO_BLACK
# 10 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	playfanfare MUS_HEAL
# 11 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	waitfanfare
# 12 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	special HealPlayerParty
# 13 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	setrespawn HEAL_LOCATION_BRAKSTRAND
# 14 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 15 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	applymovement 1, PokeCenterShaman_Movement_1
# 16 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	waitmovement
# 17 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	msgbox PokeCenterShaman_Text_1
	goto PokeCenterShaman_1


# 7 "data/maps/Brakstrand_ShamanCave/scripts.pory"
PokeCenterShaman_Movement_0:
# 7 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	walk_slow_right
# 7 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	walk_slow_diag_southeast
# 7 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	face_right
# 7 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	delay_16
# 7 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	delay_16
# 7 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	walk_in_place_slow_up
	step_end

# 15 "data/maps/Brakstrand_ShamanCave/scripts.pory"
PokeCenterShaman_Movement_1:
# 15 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	walk_slow_diag_northwest
# 15 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	walk_slow_left
# 15 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	walk_in_place_slow_down
	step_end

PokeCenterShaman_Text_0:
# 5 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	.string "Wanna heal?$"

PokeCenterShaman_Text_1:
# 17 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	.string "Here are your Pokémon!$"

PokeCenterShaman_Text_2:
# 19 "data/maps/Brakstrand_ShamanCave/scripts.pory"
	.string "K THX BY$"
