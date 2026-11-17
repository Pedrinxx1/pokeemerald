PrimordialPC_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PrimordialPC_OnTransition
	.byte 0

PrimordialPC_OnTransition:
	setrespawn HEAL_LOCATION_LEGENDS_PRIMORDIAL
	end

PrimordialPC_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_LEGENDS_PRIMORDIAL_PC_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

