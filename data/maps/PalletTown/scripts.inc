PalletTown_MapScripts::
	.byte 0

PalletTown_EventScript_Sign::
	msgbox PalletTown_EventScript_Sign_Text, MSGBOX_SIGN
	end

PalletTown_EventScript_Sign_Text:
	.string "CIDADE DE PALLET\pTons de começo puro e branco.$"

PalletTown_EventScript_Man::
	msgbox PalletTown_EventScript_Man_Text, MSGBOX_NPC
	end

PalletTown_EventScript_Man_Text:
	.string "Ontem vi um bando de PIDGEY\nvoando para o sul. Eles nunca\lfazem isso!$"

PalletTown_EventScript_NeedPokemon::
	lockall
	msgbox PalletTown_Text_NeedPokemon, MSGBOX_DEFAULT
	applymovement OBJ_EVENT_ID_PLAYER, Legends_Movement_WalkDown
	waitmovement 0
	releaseall
	end

PalletTown_Text_NeedPokemon:
	.string "Espere! É perigoso andar no\nmato sem POKéMON.\pO PROFESSOR CARVALHO está\nesperando você no laboratório!$"

PalletTown_EventScript_Sailor::
	lock
	faceplayer
	goto_if_unset FLAG_LEGENDS_EPILOGUE, PalletTown_EventScript_SailorOrange
	msgbox PalletTown_Text_SailorStadium, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoStadium
PalletTown_EventScript_SailorOrange::
	msgbox PalletTown_Text_Sailor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Legends_EventScript_SailorBye
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_VALENCIA, 20, 21
	waitstate
	release
	end

PalletTown_Text_Sailor:
	.string "Meu barco vai para as ILHAS\nLARANJA. Quer ir?$"
PalletTown_Text_SailorStadium:
	.string "Quer ir ao ESTÁDIO MUNDIAL?$"

