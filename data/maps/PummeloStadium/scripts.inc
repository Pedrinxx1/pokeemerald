PummeloStadium_MapScripts::
	.byte 0

PummeloStadium_EventScript_Drake::
	trainerbattle_single TRAINER_LEGENDS_DRAKE, PummeloStadium_Text_Intro, PummeloStadium_Text_Defeat, PummeloStadium_EventScript_Defeated
	msgbox PummeloStadium_Text_After, MSGBOX_DEFAULT
	release
	end

PummeloStadium_EventScript_Defeated::
	setflag FLAG_LEGENDS_DRAKE
	msgbox PummeloStadium_Text_Win, MSGBOX_DEFAULT
	release
	end

PummeloStadium_Text_Intro:
	.string "Sou DRAKE, líder da TRIPULAÇÃO\nLARANJA. Ninguém passa sem me\lvencer!$"
PummeloStadium_Text_Defeat:
	.string "Incrível… Você é digno.$"
PummeloStadium_Text_Win:
	.string "Você venceu a LIGA LARANJA!\nLeve este troféu de honra.\pO marinheiro de VALENCIA agora\npode levá-lo à ILHA PROIBIDA.$"
PummeloStadium_Text_After:
	.string "O templo da ILHA PROIBIDA não\naparece em mapa nenhum.\lCuidado lá.$"

