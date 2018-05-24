
#define true 1
#define false 0

class Logic;

class Module_F : Logic
{
    class AttributesBase
    {
        class Units;
    };
    class ModuleDescription
    {
        class AnyBrain;
    };
};

class ArG_Buzzer : Module_F
{
    scope = 2;
    author = "Rodeostar42";
    displayName = "ArG Buzzer";
    category = "ArG_Module";
    function = "fn_CountDown";

    functionPriority = 2;
    isGlobal = 1;
    isTriggerActivated = 0;
    class Arguments : Module_F
    {
        class Initial_count
        {
            displayName = "Initial count";
            description = "Initial count";
            typeName = "NUMBER";
            defaultValue = 300;
        };

    };
};
