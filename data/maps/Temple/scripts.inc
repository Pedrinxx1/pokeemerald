Temple_MapScripts::
	.byte 0

Temple_EventScript_Paint1::
	msgbox Temple_EventScript_Paint1_Text, MSGBOX_SIGN
	end

Temple_EventScript_Paint1_Text:
	.string "Uma pintura de LUGIA, guardião\ndo mar.$"

Temple_EventScript_Paint2::
	msgbox Temple_EventScript_Paint2_Text, MSGBOX_SIGN
	end

Temple_EventScript_Paint2_Text:
	.string "Uma pintura de HO-OH, guardião\ndo céu.$"

Temple_EventScript_Paint3::
	msgbox Temple_EventScript_Paint3_Text, MSGBOX_SIGN
	end

Temple_EventScript_Paint3_Text:
	.string "Um POKéMON desconhecido,\npintado sem rosto…\p“Quando o primeiro céu cair,\nos guardiões abandonarão seus\lpostos. Quando o último oceano\lsecar, o criador será chamado\lnovamente.”$"

Temple_EventScript_Lugia::
	lock
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox Temple_Text_Lugia1, MSGBOX_DEFAULT
	setflag FLAG_LEGENDS_NOCATCH
	setwildbattle SPECIES_SPIRITOMB, 30
	dowildbattle
	clearflag FLAG_LEGENDS_NOCATCH
	special HealPlayerParty
	msgbox Temple_Text_Lugia2, MSGBOX_DEFAULT
	call Legends_EventScript_GetFragment
	fadescreen FADE_TO_WHITE
	removeobject LOCALID_LEGENDS_LUGIA_TEMPLE
	setflag FLAG_LEGENDS_TEMPLE
	setflag FLAG_CHAPTER_2_DONE
	setvar VAR_STORY_CHAPTER, 3
	fadescreen FADE_FROM_WHITE
	msgbox Temple_Text_Chapter3, MSGBOX_DEFAULT
	release
	end

Temple_Text_Lugia1:
	.string "LUGIA está ferido. Algo\ninvisível está sugando a\lenergia dele!\pA criatura vira para você…$"
Temple_Text_Lugia2:
	.string "A criatura invisível fugiu\npara o fundo do oceano.\pLUGIA abaixa a cabeça e deixa\nalgo brilhante aos seus pés.$"
Temple_Text_Chapter3:
	.string "CAPÍTULO 3 - JOHTO: AS CINZAS\nDA HISTÓRIA\pO marinheiro de VALENCIA pode\nlevá-lo a JOHTO.$"

