WorldHall_MapScripts::
	.byte 0

WorldHall_EventScript_Host::
	lock
	faceplayer
	goto_if_set FLAG_LEGENDS_WORLD_CHAMP, WorldHall_EventScript_Done
	goto_if_eq VAR_LEGENDS_WORLD, 0, WorldHall_EventScript_R0
	goto_if_eq VAR_LEGENDS_WORLD, 1, WorldHall_EventScript_R1
	goto_if_eq VAR_LEGENDS_WORLD, 2, WorldHall_EventScript_R2
	goto_if_eq VAR_LEGENDS_WORLD, 3, WorldHall_EventScript_R3
	goto_if_eq VAR_LEGENDS_WORLD, 4, WorldHall_EventScript_R4
	goto_if_eq VAR_LEGENDS_WORLD, 5, WorldHall_EventScript_R5
	goto_if_eq VAR_LEGENDS_WORLD, 6, WorldHall_EventScript_R6
	goto_if_eq VAR_LEGENDS_WORLD, 7, WorldHall_EventScript_R7
	goto_if_eq VAR_LEGENDS_WORLD, 8, WorldHall_EventScript_R8
	goto_if_eq VAR_LEGENDS_WORLD, 9, WorldHall_EventScript_R9
	goto WorldHall_EventScript_Done

WorldHall_EventScript_R0::
	msgbox WorldHall_Text_R0, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_RED, WorldHall_Text_Win
	special HealPlayerParty
	addvar VAR_LEGENDS_WORLD, 1
	msgbox WorldHall_Text_Next, MSGBOX_DEFAULT
	release
	end

WorldHall_Text_R0:
	.string "Rodada 1 de 10! Seu adversário\né RED!$"
WorldHall_EventScript_R1::
	msgbox WorldHall_Text_R1, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEGENDS_BLUE, WorldHall_Text_Win
	special HealPlayerParty
	addvar VAR_LEGENDS_WORLD, 1
	msgbox WorldHall_Text_Next, MSGBOX_DEFAULT
	release
	end

WorldHall_Text_R1:
	.string "Rodada 2 de 10! Seu adversário\né BLUE!$"
WorldHall_EventScript_R2::
	msgbox WorldHall_Text_R2, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEGENDS_LANCE, WorldHall_Text_Win
	special HealPlayerParty
	addvar VAR_LEGENDS_WORLD, 1
	msgbox WorldHall_Text_Next, MSGBOX_DEFAULT
	release
	end

WorldHall_Text_R2:
	.string "Rodada 3 de 10! Seu adversário\né LANCE!$"
WorldHall_EventScript_R3::
	msgbox WorldHall_Text_R3, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEGENDS_STEVEN, WorldHall_Text_Win
	special HealPlayerParty
	addvar VAR_LEGENDS_WORLD, 1
	msgbox WorldHall_Text_Next, MSGBOX_DEFAULT
	release
	end

WorldHall_Text_R3:
	.string "Rodada 4 de 10! Seu adversário\né STEVEN!$"
WorldHall_EventScript_R4::
	msgbox WorldHall_Text_R4, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEGENDS_CYNTHIA, WorldHall_Text_Win
	special HealPlayerParty
	addvar VAR_LEGENDS_WORLD, 1
	msgbox WorldHall_Text_Next, MSGBOX_DEFAULT
	release
	end

WorldHall_Text_R4:
	.string "Rodada 5 de 10! Seu adversário\né CYNTHIA!$"
WorldHall_EventScript_R5::
	msgbox WorldHall_Text_R5, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEGENDS_ALDER, WorldHall_Text_Win
	special HealPlayerParty
	addvar VAR_LEGENDS_WORLD, 1
	msgbox WorldHall_Text_Next, MSGBOX_DEFAULT
	release
	end

WorldHall_Text_R5:
	.string "Rodada 6 de 10! Seu adversário\né ALDER!$"
WorldHall_EventScript_R6::
	msgbox WorldHall_Text_R6, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEGENDS_IRIS, WorldHall_Text_Win
	special HealPlayerParty
	addvar VAR_LEGENDS_WORLD, 1
	msgbox WorldHall_Text_Next, MSGBOX_DEFAULT
	release
	end

WorldHall_Text_R6:
	.string "Rodada 7 de 10! Seu adversário\né IRIS!$"
WorldHall_EventScript_R7::
	msgbox WorldHall_Text_R7, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEGENDS_DIANTHA, WorldHall_Text_Win
	special HealPlayerParty
	addvar VAR_LEGENDS_WORLD, 1
	msgbox WorldHall_Text_Next, MSGBOX_DEFAULT
	release
	end

WorldHall_Text_R7:
	.string "Rodada 8 de 10! Seu adversário\né DIANTHA!$"
WorldHall_EventScript_R8::
	msgbox WorldHall_Text_R8, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEON_9, WorldHall_Text_Win
	special HealPlayerParty
	addvar VAR_LEGENDS_WORLD, 1
	msgbox WorldHall_Text_Next, MSGBOX_DEFAULT
	release
	end

WorldHall_Text_R8:
	.string "Rodada 9 de 10! Seu adversário\né LEON!$"
WorldHall_EventScript_R9::
	msgbox WorldHall_Text_R9, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEGENDS_ASH, WorldHall_Text_Win
	special HealPlayerParty
	addvar VAR_LEGENDS_WORLD, 1
	setflag FLAG_LEGENDS_WORLD_CHAMP
	clearflag FLAG_HIDE_LEGENDS_RECORDING
	msgbox WorldHall_Text_Champion, MSGBOX_DEFAULT
	release
	end

WorldHall_Text_R9:
	.string "Rodada 10 de 10! Seu\nadversário é ASH!\pÉ o grande final: ASH e\nPIKACHU!$"
WorldHall_EventScript_Done::
	msgbox WorldHall_Text_Done, MSGBOX_DEFAULT
	release
	end

WorldHall_Text_Win:
	.string "Que batalha incrível!$"
WorldHall_Text_Next:
	.string "Descanse. Fale comigo quando\nestiver pronto para a próxima\lrodada.$"
WorldHall_Text_Champion:
	.string "Temos um novo CAMPEÃO MUNDIAL:\n{PLAYER}!\pDizem que uma última gravação\napareceu na CIDADE ANTIGA…$"
WorldHall_Text_Done:
	.string "O CAMPEÃO MUNDIAL! Para\nrevanches, visite a TORRE DOS\lCAMPEÕES.$"

