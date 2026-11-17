DecolorePC_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DecolorePC_OnTransition
	.byte 0

DecolorePC_OnTransition:
	setrespawn HEAL_LOCATION_LEGENDS_DECOLORE
	end

DecolorePC_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_LEGENDS_DECOLORE_PC_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

DecolorePC_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart DecolorePC_Items
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
DecolorePC_Items:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_DUSK_BALL
	.2byte ITEM_QUICK_BALL
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_MAX_REVIVE
	pokemartlistend

