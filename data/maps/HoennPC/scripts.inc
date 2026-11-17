HoennPC_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HoennPC_OnTransition
	.byte 0

HoennPC_OnTransition:
	setrespawn HEAL_LOCATION_LEGENDS_HOENN
	end

HoennPC_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_LEGENDS_HOENN_PC_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

HoennPC_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart HoennPC_Items
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
HoennPC_Items:
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_SUPER_REPEL
	pokemartlistend

