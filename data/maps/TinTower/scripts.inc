TinTower_MapScripts::
	.byte 0

TinTower_EventScript_Record::
	msgbox TinTower_EventScript_Record_Text, MSGBOX_SIGN
	end

TinTower_EventScript_Record_Text:
	.string "Uma gravação de séculos atrás:\nHO-OH e LUGIA enfrentam uma\lsombra sem forma.\pO nome escrito sob ela é:\nMORROW.$"

TinTower_EventScript_HoOh::
	lock
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox TinTower_Text_HoOh, MSGBOX_DEFAULT
	call Legends_EventScript_GetFragment
	fadescreen FADE_TO_WHITE
	removeobject LOCALID_LEGENDS_HOOH
	setflag FLAG_LEGENDS_HOOH
	setflag FLAG_CHAPTER_3_DONE
	setvar VAR_STORY_CHAPTER, 4
	fadescreen FADE_FROM_WHITE
	msgbox TinTower_Text_End, MSGBOX_DEFAULT
	release
	end

TinTower_Text_HoOh:
	.string "HO-OH abre as asas. Uma imagem\nsurge no ar: nove regiões\lligadas por linhas de luz.\pNo centro delas, um vazio\nescuro.\pHO-OH deixa cair um fragmento\nbrilhante.$"
TinTower_Text_End:
	.string "CAPÍTULO 4 - HOENN: O\nDESPERTAR DOS CONTINENTES\pO marinheiro de ECRUTEAK pode\nlevá-lo a HOENN.$"

