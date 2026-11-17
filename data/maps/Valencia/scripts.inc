Valencia_MapScripts::
	.byte 0

Valencia_EventScript_Sign::
	msgbox Valencia_EventScript_Sign_Text, MSGBOX_SIGN
	end

Valencia_EventScript_Sign_Text:
	.string "ILHA VALENCIA\pPorta de entrada das ILHAS\nLARANJA.$"

Valencia_EventScript_Swimmer::
	msgbox Valencia_EventScript_Swimmer_Text, MSGBOX_NPC
	end

Valencia_EventScript_Swimmer_Text:
	.string "Os POKéMON de água estão se\nescondendo em cavernas\lsubmarinas. Algo os assusta.$"

Valencia_EventScript_Sailor::
	lock
	faceplayer
	msgbox Valencia_Text_Pummelo, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Valencia_EventScript_GoPummelo
	goto_if_unset FLAG_LEGENDS_DRAKE, Valencia_EventScript_Kanto
	msgbox Valencia_Text_Island, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Valencia_EventScript_GoIsland
	goto_if_unset FLAG_CHAPTER_2_DONE, Valencia_EventScript_Kanto
	msgbox Valencia_Text_Johto, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Valencia_EventScript_GoJohto
Valencia_EventScript_Kanto::
	msgbox Valencia_Text_Kanto, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoPallet
	goto Legends_EventScript_SailorBye

Valencia_EventScript_GoPummelo::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_PUMMELO, 12, 17
	waitstate
	end

Valencia_EventScript_GoIsland::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_FORBIDDEN_ISLAND, 12, 17
	waitstate
	end

Valencia_EventScript_GoJohto::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_ECRUTEAK, 15, 25
	waitstate
	end

Valencia_Text_Pummelo:
	.string "Quer ir para PUMMELO, onde\nfica a LIGA LARANJA?$"
Valencia_Text_Island:
	.string "Quer ir para a ILHA PROIBIDA?$"
Valencia_Text_Johto:
	.string "Quer ir para JOHTO?$"
Valencia_Text_Kanto:
	.string "Quer voltar para KANTO?$"

