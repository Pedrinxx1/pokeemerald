EcruteakPC_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EcruteakPC_OnTransition
	.byte 0

EcruteakPC_OnTransition:
	setrespawn HEAL_LOCATION_LEGENDS_ECRUTEAK
	end

EcruteakPC_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_LEGENDS_ECRUTEAK_PC_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

