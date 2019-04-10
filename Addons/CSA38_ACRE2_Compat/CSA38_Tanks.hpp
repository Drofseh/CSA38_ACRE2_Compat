class Tank_F;

class csa38_tank_base : Tank_F {
    // Adds an infantry phone, a full crew intercom, and a radio configurable by the entire crew
    // This isn't historically accurate, but will ensure that new vehicles get comms even if they don't have a vehicle specific config
    acre_hasInfantryPhone = 1;
    acre_infantryPhoneDisableRinging = 0;
    acre_infantryPhonePosition[] = {0, 0, 0};
    acre_infantryPhoneCustomRinging[] = {"IFA3_ACRE2_Compat\Sound\InFoneGer.wss",7,1,1,40};
    acre_infantryPhoneControlActions[] = {"all"};
    acre_infantryPhoneIntercom[] = {"all"};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "IntCm";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class CSA38_TCvz33 : csa38_tank_base {
    acre_infantryPhonePosition[] = {0,-1.3,-1.15};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "IntCm";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"gunner"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {};
};

class CSA38_ltvz34 : csa38_tank_base {
    acre_infantryPhonePosition[] = {0,-1.5,-1};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class CSA38_ltvz35 : csa38_tank_base {
    acre_infantryPhonePosition[] = {0,-2.3,-1};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};
/*
class CSA38_lt35 : CSA38_ltvz35 {
};

class CSA38_ltm35_1 : CSA38_ltvz35 {
};

class CSA38_ltm35_W : CSA38_ltm35_1 {
};
*/
class CSA38_ltm35_FR; /* : CSA38_ltm35_1 {
};
*/
class CSA38_ltm35_FR2 : CSA38_ltm35_FR {
    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Anton";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Bruno";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class CSA38_R2; /* : CSA38_ltvz35 {
};

class CSA38_R2W : CSA38_R2 {
};

class CSA38_R2late : CSA38_R2 {
};
*/
class CSA38_R2Tacam : CSA38_R2 {
    acre_infantryPhonePosition[] = {0,-2.36,-0.96};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class CSA38_ltvz38 : csa38_tank_base {
    acre_infantryPhonePosition[] = {-0.558,-1.81,-1.16};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class CSA38_lt40 : CSA38_ltvz38 {
    acre_infantryPhonePosition[] = {0.247,-2.383,-1.08};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class CSA38_lt40kul : CSA38_lt40 {
    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Anton";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Bruno";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};
/*
class CSA38_ltm38 : CSA38_ltvz38 {
};

class CSA38_lt38 : CSA38_ltvz38 {
};

class CSA38_lt382 : CSA38_lt38 {
};

class CSA38_T38 : CSA38_lt38 {
};

class CSA38_T38W : CSA38_T38 {
};

class CSA38_ltm38_W : CSA38_ltm38 {
};

class CSA38_ltm38_FR : CSA38_ltm38 {
};

class CSA38_ltm38_LATE : CSA38_ltm38 {
};

class CSA38_ltm38_LATE2 : CSA38_ltm38 {
};
*/
class CSA38_pzkpfwI : csa38_tank_base {
    acre_infantryPhonePosition[] = {0,-2.447,-1};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "IntCm";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"gunner"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};
/*
class CSA38_pzkpfwIvcz : CSA38_pzkpfwI {
};
*/
class CSA38_pzbfwI : CSA38_pzkpfwI {
    acre_infantryPhonePosition[] = {-0.321,-2.452,-1.302};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "IntCm";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Anton";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Bruno";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class CSA38_pzkpfwIA : CSA38_pzkpfwI {
    acre_infantryPhonePosition[] = {-0.377,-1.859,-1.24};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "IntCm";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};
/*
class CSA38_pzkpfwIAvcz : CSA38_pzkpfwIA {
};
*/
class CSA38_pzbfwIA : CSA38_pzkpfwIA {
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "IntCm";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"gunner"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Anton";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"gunner"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Bruno";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"gunner"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};
/*
class CSA38_pzkpfwIA_DE : CSA38_pzkpfwIA {
};
*/
class CSA38_pzbfwI_DE; /* : CSA38_pzbfwI {
};

class CSA38_pzkpfwI_DE : CSA38_pzkpfwI {
};
*/
class CSA38_pzbfwI_W; /* : CSA38_pzbfwI {
};
*/
class CSA38_pzbfwIamb_W : CSA38_pzbfwI_W {
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "IntCm";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"driver"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};
/*
class CSA38_pzkpfwI_W : CSA38_pzkpfwI {
};

class CSA38_pzbfwI_PL : CSA38_pzbfwI {
};

class CSA38_pzkpfwI_PL : CSA38_pzkpfwI {
};

class CSA38_pzkpfwIA_W : CSA38_pzkpfwIA {
};

class CSA38_pzkpfwIA_PL : CSA38_pzkpfwIA {
};

class CSA38_pzkpfwI_FR : CSA38_pzkpfwI {
};
*/
class CSA38_pzbfwI_FR; /* : CSA38_pzbfwI {
};
*/
class CSA38_pzbfwIamb : CSA38_pzbfwI_FR {
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "IntCm";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"driver"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class CSA38_pzbfwIamb_DE : CSA38_pzbfwI_DE {
    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "IntCm";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"driver"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"driver"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};
/*
class CSA38_pzkpfwIA_FR : CSA38_pzkpfwIA {
};
*/
class CSA38_pzII : csa38_tank_base {
    acre_infantryPhonePosition[] = {-0.44,-2.272,-0.67};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "IntCm";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};
/*
class CSA38_pzIIb : CSA38_pzII {
};

class CSA38_pzIIa : CSA38_pzII {
};

class CSA38_pzIIvcz : CSA38_pzII {
};

class CSA38_pzIIc : CSA38_pzII {
};

class CSA38_pzIIac : CSA38_pzIIc {
};

class CSA38_pzIIbc : CSA38_pzIIc {
};

class CSA38_pzII_W : CSA38_pzII {
};

class CSA38_pzII_FR : CSA38_pzII {
};

class CSA38_pzII_DE : CSA38_pzII {
};

class CSA38_pzII_PL : CSA38_pzII {
};

class CSA38_pzIIb_W : CSA38_pzIIb {
};

class CSA38_pzIIb_FR : CSA38_pzIIb {
};

class CSA38_pzIIb_DE : CSA38_pzIIb {
};

class CSA38_pzIIb_PL : CSA38_pzIIb {
};

class CSA38_pzIIa_PL : CSA38_pzIIa {
};

class CSA38_pzIIa_FR : CSA38_pzIIa {
};

class CSA38_pzIIa_W : CSA38_pzIIa {
};

class CSA38_pzIIa_DE : CSA38_pzIIa {
};
*/
class CSA38_pzIIID : csa38_tank_base {
    acre_infantryPhonePosition[] = {-0.759,-3.47,-0.773};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "IntCm";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};
/*
class CSA38_pzIIIDvcz : CSA38_pzIIID {
};

class CSA38_pzIIIDcamo : CSA38_pzIIID {
};
*/
class CSA38_pzIIIB : CSA38_pzIIID {
    acre_infantryPhonePosition[] = {-0.564,-2.746,0.845};
};
/*
class CSA38_pzIIIBvcz : CSA38_pzIIIB {
};
*/
class CSA38_pzIIIC : CSA38_pzIIIB {
    displayName = "PZ.Kpfw. III Ausf. C";
};

class CSA38_pzIIIK : CSA38_pzIIIC {
    displayName = "PZ.Befw. III Ausf. K";

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "IntCm";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};
/*
class CSA38_pzIIICvcz : CSA38_pzIIIC {
};
*/
class CSA38_StugIII : CSA38_pzIIID {
    acre_infantryPhonePosition[] = {-0.754,-2.491,-1.02};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "IntCm";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0,1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};
/*
class CSA38_pzIIID_W : CSA38_pzIIID {
};

class CSA38_pzIIID_PL : CSA38_pzIIID {
};

class CSA38_pzIIID_FR : CSA38_pzIIID {
};

class CSA38_pzIIID_LATE : CSA38_pzIIID {
};

class CSA38_pzIIIB_W : CSA38_pzIIIB {
};

class CSA38_pzIIIB_PL : CSA38_pzIIIB {
};

class CSA38_pzIIIB_FR : CSA38_pzIIIB {
};

class CSA38_pzIIIB_LATE : CSA38_pzIIIB {
};

class CSA38_pzIIIC_W : CSA38_pzIIIC {
};

class CSA38_pzIIIC_PL : CSA38_pzIIIC {
};

class CSA38_pzIIIC_FR : CSA38_pzIIIC {
};

class CSA38_pzIIIC_LATE : CSA38_pzIIIC {
};
*/
class CSA38_pzIV : csa38_tank_base {
    acre_infantryPhonePosition[] = {0.518,-3.317,-0.823};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "IntCm";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};
/*
class CSA38_pzIVvcz : CSA38_pzIV {
};

class CSA38_pzIVB : CSA38_pzIV {
};

class CSA38_pzIVBvcz : CSA38_pzIVB {
};

class CSA38_pzIVcv38 : CSA38_pzIV {
};

class CSA38_pzIV_W : CSA38_pzIV {
};

class CSA38_pzIV_PL : CSA38_pzIV_W {
};

class CSA38_pzIV_FR : CSA38_pzIV_W {
};

class CSA38_pzIV_LATE : CSA38_pzIV_W {
};

class CSA38_pzIVB_W : CSA38_pzIVB {
};

class CSA38_pzIVB_PL : CSA38_pzIVB_W {
};

class CSA38_pzIVB_FR : CSA38_pzIVB_W {
};

class CSA38_pzIVB_LATE : CSA38_pzIVB_W {
};

class CSA38_pzIVC_W : CSA38_pzIVcv38 {
};

class CSA38_pzIVC_PL : CSA38_pzIVC_W {
};

class CSA38_pzIVC_FR : CSA38_pzIVC_W {
};

class CSA38_pzIVC_LATE : CSA38_pzIVC_W {
};
*/
class csa38_tank_base2 : Tank_F {
    // Adds an infantry phone, a full crew intercom, and a radio configurable by the entire crew
    // This isn't historically accurate, but will ensure that new vehicles get comms even if they don't have a vehicle specific config
    acre_hasInfantryPhone = 1;
    acre_infantryPhoneDisableRinging = 0;
    acre_infantryPhonePosition[] = {0, 0, 0};
    acre_infantryPhoneCustomRinging[] = {"IFA3_ACRE2_Compat\Sound\InFoneUK.wss",4,1,1,40};
    acre_infantryPhoneControlActions[] = {"all"};
    acre_infantryPhoneIntercom[] = {"all"};

    class AcreIntercoms {
        class Intercom_1 {
            displayName = "Crew Intercom";
            shortName = "IntCm";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {};
            limitedPositions[] = {};
            masterPositions[] = {"commander"};
            numLimitedPositions = 0;
            connectedByDefault = 1;
        };
    };

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"crew"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };

    class Turrets;
};

class csa38_cromwell_1 : csa38_tank_base2 {
    acre_infantryPhonePosition[] = {-0.107,-3.92,-0.992};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0,1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };

    class Turrets : Turrets {
        class MainTurret;
    };
};

class csa38_cromwell_command_CZ : csa38_cromwell_1 {
    displayName = "Cromwell (Command)";
    acre_infantryPhonePosition[] = {-0.107,-3.92,-0.992};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0,1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Baker";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };

    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {"CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg8","CSA38_ZB53mg8","CSA38_ZB53mg8","CSA38_ZB53mg8"};
            weapons[] = {"CSA38_BESAmgveh"};
        };
    };
};
/*
class csa38_cromwell_PL : csa38_cromwell_1 {
};

class csa38_cromwell_CPL : csa38_cromwell_PL {
};

class csa38_cromwell_DPL : csa38_cromwell_CPL {
};

class csa38_cromwell_CPL2 : csa38_cromwell_CPL {
};

class csa38_cromwell_CPLHELA : csa38_cromwell_CPL {
};
*/
class csa38_cromwell_2 : csa38_cromwell_1 {
    class Turrets;
};
/*
class csa38_cromwell_D : csa38_cromwell_2 {
};

class csa38_cromwell_DW : csa38_cromwell_D {
};

class csa38_cromwell_D2 : csa38_cromwell_D {
};

class csa38_cromwell_D2W : csa38_cromwell_D {
};

class csa38_cromwell_D3 : csa38_cromwell_D {
};

class csa38_cromwell_D3W : csa38_cromwell_D {
};

class csa38_cromwell_DCS : csa38_cromwell_D {
};

class csa38_cromwell_DCSW : csa38_cromwell_DCS {
};

class csa38_cromwell_DCS2 : csa38_cromwell_DCS {
};

class csa38_cromwell_DCS2W : csa38_cromwell_DCS {
};

class csa38_cromwell_DCS3 : csa38_cromwell_DCS {
};

class csa38_cromwell_DCS3W : csa38_cromwell_DCS {
};
*/
class csa38_cromwell_C : csa38_cromwell_2 {
    class Turrets : Turrets {
        class MainTurret;
    };
};

class csa38_cromwell_command_UK : csa38_cromwell_C {
    displayName = "Cromwell (Command)";
    acre_infantryPhonePosition[] = {-0.107,-3.92,-0.992};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {0,1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Baker";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };

    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {"CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg8","CSA38_ZB53mg8","CSA38_ZB53mg8","CSA38_ZB53mg8"};
            weapons[] = {"CSA38_BESAmgveh"};
        };
    };
};
/*
class csa38_cromwell_CW : csa38_cromwell_C {
};

class csa38_cromwell_C2 : csa38_cromwell_C {
};

class csa38_cromwell_C2W : csa38_cromwell_C {
};

class csa38_cromwell_C3 : csa38_cromwell_C {
};

class csa38_cromwell_C3W : csa38_cromwell_C {
};

class csa38_cromwell_2W : csa38_cromwell_2 {
};

class csa38_cromwell_2camo1 : csa38_cromwell_2 {
};

class csa38_cromwell_2camo1W : csa38_cromwell_2W {
};

class csa38_cromwell_2camo2 : csa38_cromwell_2 {
};

class csa38_cromwell_2camo2W : csa38_cromwell_2W {
};

class csa38_cromwell_2camo3 : csa38_cromwell_2 {
};

class csa38_cromwell_2camo3W : csa38_cromwell_2W {
};

class csa38_cromwell_2camo4 : csa38_cromwell_2 {
};

class csa38_cromwell_2camo4W : csa38_cromwell_2W {
};

class csa38_cromwell_2camo5 : csa38_cromwell_2 {
};

class csa38_cromwell_2camo5W : csa38_cromwell_2W {
};

class csa38_cromwell_2camo6 : csa38_cromwell_2 {
};

class csa38_cromwell_2camo6W : csa38_cromwell_2W {
};

class csa38_cromwell_2camo7 : csa38_cromwell_2 {
};

class csa38_cromwell_2camo7W : csa38_cromwell_2W {
};

class csa38_cromwell_2camo8 : csa38_cromwell_2 {
};

class csa38_cromwell_2camo8W : csa38_cromwell_2W {
};

class csa38_cromwell_2camo9 : csa38_cromwell_2 {
};

class csa38_cromwell_2camo9W : csa38_cromwell_2W {
};

class csa38_cromwell_2camo10 : csa38_cromwell_2 {
};

class csa38_cromwell_2camo10W : csa38_cromwell_2W {
};

class csa38_cromwell_2camo11 : csa38_cromwell_2 {
};

class csa38_cromwell_2camo11W : csa38_cromwell_2W {
};

class csa38_cromwell_2camo12 : csa38_cromwell_2 {
};

class csa38_cromwell_2camo12W : csa38_cromwell_2W {
};

class csa38_cromwell_2B : csa38_cromwell_2 {
};

class csa38_cromwell_4 : csa38_cromwell_1 {
};

class csa38_cromwell_4EN : csa38_cromwell_4 {
};

class csa38_cromwell_4ENW : csa38_cromwell_4EN {
};

class csa38_cromwell_5 : csa38_cromwell_1 {
};
*/
class csa38_valentineMkII : csa38_tank_base2 {
    acre_infantryPhonePosition[] = {-0.05,-3.219,-1.316};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };

