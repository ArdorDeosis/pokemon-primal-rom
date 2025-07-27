ValleyOfTrials_MapScripts::
	.byte 0


ValleyOfTrials_EventScript_GymSign::
# 4 "data/maps/ValleyOfTrials/scripts.pory"
	lockall
# 5 "data/maps/ValleyOfTrials/scripts.pory"
	msgbox ValleyOfTrials_EventScript_GymSign_Text_0
# 6 "data/maps/ValleyOfTrials/scripts.pory"
	releaseall
	return


ValleyOfTrials_EventScript_Orsvald::
# 10 "data/maps/ValleyOfTrials/scripts.pory"
	trainerbattle_single TRAINER_ORSVALD, Orsvald_Intro, Orsvald_Outtro
# 11 "data/maps/ValleyOfTrials/scripts.pory"
	msgbox Orsvald_PostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/ValleyOfTrials/scripts.pory"
	waitmessage
	end


ValleyOfTrials_EventScript_GymSign_Text_0:
# 5 "data/maps/ValleyOfTrials/scripts.pory"
	.string "Tannholt Gym\n"
	.string "TODO: text$"

Orsvald_Intro::
# 16 "data/maps/ValleyOfTrials/scripts.pory"
	.string "Let's fight!$"

Orsvald_Outtro::
# 20 "data/maps/ValleyOfTrials/scripts.pory"
	.string "GG$"

Orsvald_PostBattle::
# 24 "data/maps/ValleyOfTrials/scripts.pory"
	.string "You did well.$"
