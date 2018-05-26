class  Flag_Blue_F;

  class ArG_Blue_Flag:  Flag_Blue_F
{

  scope=2;
  scopeCurator=2;
  author="Rodeostar42";
  displayName="Blue Safty Flag";
  faction = "Empty";
  editorCategory = "ArG_Objects";
  editorSubcategory = "ArG_Sign";

  class EventHandlers
      {
          init="(_this select 0) setVariable ['BlueSafty', 123, true]";
      };

};


class  "Flag_Red_F";

  class ArG_Red_Flag:  "Flag_Red_F"
{

  scope=2;
  scopeCurator=2;
  author="Rodeostar42";
  displayName="Red Safty Flag";
  faction = "Empty";
  editorCategory = "ArG_Objects";
  editorSubcategory = "ArG_Sign";

  class EventHandlers
      {
          init="(_this select 0) setVariable ['RedSafty', 123, true]";
      };

};


class  Flag_Green_F;

  class ArG_Green_Flag:  Flag_Green_F
{

  scope=2;
  scopeCurator=2;
  author="Rodeostar42";
  displayName="Green Safty Flag";
  faction = "Empty";
  editorCategory = "ArG_Objects";
  editorSubcategory = "ArG_Sign";

  class EventHandlers
      {
          init="(_this select 0) setVariable ['GreenSafty', 123, true]";
      };

};
