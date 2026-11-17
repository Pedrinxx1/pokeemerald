KalosFacility_MapScripts::
	.byte 0

KalosFacility_EventScript_Scientist::
	trainerbattle_single TRAINER_LEGENDS_SCIENTIST, KalosFacility_Text_Intro, KalosFacility_Text_Defeat, KalosFacility_EventScript_Defeated
	msgbox KalosFacility_Text_After, MSGBOX_DEFAULT
	release
	end

KalosFacility_EventScript_Defeated::
	msgbox KalosFacility_Text_Machine, MSGBOX_DEFAULT
	fadescreen FADE_TO_WHITE
	playse SE_THUNDER
	clearflag FLAG_HIDE_LEGENDS_ZYGARDE
	addobject LOCALID_LEGENDS_ZYGARDE
	fadescreen FADE_FROM_WHITE
	playmoncry SPECIES_ZYGARDE, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox KalosFacility_Text_Zygarde, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_LEGENDS_ZYGARDE
	setflag FLAG_HIDE_LEGENDS_ZYGARDE
	setflag FLAG_LEGENDS_KALOS_LAB
	fadescreen FADE_FROM_BLACK
	msgbox KalosFacility_Text_Done, MSGBOX_DEFAULT
	release
	end

KalosFacility_EventScript_Alain::
	lock
	faceplayer
	goto_if_set FLAG_LEGENDS_KALOS_LAB, KalosFacility_EventScript_AlainAfter
	msgbox KalosFacility_Text_Alain, MSGBOX_DEFAULT
	release
	end

KalosFacility_EventScript_AlainAfter::
	msgbox KalosFacility_Text_AlainAfter, MSGBOX_DEFAULT
	release
	end

KalosFacility_Text_Intro:
	.string "A energia das MEGA EVOLUÇÕES\nvai abrir o portal para o\llugar onde os nove núcleos\lforam separados!$"
KalosFacility_Text_Defeat:
	.string "Impossível! Os cálculos eram\nperfeitos!$"
KalosFacility_Text_Machine:
	.string "A máquina dispara sozinha! O\nchão começa a rachar!$"
KalosFacility_Text_Zygarde:
	.string "ZYGARDE surge das rachaduras e\nprende a máquina!\pMas, antes de desligar, ela\nsuga parte da energia dele…$"
KalosFacility_Text_Done:
	.string "ALAIN e o CHARIZARD dele\ndestroem o resto da\linstalação.\pFale com o AZ, perto do CENTRO\nPOKéMON.$"
KalosFacility_Text_After:
	.string "O líder vai conseguir a\nenergia de outro jeito.$"
KalosFacility_Text_Alain:
	.string "Sou ALAIN. Conheço bem o poder\nda MEGA EVOLUÇÃO. Pare o\lcientista que eu cuido das\lmáquinas.$"
KalosFacility_Text_AlainAfter:
	.string "A ORDEM ZERO roubou energia do\nZYGARDE. Isso não vai acabar\lbem.$"

