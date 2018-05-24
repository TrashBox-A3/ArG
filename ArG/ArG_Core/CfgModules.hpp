
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

class ArG_Module : Module_F
{
    scope = 2;
    author = "Rodeostar42";
    displayName = "ArG Module";
    category = "Effects";
    function = "fn_CountDown";
    icon = ;
    functionPriority = 2;
    isGlobal = 1;
    isTriggerActivated = 0;
    class Arguments : Module_F
    {
        class _time
        {
            displayName = "PoolTime";
            description = "CountDown PoolTime";
            typeName = "NUMBER";
            defaultValue = 300;
        };

    };
};
