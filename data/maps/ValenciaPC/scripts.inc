ValenciaPC_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ValenciaPC_OnTransition
	.byte 0

ValenciaPC_OnTransition:
	setrespawn HEAL_LOCATION_LEGENDS_VALENCIA
	end

ValenciaPC_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_LEGENDS_VALENCIA_PC_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

