Lumiose_MapScripts::
	.byte 0

Lumiose_EventScript_Sign::
	msgbox Lumiose_EventScript_Sign_Text, MSGBOX_SIGN
	end

Lumiose_EventScript_Sign_Text:
	.string "CIDADE LUMIOSE\pAo norte: TORRE PRISMA. Ela\nbrilha em vermelho desde\lontem.$"

Lumiose_EventScript_Serena::
	msgbox Lumiose_EventScript_Serena_Text, MSGBOX_NPC
	end

Lumiose_EventScript_Serena_Text:
	.string "Sou a SERENA. Vi um TYRUNT\nandando na avenida! Eles foram\lextintos há milhares de anos!$"

Lumiose_EventScript_Calem::
	msgbox Lumiose_EventScript_Calem_Text, MSGBOX_NPC
	end

Lumiose_EventScript_Calem_Text:
	.string "Sou o CALEM. A energia das\nMEGA EVOLUÇÕES está sumindo\ldas pedras. Alguém está\lsugando tudo.$"

Lumiose_EventScript_Clemont::
	msgbox Lumiose_EventScript_Clemont_Text, MSGBOX_NPC
	end

Lumiose_EventScript_Clemont_Text:
	.string "Sou o CLEMONT! Meus aparelhos\ndizem que a TORRE PRISMA está\lmandando energia para baixo da\lterra!$"

Lumiose_EventScript_Bonnie::
	msgbox Lumiose_EventScript_Bonnie_Text, MSGBOX_NPC
	end

Lumiose_EventScript_Bonnie_Text:
	.string "Eu sou a BONNIE! Meu irmão vai\ndescobrir tudo, você vai ver!$"

Lumiose_EventScript_Tyrunt::
	msgbox Lumiose_EventScript_Tyrunt_Text, MSGBOX_NPC
	end

Lumiose_EventScript_Tyrunt_Text:
	.string "TYRUNT ruge baixinho. Parece\nperdido.$"

Lumiose_EventScript_Amaura::
	msgbox Lumiose_EventScript_Amaura_Text, MSGBOX_NPC
	end

Lumiose_EventScript_Amaura_Text:
	.string "AMAURA olha em volta,\nassustada, como se o mundo\lestivesse errado.$"

Lumiose_EventScript_Leon::
	lock
	faceplayer
	msgbox Legends_Text_Leon7Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEON_7, Legends_Text_Leon7Defeat
	msgbox Legends_Text_Leon7After, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_LEGENDS_LEON_KALOS
	setflag FLAG_LEGENDS_LEON7
	fadescreen FADE_FROM_BLACK
	release
	end

Lumiose_EventScript_Sailor::
	lock
	faceplayer
	goto_if_unset FLAG_CHAPTER_7_DONE, Lumiose_EventScript_Sailor_Prev
	msgbox Lumiose_EventScript_Sailor_TextNext, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoAlola
Lumiose_EventScript_Sailor_Prev::
	msgbox Lumiose_EventScript_Sailor_TextPrev, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoUnova
	goto Legends_EventScript_SailorBye

Lumiose_EventScript_Sailor_TextNext:
	.string "Quer zarpar para ALOLA?$"
Lumiose_EventScript_Sailor_TextPrev:
	.string "Quer voltar para UNOVA?$"

