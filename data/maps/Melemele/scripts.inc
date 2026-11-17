Melemele_MapScripts::
	.byte 0

Melemele_EventScript_Sign::
	msgbox Melemele_EventScript_Sign_Text, MSGBOX_SIGN
	end

Melemele_EventScript_Sign_Text:
	.string "ILHA MELEMELE\pCuidado: fendas estranhas no\ncéu.$"

Melemele_EventScript_Mallow::
	msgbox Melemele_EventScript_Mallow_Text, MSGBOX_NPC
	end

Melemele_EventScript_Mallow_Text:
	.string "Sou a MALLOW! Até os BOUNSWEET\nestão escondidos. A ilha está\lescurecendo.$"

Melemele_EventScript_Lana::
	msgbox Melemele_EventScript_Lana_Text, MSGBOX_NPC
	end

Melemele_EventScript_Lana_Text:
	.string "Sou a LANA. Os POKéMON do mar\nestão nadando para longe das\lfendas.$"

Melemele_EventScript_Sophocles::
	msgbox Melemele_EventScript_Sophocles_Text, MSGBOX_NPC
	end

Melemele_EventScript_Sophocles_Text:
	.string "Sou o SOPHOCLES. Medi a luz:\ncai um pouco a cada hora. O\lNECROZMA está absorvendo tudo!$"

Melemele_EventScript_Kiawe::
	trainerbattle_single TRAINER_LEGENDS_KIAWE, Melemele_EventScript_Kiawe_Intro, Melemele_EventScript_Kiawe_Defeat, Melemele_EventScript_Kiawe_Defeated
	msgbox Melemele_EventScript_Kiawe_After, MSGBOX_DEFAULT
	release
	end

Melemele_EventScript_Kiawe_Defeated::
	setflag FLAG_LEGENDS_KIAWE
	msgbox Melemele_EventScript_Kiawe_After, MSGBOX_DEFAULT
	release
	end

Melemele_EventScript_Kiawe_Intro:
	.string "Sou KIAWE, capitão de prova!\nNinguém entra numa fenda sem\lpassar pela minha prova de\lfogo!$"
Melemele_EventScript_Kiawe_Defeat:
	.string "Que chama! Você passou na\nprova!$"
Melemele_EventScript_Kiawe_After:
	.string "Com o ASH ao seu lado, você\npode entrar na FENDA ULTRA.\lEla fica ao sul da ilha.$"

Melemele_EventScript_Leon::
	lock
	faceplayer
	msgbox Legends_Text_Leon8Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEON_8, Legends_Text_Leon8Defeat
	msgbox Legends_Text_Leon8After, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_LEGENDS_LEON_ALOLA
	setflag FLAG_LEGENDS_LEON8
	fadescreen FADE_FROM_BLACK
	release
	end

Melemele_EventScript_Sailor::
	lock
	faceplayer
	goto_if_unset FLAG_CHAPTER_8_DONE, Melemele_EventScript_Sailor_Prev
	msgbox Melemele_EventScript_Sailor_TextNext, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoGalar
Melemele_EventScript_Sailor_Prev::
	msgbox Melemele_EventScript_Sailor_TextPrev, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoKalos
	goto Legends_EventScript_SailorBye

Melemele_EventScript_Sailor_TextNext:
	.string "Quer zarpar para GALAR?$"
Melemele_EventScript_Sailor_TextPrev:
	.string "Quer voltar para KALOS?$"

Melemele_EventScript_Ash::
	lock
	faceplayer
	goto_if_set FLAG_CHAPTER_8_DONE, Melemele_EventScript_AshAfter
	msgbox Melemele_Text_Ash, MSGBOX_DEFAULT
	release
	end

Melemele_EventScript_AshAfter::
	msgbox Melemele_Text_AshAfter, MSGBOX_DEFAULT
	release
	end

Melemele_EventScript_Wormhole::
	lock
	goto_if_unset FLAG_LEGENDS_KIAWE, Melemele_EventScript_WormholeNo
	msgbox Melemele_Text_Wormhole, MSGBOX_DEFAULT
	warp MAP_LEGENDS_ULTRA_SPACE, 21, 4
	waitstate
	release
	end

Melemele_EventScript_WormholeNo::
	msgbox Melemele_Text_WormholeNo, MSGBOX_DEFAULT
	release
	end

Melemele_Text_Ash:
	.string "Oi! Eu sou o ASH, e este é o\nPIKACHU!\pAs ULTRA BEASTS estão com\nmedo, não com raiva. Vamos\ldescobrir do quê. Conte\lcomigo!$"
Melemele_Text_AshAfter:
	.string "Que batalha! Eu e o PIKACHU\nvamos ajudar quando você\lprecisar. Prometo!$"
Melemele_Text_WormholeNo:
	.string "Um NIHILEGO treme na frente de\numa fenda brilhante. O capitão\lKIAWE não deixa ninguém\lpassar.$"
Melemele_Text_Wormhole:
	.string "O NIHILEGO se afasta. O ASH\nsegura seu ombro: “Vamos\ljuntos!”\pVocês atravessam a FENDA\nULTRA…$"

