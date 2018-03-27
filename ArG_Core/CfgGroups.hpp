class CfgGroups {
    
  class WEST {

        class ArG_Core {
            name = "Survival Game";

            class Infantry {
                name = "Infantry";

            };

            class ArG_Player {
                name = "Game Player";

                class ArG_Group_1 {
                    name = "Group 1";
                    side = 1;
                    faction = "ArG_Core";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = { 0 , 0 , 0 };
                        rank = "LIEUTENANT";
                        side = 1;
                        vehicle = "ArG_Gamer_1";
                    };
                    class Unit1 {
                        position[] = { 5 , -5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "ArG_Gamer_2";
                    };
                    class Unit2 {
                        position[] = { -5 , -5 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "ArG_Gamer_3";
                    };
                    class Unit3 {
                        position[] = { 10 , -10 , 0 };
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "ArG_Gamer_4";
                    };
                    
                };

                

            };

            

        };
    };
};