class CfgPatches {
    class CSA38_ACRE2_Compat {
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)"};
        requiredVersion = 0.1;
        requiredAddons[] = {"acre_main","acre_sys_rack","acre_sys_intercom","csa38ii_tracked_c","CSA38II_tracked2_c"};
        units[] = { "csa38_cromwell_command",
                    "csa38_valentineMkII_command",
                    "csa38_t34cz1_commmand",
                    "csa38_t34cz1_noRadio"
        };
        weapons[] = {};
        magazines[] = {};
        ammo[] = {};
    };
};

class cfgVehicles {

    #include "CSA38_Tanks.hpp"

    #include "CSA38_Wheeled.hpp"

    #include "CSA38_Wheeled_APC.hpp"

};
