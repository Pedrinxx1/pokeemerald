EcruteakGym_MapScripts::
	.byte 0

EcruteakGym_EventScript_Morty::
	trainerbattle_single TRAINER_LEGENDS_MORTY, EcruteakGym_Text_Intro, EcruteakGym_Text_Defeat, EcruteakGym_EventScript_Defeated
	msgbox EcruteakGym_Text_After, MSGBOX_DEFAULT
	release
	end

EcruteakGym_EventScript_Defeated::
	setflag FLAG_LEGENDS_MORTY
	msgbox EcruteakGym_Text_Badge, MSGBOX_DEFAULT
	release
	end

EcruteakGym_Text_Intro:
	.string "Sou MORTY. Treino para ver\nHO-OH. Mostre-me se você\ltambém é digno!$"
EcruteakGym_Text_Defeat:
	.string "Entendo… você enxerga além.$"
EcruteakGym_Text_Badge:
	.string "Leve a INSÍGNIA NÉVOA. Na\nTORRE DE LATÃO há gente que\lnão deveria estar lá.$"
EcruteakGym_Text_After:
	.string "HO-OH aparece para quem tem\ncoragem de verdade.$"

