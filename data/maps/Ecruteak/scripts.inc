Ecruteak_MapScripts::
	.byte 0

Ecruteak_EventScript_Sign::
	msgbox Ecruteak_EventScript_Sign_Text, MSGBOX_SIGN
	end

Ecruteak_EventScript_Sign_Text:
	.string "CIDADE DE ECRUTEAK\pOnde o passado e o presente se\nencontram.\pAo sul: TORRE DE LATÃO (oeste)\ne TORRE DE TIN (leste).$"

Ecruteak_EventScript_Eusine::
	msgbox Ecruteak_EventScript_Eusine_Text, MSGBOX_NPC
	end

Ecruteak_EventScript_Eusine_Text:
	.string "Sou EUSINE. Persigo SUICUNE há\nanos.\pAgora RAIKOU, ENTEI e SUICUNE\nprocuram algo… como se\ltivessem perdido um pedaço do\lmundo.$"

Ecruteak_EventScript_Ethan::
	msgbox Ecruteak_EventScript_Ethan_Text, MSGBOX_NPC
	end

Ecruteak_EventScript_Ethan_Text:
	.string "Sou o ETHAN! As chamas da\nTORRE DE LATÃO ficaram azuis\lontem à noite. Isso nunca\laconteceu!$"

Ecruteak_EventScript_Kris::
	msgbox Ecruteak_EventScript_Kris_Text, MSGBOX_NPC
	end

Ecruteak_EventScript_Kris_Text:
	.string "Eu sou a KRIS. Ouvi recrutas\nROCKET falando de uma\l“proposta” para o GIOVANNI.\pParece que ele recusou e sumiu\nlogo depois.$"

Ecruteak_EventScript_Lance::
	msgbox Ecruteak_EventScript_Lance_Text, MSGBOX_NPC
	end

Ecruteak_EventScript_Lance_Text:
	.string "Sou LANCE. Os dragões de toda\na região estão inquietos.\pSe HO-OH voltar a aparecer,\nserá na TORRE DE TIN.$"

Ecruteak_EventScript_Clair::
	msgbox Ecruteak_EventScript_Clair_Text, MSGBOX_NPC
	end

Ecruteak_EventScript_Clair_Text:
	.string "Sou CLAIR, de BLACKTHORN. O\nLANCE não admite, mas está\lpreocupado.$"

Ecruteak_EventScript_Kimono::
	msgbox Ecruteak_EventScript_Kimono_Text, MSGBOX_NPC
	end

Ecruteak_EventScript_Kimono_Text:
	.string "Minha família guarda as\ntradições de HO-OH há séculos.\pDizem que HO-OH já lutou ao\nlado de LUGIA contra uma\lsombra sem forma.$"

Ecruteak_EventScript_Monk::
	lock
	faceplayer
	goto_if_unset FLAG_LEGENDS_MORTY, Ecruteak_EventScript_MonkNo
	goto_if_unset FLAG_LEGENDS_EXEC, Ecruteak_EventScript_MonkNo
	msgbox Ecruteak_Text_MonkYes, MSGBOX_DEFAULT
	setflag FLAG_HIDE_LEGENDS_TOWER_GUARD
	removeobject VAR_LAST_TALKED
	release
	end

Ecruteak_EventScript_MonkNo::
	msgbox Ecruteak_Text_MonkNo, MSGBOX_DEFAULT
	release
	end

Ecruteak_EventScript_Leon::
	lock
	faceplayer
	msgbox Legends_Text_Leon3Intro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEON_3, Legends_Text_Leon3Defeat
	msgbox Legends_Text_Leon3After, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_LEGENDS_LEON_JOHTO
	setflag FLAG_LEGENDS_LEON3
	fadescreen FADE_FROM_BLACK
	release
	end

Ecruteak_EventScript_Sailor::
	lock
	faceplayer
	msgbox Ecruteak_Text_SailorOrange, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoValencia
	msgbox Ecruteak_Text_SailorKanto, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoPallet
	goto_if_unset FLAG_CHAPTER_3_DONE, Legends_EventScript_SailorBye
	msgbox Ecruteak_Text_SailorHoenn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Legends_EventScript_GoHoenn
	goto Legends_EventScript_SailorBye

Ecruteak_Text_MonkNo:
	.string "A TORRE DE TIN é sagrada. Só\nentra quem tiver a INSÍGNIA do\lMORTY e limpar a TORRE DE\lLATÃO.$"
Ecruteak_Text_MonkYes:
	.string "Você enfrentou o líder e\nafastou os ROCKET da torre.\lPode passar.$"
Ecruteak_Text_SailorOrange:
	.string "Quer voltar para as ILHAS\nLARANJA?$"
Ecruteak_Text_SailorKanto:
	.string "Então quer ir para KANTO?$"
Ecruteak_Text_SailorHoenn:
	.string "O STEVEN mandou um recado: o\nmar de HOENN está subindo.\lQuer ir para HOENN?$"

