ViridianCity_MapScripts::
	.byte 0

ViridianCity_EventScript_Sign::
	msgbox ViridianCity_EventScript_Sign_Text, MSGBOX_SIGN
	end

ViridianCity_EventScript_Sign_Text:
	.string "CIDADE DE VIRIDIAN\pA cidade da eterna primavera.$"

ViridianCity_EventScript_GymGuard::
	msgbox ViridianCity_EventScript_GymGuard_Text, MSGBOX_NPC
	end

ViridianCity_EventScript_GymGuard_Text:
	.string "O GINÁSIO está fechado. O\nlíder, GIOVANNI, desapareceu\lsem deixar rastro.\pDizem que a EQUIPE ROCKET está\ninvestigando uma energia\lestranha…$"

ViridianCity_EventScript_Misty::
	msgbox ViridianCity_EventScript_Misty_Text, MSGBOX_NPC
	end

ViridianCity_EventScript_Misty_Text:
	.string "Sou a MISTY, líder de\nCERULEAN. Vim atrás de POKéMON\lde água que sumiram dos rios.\pO BROCK está em PEWTER. Vá\nfalar com ele!$"

ViridianCity_EventScript_LeagueGuard::
	msgbox ViridianCity_Text_LeagueGuard, MSGBOX_NPC
	end

ViridianCity_Text_LeagueGuard:
	.string "O caminho para a LIGA DE KANTO\nestá fechado.\pVolte depois de vencer o BROCK\ne investigar a CAVERNA CELESTE\lna ROTA 2.$"

