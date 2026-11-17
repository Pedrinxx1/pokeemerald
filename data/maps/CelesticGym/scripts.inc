CelesticGym_MapScripts::
	.byte 0

CelesticGym_EventScript_Volkner::
	trainerbattle_single TRAINER_LEGENDS_VOLKNER, CelesticGym_EventScript_Volkner_Intro, CelesticGym_EventScript_Volkner_Defeat, CelesticGym_EventScript_Volkner_Defeated
	msgbox CelesticGym_EventScript_Volkner_After, MSGBOX_DEFAULT
	release
	end

CelesticGym_EventScript_Volkner_Defeated::
	setflag FLAG_LEGENDS_VOLKNER
	msgbox CelesticGym_EventScript_Volkner_After, MSGBOX_DEFAULT
	release
	end

CelesticGym_EventScript_Volkner_Intro:
	.string "Sou VOLKNER, de SUNYSHORE. Vim\nproteger CELESTIC. Mostre se\laguenta a voltagem!$"
CelesticGym_EventScript_Volkner_Defeat:
	.string "Faz tempo que uma batalha não\nme animava assim!$"
CelesticGym_EventScript_Volkner_After:
	.string "Os relâmpagos sobre o MONTE\nCORONET estão caindo para\lcima. Isso não existe!$"

