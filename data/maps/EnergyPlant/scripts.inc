EnergyPlant_MapScripts::
	.byte 0

EnergyPlant_EventScript_Boss::
	lock
	faceplayer
	goto_if_unset FLAG_LEGENDS_DEN, EnergyPlant_EventScript_NotYet
	trainerbattle_single TRAINER_LEGENDS_GALAR_BOSS, EnergyPlant_Text_Intro, EnergyPlant_Text_Defeat, EnergyPlant_EventScript_Defeated
	msgbox EnergyPlant_Text_After, MSGBOX_DEFAULT
	release
	end

EnergyPlant_EventScript_NotYet::
	msgbox EnergyPlant_Text_NotYet, MSGBOX_DEFAULT
	release
	end

EnergyPlant_EventScript_Defeated::
	setflag FLAG_LEGENDS_GALAR_BOSS
	msgbox EnergyPlant_Text_After, MSGBOX_DEFAULT
	release
	end

EnergyPlant_EventScript_Leon::
	lock
	faceplayer
	goto_if_set FLAG_CHAPTER_9_DONE, EnergyPlant_EventScript_LeonAfter
	goto_if_unset FLAG_LEGENDS_GALAR_BOSS, EnergyPlant_EventScript_LeonWait
	playmoncry SPECIES_ETERNATUS, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox EnergyPlant_Text_Eternatus, MSGBOX_DEFAULT
	fadescreen FADE_TO_WHITE
	removeobject LOCALID_LEGENDS_ETERNATUS
	setflag FLAG_CHAPTER_9_DONE
	setvar VAR_STORY_CHAPTER, 10
	fadescreen FADE_FROM_WHITE
	msgbox EnergyPlant_Text_Paldea, MSGBOX_DEFAULT
	release
	end

EnergyPlant_EventScript_LeonWait::
	msgbox EnergyPlant_Text_LeonWait, MSGBOX_DEFAULT
	release
	end

EnergyPlant_EventScript_LeonAfter::
	msgbox Wyndon_Text_LeonAfter, MSGBOX_DEFAULT
	release
	end

EnergyPlant_Text_NotYet:
	.string "Ainda não terminamos de\ncarregar. Volte quando quiser\lperder.$"
EnergyPlant_Text_Intro:
	.string "Sou o comandante da ORDEM ZERO\nem GALAR. ETERNATUS vai abrir\la passagem entre as\lrealidades!$"
EnergyPlant_Text_Defeat:
	.string "Não importa. O líder já tem o\nque precisa.$"
EnergyPlant_Text_After:
	.string "O ETERNATUS era só um teste. O\nverdadeiro portal está em\lPALDEA.$"
EnergyPlant_Text_LeonWait:
	.string "Primeiro tire aquele\ncomandante do caminho. Eu\lseguro o ETERNATUS!$"
EnergyPlant_Text_Eternatus:
	.string "Você e o LEON ficam lado a\nlado. CHARIZARD e seus POKéMON\latacam juntos!\pO ETERNATUS se acalma e volta\na dormir. O DIA NEGRO acaba.$"
EnergyPlant_Text_Paldea:
	.string "LEON: Você continua com oito\nfragmentos… mas a última chave\lnão está aqui.\pEstá em PALDEA.\pCAPÍTULO 10 - PALDEA: O MUNDO\nQUE NÃO DEVERIA EXISTIR\pO marinheiro de WYNDON pode\nlevá-lo a PALDEA.$"

