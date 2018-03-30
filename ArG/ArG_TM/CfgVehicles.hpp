
#define item(_name, _count) class _xx_##_name { \
name = #_name; \
count = _count; \
};
#define item10(_name) item(_name, 10)
#define item20(_name) item(_name, 20)


class CfgVehicles
{

    #include "TM_ItemBox.hpp"



    class  Land_Billboard_F;
	
		class TM_Billboard:  Land_Billboard_F
	{
		scope=2;
		author="Rodeostar42";
		displayName="TM Billboard";
		faction = "Empty";
		editorCategory = "ArG_Objects";
        editorSubcategory = "ArG_Sign";
        editorPreview = "\ArG_TM\TM_EditorPreviews\TM_Billboard.jpg";
		model = "\A3\Structures_F\Civ\InfoBoards\Billboard_F.p3d";
		hiddenSelections[]={"Camo"};
		hiddenSelectionsTextures[] = {"\ArG_TM\Manui.paa"};
		
	};

};