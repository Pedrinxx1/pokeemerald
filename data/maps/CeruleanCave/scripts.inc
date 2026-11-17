CeruleanCave_MapScripts::
	.byte 0

CeruleanCave_EventScript_Mewtwo::
	lock
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox CeruleanCave_Text_Mewtwo, MSGBOX_DEFAULT
	fadescreen FADE_TO_WHITE
	removeobject LOCALID_LEGENDS_MEWTWO
	setflag FLAG_HIDE_LEGENDS_MEWTWO
	setflag FLAG_LEGENDS_MEWTWO
	setflag FLAG_HIDE_LEGENDS_INDIGO_GUARD
	fadescreen FADE_FROM_WHITE
	msgbox CeruleanCave_Text_After, MSGBOX_DEFAULT
	release
	end

CeruleanCave_Text_Mewtwo:
	.string "…Humano. Você também sentiu.\pExiste algo tentando lembrar\nao mundo como ele era antes de\lexistir.\pOs registros de MEW na\ninstalação ROCKET falam disso.\lNão confie em quem quer\l“restaurar” o mundo.$"
CeruleanCave_Text_After:
	.string "MEWTWO desapareceu. O caminho\npara a LIGA DE KANTO deve\lestar livre agora.$"

