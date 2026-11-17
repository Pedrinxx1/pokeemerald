BrassTower_MapScripts::
	.byte 0

BrassTower_EventScript_Flame::
	msgbox BrassTower_EventScript_Flame_Text, MSGBOX_SIGN
	end

BrassTower_EventScript_Flame_Text:
	.string "As chamas antigas queimam em\nazul. Fazem um som baixo, como\luma respiração.$"

BrassTower_EventScript_Exec::
	trainerbattle_single TRAINER_LEGENDS_ROCKET_EXEC, BrassTower_Text_Intro, BrassTower_Text_Defeat, BrassTower_EventScript_Defeated
	msgbox BrassTower_Text_After, MSGBOX_DEFAULT
	release
	end

BrassTower_EventScript_Defeated::
	setflag FLAG_LEGENDS_EXEC
	msgbox BrassTower_Text_After, MSGBOX_DEFAULT
	release
	end

BrassTower_Text_Intro:
	.string "Uma nova organização nos\nrecrutou. Paga bem para medir\lestas chamas!$"
BrassTower_Text_Defeat:
	.string "Grr… Nem sei o nome deles\ndireito!$"
BrassTower_Text_After:
	.string "Ofereceram ao GIOVANNI liderar\nalgo muito maior. Ele recusou…\le sumiu.\pOs novos chefes só falam em “o\nmundo antes da divisão”.$"

