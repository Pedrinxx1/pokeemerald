ChampionsTower_MapScripts::
	.byte 0

ChampionsTower_EventScript_Host::
	lock
	faceplayer
	goto_if_unset FLAG_LEGENDS_WORLD_CHAMP, ChampionsTower_EventScript_Closed
	msgbox ChampionsTower_Text_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ChampionsTower_EventScript_Bye
	random 10
	goto_if_eq VAR_RESULT, 0, ChampionsTower_EventScript_B0
	goto_if_eq VAR_RESULT, 1, ChampionsTower_EventScript_B1
	goto_if_eq VAR_RESULT, 2, ChampionsTower_EventScript_B2
	goto_if_eq VAR_RESULT, 3, ChampionsTower_EventScript_B3
	goto_if_eq VAR_RESULT, 4, ChampionsTower_EventScript_B4
	goto_if_eq VAR_RESULT, 5, ChampionsTower_EventScript_B5
	goto_if_eq VAR_RESULT, 6, ChampionsTower_EventScript_B6
	goto_if_eq VAR_RESULT, 7, ChampionsTower_EventScript_B7
	goto_if_eq VAR_RESULT, 8, ChampionsTower_EventScript_B8
	goto_if_eq VAR_RESULT, 9, ChampionsTower_EventScript_B9
	goto ChampionsTower_EventScript_Bye

ChampionsTower_EventScript_B0::
	msgbox ChampionsTower_Text_B0, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_RED, WorldHall_Text_Win
	special HealPlayerParty
	release
	end

ChampionsTower_Text_B0:
	.string "Seu desafiante de hoje é RED!$"
ChampionsTower_EventScript_B1::
	msgbox ChampionsTower_Text_B1, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEGENDS_BLUE, WorldHall_Text_Win
	special HealPlayerParty
	release
	end

ChampionsTower_Text_B1:
	.string "Seu desafiante de hoje é BLUE!$"
ChampionsTower_EventScript_B2::
	msgbox ChampionsTower_Text_B2, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEGENDS_LANCE, WorldHall_Text_Win
	special HealPlayerParty
	release
	end

ChampionsTower_Text_B2:
	.string "Seu desafiante de hoje é\nLANCE!$"
ChampionsTower_EventScript_B3::
	msgbox ChampionsTower_Text_B3, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEGENDS_STEVEN, WorldHall_Text_Win
	special HealPlayerParty
	release
	end

ChampionsTower_Text_B3:
	.string "Seu desafiante de hoje é\nSTEVEN!$"
ChampionsTower_EventScript_B4::
	msgbox ChampionsTower_Text_B4, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEGENDS_CYNTHIA, WorldHall_Text_Win
	special HealPlayerParty
	release
	end

ChampionsTower_Text_B4:
	.string "Seu desafiante de hoje é\nCYNTHIA!$"
ChampionsTower_EventScript_B5::
	msgbox ChampionsTower_Text_B5, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEGENDS_ALDER, WorldHall_Text_Win
	special HealPlayerParty
	release
	end

ChampionsTower_Text_B5:
	.string "Seu desafiante de hoje é\nALDER!$"
ChampionsTower_EventScript_B6::
	msgbox ChampionsTower_Text_B6, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEGENDS_IRIS, WorldHall_Text_Win
	special HealPlayerParty
	release
	end

ChampionsTower_Text_B6:
	.string "Seu desafiante de hoje é IRIS!$"
ChampionsTower_EventScript_B7::
	msgbox ChampionsTower_Text_B7, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEGENDS_DIANTHA, WorldHall_Text_Win
	special HealPlayerParty
	release
	end

ChampionsTower_Text_B7:
	.string "Seu desafiante de hoje é\nDIANTHA!$"
ChampionsTower_EventScript_B8::
	msgbox ChampionsTower_Text_B8, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEON_9, WorldHall_Text_Win
	special HealPlayerParty
	release
	end

ChampionsTower_Text_B8:
	.string "Seu desafiante de hoje é LEON!$"
ChampionsTower_EventScript_B9::
	msgbox ChampionsTower_Text_B9, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LEGENDS_ASH, WorldHall_Text_Win
	special HealPlayerParty
	release
	end

ChampionsTower_Text_B9:
	.string "Seu desafiante de hoje é ASH!$"
ChampionsTower_EventScript_Closed::
	msgbox ChampionsTower_Text_Closed, MSGBOX_DEFAULT
	release
	end

ChampionsTower_EventScript_Bye::
	release
	end

ChampionsTower_Text_Ask:
	.string "TORRE DOS CAMPEÕES! Quer\nenfrentar um campeão sorteado?$"
ChampionsTower_Text_Closed:
	.string "A TORRE abre para quem vencer\no CAMPEONATO MUNDIAL.$"

