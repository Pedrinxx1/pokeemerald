LumiosePC_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LumiosePC_OnTransition
	.byte 0

LumiosePC_OnTransition:
	setrespawn HEAL_LOCATION_LEGENDS_LUMIOSE
	end

LumiosePC_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_LEGENDS_LUMIOSE_PC_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

LumiosePC_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LumiosePC_Items
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LumiosePC_Items:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	pokemartlistend

