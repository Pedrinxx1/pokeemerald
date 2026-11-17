IndigoLeague_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoLeague_OnTransition
	.byte 0

IndigoLeague_OnTransition:
	setrespawn HEAL_LOCATION_LEGENDS_INDIGO
	end

IndigoLeague_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_LEGENDS_INDIGO_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

IndigoLeague_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart IndigoLeague_Items
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
IndigoLeague_Items:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	pokemartlistend

IndigoLeague_EventScript_Guard::
	msgbox IndigoLeague_Text_Guard, MSGBOX_NPC
	end

IndigoLeague_Text_Guard:
	.string "A final da LIGA ainda não\ncomeçou. Volte quando estiver\lpronto.$"

