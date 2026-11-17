LegendAltar_MapScripts::
	.byte 0

LegendAltar_EventScript_Keeper::
	lock
	faceplayer
	goto_if_unset FLAG_LEGENDS_WORLD_CHAMP, LegendAltar_EventScript_Closed
	goto_if_eq VAR_LEGENDS_MISSION, 0, LegendAltar_EventScript_M0
	goto_if_eq VAR_LEGENDS_MISSION, 1, LegendAltar_EventScript_M1
	goto_if_eq VAR_LEGENDS_MISSION, 2, LegendAltar_EventScript_M2
	goto_if_eq VAR_LEGENDS_MISSION, 3, LegendAltar_EventScript_M3
	goto_if_eq VAR_LEGENDS_MISSION, 4, LegendAltar_EventScript_M4
	goto_if_eq VAR_LEGENDS_MISSION, 5, LegendAltar_EventScript_M5
	goto_if_eq VAR_LEGENDS_MISSION, 6, LegendAltar_EventScript_M6
	goto_if_eq VAR_LEGENDS_MISSION, 7, LegendAltar_EventScript_M7
	goto_if_eq VAR_LEGENDS_MISSION, 8, LegendAltar_EventScript_M8
	goto_if_eq VAR_LEGENDS_MISSION, 9, LegendAltar_EventScript_M9
	msgbox LegendAltar_Text_AllDone, MSGBOX_DEFAULT
	release
	end

LegendAltar_EventScript_M0::
	msgbox LegendAltar_Text_M0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LegendAltar_EventScript_Later
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_MEW, 80
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, LegendAltar_EventScript_Fail
	addvar VAR_LEGENDS_MISSION, 1
	msgbox LegendAltar_Text_Ok, MSGBOX_DEFAULT
	release
	end

LegendAltar_Text_M0:
	.string "Missão 1: MEW e MEWTWO: a\norigem dos POKéMON. MEW espera\lpor você nas memórias do\lprimeiro laboratório.\pQuer começar a missão?$"
LegendAltar_EventScript_M1::
	msgbox LegendAltar_Text_M1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LegendAltar_EventScript_Later
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_CELEBI, 80
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, LegendAltar_EventScript_Fail
	addvar VAR_LEGENDS_MISSION, 1
	msgbox LegendAltar_Text_Ok, MSGBOX_DEFAULT
	release
	end

LegendAltar_Text_M1:
	.string "Missão 2: CELEBI: uma viagem\nao passado. Ele protege a\lfloresta de um tempo que ainda\lvirá.\pQuer começar a missão?$"
LegendAltar_EventScript_M2::
	msgbox LegendAltar_Text_M2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LegendAltar_EventScript_Later
	playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_LUGIA, 82
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, LegendAltar_EventScript_Fail
	addvar VAR_LEGENDS_MISSION, 1
	msgbox LegendAltar_Text_Ok, MSGBOX_DEFAULT
	release
	end

LegendAltar_Text_M2:
	.string "Missão 3: LUGIA e HO-OH: o\nequilíbrio entre céu e mar.\lLUGIA quer agradecer pelo\ltemplo.\pQuer começar a missão?$"
LegendAltar_EventScript_M3::
	msgbox LegendAltar_Text_M3, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LegendAltar_EventScript_Later
	playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_HO_OH, 82
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, LegendAltar_EventScript_Fail
	addvar VAR_LEGENDS_MISSION, 1
	msgbox LegendAltar_Text_Ok, MSGBOX_DEFAULT
	release
	end

LegendAltar_Text_M3:
	.string "Missão 4: HO-OH quer testar\nquem libertou o céu das\lsombras.\pQuer começar a missão?$"
LegendAltar_EventScript_M4::
	msgbox LegendAltar_Text_M4, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LegendAltar_EventScript_Later
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_RAYQUAZA, 84
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, LegendAltar_EventScript_Fail
	addvar VAR_LEGENDS_MISSION, 1
	msgbox LegendAltar_Text_Ok, MSGBOX_DEFAULT
	release
	end

