HoennRuins_MapScripts::
	.byte 0

HoennRuins_EventScript_Agent::
	trainerbattle_single TRAINER_LEGENDS_AGENT, HoennRuins_EventScript_Agent_Intro, HoennRuins_EventScript_Agent_Defeat, HoennRuins_EventScript_Agent_Defeated
	msgbox HoennRuins_EventScript_Agent_After, MSGBOX_DEFAULT
	release
	end

HoennRuins_EventScript_Agent_Defeated::
	setflag FLAG_LEGENDS_AGENT
	msgbox HoennRuins_EventScript_Agent_After, MSGBOX_DEFAULT
	release
	end

HoennRuins_EventScript_Agent_Intro:
	.string "Você não devia estar aqui. A\nORDEM precisa da energia\ldestes dois!$"
HoennRuins_EventScript_Agent_Defeat:
	.string "Hmpf. Isso não muda nada.$"
HoennRuins_EventScript_Agent_After:
	.string "GROUDON e KYOGRE só atrasam o\ninevitável. O mundo vai voltar\la ser um só.$"

HoennRuins_EventScript_Maxie::
	msgbox HoennRuins_EventScript_Maxie_Text, MSGBOX_NPC
	end

HoennRuins_EventScript_Maxie_Text:
	.string "Sou MAXIE. Já quis expandir a\nterra. Agora só quero que ela\lcontinue existindo.$"

HoennRuins_EventScript_Archie::
	msgbox HoennRuins_EventScript_Archie_Text, MSGBOX_NPC
	end

HoennRuins_EventScript_Archie_Text:
	.string "ARCHIE aqui. Por uma vez,\nMAGMA e AQUA estão do mesmo\llado. O mar não está subindo\lsozinho.$"

HoennRuins_EventScript_Steven::
	lock
	faceplayer
	goto_if_unset FLAG_LEGENDS_AGENT, HoennRuins_EventScript_StevenWait
	goto_if_set FLAG_CHAPTER_4_DONE, HoennRuins_EventScript_StevenAfter
	msgbox HoennRuins_Text_Steven1, MSGBOX_DEFAULT
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
	waitmoncry
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox HoennRuins_Text_Clash, MSGBOX_DEFAULT
	fadescreen FADE_TO_WHITE
	playse SE_THUNDER
	clearflag FLAG_HIDE_LEGENDS_RAYQUAZA
	addobject LOCALID_LEGENDS_RAYQUAZA
	fadescreen FADE_FROM_WHITE
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox HoennRuins_Text_Rift, MSGBOX_DEFAULT
	msgbox HoennRuins_Text_Steven2, MSGBOX_DEFAULT
	call Legends_EventScript_GetFragment
	msgbox HoennRuins_Text_Steven3, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_LEGENDS_RAYQUAZA
	setflag FLAG_HIDE_LEGENDS_RAYQUAZA
	setflag FLAG_CHAPTER_4_DONE
	setvar VAR_STORY_CHAPTER, 5
	fadescreen FADE_FROM_BLACK
	msgbox HoennRuins_Text_Chapter5, MSGBOX_DEFAULT
	release
	end

HoennRuins_EventScript_StevenWait::
	msgbox HoennRuins_Text_StevenWait, MSGBOX_DEFAULT
	release
	end

HoennRuins_EventScript_StevenAfter::
	msgbox HoennRuins_Text_Steven3, MSGBOX_DEFAULT
	release
	end

HoennRuins_Text_StevenWait:
	.string "Tem alguém estranho mexendo em\nmáquinas lá atrás. Vamos parar\lessa pessoa primeiro!$"
HoennRuins_Text_Steven1:
	.string "Olhe as paredes. Estas ruínas\nsão muito mais antigas que\lSOOTOPOLIS.\pGROUDON e KYOGRE não estão\nbrigando… estão segurando duas\lforças opostas separadas!$"
HoennRuins_Text_Clash:
	.string "A força escapa do controle! O\nchão treme e a água ferve!$"
HoennRuins_Text_Rift:
	.string "RAYQUAZA desce dos céus e\nsepara os dois!\pUma fenda se abre no alto… por\num instante aparece uma região\linteira, destruída.\pDepois, a fenda se fecha.$"
HoennRuins_Text_Steven2:
	.string "Achei isto no centro da fenda.\nÉ mais um fragmento.$"
HoennRuins_Text_Steven3:
	.string "Esta pedra tem a mesma\ncomposição de uma relíquia de\lSINNOH. A próxima parada é lá.$"
HoennRuins_Text_Chapter5:
	.string "CAPÍTULO 5 - SINNOH: O SEGREDO\nDA CRIAÇÃO\pO marinheiro de SOOTOPOLIS\npode levá-lo a SINNOH.$"

