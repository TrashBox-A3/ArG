class  FlagCarrier;

  class ArG_Blue_Flag:  FlagCarrier
{

          eden=0;
          animate[]=
          {

              {
                  "flag",
                  0
              }
          };
          hide[]={};
          verticalOffset=3.977;
          verticalOffsetWorld=0;
          init="''";


  scope=2;
  scopeCurator=2;
  author="Rodeostar42";
  displayName="BlueSafty Flag";
  faction = "Empty";
  editorCategory = "ArG_Objects";
  editorSubcategory = "ArG_Sign";

  hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_civ.rvmat"};
  hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_civ_CO.paa"};
  class EventHandlers
      {
          init="(_this select 0) setVariable ['BlueSafty', 123, true]";
      };

};
