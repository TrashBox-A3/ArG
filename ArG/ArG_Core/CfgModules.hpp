
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
    function = "ArG_Module";
    icon = "\tf_kss\icon.paa";
    functionPriority = 2;
    isGlobal = 1;
    isTriggerActivated = 0;
    class Arguments : Module_F
    {
        class PoolTime
        {
            displayName = "PoolTime";
            description = "CountDown PoolTime";
            typeName = "NUMBER";
            defaultValue = 300;
        };

    };
};
