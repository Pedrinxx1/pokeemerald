PalletHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PalletHouse_OnTransition
	.byte 0

PalletHouse_OnTransition:
	setrespawn HEAL_LOCATION_LEGENDS_PALLET
	end

PalletHouse_EventScript_Mom::
	lock
	faceplayer
	goto_if_set FLAG_SYS_POKEMON_GET, PalletHouse_EventScript_MomHeal
	msgbox PalletHouse_Text_Mom1, MSGBOX_DEFAULT
	release
	end

PalletHouse_EventScript_MomHeal::
	msgbox PalletHouse_Text_Mom2, MSGBOX_DEFAULT
	call Common_EventScript_OutOfCenterPartyHeal
	release
	end

PalletHouse_Text_Mom1:
	.string "Bom dia, {PLAYER}! Você viu o\ncéu hoje cedo? Parecia\lrachado…\pO PROFESSOR CARVALHO pediu\npara você ir ao laboratório. É\lsobre o PROJETO HORIZONTE!$"
PalletHouse_Text_Mom2:
	.string "Descanse um pouco. Seus\nPOKéMON parecem cansados.$"

