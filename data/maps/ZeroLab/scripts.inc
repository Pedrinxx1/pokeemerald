ZeroLab_MapScripts::
	.byte 0

ZeroLab_EventScript_Terapagos::
	lock
	playmoncry SPECIES_TERAPAGOS, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox ZeroLab_Text_Terapagos, MSGBOX_DEFAULT
	call Legends_EventScript_GetFragment
	setflag FLAG_CHAPTER_10_DONE
	setvar VAR_STORY_CHAPTER, 11
	removeobject LOCALID_LEGENDS_TERAPAGOS
	msgbox ZeroLab_Text_Chapter11, MSGBOX_DEFAULT
	clearflag FLAG_HIDE_LEGENDS_AUREON
	addobject LOCALID_LEGENDS_AUREON_LAB
	msgbox ZeroLab_Text_Aureon1, MSGBOX_DEFAULT
	call Legends_EventScript_PauseNuzlocke
	setflag FLAG_LEGENDS_NOWHITEOUT
	trainerbattle_no_intro TRAINER_LEGENDS_AUREON, ZeroLab_Text_AureonDefeat
	clearflag FLAG_LEGENDS_NOWHITEOUT
	call Legends_EventScript_ResumeNuzlocke
	special HealPlayerParty
	msgbox ZeroLab_Text_Aureon2, MSGBOX_DEFAULT
	fadescreen FADE_TO_WHITE
	playse SE_THUNDER
	removeobject LOCALID_LEGENDS_AUREON_LAB
	setflag FLAG_HIDE_LEGENDS_AUREON
	setflag FLAG_CHAPTER_11_DONE
	setvar VAR_STORY_CHAPTER, 12
	msgbox ZeroLab_Text_Vanish, MSGBOX_DEFAULT
	warp MAP_LEGENDS_PRIMORDIAL, 19, 20
	waitstate
	release
	end

ZeroLab_Text_Terapagos:
	.string "No MARCO ZERO, TERAPAGOS\nacorda. Os oito fragmentos\lbrilham na sua bolsa.\pTERAPAGOS os reconhece… e\nrevela o nono, guardado no\lpróprio corpo.$"
ZeroLab_Text_Chapter11:
	.string "ATO IV - A VERDADEIRA ORIGEM\pCAPÍTULO 11 - A ORDEM ZERO$"
ZeroLab_Text_Aureon1:
	.string "???: Finalmente. Os nove\njuntos.\pSou AUREON, fundador da ORDEM\nZERO. Vivo há milhares de\lanos.\pEu estava lá quando o mundo\nfoi dividido. Naquele dia\lperdi minha filha.\pSe o mundo original voltar,\nela volta também. Me entregue\los fragmentos!$"
ZeroLab_Text_AureonDefeat:
	.string "Força não basta, criança.$"
ZeroLab_Text_Aureon2:
	.string "AUREON: Lutou bem. Mas eu\nesperei tempo demais para\lparar agora.\pEle toma os fragmentos e ativa\no mecanismo!$"
ZeroLab_Text_Vanish:
	.string "Uma luz branca engole tudo. O\nsom desaparece. O chão\ldesaparece.\pO mundo inteiro desaparece…\pCAPÍTULO 12 - O MUNDO\nPRIMORDIAL$"

