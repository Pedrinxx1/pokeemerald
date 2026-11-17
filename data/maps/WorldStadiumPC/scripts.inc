WorldStadiumPC_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WorldStadiumPC_OnTransition
	.byte 0

WorldStadiumPC_OnTransition:
	setrespawn HEAL_LOCATION_LEGENDS_STADIUM
	end

WorldStadiumPC_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_LEGENDS_WORLD_STADIUM_PC_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

