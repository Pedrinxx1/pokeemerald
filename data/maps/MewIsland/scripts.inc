MewIsland_MapScripts::
	.byte 0

MewIsland_EventScript_Guide::
	lock
	faceplayer
	msgbox Legends_Text_BackStadium, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoStadium
	goto Legends_EventScript_SailorBye

MewIsland_EventScript_Mew::
	lock
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox MewIsland_Text_Mew, MSGBOX_DEFAULT
	setwildbattle SPECIES_MEW, 80
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, MewIsland_EventScript_Gone
	setflag FLAG_LEGENDS_MEW_CAUGHT
	removeobject LOCALID_LEGENDS_MEW
	release
	end

MewIsland_EventScript_Gone::
	msgbox MewIsland_Text_Gone, MSGBOX_DEFAULT
	release
	end

MewIsland_Text_Mew:
	.string "Um MEW brinca entre as flores.\nEle parece estar esperando\lvocê.$"
MewIsland_Text_Gone:
	.string "O MEW se escondeu… mas ainda\nestá por aqui.$"

