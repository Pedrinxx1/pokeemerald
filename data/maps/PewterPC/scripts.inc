PewterPC_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PewterPC_OnTransition
	.byte 0

PewterPC_OnTransition:
	setrespawn HEAL_LOCATION_LEGENDS_PEWTER
	end

PewterPC_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_LEGENDS_PEWTER_PC_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

