Coronet_MapScripts::
	.byte 0

Coronet_EventScript_Grunt::
	trainerbattle_single TRAINER_LEGENDS_GALACTIC, Coronet_EventScript_Grunt_Intro, Coronet_EventScript_Grunt_Defeat, Coronet_EventScript_Grunt_Defeated
	msgbox Coronet_EventScript_Grunt_After, MSGBOX_DEFAULT
	release
	end

Coronet_EventScript_Grunt_Defeated::
	setflag FLAG_LEGENDS_GALACTIC
	msgbox Coronet_EventScript_Grunt_After, MSGBOX_DEFAULT
	release
	end

Coronet_EventScript_Grunt_Intro:
	.string "Alto! O CYRUS mandou ninguém\nsubir até ele terminar!$"
Coronet_EventScript_Grunt_Defeat:
	.string "Tá bom, tá bom! A gente só\nquer salvar o mundo dessa vez!$"
Coronet_EventScript_Grunt_After:
	.string "Pela primeira vez o chefe\nparece com medo de verdade.$"

Coronet_EventScript_Cynthia::
	lock
	faceplayer
	goto_if_unset FLAG_LEGENDS_GALACTIC, Coronet_EventScript_CynthiaWait
	msgbox Coronet_Text_Cynthia, MSGBOX_DEFAULT
	warp MAP_LEGENDS_SPEAR_PILLAR, 16, 15
	waitstate
	release
	end

Coronet_EventScript_CynthiaWait::
	msgbox Coronet_Text_CynthiaWait, MSGBOX_DEFAULT
	release
	end

Coronet_Text_CynthiaWait:
	.string "Sou CYNTHIA. Ainda há um\nrecruta GALÁCTICO no caminho.\lCuide dele e volte aqui.$"
Coronet_Text_Cynthia:
	.string "Muito bem. O CYRUS está no\nPILAR DA LANÇA. Vamos juntos!$"

