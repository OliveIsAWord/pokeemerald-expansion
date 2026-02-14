TownA_MapScripts::
	.byte 0


TownA_EventScript_Girl1::
# 6 "data/maps/TownA/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 7 "data/maps/TownA/scripts.pory"
	lockall
# 8 "data/maps/TownA/scripts.pory"
	msgbox TownA_EventScript_Girl1_Text_0
# 9 "data/maps/TownA/scripts.pory"
	releaseall
	return


TownA_EventScript_Girl1_Text_0:
# 8 "data/maps/TownA/scripts.pory"
	.string "My mom told me that when a POKéMON gets\n"
	.string "really old, they can walk off into the\l"
	.string "sunset.\p"
	.string "Do you think our POKéMON would ever\n"
	.string "meet over there?$"
