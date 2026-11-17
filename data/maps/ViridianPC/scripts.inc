ViridianPC_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianPC_OnTransition
	.byte 0

ViridianPC_OnTransition:
	setrespawn HEAL_LOCATION_LEGENDS_VIRIDIAN
	end

ViridianPC_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_LEGENDS_VIRIDIAN_PC_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

