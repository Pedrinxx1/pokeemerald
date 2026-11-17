IndigoChampion_MapScripts::
	.byte 0

IndigoChampion_EventScript_Leon::
	lock
	faceplayer
	msgbox Legends_Text_Leon2Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEON_2, Legends_Text_Leon2Defeat
	msgbox IndigoChampion_Text_Win, MSGBOX_DEFAULT
	special HealPlayerParty
	fadescreen FADE_TO_BLACK
	playse SE_THUNDER
	clearflag FLAG_HIDE_LEGENDS_INDIGO_LUGIA
	addobject LOCALID_LEGENDS_LUGIA_SKY
	fadescreen FADE_FROM_BLACK
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox Legends_Text_Leon2After, MSGBOX_DEFAULT
	msgbox IndigoChampion_Text_Lugia, MSGBOX_DEFAULT
	fadescreen FADE_TO_WHITE
	removeobject LOCALID_LEGENDS_LUGIA_SKY
	setflag FLAG_HIDE_LEGENDS_INDIGO_LUGIA
	removeobject LOCALID_LEGENDS_LEON_FINAL
	setflag FLAG_CHAPTER_1_DONE
	clearflag FLAG_HIDE_LEGENDS_PALLET_SAILOR
	setvar VAR_STORY_CHAPTER, 2
	fadescreen FADE_FROM_WHITE
	msgbox IndigoChampion_Text_Chapter2, MSGBOX_DEFAULT
	warp MAP_LEGENDS_VALENCIA, 20, 21
	waitstate
	release
	end

IndigoChampion_Text_Win:
	.string "Você é o novo CAMPEÃO da LIGA\nDE KANTO!\p…Espere. O céu está\nescurecendo!$"
IndigoChampion_Text_Lugia:
	.string "Uma silhueta enorme sobre o\noceano… é LUGIA!\pEle não está atacando. Está\nfugindo de alguma coisa!$"
IndigoChampion_Text_Chapter2:
	.string "CAPÍTULO 2 - ILHAS LARANJA: O\nMAR ESQUECIDO\pVocê segue LUGIA de barco até\no arquipélago…$"