LegendAltar_Text_M4:
	.string "Missão 5: RAYQUAZA: a proteção\ndo planeta. Ele quer ver se\lvocê é forte o bastante para\lajudá-lo.\pQuer começar a missão?$"
LegendAltar_EventScript_M5::
	msgbox LegendAltar_Text_M5, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LegendAltar_EventScript_Later
	playmoncry SPECIES_GIRATINA, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_GIRATINA, 84
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, LegendAltar_EventScript_Fail
	addvar VAR_LEGENDS_MISSION, 1
	msgbox LegendAltar_Text_Ok, MSGBOX_DEFAULT
	release
	end

LegendAltar_Text_M5:
	.string "Missão 6: GIRATINA: o MUNDO\nDISTORCIDO. Ele veio do outro\llado só para encontrar você.\pQuer começar a missão?$"
LegendAltar_EventScript_M6::
	msgbox LegendAltar_Text_M6, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LegendAltar_EventScript_Later
	playmoncry SPECIES_ZYGARDE, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_ZYGARDE, 84
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, LegendAltar_EventScript_Fail
	addvar VAR_LEGENDS_MISSION, 1
	msgbox LegendAltar_Text_Ok, MSGBOX_DEFAULT
	release
	end

LegendAltar_Text_M6:
	.string "Missão 7: ZYGARDE: o\nequilíbrio da natureza. Ele\lrecuperou a energia roubada.\pQuer começar a missão?$"
LegendAltar_EventScript_M7::
	msgbox LegendAltar_Text_M7, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LegendAltar_EventScript_Later
	playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_NECROZMA, 86
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, LegendAltar_EventScript_Fail
	addvar VAR_LEGENDS_MISSION, 1
	msgbox LegendAltar_Text_Ok, MSGBOX_DEFAULT
	release
	end

LegendAltar_Text_M7:
	.string "Missão 8: NECROZMA: a luz\nperdida. Ele quer devolver a\lluz que tomou.\pQuer começar a missão?$"
LegendAltar_EventScript_M8::
	msgbox LegendAltar_Text_M8, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LegendAltar_EventScript_Later
	playmoncry SPECIES_ETERNATUS, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_ETERNATUS, 86
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, LegendAltar_EventScript_Fail
	addvar VAR_LEGENDS_MISSION, 1
	msgbox LegendAltar_Text_Ok, MSGBOX_DEFAULT
	release
	end

LegendAltar_Text_M8:
	.string "Missão 9: ETERNATUS: a energia\nDYNAMAX. Ele está calmo e\lcurioso.\pQuer começar a missão?$"
LegendAltar_EventScript_M9::
	msgbox LegendAltar_Text_M9, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LegendAltar_EventScript_Later
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_TERAPAGOS, 88
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, LegendAltar_EventScript_Fail
	addvar VAR_LEGENDS_MISSION, 1
	msgbox LegendAltar_Text_Ok, MSGBOX_DEFAULT
	release
	end

LegendAltar_Text_M9:
	.string "Missão 10: TERAPAGOS: os\nmistérios das realidades. Ele\lescolheu você.\pQuer começar a missão?$"
LegendAltar_EventScript_Fail::
	msgbox LegendAltar_Text_Fail, MSGBOX_DEFAULT
	release
	end

LegendAltar_EventScript_Later::
	release
	end

LegendAltar_EventScript_Closed::
	msgbox LegendAltar_Text_Closed, MSGBOX_DEFAULT
	release
	end

LegendAltar_Text_Ok:
	.string "O lendário aceitou você. Volte\npara a próxima missão!$"
LegendAltar_Text_Fail:
	.string "O lendário foi embora… mas vai\nvoltar. Tente de novo quando\lquiser.$"
LegendAltar_Text_Closed:
	.string "Os lendários só aparecem para\no CAMPEÃO MUNDIAL.$"
LegendAltar_Text_AllDone:
	.string "Você completou todas as\nmissões dos lendários. O mundo\linteiro conhece o seu nome.$"

