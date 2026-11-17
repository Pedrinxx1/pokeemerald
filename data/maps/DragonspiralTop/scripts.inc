DragonspiralTop_MapScripts::
	.byte 0

DragonspiralTop_EventScript_Leader::
	trainerbattle_single TRAINER_LEGENDS_ORDER_LEADER, DragonspiralTop_EventScript_Leader_Intro, DragonspiralTop_EventScript_Leader_Defeat, DragonspiralTop_EventScript_Leader_Defeated
	msgbox DragonspiralTop_EventScript_Leader_After, MSGBOX_DEFAULT
	release
	end

DragonspiralTop_EventScript_Leader_Defeated::
	setflag FLAG_LEGENDS_ORDER_LEADER
	msgbox DragonspiralTop_EventScript_Leader_After, MSGBOX_DEFAULT
	release
	end

DragonspiralTop_EventScript_Leader_Intro:
	.string "Sou o comandante da ORDEM ZERO\nem UNOVA. Não queremos\ldestruir o mundo.\pQueremos reconstruí-lo. Nosso\nlíder está fazendo um favor à\lhumanidade!$"
DragonspiralTop_EventScript_Leader_Defeat:
	.string "Você não entende o que está\natrapalhando…$"
DragonspiralTop_EventScript_Leader_After:
	.string "O líder já viu o mundo antes\nda divisão. Ele vai trazê-lo\lde volta, custe o que custar.$"

DragonspiralTop_EventScript_N::
	lock
	faceplayer
	goto_if_unset FLAG_LEGENDS_ORDER_LEADER, DragonspiralTop_EventScript_NWait
	goto_if_set FLAG_CHAPTER_6_DONE, DragonspiralTop_EventScript_NAfter
	playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
	waitmoncry
	playmoncry SPECIES_ZEKROM, CRY_MODE_ENCOUNTER
	waitmoncry
	msgbox DragonspiralTop_Text_N, MSGBOX_DEFAULT
	call Legends_EventScript_GetFragment
	setflag FLAG_CHAPTER_6_DONE
	setvar VAR_STORY_CHAPTER, 7
	msgbox DragonspiralTop_Text_Chapter7, MSGBOX_DEFAULT
	release
	end

DragonspiralTop_EventScript_NWait::
	msgbox DragonspiralTop_Text_NWait, MSGBOX_DEFAULT
	release
	end

DragonspiralTop_EventScript_NAfter::
	msgbox DragonspiralTop_Text_NAfter, MSGBOX_DEFAULT
	release
	end

DragonspiralTop_Text_NWait:
	.string "Sou N. Aquele homem usa as\nmáquinas que a EQUIPE PLASMA\lcriou. Pare-o, por favor!$"
DragonspiralTop_Text_N:
	.string "RESHIRAM e ZEKROM mostram duas\nverdades… mas a mesma visão:\puma criatura sem forma\nconsumindo a energia de todos\los lendários.\pEles guardavam isto. Querem\nque fique com você.$"
DragonspiralTop_Text_NAfter:
	.string "Os POKéMON lembram de um mundo\nque ainda não existiu.\lPrecisamos descobrir o porquê.$"
DragonspiralTop_Text_Chapter7:
	.string "CAPÍTULO 7 - KALOS: A GUERRA\nQUE NUNCA TERMINOU\pO marinheiro de OPELUCID pode\nlevá-lo a KALOS.$"

