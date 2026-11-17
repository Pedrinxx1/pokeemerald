Wyndon_MapScripts::
	.byte 0

Wyndon_EventScript_Sign::
	msgbox Wyndon_EventScript_Sign_Text, MSGBOX_SIGN
	end

Wyndon_EventScript_Sign_Text:
	.string "CIDADE WYNDON\pNorte: TOCA DYNAMAX. Leste:\nUSINA DE ENERGIA.$"

Wyndon_EventScript_Gloria::
	msgbox Wyndon_EventScript_Gloria_Text, MSGBOX_NPC
	end

Wyndon_EventScript_Gloria_Text:
	.string "Sou a GLORIA. O DIA NEGRO\nvoltou! O céu ficou roxo de\lrepente.$"

Wyndon_EventScript_Victor::
	msgbox Wyndon_EventScript_Victor_Text, MSGBOX_NPC
	end

Wyndon_EventScript_Victor_Text:
	.string "Sou o VICTOR. POKéMON gigantes\nestão aparecendo sem ninguém\lusar DYNAMAX!$"

Wyndon_EventScript_Hop::
	msgbox Wyndon_EventScript_Hop_Text, MSGBOX_NPC
	end

Wyndon_EventScript_Hop_Text:
	.string "Sou o HOP! ZACIAN e ZAMAZENTA\nsumiram da FLORESTA. Nunca\ldeixariam GALAR sozinha!$"

Wyndon_EventScript_Marnie::
	msgbox Wyndon_EventScript_Marnie_Text, MSGBOX_NPC
	end

Wyndon_EventScript_Marnie_Text:
	.string "MARNIE. Meus fãs estão com\nmedo… e eu também, pra ser\lsincera.$"

Wyndon_EventScript_Bede::
	msgbox Wyndon_EventScript_Bede_Text, MSGBOX_NPC
	end

Wyndon_EventScript_Bede_Text:
	.string "BEDE. Não preciso de ajuda.\nMas… se for para salvar GALAR,\ltudo bem.$"

Wyndon_EventScript_Sonia::
	msgbox Wyndon_EventScript_Sonia_Text, MSGBOX_NPC
	end

Wyndon_EventScript_Sonia_Text:
	.string "Sou a SONIA. ETERNATUS está\nacordando na USINA. A ORDEM\lZERO quer usar a energia dele\lpara abrir uma passagem entre\lrealidades!$"

Wyndon_EventScript_Sailor::
	lock
	faceplayer
	goto_if_unset FLAG_CHAPTER_9_DONE, Wyndon_EventScript_Sailor_Prev
	msgbox Wyndon_EventScript_Sailor_TextNext, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoPaldea
Wyndon_EventScript_Sailor_Prev::
	msgbox Wyndon_EventScript_Sailor_TextPrev, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoAlola
	goto Legends_EventScript_SailorBye

Wyndon_EventScript_Sailor_TextNext:
	.string "Quer zarpar para PALDEA?$"
Wyndon_EventScript_Sailor_TextPrev:
	.string "Quer voltar para ALOLA?$"

Wyndon_EventScript_LeonAlly::
	lock
	faceplayer
	goto_if_set FLAG_CHAPTER_9_DONE, Wyndon_EventScript_LeonAfter
	msgbox Wyndon_Text_Leon, MSGBOX_DEFAULT
	release
	end

Wyndon_EventScript_LeonAfter::
	msgbox Wyndon_Text_LeonAfter, MSGBOX_DEFAULT
	release
	end

Wyndon_Text_Leon:
	.string "Você veio! Primeiro acalme o\nPOKéMON gigante na TOCA\lDYNAMAX. Depois subimos juntos\laté a USINA.$"
Wyndon_Text_LeonAfter:
	.string "A última chave está em PALDEA.\nE desta vez eu vou com você\laté o fim.$"

