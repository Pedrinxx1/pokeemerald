UltraSpace_MapScripts::
	.byte 0

UltraSpace_EventScript_Necrozma::
	lock
	playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox UltraSpace_Text_1, MSGBOX_DEFAULT
	setflag FLAG_LEGENDS_NOCATCH
	setwildbattle SPECIES_NECROZMA, 65
	dowildbattle
	clearflag FLAG_LEGENDS_NOCATCH
	special HealPlayerParty
	msgbox UltraSpace_Text_2, MSGBOX_DEFAULT
	call Legends_EventScript_GetFragment
	msgbox UltraSpace_Text_Leon, MSGBOX_DEFAULT
	fadescreen FADE_TO_WHITE
	removeobject LOCALID_LEGENDS_NECROZMA
	setflag FLAG_CHAPTER_8_DONE
	setvar VAR_STORY_CHAPTER, 9
	msgbox UltraSpace_Text_Chapter9, MSGBOX_DEFAULT
	warp MAP_LEGENDS_MELEMELE, 20, 20
	waitstate
	release
	end

UltraSpace_Text_1:
	.string "O NECROZMA brilha com a luz\nroubada de ALOLA. O ASH grita:\l“PIKACHU, vamos ajudar!”$"
UltraSpace_Text_2:
	.string "A luz volta a se espalhar. O\nNECROZMA se acalma… e algo cai\ldo centro dele.$"
UltraSpace_Text_Leon:
	.string "Uma mensagem do LEON chega no\naparelho:\p“{PLAYER}, GALAR está\ndesaparecendo. Venha rápido.”$"
UltraSpace_Text_Chapter9:
	.string "ATO III - AS REGIÕES DO FUTURO\pCAPÍTULO 9 - GALAR: O ÚLTIMO\nDESEJO DOS LENDÁRIOS$"

