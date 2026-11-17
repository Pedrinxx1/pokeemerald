PewterGym_MapScripts::
	.byte 0

PewterGym_EventScript_Brock::
	trainerbattle_single TRAINER_LEGENDS_BROCK, PewterGym_Text_BrockIntro, PewterGym_Text_BrockDefeat, PewterGym_EventScript_BrockDefeated
	msgbox PewterGym_Text_BrockAfter, MSGBOX_DEFAULT
	release
	end

PewterGym_EventScript_BrockDefeated::
	setflag FLAG_LEGENDS_BROCK
	setvar VAR_LEGENDS_KANTO, 2
	msgbox PewterGym_Text_BrockBadge, MSGBOX_DEFAULT
	release
	end

PewterGym_Text_BrockIntro:
	.string "Sou o BROCK! Minha defesa é\ndura como rocha. Mostre sua\ldeterminação!$"
PewterGym_Text_BrockDefeat:
	.string "Você venceu! Que garra!$"
PewterGym_Text_BrockBadge:
	.string "Leve a INSÍGNIA ROCHA. Agora\nos seus POKéMON vão crescer\lmais.\pE escute: alguém entrou no\nprédio abandonado da EQUIPE\lROCKET aqui em PEWTER. Tenha\lcuidado.$"
PewterGym_Text_BrockAfter:
	.string "Um treinador chamado RED\ntambém está investigando. Ele\ldeve estar no prédio ROCKET.$"

