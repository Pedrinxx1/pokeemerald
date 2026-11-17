CelesticPC_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CelesticPC_OnTransition
	.byte 0

CelesticPC_OnTransition:
	setrespawn HEAL_LOCATION_LEGENDS_CELESTIC
	end

CelesticPC_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_LEGENDS_CELESTIC_PC_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

CelesticPC_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CelesticPC_Items
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
CelesticPC_Items:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	pokemartlistend

