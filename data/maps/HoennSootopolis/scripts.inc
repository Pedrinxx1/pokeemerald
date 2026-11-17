HoennSootopolis_MapScripts::
	.byte 0

HoennSootopolis_EventScript_Steven::
	msgbox HoennSootopolis_EventScript_Steven_Text, MSGBOX_NPC
	end

HoennSootopolis_EventScript_Steven_Text:
	.string "Sou STEVEN. Que bom que veio!\pO mar está subindo e os\nvulcões acordaram. Nada disso\lé natural.\pEmbaixo da casa ao norte há\numa passagem para ruínas mais\lantigas que SOOTOPOLIS. Me\lencontre lá.$"

HoennSootopolis_EventScript_Wallace::
	msgbox HoennSootopolis_EventScript_Wallace_Text, MSGBOX_NPC
	end

HoennSootopolis_EventScript_Wallace_Text:
	.string "Sou WALLACE. A CAVERNA DA\nORIGEM está em silêncio… e\lisso me assusta mais que\lqualquer tempestade.$"

HoennSootopolis_EventScript_May::
	msgbox HoennSootopolis_EventScript_May_Text, MSGBOX_NPC
	end

HoennSootopolis_EventScript_May_Text:
	.string "Oi! Sou a MAY, ajudo o\nPROFESSOR BIRCH. Os POKéMON da\lterra estão fugindo para o\llitoral!$"

HoennSootopolis_EventScript_Brendan::
	msgbox HoennSootopolis_EventScript_Brendan_Text, MSGBOX_NPC
	end

HoennSootopolis_EventScript_Brendan_Text:
	.string "Sou o BRENDAN. Vi a EQUIPE\nMAGMA e a EQUIPE AQUA\ltrabalhando juntas! Dá pra\lacreditar?$"

HoennSootopolis_EventScript_Wally::
	msgbox HoennSootopolis_EventScript_Wally_Text, MSGBOX_NPC
	end

HoennSootopolis_EventScript_Wally_Text:
	.string "Sou o WALLY. Meu GALLADE\nsentiu algo enorme lá embaixo.\lTome cuidado!$"

HoennSootopolis_EventScript_Leon::
	lock
	faceplayer
	msgbox Legends_Text_Leon4Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEON_4, Legends_Text_Leon4Defeat
	msgbox Legends_Text_Leon4After, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_LEGENDS_LEON_HOENN
	setflag FLAG_LEGENDS_LEON4
	fadescreen FADE_FROM_BLACK
	release
	end

HoennSootopolis_EventScript_Sailor::
	lock
	faceplayer
	goto_if_unset FLAG_CHAPTER_4_DONE, HoennSootopolis_EventScript_Sailor_Prev
	msgbox HoennSootopolis_EventScript_Sailor_TextNext, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoSinnoh
HoennSootopolis_EventScript_Sailor_Prev::
	msgbox HoennSootopolis_EventScript_Sailor_TextPrev, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoJohto
	goto Legends_EventScript_SailorBye

HoennSootopolis_EventScript_Sailor_TextNext:
	.string "Quer zarpar para SINNOH?$"
HoennSootopolis_EventScript_Sailor_TextPrev:
	.string "Quer voltar para JOHTO?$"

