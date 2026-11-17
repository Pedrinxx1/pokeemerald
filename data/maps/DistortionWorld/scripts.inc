DistortionWorld_MapScripts::
	.byte 0

DistortionWorld_EventScript_Giratina::
	lock
	playmoncry SPECIES_GIRATINA, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox DistortionWorld_Text_1, MSGBOX_DEFAULT
	msgbox DistortionWorld_Text_Cynthia, MSGBOX_DEFAULT
	call Legends_EventScript_GetFragment
	msgbox DistortionWorld_Text_Order, MSGBOX_DEFAULT
	fadescreen FADE_TO_WHITE
	removeobject LOCALID_LEGENDS_GIRATINA_DW
	setflag FLAG_CHAPTER_5_DONE
	setvar VAR_STORY_CHAPTER, 6
	msgbox DistortionWorld_Text_Chapter6, MSGBOX_DEFAULT
	warp MAP_LEGENDS_CELESTIC, 15, 25
	waitstate
	release
	end

DistortionWorld_Text_1:
	.string "No MUNDO DISTORCIDO, palavras\naparecem gravadas no ar:\p“O criador não está\ndesaparecido. Ele está\lescondido de sua própria\lcriação.”$"
DistortionWorld_Text_Cynthia:
	.string "A voz da CYNTHIA ecoa:\n{PLAYER}! Achei isto preso\lentre as dimensões. Fique com\lele!$"
DistortionWorld_Text_Order:
	.string "CYRUS: O agente que vocês\nenfrentaram em HOENN… agora\lsei quem são.\pChamam-se ORDEM ZERO.$"
DistortionWorld_Text_Chapter6:
	.string "ATO II - O MUNDO COMEÇA A SE\nDESFAZER\pCAPÍTULO 6 - UNOVA: A VERDADE\nTEM DOIS LADOS\pO marinheiro de CELESTIC pode\nlevá-lo a UNOVA.$"

DistortionWorld_EventScript_Guide::
	lock
	faceplayer
	msgbox Legends_Text_BackStadium, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoStadium
	goto Legends_EventScript_SailorBye

