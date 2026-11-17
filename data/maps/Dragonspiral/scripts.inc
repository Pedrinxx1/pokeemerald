Dragonspiral_MapScripts::
	.byte 0

Dragonspiral_EventScript_Wall::
	msgbox Dragonspiral_EventScript_Wall_Text, MSGBOX_SIGN
	end

Dragonspiral_EventScript_Wall_Text:
	.string "Inscrição antiga: “Houve um\ntempo em que o mundo não tinha\ldivisões.”$"

Dragonspiral_EventScript_Grunt::
	trainerbattle_single TRAINER_LEGENDS_PLASMA, Dragonspiral_Text_Intro, Dragonspiral_Text_Defeat
	msgbox Dragonspiral_Text_After, MSGBOX_DEFAULT
	release
	end

Dragonspiral_Text_Intro:
	.string "Os lendários vão obedecer à\nEQUIPE PLASMA! A ORDEM nos deu\las máquinas!$"
Dragonspiral_Text_Defeat:
	.string "Não! Aquele N traidor tinha\nrazão…$"
Dragonspiral_Text_After:
	.string "O comandante da ORDEM ZERO\nestá no topo. Boa sorte… vai\lprecisar.$"

