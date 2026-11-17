Celestic_MapScripts::
	.byte 0

Celestic_EventScript_Sign::
	msgbox Celestic_EventScript_Sign_Text, MSGBOX_SIGN
	end

Celestic_EventScript_Sign_Text:
	.string "CIDADE CELESTIC\pOeste: RUÍNAS. Leste: MONTE\nCORONET.$"

Celestic_EventScript_Dawn::
	msgbox Celestic_EventScript_Dawn_Text, MSGBOX_NPC
	end

Celestic_EventScript_Dawn_Text:
	.string "Sou a DAWN! A CYNTHIA foi para\no MONTE CORONET. Pessoas estão\ldesaparecendo lá dentro.$"

Celestic_EventScript_Lucas::
	msgbox Celestic_EventScript_Lucas_Text, MSGBOX_NPC
	end

Celestic_EventScript_Lucas_Text:
	.string "Sou o LUCAS, ajudante do\nPROFESSOR ROWAN. A EQUIPE\lGALÁCTICA voltou… mas o CYRUS\ldiz que agora quer IMPEDIR\lalguém.$"

Celestic_EventScript_Leon::
	lock
	faceplayer
	msgbox Legends_Text_Leon5Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEON_5, Legends_Text_Leon5Defeat
	msgbox Legends_Text_Leon5After, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_LEGENDS_LEON_SINNOH
	setflag FLAG_LEGENDS_LEON5
	fadescreen FADE_FROM_BLACK
	release
	end

Celestic_EventScript_Sailor::
	lock
	faceplayer
	goto_if_unset FLAG_CHAPTER_5_DONE, Celestic_EventScript_Sailor_Prev
	msgbox Celestic_EventScript_Sailor_TextNext, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoUnova
Celestic_EventScript_Sailor_Prev::
	msgbox Celestic_EventScript_Sailor_TextPrev, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoHoenn
	goto Legends_EventScript_SailorBye

Celestic_EventScript_Sailor_TextNext:
	.string "Quer zarpar para UNOVA?$"
Celestic_EventScript_Sailor_TextPrev:
	.string "Quer voltar para HOENN?$"