    class Turrets : Turrets {
        class MainTurret;
    };
};

class csa38_valentineMkII_command : csa38_valentineMkII {
    displayName = "Valentine (OP/Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Baker";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };

    class Turrets : Turrets {
        class MainTurret : MainTurret {
            magazines[] = {"CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg7","CSA38_ZB53mg8","CSA38_ZB53mg8","CSA38_ZB53mg8","CSA38_ZB53mg8"};
            weapons[] = {"CSA38_BESAmgveh"};
        };
    };
};
/*
class csa38_valentineMkII2 : csa38_valentineMkII {
};
*/
class csa38_t34cz1 : csa38_tank_base2 {
    acre_infantryPhonePosition[] = {0,-2.859,-0.97};
    acre_infantryPhoneCustomRinging[] = {"IFA3_ACRE2_Compat\Sound\InFoneRus.wss",5,1,1,40};

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};

class csa38_t34cz1_commmand : csa38_t34cz1 {
    displayName = "T-34/76 (Command)";

    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set - Anna";
            shortName = "A-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {{"turret", {1}}};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
        class Rack_2 {
            displayName = "Radio Set - Borís";
            shortName = "B-Set";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"commander"};
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"none"};
        };
    };
};

class csa38_t34cz1_noRadio : csa38_t34cz1 {
    displayName = "T-34/76 Mo.1943 (No Radio)";

    class AcreRacks {};
};
