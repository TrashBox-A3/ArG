class CfgAmmo 
{
	class BulletBase;
	
	class ArG_6mm_BB_02 : BulletBase
	{
		author="Rodeostar42";
		typicalSpeed=300; // speed at 100% hit (m/s)
		caliber=0.80000001;
		hit = 0.01; 
		airFriction = -0.020;
		cartridge = "";
		supersonicCrackNear[] = {"", 0, 0};
		supersonicCrackFar[] = {"", 0, 0};
		suppressionRadiusBulletClose = -1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=1.5;
        tracerStartTime = 0.01; // seconds, -1 disables tracer
        tracerEndTime = 3; // seconds
        nvgOnly = false; // tracer visible only by NVG
        coefGravity = -0.5; //default value
	};

	class ArG_6mm_BB_025 : BulletBase
	{
		author="Rodeostar42";
		typicalSpeed=300; // speed at 100% hit (m/s)
		caliber=0.80000001;
		hit = 0.01; 
		airFriction = -0.015;
		cartridge = "";
		supersonicCrackNear[] = {"", 0, 0};
		supersonicCrackFar[] = {"", 0, 0};
		suppressionRadiusBulletClose = -1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=1.5;
        tracerStartTime = 0.01; // seconds, -1 disables tracer
        tracerEndTime = 3; // seconds
        nvgOnly = false; // tracer visible only by NVG
        coefGravity = 0.5; //default value
	};

	class ArG_6mm_BB_02_TOP : BulletBase
	{
		author="Rodeostar42";
		typicalSpeed=300; // speed at 100% hit (m/s)
		caliber=0.80000001;
		hit = 0.01; 
		airFriction = -0.020;		
		selectionFireAnim="";
		supersonicCrackNear[] = {"", 0, 0};
		supersonicCrackFar[] = {"", 0, 0};
		suppressionRadiusBulletClose = -1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=1.5;
        tracerStartTime = 0.01; // seconds, -1 disables tracer
        tracerEndTime = 3; // seconds
        nvgOnly = false; // tracer visible only by NVG
        coefGravity = 0.5; //default value
	};
	
	class ArG_6mm_BB_025_TOP : BulletBase
	{
		author="Rodeostar42";
		typicalSpeed=300; // speed at 100% hit (m/s)
		caliber=0.80000001;
		hit = 0.01; 
		airFriction = -0.015;		
		selectionFireAnim="";
		supersonicCrackNear[] = {"", 0, 0};
		supersonicCrackFar[] = {"", 0, 0};
		suppressionRadiusBulletClose = -1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=1.5;
        tracerStartTime = 0.01; // seconds, -1 disables tracer
        tracerEndTime = 3; // seconds
        nvgOnly = false; // tracer visible only by NVG
        coefGravity = 0.5; //default value
	};

};