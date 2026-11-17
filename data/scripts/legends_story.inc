@ Legends of the World - scripts base (usados nas próximas partes)

Legends_EventScript_LeonBattle1::
	trainerbattle_single TRAINER_LEON_1, Legends_Text_Leon1Intro, Legends_Text_Leon1Defeat
	msgbox Legends_Text_Leon1After, MSGBOX_DEFAULT
	release
	end

Legends_EventScript_LeonBattle2::
	trainerbattle_single TRAINER_LEON_2, Legends_Text_Leon2Intro, Legends_Text_Leon2Defeat
	msgbox Legends_Text_Leon2After, MSGBOX_DEFAULT
	release
	end

Legends_EventScript_LeonBattle3::
	trainerbattle_single TRAINER_LEON_3, Legends_Text_Leon3Intro, Legends_Text_Leon3Defeat
	msgbox Legends_Text_Leon3After, MSGBOX_DEFAULT
	release
	end

Legends_EventScript_LeonBattle4::
	trainerbattle_single TRAINER_LEON_4, Legends_Text_Leon4Intro, Legends_Text_Leon4Defeat
	msgbox Legends_Text_Leon4After, MSGBOX_DEFAULT
	release
	end

Legends_EventScript_LeonBattle5::
	trainerbattle_single TRAINER_LEON_5, Legends_Text_Leon5Intro, Legends_Text_Leon5Defeat
	msgbox Legends_Text_Leon5After, MSGBOX_DEFAULT
	release
	end

Legends_EventScript_LeonBattle6::
	trainerbattle_single TRAINER_LEON_6, Legends_Text_Leon6Intro, Legends_Text_Leon6Defeat
	msgbox Legends_Text_Leon6After, MSGBOX_DEFAULT
	release
	end

Legends_EventScript_LeonBattle7::
	trainerbattle_single TRAINER_LEON_7, Legends_Text_Leon7Intro, Legends_Text_Leon7Defeat
	msgbox Legends_Text_Leon7After, MSGBOX_DEFAULT
	release
	end

Legends_EventScript_LeonBattle8::
	trainerbattle_single TRAINER_LEON_8, Legends_Text_Leon8Intro, Legends_Text_Leon8Defeat
	msgbox Legends_Text_Leon8After, MSGBOX_DEFAULT
	release
	end

@ Entrega um fragmento: soma 1 em VAR_FRAGMENTS e põe o item na bolsa.
Legends_EventScript_GetFragment::
	addvar VAR_FRAGMENTS, 1
	additem ITEM_FRAGMENTO
	buffernumberstring STR_VAR_1, VAR_FRAGMENTS
	playfanfare MUS_OBTAIN_ITEM
	msgbox Legends_Text_GotFragment, MSGBOX_DEFAULT
	waitfanfare
	return

@ Conclui o capítulo atual e avança para o próximo (VAR_STORY_CHAPTER).
Legends_EventScript_FinishChapter::
	addvar VAR_STORY_CHAPTER, 1
	return
