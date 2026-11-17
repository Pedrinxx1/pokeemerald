@ Scripts comuns dos capítulos 1 a 3
Legends_EventScript_SailorBye::
	msgbox Legends_Text_SailorBye, MSGBOX_DEFAULT
	release
	end

Legends_EventScript_SailorBack::
	lock
	faceplayer
	msgbox Legends_Text_SailorBack, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Legends_EventScript_SailorBye
	goto Legends_EventScript_GoValencia

Legends_EventScript_GoValencia::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_VALENCIA, 20, 21
	waitstate
	end

Legends_EventScript_GoPallet::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_PALLET_TOWN, 6, 17
	waitstate
	end

Legends_Movement_WalkDown:
	walk_down
	step_end

Legends_Text_SailorBye:
	.string "Quando quiser zarpar, é só\nfalar comigo!$"
Legends_Text_SailorGo:
	.string "Segure firme! Vamos zarpar!$"
Legends_Text_SailorBack:
	.string "Quer voltar para VALENCIA?$"

Legends_EventScript_GoJohto::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_ECRUTEAK, 15, 25
	waitstate
	end

Legends_EventScript_GoHoenn::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_HOENN_SOOTOPOLIS, 43, 32
	waitstate
	end

Legends_EventScript_GoSinnoh::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_CELESTIC, 15, 25
	waitstate
	end

Legends_EventScript_GoUnova::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_OPELUCID, 15, 25
	waitstate
	end

Legends_EventScript_GoKalos::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_LUMIOSE, 15, 25
	waitstate
	end

Legends_EventScript_GoAlola::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_MELEMELE, 20, 20
	waitstate
	end

Legends_EventScript_GoGalar::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_WYNDON, 15, 25
	waitstate
	end

Legends_EventScript_GoPaldea::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_MESAGOZA, 15, 25
	waitstate
	end

Legends_EventScript_GoStadium::
	msgbox Legends_Text_SailorGo, MSGBOX_DEFAULT
	warp MAP_LEGENDS_WORLD_STADIUM, 15, 25
	waitstate
	end

@ Pausa o Nuzlocke numa batalha de história que o jogador pode perder sem perder o time.
Legends_EventScript_PauseNuzlocke::
	clearflag FLAG_LEGENDS_NUZ_PAUSE
	goto_if_unset FLAG_NUZLOCKE, Legends_EventScript_Return
	setflag FLAG_LEGENDS_NUZ_PAUSE
	clearflag FLAG_NUZLOCKE
Legends_EventScript_Return::
	return

Legends_EventScript_ResumeNuzlocke::
	goto_if_unset FLAG_LEGENDS_NUZ_PAUSE, Legends_EventScript_Return
	setflag FLAG_NUZLOCKE
	clearflag FLAG_LEGENDS_NUZ_PAUSE
	return

Legends_Text_BackStadium:
	.string "Quer voltar para o ESTÁDIO MUNDIAL?$"
