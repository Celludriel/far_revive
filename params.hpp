class FarReviveSpacer{
	title = "";
	values[] = { "" };
	texts[] = { "" };
	default = "";
};

class FarReviveOptionsTitle{
	title = $STR_PARAMS_FAR_REVIVE_OPTIONS;
	values[] = { "" };
	texts[] = { "" };
	default = "";
};

class BleedOutTimer{
	title = $STR_PARAMS_BLEED_OUT_TIMER;
	values[] = { 120,300,500 };
	texts[] = { 120,300,500 };
	default = 300;
};

class EnableDeathMessages{
	title = $STR_PARAMS_ENABLE_DEATH_MESSAGES;
	values[] = {1,0};
	texts[] = { $STR_OPTION_YES, $STR_OPTION_NO };
	default = 1;
};

class ReviveMode{
	title = $STR_PARAMS_REVIVE_MODE;
	values[] = {0,1,2};
	texts[] = { $STR_OPTION_ONLY_MEDICS, $STR_OPTION_ALL, $STR_OPTION_ALL_WITH_MEDIKIT };
	default = 1;
};