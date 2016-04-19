class Blackscreen {
	idd = 5651;
	movingEnable = false;
	controls[]= { "OuterBackground", "Skull", "FarWoundedLabel" };

	class OuterBackground {
		idc = -1;
		type =  CT_STATIC;
		style = ST_LEFT;
		colorText[] = COLOR_BLACK;
		colorBackground[] = COLOR_BLACK;
		font = FontM;
		sizeEx = 0.023;
		x = -3; y = -3;
		w = 9;  h = 9;
		text = "";
	};

	class Skull {
		idc = 666;
		type =  CT_STATIC ;
		style = ST_PICTURE;
		colorText[] = { 1,1,1,0.15 };
		colorBackground[] = COLOR_NOALPHA;
		font = FontM;
		sizeEx = 0.1 * safezoneH;
		x = 0.3 * safezoneW + safezoneX;
		w = 0.4 * safezoneW;
		y = 0.2 * safezoneH + safezoneY;
		h = 0.6 * safezoneH;
		text = "FarRevive\resource\skull.paa";
	};

	class FarWoundedLabel {
		idc = 4867;
		type =  CT_STATIC;
		style = ST_CENTER;
		colorText[] = COLOR_WHITE;
		colorBackground[] = COLOR_NOALPHA;
		font = FontM;
		sizeEx = 0.07 * safezoneH;
		shadow = 1;
		x = 0.3 * safezoneW + safezoneX; y= 0.25 * safezoneH + safezoneY;
		w = 0.4 * safezoneW; h = 0.07 * safezoneH;
		text = $STR_REVIVE_LABEL;
	};
};

class FarButton {
	idc = -1;
	type = CT_BUTTON;
	style = ST_CENTER;
	default = false;
	font = FontM;
	sizeEx = 0.018 * safezoneH;
	colorText[] = { 0, 0, 0, 1 };
	colorFocused[] = { 1, 1, 1, 1 };
	colorDisabled[] = { 0.2, 0.2, 0.2, 0.7 };
	colorBackground[] = { 0.8, 0.8, 0.8, 0.8 };
	colorBackgroundDisabled[] = { 0.5, 0.5, 0.5, 0.5 };
	colorBackgroundActive[] = { 1, 1, 1, 1 };
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	colorShadow[] = { 0, 0, 0, 0.5 };
	colorBorder[] = { 0, 0, 0, 1 };
	borderSize = 0;
	soundEnter[] = { "", 0, 1 };          // no sound
	soundPush[] = {"\a3\Ui_f\data\Sound\CfgIngameUI\hintExpand", 0.891251, 1};
	soundClick[] = { "", 0, 1 };          // no sound
	soundEscape[] = { "", 0, 1 };          // no sound
	x = 0.45 * safezoneW + safezoneX;
	y = ((BASE_Y + 0.7) * safezoneH) + safezoneY;
	w = 0.1 * safezoneW;
	h = 0.04 * safezoneH;
	text = "";
	action = "";
	shadow = 1;
};

class FarRespawnDialog {
	idd = 5566;
	movingEnable = false;
	controlsBackground[] = {"FarBleedoutBar_BG"};
	controls[] = {"FarBleedoutBar","FarBleedoutBar_F","FarUseless","FarRespawn","FarReviveLabel","FarWoundedLabel", "FarReplaceAI"};
	objects[] = {};

	class FarRespawn : FarButton {
		idc = -1;
		x = 0.45 * safezoneW + safezoneX;
		y = 0.75 * safezoneH + safezoneY;
		w = 0.1 * safezoneW;
		h = 0.04 * safezoneH;
		text = "Respawn";
		action = "player setDamage 1";
	};

	class FarReplaceAI : FarButton {
		idc = 678;
		x = 0.45 * safezoneW + safezoneX;
		y = 0.8 * safezoneH + safezoneY;
		w = 0.1 * safezoneW;
		h = 0.04 * safezoneH;
		text = "Replace nearest AI";
		action = "replace_ai = 1";
	};

	class FarUseless : FarRespawn {
		idc = -1;
		x = -5;
		y = -5;
		w = 0.1;
		h = 0.1;
		text = "";
		action = "";
	};

	class FarReviveLabel {
		idc = 5567;
		type =  CT_STATIC;
		style = ST_CENTER;
		colorText[] = COLOR_WHITE;
		colorBackground[] = COLOR_NOALPHA;
		font = FontM;
		sizeEx = 0.02 * safezoneH;
		shadow = 1;
		x = 0.4 * safezoneW + safezoneX;
		y = 0.7 * safezoneH + safezoneY;
		w = 0.2 * safezoneW;
		h = 0.025 * safezoneH;
		text = "";
	};

	class FarWoundedLabel {
		idc = 4567;
		type =  CT_STATIC;
		style = ST_CENTER;
		colorText[] = COLOR_WHITE;
		colorBackground[] = COLOR_NOALPHA;
		font = FontM;
		sizeEx = 0.07 * safezoneH;
		shadow = 1;
		x = 0.3 * safezoneW + safezoneX;
		y = 0.25 * safezoneH + safezoneY;
		w = 0.4 * safezoneW;
		h = 0.07 * safezoneH;
		text = $STR_REVIVE_LABEL;
	};

	class FarBleedoutBar {
		idc = 6699;
		type =  CT_STATIC;
		style = ST_SINGLE;
		colorText[] = COLOR_WHITE;
		colorBackground[] = COLOR_BLEEDOUT;
		font = FontM;
		sizeEx = 0.023;
		x = 0.4 * safezoneW + safezoneX;
		y = 0.7 * safezoneH + safezoneY;
		w = 0.2 * safezoneW;
		h = 0.03 * safezoneH;
		text = "";
	};

	class FarBleedoutBar_BG : FarBleedoutBar {
		idc = -1;
		colorBackground[] = COLOR_BLACK_ALPHA;
		x = 0.4 * safezoneW + safezoneX - 0.005;
		y = 0.7 * safezoneH + safezoneY - 0.005;
		w = 0.2 * safezoneW + 0.01;
		h = 0.03 * safezoneH + 0.01;
	};

	class FarBleedoutBar_F : FarBleedoutBar {
		idc = 6698;
		colorText[] = COLOR_WHITE;
		style = ST_FRAME;
		x = 0.4 * safezoneW + safezoneX - 0.005;
		y = 0.7 * safezoneH + safezoneY - 0.005;
		w = 0.2 * safezoneW + 0.01;
		h = 0.03 * safezoneH + 0.01;
	};
};