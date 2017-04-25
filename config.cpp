class CfgPatches
{
	class grad_beret
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {"rhssaf_c_gear"};
		author = "Simmax [A] & DerZade [A]";
	};
};

class CfgWeapons
{
	class rhssaf_beret_green;
	class grad_beret_green : rhssaf_beret_green
	{
		displayName = "Gruppe Adler Beret (Green)";
		hiddenSelectionsTextures[] = {"\grad_beret\data\green_co.paa"};
	};
	class grad_beret_red : grad_beret_green
	{
		displayName = "Gruppe Adler Beret (Red)";
		picture = "\rhssaf\addons\rhssaf_c_gear\data\headgear\icon_beret_red_ca.paa";
		hiddenSelectionsTextures[] = {"\grad_beret\data\red_co.paa"};
	};
	class grad_beret_black : grad_beret_green
	{
		displayName = "Gruppe Adler Beret (Black)";
		picture = "\rhssaf\addons\rhssaf_c_gear\data\headgear\icon_beret_black_ca.paa";
		hiddenSelectionsTextures[] = {"\grad_beret\data\black_co.paa"};
	};
	class grad_beret_purp : grad_beret_green
	{
		displayName = "Gruppe Adler Beret (Purple)";
		picture = "\rhssaf\addons\rhssaf_c_gear\data\headgear\icon_beret_red_ca.paa";
		hiddenSelectionsTextures[] = {"\grad_beret\data\purp_co.paa"};
	};
	class grad_beret_blue : grad_beret_green
	{
		displayName = "Gruppe Adler Beret (Blue)";
		picture = "\rhssaf\addons\rhssaf_c_gear\data\headgear\icon_beret_black_ca.paa";
		hiddenSelectionsTextures[] = {"\grad_beret\data\blue_co.paa"};
	};
};
