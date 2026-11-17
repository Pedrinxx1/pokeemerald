RocketLab_MapScripts::
	.byte 0

RocketLab_EventScript_Pc1::
	msgbox RocketLab_EventScript_Pc1_Text, MSGBOX_SIGN
	end

RocketLab_EventScript_Pc1_Text:
	.string "REGISTRO 07: Amostra de MEW. A\nenergia dela reage a uma luz\lque vem de cima do céu.$"

RocketLab_EventScript_Pc2::
	msgbox RocketLab_EventScript_Pc2_Text, MSGBOX_SIGN
	end

RocketLab_EventScript_Pc2_Text:
	.string "REGISTRO 12: Um comprador\nchamado “ORDEM” pagou por\ltodos os dados de MEW. Projeto\lencerrado.$"

RocketLab_EventScript_Grunt::
	trainerbattle_single TRAINER_LEGENDS_ROCKET1, RocketLab_Text_GruntIntro, RocketLab_Text_GruntDefeat, RocketLab_EventScript_GruntDefeated
	msgbox RocketLab_Text_GruntAfter, MSGBOX_DEFAULT
	release
	end

RocketLab_EventScript_GruntDefeated::
	setflag FLAG_LEGENDS_ROCKET_LAB
	release
	end

RocketLab_EventScript_Red::
	lock
	faceplayer
	goto_if_unset FLAG_LEGENDS_ROCKET_LAB, RocketLab_EventScript_RedWait
	goto_if_set FLAG_LEGENDS_RED_MET, RocketLab_EventScript_RedAfter
	msgbox RocketLab_Text_Red, MSGBOX_DEFAULT
	setflag FLAG_LEGENDS_RED_MET
	setvar VAR_LEGENDS_KANTO, 3
	call Legends_EventScript_GetFragment
	msgbox RocketLab_Text_Red2, MSGBOX_DEFAULT
	release
	end

RocketLab_EventScript_RedWait::
	msgbox RocketLab_Text_RedWait, MSGBOX_DEFAULT
	release
	end

RocketLab_EventScript_RedAfter::
	msgbox RocketLab_Text_Red2, MSGBOX_DEFAULT
	release
	end

RocketLab_Text_GruntIntro:
	.string "Ei! Ninguém entra aqui! A\nEQUIPE ROCKET ainda manda\lneste prédio!$"
RocketLab_Text_GruntDefeat:
	.string "Ugh! Nem o chefe sabe onde\nestá…$"
RocketLab_Text_GruntAfter:
	.string "Desde que o GIOVANNI sumiu,\ncada um faz o que quer.$"
RocketLab_Text_RedWait:
	.string "…\p(RED aponta para o recruta\nROCKET.)$"
RocketLab_Text_Red:
	.string "…Você é do PROJETO HORIZONTE.\pPOKéMON raros estão sumindo.\nAchei isto onde estudavam MEW.\pFique com ele.$"
RocketLab_Text_Red2:
	.string "…Existe algo na CAVERNA\nCELESTE, na ROTA 2. Vá lá.$"

