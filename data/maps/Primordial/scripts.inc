Primordial_MapScripts::
	.byte 0

Primordial_EventScript_Sign::
	msgbox Primordial_EventScript_Sign_Text, MSGBOX_SIGN
	end

Primordial_EventScript_Sign_Text:
	.string "Uma placa com o nome de todas\nas cidades ao mesmo tempo. As\lletras mudam enquanto você lê.$"

Primordial_EventScript_Cynthia::
	lock
	faceplayer
	goto_if_set FLAG_CHAPTER_15_DONE, Primordial_EventScript_CynthiaAfter
	goto_if_set FLAG_CHAPTER_12_DONE, Primordial_EventScript_CynthiaAgain
	msgbox Primordial_Text_Cynthia, MSGBOX_DEFAULT
	setflag FLAG_CHAPTER_12_DONE
	setvar VAR_STORY_CHAPTER, 13
	msgbox Primordial_Text_Chapter13, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_CynthiaAgain::
	msgbox Primordial_Text_CynthiaAgain, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_CynthiaAfter::
	msgbox Primordial_Text_CynthiaAfter, MSGBOX_DEFAULT
	release
	end

Primordial_Text_Cynthia:
	.string "{PLAYER}! Você também está\naqui. Olhe em volta: PALLET ao\llado de ECRUTEAK, a torre de\lLUMIOSE sobre o mar de HOENN…\pEste é o MUNDO PRIMORDIAL. E\nnão estamos sozinhos.\pOs registros falam de NULL: a\nausência de existência.\pEle nasceu quando o primeiro\nmundo tentou juntar todas as\lpossibilidades numa só. ARCEUS\ldividiu o mundo para contê-lo.\pE o AUREON está prestes a\nlibertá-lo.$"
Primordial_Text_Chapter13:
	.string "CAPÍTULO 13 - O REENCONTRO\pFale com os seus companheiros.\nO AUREON está perto da torre.$"
Primordial_Text_CynthiaAgain:
	.string "Precisamos acordar ARCEUS\nantes que NULL atravesse. Fale\lcom o AUREON.$"
Primordial_Text_CynthiaAfter:
	.string "Este lugar ainda guarda\nsegredos. Mesmo depois de\ltudo, os registros continuam\laparecendo.$"

Primordial_EventScript_Ash::
	lock
	faceplayer
	goto_if_set FLAG_CHAPTER_15_DONE, Primordial_EventScript_Ash_After
	msgbox Primordial_EventScript_Ash_T1, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_Ash_After::
	msgbox Primordial_EventScript_Ash_T2, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_Ash_T1:
	.string "ASH: A gente vai sair daqui! O\nPIKACHU nunca desiste, e eu\ltambém não!$"
Primordial_EventScript_Ash_T2:
	.string "ASH: Um dia vamos batalhar de\nverdade. Promete?$"

Primordial_EventScript_Leon::
	lock
	faceplayer
	goto_if_set FLAG_CHAPTER_15_DONE, Primordial_EventScript_Leon_After
	msgbox Primordial_EventScript_Leon_T1, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_Leon_After::
	msgbox Primordial_EventScript_Leon_T2, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_Leon_T1:
	.string "LEON: Sabe… você me mostrou\nque POKéMON não são\lferramentas. São parceiros.\lVamos terminar isso juntos.$"
Primordial_EventScript_Leon_T2:
	.string "LEON: O CAMPEONATO MUNDIAL vai\nser épico. Te espero lá!$"

Primordial_EventScript_Steven::
	lock
	faceplayer
	goto_if_set FLAG_CHAPTER_15_DONE, Primordial_EventScript_Steven_After
	msgbox Primordial_EventScript_Steven_T1, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_Steven_After::
	msgbox Primordial_EventScript_Steven_T2, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_Steven_T1:
	.string "STEVEN: As pedras daqui são\ntodas iguais aos fragmentos.\lEste mundo inteiro é feito da\lenergia original.$"
Primordial_EventScript_Steven_T2:
	.string "STEVEN: Quero estudar estas\npedras por anos.$"

Primordial_EventScript_N::
	lock
	faceplayer
	goto_if_set FLAG_CHAPTER_15_DONE, Primordial_EventScript_N_After
	msgbox Primordial_EventScript_N_T1, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_N_After::
	msgbox Primordial_EventScript_N_T2, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_N_T1:
	.string "N: Os POKéMON daqui não têm\nmedo de nós. Para eles, ainda\lnão existe divisão entre\lhumanos e POKéMON.$"
Primordial_EventScript_N_T2:
	.string "N: Vou continuar ouvindo os\nPOKéMON. Eles sabem mais do\lque nós.$"

