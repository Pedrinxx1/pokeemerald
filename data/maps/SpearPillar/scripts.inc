SpearPillar_MapScripts::
	.byte 0

SpearPillar_EventScript_Cynthia::
	msgbox SpearPillar_EventScript_Cynthia_Text, MSGBOX_NPC
	end

SpearPillar_EventScript_Cynthia_Text:
	.string "Fale com o CYRUS. Por mais\nestranho que pareça, ele está\ldo nosso lado.$"

SpearPillar_EventScript_Cyrus::
	lock
	faceplayer
	goto_if_set FLAG_CHAPTER_5_DONE, SpearPillar_EventScript_CyrusAfter
	msgbox SpearPillar_Text_Cyrus, MSGBOX_DEFAULT
	playmoncry SPECIES_DIALGA, CRY_MODE_ENCOUNTER
	waitmoncry
	playmoncry SPECIES_PALKIA, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox SpearPillar_Text_Lose, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	clearflag FLAG_HIDE_LEGENDS_GIRATINA
	addobject LOCALID_LEGENDS_GIRATINA
	fadescreen FADE_FROM_BLACK
	playmoncry SPECIES_GIRATINA, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox SpearPillar_Text_Giratina, MSGBOX_DEFAULT
	setflag FLAG_HIDE_LEGENDS_GIRATINA
	warp MAP_LEGENDS_DISTORTION_WORLD, 9, 4
	waitstate
	release
	end

SpearPillar_EventScript_CyrusAfter::
	msgbox SpearPillar_Text_CyrusAfter, MSGBOX_DEFAULT
	release
	end

SpearPillar_Text_Cyrus:
	.string "Sou CYRUS. Passei anos\nquerendo destruir este mundo e\lcriar um perfeito.\pAgora alguém quer fazer isso\nnuma escala muito maior. E eu\lnão vou permitir.$"
SpearPillar_Text_Lose:
	.string "DIALGA e PALKIA estão perdendo\no controle do tempo e do\lespaço! O pilar está rachando!$"
SpearPillar_Text_Giratina:
	.string "GIRATINA surge das sombras\npara impedir a destruição… e\lpuxa você para o outro lado!$"
SpearPillar_Text_CyrusAfter:
	.string "A ORDEM ZERO… vou caçar cada\num deles. Siga para UNOVA.$"

