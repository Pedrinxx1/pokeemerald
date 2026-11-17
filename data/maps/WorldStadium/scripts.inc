WorldStadium_MapScripts::
	.byte 0

WorldStadium_EventScript_Sign::
	msgbox WorldStadium_EventScript_Sign_Text, MSGBOX_SIGN
	end

WorldStadium_EventScript_Sign_Text:
	.string "ESTÁDIO MUNDIAL\pNorte: CAMPEONATO. Leste:\nTORRE DOS CAMPEÕES. Oeste:\lALTAR DOS LENDÁRIOS.$"

WorldStadium_EventScript_Sailor::
	lock
	faceplayer
	msgbox WorldStadium_Text_Pallet, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoPallet
	msgbox WorldStadium_Text_Pre, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, WorldStadium_EventScript_GoPre
	msgbox WorldStadium_Text_Paradox, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, WorldStadium_EventScript_GoParadox
	msgbox WorldStadium_Text_Mew, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, WorldStadium_EventScript_GoMew
	msgbox WorldStadium_Text_Ancient, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, WorldStadium_EventScript_GoAncient
	msgbox WorldStadium_Text_Distortion, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, WorldStadium_EventScript_GoDistortion
	msgbox WorldStadium_Text_Decolore, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, WorldStadium_EventScript_GoDecolore
	goto Legends_EventScript_SailorBye

WorldStadium_EventScript_GoPre::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_PREHISTORIC_ISLAND, 12, 17
	waitstate
	end

WorldStadium_EventScript_GoParadox::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_AREA_ZERO, 18, 21
	waitstate
	end

WorldStadium_EventScript_GoMew::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_MEW_ISLAND, 12, 17
	waitstate
	end

WorldStadium_EventScript_GoAncient::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_PRIMORDIAL, 19, 22
	waitstate
	end

WorldStadium_EventScript_GoDistortion::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_DISTORTION_WORLD, 9, 4
	waitstate
	end

WorldStadium_EventScript_GoDecolore::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_DECOLORE, 20, 20
	waitstate
	end

WorldStadium_Text_Pallet:
	.string "Quer voltar para PALLET?$"
WorldStadium_Text_Pre:
	.string "Quer ir para a ILHA\nPRÉ-HISTÓRICA?$"
WorldStadium_Text_Paradox:
	.string "Quer ir para a REGIÃO\nPARADOXO, na ÁREA ZERO?$"
WorldStadium_Text_Mew:
	.string "Quer ir para a ILHA DO MEW?$"
WorldStadium_Text_Ancient:
	.string "Quer ir para a CIDADE ANTIGA\ndo MUNDO PRIMORDIAL?$"
WorldStadium_Text_Distortion:
	.string "Quer ir para o MUNDO\nDISTORCIDO?$"
WorldStadium_Text_Decolore:
	.string "Quer ir para as ILHAS\nDECOLORE?$"

