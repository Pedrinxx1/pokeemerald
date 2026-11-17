Mesagoza_MapScripts::
	.byte 0

Mesagoza_EventScript_Sign::
	msgbox Mesagoza_EventScript_Sign_Text, MSGBOX_SIGN
	end

Mesagoza_EventScript_Sign_Text:
	.string "CIDADE MESAGOZA\pLeste: entrada da ÁREA ZERO.\nAcesso restrito.$"

Mesagoza_EventScript_Nemona::
	msgbox Mesagoza_EventScript_Nemona_Text, MSGBOX_NPC
	end

Mesagoza_EventScript_Nemona_Text:
	.string "Sou a NEMONA! A ÁREA ZERO está\ncheia de POKéMON PARADOXO\lsaindo pelas bordas. Que medo…\le que empolgação!$"

Mesagoza_EventScript_Arven::
	msgbox Mesagoza_EventScript_Arven_Text, MSGBOX_NPC
	end

Mesagoza_EventScript_Arven_Text:
	.string "ARVEN. A TERASTALIZAÇÃO ficou\ninstável. Os cristais brilham\lsozinhos, como se respondessem\la alguma coisa.$"

Mesagoza_EventScript_Penny::
	msgbox Mesagoza_EventScript_Penny_Text, MSGBOX_NPC
	end

Mesagoza_EventScript_Penny_Text:
	.string "…PENNY. Hackeei os servidores\ndo laboratório. A energia TERA\lé igual à energia de antes da\lseparação dos núcleos.$"

Mesagoza_EventScript_Florian::
	msgbox Mesagoza_EventScript_Florian_Text, MSGBOX_NPC
	end

Mesagoza_EventScript_Florian_Text:
	.string "Sou o FLORIAN! Vi um GREAT\nTUSK correndo perto da cidade.\lEle não devia existir hoje!$"

Mesagoza_EventScript_Juliana::
	msgbox Mesagoza_EventScript_Juliana_Text, MSGBOX_NPC
	end

Mesagoza_EventScript_Juliana_Text:
	.string "Sou a JULIANA. Os professores\nSADA e TURO deixaram um\lrecado: “a última chave não é\lum objeto”.$"

Mesagoza_EventScript_Leon::
	msgbox Mesagoza_EventScript_Leon_Text, MSGBOX_NPC
	end

Mesagoza_EventScript_Leon_Text:
	.string "LEON: Estou com você até o\nfim. Entre na ÁREA ZERO pela\lporta a leste.$"

Mesagoza_EventScript_Sailor::
	lock
	faceplayer
Mesagoza_EventScript_Sailor_Prev::
	msgbox Mesagoza_EventScript_Sailor_TextPrev, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoGalar
	goto Legends_EventScript_SailorBye

Mesagoza_EventScript_Sailor_TextPrev:
	.string "Quer voltar para GALAR?$"

