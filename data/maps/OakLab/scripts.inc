OakLab_MapScripts::
	.byte 0

OakLab_EventScript_Aide::
	msgbox OakLab_EventScript_Aide_Text, MSGBOX_NPC
	end

OakLab_EventScript_Aide_Text:
	.string "Os registros dos POKéMON\nlendários sumiram por 17\lsegundos. Depois voltaram como\lse nada tivesse acontecido.$"

OakLab_EventScript_Oak::
	lock
	faceplayer
	goto_if_set FLAG_LEGENDS_STARTER, OakLab_EventScript_OakAfter
	msgbox OakLab_Text_Oak1, MSGBOX_DEFAULT
	fadescreen FADE_TO_WHITE
	playse SE_THUNDER
	delay 30
	fadescreen FADE_FROM_WHITE
	msgbox OakLab_Text_Oak2, MSGBOX_DEFAULT
	special ChooseStarterNoBattle
	waitstate
	setflag FLAG_LEGENDS_STARTER
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	special EnableNationalPokedex
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setvar VAR_LEGENDS_KANTO, 1
	msgbox OakLab_Text_Oak3, MSGBOX_DEFAULT
	release
	end

OakLab_EventScript_OakAfter::
	goto_if_set FLAG_CHAPTER_15_DONE, OakLab_EventScript_Epilogue
	msgbox OakLab_Text_OakAfter, MSGBOX_DEFAULT
	release
	end

OakLab_EventScript_Epilogue::
	goto_if_set FLAG_LEGENDS_EPILOGUE, OakLab_EventScript_PostGame
	msgbox OakLab_Text_End1, MSGBOX_DEFAULT
	msgbox OakLab_Text_End2, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	msgbox OakLab_Text_Title, MSGBOX_DEFAULT
	fadescreen FADE_FROM_BLACK
	setflag FLAG_LEGENDS_EPILOGUE
	clearflag FLAG_HIDE_LEGENDS_GUIDES
	clearflag FLAG_HIDE_LEGENDS_PALLET_SAILOR
	msgbox OakLab_Text_Invite, MSGBOX_DEFAULT
	goto_if_unset FLAG_NUZLOCKE, OakLab_EventScript_EndRelease
	msgbox OakLab_Text_Nuzlocke, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OakLab_EventScript_EndRelease
	clearflag FLAG_NUZLOCKE
	msgbox OakLab_Text_NuzlockeOff, MSGBOX_DEFAULT
OakLab_EventScript_EndRelease::
	release
	end

OakLab_EventScript_PostGame::
	msgbox OakLab_Text_Invite, MSGBOX_DEFAULT
	release
	end

OakLab_EventScript_Leon::
	lock
	faceplayer
	goto_if_unset FLAG_LEGENDS_STARTER, OakLab_EventScript_LeonWait
	msgbox Legends_Text_Leon1Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEON_1, Legends_Text_Leon1Defeat
	msgbox Legends_Text_Leon1After, MSGBOX_DEFAULT
	special HealPlayerParty
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_LEGENDS_LEON_LAB
	setflag FLAG_HIDE_LEGENDS_LEON_LAB
	fadescreen FADE_FROM_BLACK
	release
	end

OakLab_EventScript_LeonWait::
	msgbox OakLab_Text_LeonWait, MSGBOX_DEFAULT
	release
	end

OakLab_Text_Oak1:
	.string "Ah, {PLAYER}! Bem na hora.\nEste é o PROJETO HORIZONTE:\lestudamos o que liga os\llendários de todas as regiões.\pAgora mesmo, durante a\napresentação…$"
OakLab_Text_Oak2:
	.string "Você viu?! Por 17 segundos os\nregistros dos lendários\lsumiram, as comunicações\lcaíram e o céu rachou.\pTodos os POKéMON olharam para\ncima ao mesmo tempo…\pE agora esta mensagem: “O\nPrimeiro Mundo está\ldespertando.” Assinado: ORIGEM\l- 001.\p{PLAYER}, quero que você viaje\ne descubra o que está\lacontecendo. Escolha um\lparceiro!$"
OakLab_Text_Oak3:
	.string "Ótima escolha! Leve também\nesta POKéDEX.\pFale com o LEON antes de sair.\nEle também vai viajar.$"
OakLab_Text_OakAfter:
	.string "O mundo parece mais inquieto a\ncada dia. Siga para VIRIDIAN e\ldepois PEWTER.$"
OakLab_Text_End1:
	.string "Você voltou, {PLAYER}! Ouvi\ntudo. O mundo inteiro deve a\lvida a você.\pMe diga uma coisa… você ainda\npretende conhecer o mundo?$"
OakLab_Text_End2:
	.string "{PLAYER}: Ainda falta muita\ncoisa para conhecer.$"
OakLab_Text_Title:
	.string "POKéMON: LEGENDS OF THE WORLD.\pA JORNADA NUNCA TERMINA.$"
OakLab_Text_Invite:
	.string "Chegou um convite: o\nCAMPEONATO MUNDIAL quer você!\lO marinheiro de PALLET leva\lvocê ao ESTÁDIO MUNDIAL.$"
OakLab_Text_Nuzlocke:
	.string "Quer encerrar o desafio\nNUZLOCKE agora? Assim você\lpode capturar à vontade no\lpós-jogo.$"
OakLab_Text_NuzlockeOff:
	.string "Desafio NUZLOCKE encerrado.\nParabéns por chegar até aqui!$"
OakLab_Text_LeonWait:
	.string "Hmpf. Fale logo com o\nprofessor. Não tenho o dia\ltodo.$"

