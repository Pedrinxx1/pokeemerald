AzHouse_MapScripts::
	.byte 0

AzHouse_EventScript_AZ::
	lock
	faceplayer
	goto_if_set FLAG_CHAPTER_7_DONE, AzHouse_EventScript_After
	goto_if_unset FLAG_LEGENDS_KALOS_LAB, AzHouse_EventScript_Wait
	msgbox AzHouse_Text_Reveal, MSGBOX_DEFAULT
	call Legends_EventScript_GetFragment
	setflag FLAG_CHAPTER_7_DONE
	setvar VAR_STORY_CHAPTER, 8
	msgbox AzHouse_Text_Chapter8, MSGBOX_DEFAULT
	release
	end

AzHouse_EventScript_Wait::
	msgbox AzHouse_Text_Wait, MSGBOX_DEFAULT
	release
	end

AzHouse_EventScript_After::
	msgbox AzHouse_Text_After, MSGBOX_DEFAULT
	release
	end

AzHouse_Text_Wait:
	.string "Sou AZ. Há três mil anos, os\nhomens usaram uma energia\lcapaz de mudar a vida e a\lmorte: a ARMA SUPREMA.\pAlguém está procurando meus\nregistros dela. Olhe embaixo\lda TORRE PRISMA.$"
AzHouse_Text_Reveal:
	.string "Então você destruiu a máquina.\nObrigado.\pEscute bem: a ORDEM ZERO foi\nfundada por alguém que lutou\lna antiga guerra de KALOS.\pAlguém que vive há milhares de\nanos, como eu… e que já tentou\lreconstruir o mundo uma vez.\pGuardei isto desde aquela\nguerra. Leve-o.$"
AzHouse_Text_Chapter8:
	.string "CAPÍTULO 8 - ALOLA: O OUTRO\nLADO DO UNIVERSO\pO marinheiro de LUMIOSE pode\nlevá-lo a ALOLA.$"
AzHouse_Text_After:
	.string "Ele também perdeu alguém. Por\nisso não para. Tome cuidado\lcom a dor dele.$"

