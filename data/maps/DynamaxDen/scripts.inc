DynamaxDen_MapScripts::
	.byte 0

DynamaxDen_EventScript_Giant::
	lock
	playmoncry SPECIES_COPPERAJAH, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox DynamaxDen_Text_1, MSGBOX_DEFAULT
	setflag FLAG_LEGENDS_NOCATCH
	setwildbattle SPECIES_COPPERAJAH, 68
	dowildbattle
	clearflag FLAG_LEGENDS_NOCATCH
	special HealPlayerParty
	msgbox DynamaxDen_Text_2, MSGBOX_DEFAULT
	removeobject LOCALID_LEGENDS_GIANT
	setflag FLAG_LEGENDS_DEN
	release
	end

DynamaxDen_Text_1:
	.string "Um COPPERAJAH enorme, inchado\nde energia vermelha, avança\lsem controle!$"
DynamaxDen_Text_2:
	.string "O COPPERAJAH volta ao tamanho\nnormal e foge, aliviado.$"

