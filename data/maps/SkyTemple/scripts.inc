SkyTemple_MapScripts::
	.byte 0

SkyTemple_EventScript_Corrupt1::
	lock
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox SkyTemple_Text_Corrupt1, MSGBOX_DEFAULT
	setflag FLAG_LEGENDS_NOCATCH
	setwildbattle SPECIES_MEWTWO, 88
	dowildbattle
	clearflag FLAG_LEGENDS_NOCATCH
	special HealPlayerParty
	msgbox SkyTemple_Text_Freed, MSGBOX_DEFAULT
	removeobject LOCALID_LEGENDS_CORRUPT1
	setflag FLAG_LEGENDS_CORRUPT1
	release
	end

SkyTemple_Text_Corrupt1:
	.string "Um MEWTWO coberto de sombras\nbloqueia a escada. Os olhos\ldele estão vazios!$"

SkyTemple_EventScript_Corrupt2::
	lock
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox SkyTemple_Text_Corrupt2, MSGBOX_DEFAULT
	setflag FLAG_LEGENDS_NOCATCH
	setwildbattle SPECIES_RAYQUAZA, 90
	dowildbattle
	clearflag FLAG_LEGENDS_NOCATCH
	special HealPlayerParty
	msgbox SkyTemple_Text_Freed, MSGBOX_DEFAULT
	removeobject LOCALID_LEGENDS_CORRUPT2
	setflag FLAG_LEGENDS_CORRUPT2
	release
	end

SkyTemple_Text_Corrupt2:
	.string "RAYQUAZA se contorce, preso\npor fios escuros. Ele ataca\lsem reconhecer você!$"

SkyTemple_EventScript_Corrupt3::
	lock
	playmoncry SPECIES_GIRATINA, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox SkyTemple_Text_Corrupt3, MSGBOX_DEFAULT
	setflag FLAG_LEGENDS_NOCATCH
	setwildbattle SPECIES_GIRATINA, 92
	dowildbattle
	clearflag FLAG_LEGENDS_NOCATCH
	special HealPlayerParty
	msgbox SkyTemple_Text_Freed, MSGBOX_DEFAULT
	removeobject LOCALID_LEGENDS_CORRUPT3
	setflag FLAG_LEGENDS_CORRUPT3
	release
	end

SkyTemple_Text_Corrupt3:
	.string "GIRATINA ruge, metade dentro\ndeste mundo, metade fora. A\lsombra o domina!$"

SkyTemple_Text_Freed:
	.string "A sombra se desfaz. O lendário\nolha para você, agradecido, e\ldesaparece.$"

SkyTemple_EventScript_Aureon::
	msgbox SkyTemple_EventScript_Aureon_Text, MSGBOX_NPC
	end

SkyTemple_EventScript_Aureon_Text:
	.string "AUREON: Eu seguro o mecanismo\ndaqui. Vá até ARCEUS!$"

SkyTemple_EventScript_Arceus::
	lock
	playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox SkyTemple_Text_Arceus1, MSGBOX_YESNO
	msgbox SkyTemple_Text_Arceus2, MSGBOX_DEFAULT
	setflag FLAG_CHAPTER_14_DONE
	setvar VAR_STORY_CHAPTER, 15
	msgbox SkyTemple_Text_Chapter15, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	playse SE_THUNDER
	fadescreen FADE_FROM_BLACK
	msgbox SkyTemple_Text_Phase1, MSGBOX_DEFAULT
	setflag FLAG_LEGENDS_NOCATCH
	setwildbattle SPECIES_TYPE_NULL, 93
	dowildbattle
	clearflag FLAG_LEGENDS_NOCATCH
	special HealPlayerParty
	msgbox SkyTemple_Text_Phase2, MSGBOX_DEFAULT
	setflag FLAG_LEGENDS_NOCATCH
	setwildbattle SPECIES_SILVALLY, 96
	dowildbattle
	clearflag FLAG_LEGENDS_NOCATCH
	special HealPlayerParty
	msgbox SkyTemple_Text_Phase3, MSGBOX_DEFAULT
	setflag FLAG_LEGENDS_NOCATCH
	setwildbattle SPECIES_ETERNATUS_ETERNAMAX, 100
	dowildbattle
	clearflag FLAG_LEGENDS_NOCATCH
	special HealPlayerParty
	msgbox SkyTemple_Text_Victory, MSGBOX_DEFAULT
	fadescreen FADE_TO_WHITE
	removeobject LOCALID_LEGENDS_ARCEUS
	setflag FLAG_CHAPTER_15_DONE
	setvar VAR_STORY_CHAPTER, 16
	msgbox SkyTemple_Text_Epilogue, MSGBOX_DEFAULT
	warp MAP_LEGENDS_OAK_LAB, 6, 6
	waitstate
	release
	end

SkyTemple_Text_Arceus1:
	.string "ARCEUS mostra o primeiro\nmundo: inteiro, sem divisões,\le vazio.\p“Se pudesse mudar tudo aquilo\nque perdeu, você realmente\laceitaria perder tudo aquilo\lque encontrou?”$"
SkyTemple_Text_Arceus2:
	.string "Você responde que não é\npreciso escolher entre o\lpassado e o futuro.\pARCEUS reconhece sua\ndeterminação e entrega a você\lo poder original.$"
SkyTemple_Text_Chapter15:
	.string "CAPÍTULO 15 - NULL: O ÚLTIMO\nPOKéMON\pNULL atravessa a barreira. O\nmundo começa a desaparecer!$"
SkyTemple_Text_Phase1:
	.string "FASE 1 - A AUSENCIA\pNULL absorve os ataques e muda\nde tipo sem parar!$"
SkyTemple_Text_Phase2:
	.string "FASE 2 - AS POSSIBILIDADES\pNULL assume formas inspiradas\nnos POKéMON lendários!$"
SkyTemple_Text_Phase3:
	.string "FASE 3 - O FIM\pNULL começa a destruir o\npróprio campo de batalha!\pOs nove fragmentos reagem. Os\nlendários aparecem para\lproteger o mundo!$"
SkyTemple_Text_Victory:
	.string "ARCEUS usa seu poder e\nrestaura o equilíbrio. NULL se\ldesfaz em silêncio.\pVocê venceu.$"
SkyTemple_Text_Epilogue:
	.string "EPÍLOGO - UM MUNDO INTEIRO\nPELA FRENTE\pO MUNDO PRIMORDIAL se desfaz.\nAs nove realidades voltam a se\lseparar.\pAUREON sobrevive, perde seus\npoderes e decide ajudar os\lpesquisadores a entender a\lorigem dos POKéMON.\pOs lendários voltam para seus\nterritórios. Todos voltam para\lsuas regiões.\pE você volta para casa.$"

