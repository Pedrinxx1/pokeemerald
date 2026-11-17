Decolore_MapScripts::
	.byte 0

Decolore_EventScript_Sign::
	msgbox Decolore_EventScript_Sign_Text, MSGBOX_SIGN
	end

Decolore_EventScript_Sign_Text:
	.string "ILHAS DECOLORE\pDizem que cada ilha muda de\ncor conforme o humor dos\lPOKéMON.$"

Decolore_EventScript_Cilan::
	trainerbattle_single TRAINER_LEGENDS_CILAN, Decolore_EventScript_Cilan_Intro, Decolore_EventScript_Cilan_Defeat, Decolore_EventScript_Cilan_Defeated
	msgbox Decolore_EventScript_Cilan_After, MSGBOX_DEFAULT
	release
	end

Decolore_EventScript_Cilan_Defeated::
	setflag FLAG_LEGENDS_CILAN
	msgbox Decolore_EventScript_Cilan_After, MSGBOX_DEFAULT
	release
	end

Decolore_EventScript_Cilan_Intro:
	.string "Sou CILAN, conhecedor de\nPOKéMON! Este arquipélago tem\lum sabor único… vamos degustar\luma batalha?$"
Decolore_EventScript_Cilan_Defeat:
	.string "Que combinação perfeita! Uma\nbatalha de sabor inesquecível!$"
Decolore_EventScript_Cilan_After:
	.string "Viajei por estas ilhas com o\nASH há muito tempo. Desde o\lfim do NULL, as cores daqui\lficaram mais vivas.$"

Decolore_EventScript_Elder::
	lock
	faceplayer
	goto_if_set FLAG_LEGENDS_DECOLORE_GIFT, Decolore_EventScript_ElderAfter
	goto_if_unset FLAG_LEGENDS_CILAN, Decolore_EventScript_ElderWait
	msgbox Decolore_Text_Elder, MSGBOX_DEFAULT
	giveitem ITEM_MASTER_BALL
	setflag FLAG_LEGENDS_DECOLORE_GIFT
	release
	end

Decolore_EventScript_ElderWait::
	msgbox Decolore_Text_ElderWait, MSGBOX_DEFAULT
	release
	end

Decolore_EventScript_ElderAfter::
	msgbox Decolore_Text_ElderAfter, MSGBOX_DEFAULT
	release
	end

Decolore_Text_ElderWait:
	.string "Vença o CILAN e eu conto um\nsegredo das ilhas.$"
Decolore_Text_Elder:
	.string "Quando o mundo sumiu, estas\nilhas ficaram. Foram as\lúnicas.\pAcho que ARCEUS guardou este\nlugar como lembrança do\lprimeiro mundo. Leve isto,\lcampeão.$"
Decolore_Text_ElderAfter:
	.string "Volte quando quiser. As ilhas\ngostam de você.$"

Decolore_EventScript_Guide::
	lock
	faceplayer
	msgbox Legends_Text_BackStadium, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoStadium
	goto Legends_EventScript_SailorBye

