PrehistoricIsland_MapScripts::
	.byte 0

PrehistoricIsland_EventScript_Guide::
	lock
	faceplayer
	msgbox Legends_Text_BackStadium, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoStadium
	goto Legends_EventScript_SailorBye