Primordial_EventScript_Serena::
	lock
	faceplayer
	goto_if_set FLAG_CHAPTER_15_DONE, Primordial_EventScript_Serena_After
	msgbox Primordial_EventScript_Serena_T1, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_Serena_After::
	msgbox Primordial_EventScript_Serena_T2, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_Serena_T1:
	.string "SERENA: Achei que nunca mais\nveria ninguém. Que bom que\lvocês estão aqui!$"
Primordial_EventScript_Serena_T2:
	.string "SERENA: Vou voltar para KALOS\ne contar tudo para o CLEMONT!$"

Primordial_EventScript_Lillie::
	lock
	faceplayer
	goto_if_set FLAG_CHAPTER_15_DONE, Primordial_EventScript_Lillie_After
	msgbox Primordial_EventScript_Lillie_T1, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_Lillie_After::
	msgbox Primordial_EventScript_Lillie_T2, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_Lillie_T1:
	.string "LILLIE: O NEBBY está calmo\naqui. Acho que ele sabe o\lcaminho de volta.$"
Primordial_EventScript_Lillie_T2:
	.string "LILLIE: Obrigada por proteger\ntodos os mundos.$"

Primordial_EventScript_Gladion::
	lock
	faceplayer
	goto_if_set FLAG_CHAPTER_15_DONE, Primordial_EventScript_Gladion_After
	msgbox Primordial_EventScript_Gladion_T1, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_Gladion_After::
	msgbox Primordial_EventScript_Gladion_T2, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_Gladion_T1:
	.string "GLADION: Se o AUREON aparecer,\nquero respostas. Mas primeiro,\lsair daqui.$"
Primordial_EventScript_Gladion_T2:
	.string "GLADION: …Você foi bem. Só\nisso.$"

Primordial_EventScript_Nemona::
	lock
	faceplayer
	goto_if_set FLAG_CHAPTER_15_DONE, Primordial_EventScript_Nemona_After
	msgbox Primordial_EventScript_Nemona_T1, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_Nemona_After::
	msgbox Primordial_EventScript_Nemona_T2, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_Nemona_T1:
	.string "NEMONA: Mesmo aqui eu quero\nbatalhar! Mas tá, primeiro\lsalvar o mundo.$"
Primordial_EventScript_Nemona_T2:
	.string "NEMONA: Revanche em PALDEA,\ncombinado!$"

Primordial_EventScript_Aureon::
	lock
	faceplayer
	goto_if_set FLAG_CHAPTER_15_DONE, Primordial_EventScript_AureonAfter
	goto_if_unset FLAG_CHAPTER_12_DONE, Primordial_EventScript_AureonSilent
	msgbox Primordial_Text_Aureon, MSGBOX_DEFAULT
	setflag FLAG_CHAPTER_13_DONE
	setvar VAR_STORY_CHAPTER, 14
	msgbox Primordial_Text_Chapter14, MSGBOX_DEFAULT
	warp MAP_LEGENDS_SKY_TEMPLE, 15, 24
	waitstate
	release
	end

Primordial_EventScript_AureonSilent::
	msgbox Primordial_Text_AureonSilent, MSGBOX_DEFAULT
	release
	end

Primordial_EventScript_AureonAfter::
	msgbox Primordial_Text_AureonAfter, MSGBOX_DEFAULT
	release
	end

Primordial_Text_AureonSilent:
	.string "AUREON olha para o horizonte e\nnão responde.$"
Primordial_Text_Aureon:
	.string "AUREON: Procurei minha filha\nem cada rua deste mundo. Ela\lnão está aqui.\pTalvez nunca tenha existido\nnesta realidade. Talvez eu só\lestivesse fugindo da minha\lprópria perda.\p…Me perdoe. Vou ajudar a\ndesligar o mecanismo.\pPara isso precisamos despertar\nARCEUS, no templo suspenso\lacima de todas as regiões.$"
Primordial_Text_Chapter14:
	.string "ATO V - O FIM E O COMEÇO\pCAPÍTULO 14 - A BATALHA DOS\nLENDÁRIOS\pOs treinadores de todas as\nregiões se espalham para\lproteger os POKéMON.$"
Primordial_Text_AureonAfter:
	.string "AUREON: Passei milhares de\nanos tentando recuperar um\lúnico momento.\pVocê passou sua jornada\ninteira criando momentos que\ljamais serão esquecidos.$"

Primordial_EventScript_Recording::
	lock
	msgbox Primordial_Text_Recording, MSGBOX_DEFAULT
	release
	end

Primordial_Text_Recording:
	.string "Um UNOWN projeta uma última\ngravação do AUREON:\p“NULL não é o mais antigo.\nAntes dele havia outra coisa…\lalgo que observa das\lestrelas.”\pNa imagem, uma silhueta enorme\naparece entre as estrelas.\lDepois, silêncio.$"

Primordial_EventScript_Guide::
	lock
	faceplayer
	msgbox Legends_Text_BackStadium, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoStadium
	goto Legends_EventScript_SailorBye

