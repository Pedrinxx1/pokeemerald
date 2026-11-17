AreaZero_MapScripts::
	.byte 0

AreaZero_EventScript_Agent::
	trainerbattle_single TRAINER_LEGENDS_PALDEA_AGENT, AreaZero_EventScript_Agent_Intro, AreaZero_EventScript_Agent_Defeat, AreaZero_EventScript_Agent_Defeated
	msgbox AreaZero_EventScript_Agent_After, MSGBOX_DEFAULT
	release
	end

AreaZero_EventScript_Agent_Defeated::
	setflag FLAG_LEGENDS_PALDEA_AGENT
	msgbox AreaZero_EventScript_Agent_After, MSGBOX_DEFAULT
	release
	end

AreaZero_EventScript_Agent_Intro:
	.string "A operação final começou.\nNinguém chega ao MARCO ZERO!$"
AreaZero_EventScript_Agent_Defeat:
	.string "Tarde demais… o líder já está\nlá embaixo.$"
AreaZero_EventScript_Agent_After:
	.string "Quando os nove fragmentos\nestiverem juntos, o mundo\loriginal volta. É só isso que\lele quer.$"

AreaZero_EventScript_Professor::
	lock
	faceplayer
	goto_if_unset FLAG_LEGENDS_PALDEA_AGENT, AreaZero_EventScript_ProfessorWait
	msgbox AreaZero_Text_Professor, MSGBOX_DEFAULT
	warp MAP_LEGENDS_ZERO_LAB, 8, 28
	waitstate
	release
	end

AreaZero_EventScript_ProfessorWait::
	msgbox AreaZero_Text_ProfessorWait, MSGBOX_DEFAULT
	release
	end

AreaZero_Text_ProfessorWait:
	.string "Sou a IA dos professores SADA\ne TURO. Há um agente da ORDEM\lZERO no caminho. Afaste-o\lprimeiro.$"
AreaZero_Text_Professor:
	.string "A TERASTALIZAÇÃO nasceu da\nenergia original, de antes da\lseparação dos núcleos.\pA última chave não é um\nobjeto. Vou levar você ao\lMARCO ZERO.$"

AreaZero_EventScript_Guide::
	lock
	faceplayer
	msgbox Legends_Text_BackStadium, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoStadium
	goto Legends_EventScript_SailorBye

