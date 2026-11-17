Opelucid_MapScripts::
	.byte 0

Opelucid_EventScript_Sign::
	msgbox Opelucid_EventScript_Sign_Text, MSGBOX_SIGN
	end

Opelucid_EventScript_Sign_Text:
	.string "CIDADE DE OPELUCID\pAo leste: TORRE DRAGONSPIRAL.$"

Opelucid_EventScript_Hilbert::
	msgbox Opelucid_EventScript_Hilbert_Text, MSGBOX_NPC
	end

Opelucid_EventScript_Hilbert_Text:
	.string "Sou o HILBERT. Meu SERPERIOR\nsonhou com um lugar onde nunca\lestivemos. E eu sonhei a mesma\lcoisa!$"

Opelucid_EventScript_Hilda::
	msgbox Opelucid_EventScript_Hilda_Text, MSGBOX_NPC
	end

Opelucid_EventScript_Hilda_Text:
	.string "Sou a HILDA. Os POKéMON estão\nlembrando de coisas que nunca\lviveram. O N está\linvestigando.$"

Opelucid_EventScript_Bianca::
	msgbox Opelucid_EventScript_Bianca_Text, MSGBOX_NPC
	end

Opelucid_EventScript_Bianca_Text:
	.string "Oi, sou a BIANCA! O PROFESSOR\nJUNIPER diz que os lendários\lestão abandonando seus\lterritórios!$"

Opelucid_EventScript_Cheren::
	msgbox Opelucid_EventScript_Cheren_Text, MSGBOX_NPC
	end

Opelucid_EventScript_Cheren_Text:
	.string "Sou CHEREN. A EQUIPE PLASMA\nestá dividida: uns querem\lcontrolar os lendários, outros\lquerem protegê-los.$"

Opelucid_EventScript_Iris::
	msgbox Opelucid_EventScript_Iris_Text, MSGBOX_NPC
	end

Opelucid_EventScript_Iris_Text:
	.string "Eu sou a IRIS! Os dragões da\nTORRE DRAGONSPIRAL estão\lchorando à noite. Ajuda eles,\ltá?$"

Opelucid_EventScript_Sage::
	msgbox Opelucid_EventScript_Sage_Text, MSGBOX_NPC
	end

Opelucid_EventScript_Sage_Text:
	.string "Fui um sábio da EQUIPE PLASMA.\nHoje protejo os lendários.\pOs nossos velhos experimentos\nforam roubados por uma tal\lORDEM ZERO.$"

Opelucid_EventScript_Leon::
	lock
	faceplayer
	msgbox Legends_Text_Leon6Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEON_6, Legends_Text_Leon6Defeat
	msgbox Legends_Text_Leon6After, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_LEGENDS_LEON_UNOVA
	setflag FLAG_LEGENDS_LEON6
	fadescreen FADE_FROM_BLACK
	release
	end

Opelucid_EventScript_Sailor::
	lock
	faceplayer
	goto_if_unset FLAG_CHAPTER_6_DONE, Opelucid_EventScript_Sailor_Prev
	msgbox Opelucid_EventScript_Sailor_TextNext, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoKalos
Opelucid_EventScript_Sailor_Prev::
	msgbox Opelucid_EventScript_Sailor_TextPrev, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoSinnoh
	goto Legends_EventScript_SailorBye

Opelucid_EventScript_Sailor_TextNext:
	.string "Quer zarpar para KALOS?$"
Opelucid_EventScript_Sailor_TextPrev:
	.string "Quer voltar para SINNOH?$"

