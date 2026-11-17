OpelucidPC_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OpelucidPC_OnTransition
	.byte 0

OpelucidPC_OnTransition:
	setrespawn HEAL_LOCATION_LEGENDS_OPELUCID
	end

OpelucidPC_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_LEGENDS_OPELUCID_PC_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

OpelucidPC_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart OpelucidPC_Items
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OpelucidPC_Items:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	pokemartlistend

