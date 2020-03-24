
class CSA38Wheeled_APC;

class CSA38_8rad : CSA38Wheeled_APC {
    acre_hasInfantryPhone = 0;
    acre_infantryPhoneDisableRinging = 1;
    acre_infantryPhonePosition[] = {0, 0, 0};
    acre_infantryPhoneControlActions[] = {};
    acre_infantryPhoneintercom[] = {};

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
            allowedPositions[] = {"gunner"}; // because both the main gunner and the radio operator positions are gunners the radio operator can't be selected exclusively
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
            intercom[] = {};
        };
    };
};

class CSA38_8rad2 : CSA38_8rad {
    class AcreRacks {
        class Rack_1 {
            displayName = "Radio Set";
            shortName = "Radio";
            componentname = "ACRE_VRC64";
            allowedPositions[] = {"gunner"}; // because both the main gunner and the radio operator positions are gunners the radio operator can't be selected exclusively
            disabledPositions[] = {{"turnedout", "all"}};
            defaultComponents[] = {};
            mountedRadio = "ACRE_PRC77";
            isRadioRemovable = 0;
            intercom[] = {"intercom_1"};
        };
    };
};


