#include "../luabindings.h"
#include "../defs/DefaultKeyAssign.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<DefaultKeyAssign>::exportToCsvImpl(const std::wstring &csvPath);

void registerDefaultKeyAssign(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["DefaultKeyAssign"]; usertype) return;
        auto indexerDefaultKeyAssign = state->new_usertype<ParamTableIndexer<DefaultKeyAssign>>("DefaultKeyAssignTableIndexer");
        indexerDefaultKeyAssign["count"] = sol::property(&ParamTableIndexer<DefaultKeyAssign>::count);
        indexerDefaultKeyAssign["__index"] = &ParamTableIndexer<DefaultKeyAssign>::at;
        indexerDefaultKeyAssign["id"] = &ParamTableIndexer<DefaultKeyAssign>::paramId;
        indexerDefaultKeyAssign["get"] = &ParamTableIndexer<DefaultKeyAssign>::get;
        indexerDefaultKeyAssign["exportToCsv"] = &ParamTableIndexer<DefaultKeyAssign>::exportToCsv;
        indexerDefaultKeyAssign["importFromCsv"] = &ParamTableIndexer<DefaultKeyAssign>::importFromCsv;
        auto utDefaultKeyAssign = state->new_usertype<DefaultKeyAssign>("DefaultKeyAssign");
        utDefaultKeyAssign["priority0"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority0; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority0 = value; });
        utDefaultKeyAssign["priority1"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority1; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority1 = value; });
        utDefaultKeyAssign["priority2"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority2; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority2 = value; });
        utDefaultKeyAssign["priority3"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority3; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority3 = value; });
        utDefaultKeyAssign["priority4"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority4; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority4 = value; });
        utDefaultKeyAssign["priority5"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority5; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority5 = value; });
        utDefaultKeyAssign["priority6"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority6; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority6 = value; });
        utDefaultKeyAssign["priority7"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority7; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority7 = value; });
        utDefaultKeyAssign["priority8"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority8; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority8 = value; });
        utDefaultKeyAssign["priority9"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority9; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority9 = value; });
        utDefaultKeyAssign["priority10"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority10; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority10 = value; });
        utDefaultKeyAssign["priority11"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority11; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority11 = value; });
        utDefaultKeyAssign["priority12"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority12; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority12 = value; });
        utDefaultKeyAssign["priority13"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority13; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority13 = value; });
        utDefaultKeyAssign["priority14"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority14; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority14 = value; });
        utDefaultKeyAssign["priority15"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority15; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority15 = value; });
        utDefaultKeyAssign["priority16"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority16; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority16 = value; });
        utDefaultKeyAssign["priority17"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority17; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority17 = value; });
        utDefaultKeyAssign["priority18"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority18; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority18 = value; });
        utDefaultKeyAssign["priority19"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority19; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority19 = value; });
        utDefaultKeyAssign["priority20"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority20; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority20 = value; });
        utDefaultKeyAssign["priority21"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority21; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority21 = value; });
        utDefaultKeyAssign["priority22"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority22; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority22 = value; });
        utDefaultKeyAssign["priority23"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority23; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority23 = value; });
        utDefaultKeyAssign["priority24"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority24; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority24 = value; });
        utDefaultKeyAssign["priority25"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority25; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority25 = value; });
        utDefaultKeyAssign["priority26"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority26; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority26 = value; });
        utDefaultKeyAssign["priority27"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority27; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority27 = value; });
        utDefaultKeyAssign["priority28"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority28; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority28 = value; });
        utDefaultKeyAssign["priority29"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority29; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority29 = value; });
        utDefaultKeyAssign["priority30"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority30; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority30 = value; });
        utDefaultKeyAssign["priority31"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.priority31; }, [](DefaultKeyAssign &param, uint8_t value) { param.priority31 = value; });
        utDefaultKeyAssign["phyisicalKey_0"] = &DefaultKeyAssign::phyisicalKey_0;
        utDefaultKeyAssign["traitsType_0"] = &DefaultKeyAssign::traitsType_0;
        utDefaultKeyAssign["a2dOperator_0"] = &DefaultKeyAssign::a2dOperator_0;
        utDefaultKeyAssign["applyTarget_0"] = &DefaultKeyAssign::applyTarget_0;
        utDefaultKeyAssign["isAnalog_0"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.isAnalog_0; }, [](DefaultKeyAssign &param, uint8_t value) { param.isAnalog_0 = value; });
        utDefaultKeyAssign["enableWin64_0"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enableWin64_0; }, [](DefaultKeyAssign &param, uint8_t value) { param.enableWin64_0 = value; });
        utDefaultKeyAssign["enablePS4_0"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enablePS4_0; }, [](DefaultKeyAssign &param, uint8_t value) { param.enablePS4_0 = value; });
        utDefaultKeyAssign["enableXboxOne_0"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enableXboxOne_0; }, [](DefaultKeyAssign &param, uint8_t value) { param.enableXboxOne_0 = value; });
        utDefaultKeyAssign["time1_0"] = &DefaultKeyAssign::time1_0;
        utDefaultKeyAssign["time2_0"] = &DefaultKeyAssign::time2_0;
        utDefaultKeyAssign["a2dThreshold_0"] = &DefaultKeyAssign::a2dThreshold_0;
        utDefaultKeyAssign["phyisicalKey_1"] = &DefaultKeyAssign::phyisicalKey_1;
        utDefaultKeyAssign["traitsType_1"] = &DefaultKeyAssign::traitsType_1;
        utDefaultKeyAssign["a2dOperator_1"] = &DefaultKeyAssign::a2dOperator_1;
        utDefaultKeyAssign["applyTarget_1"] = &DefaultKeyAssign::applyTarget_1;
        utDefaultKeyAssign["isAnalog_1"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.isAnalog_1; }, [](DefaultKeyAssign &param, uint8_t value) { param.isAnalog_1 = value; });
        utDefaultKeyAssign["enableWin64_1"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enableWin64_1; }, [](DefaultKeyAssign &param, uint8_t value) { param.enableWin64_1 = value; });
        utDefaultKeyAssign["enablePS4_1"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enablePS4_1; }, [](DefaultKeyAssign &param, uint8_t value) { param.enablePS4_1 = value; });
        utDefaultKeyAssign["enableXboxOne_1"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enableXboxOne_1; }, [](DefaultKeyAssign &param, uint8_t value) { param.enableXboxOne_1 = value; });
        utDefaultKeyAssign["time1_1"] = &DefaultKeyAssign::time1_1;
        utDefaultKeyAssign["time2_1"] = &DefaultKeyAssign::time2_1;
        utDefaultKeyAssign["a2dThreshold_1"] = &DefaultKeyAssign::a2dThreshold_1;
        utDefaultKeyAssign["phyisicalKey_2"] = &DefaultKeyAssign::phyisicalKey_2;
        utDefaultKeyAssign["traitsType_2"] = &DefaultKeyAssign::traitsType_2;
        utDefaultKeyAssign["a2dOperator_2"] = &DefaultKeyAssign::a2dOperator_2;
        utDefaultKeyAssign["applyTarget_2"] = &DefaultKeyAssign::applyTarget_2;
        utDefaultKeyAssign["isAnalog_2"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.isAnalog_2; }, [](DefaultKeyAssign &param, uint8_t value) { param.isAnalog_2 = value; });
        utDefaultKeyAssign["enableWin64_2"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enableWin64_2; }, [](DefaultKeyAssign &param, uint8_t value) { param.enableWin64_2 = value; });
        utDefaultKeyAssign["enablePS4_2"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enablePS4_2; }, [](DefaultKeyAssign &param, uint8_t value) { param.enablePS4_2 = value; });
        utDefaultKeyAssign["enableXboxOne_2"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enableXboxOne_2; }, [](DefaultKeyAssign &param, uint8_t value) { param.enableXboxOne_2 = value; });
        utDefaultKeyAssign["time1_2"] = &DefaultKeyAssign::time1_2;
        utDefaultKeyAssign["time2_2"] = &DefaultKeyAssign::time2_2;
        utDefaultKeyAssign["a2dThreshold_2"] = &DefaultKeyAssign::a2dThreshold_2;
        utDefaultKeyAssign["phyisicalKey_3"] = &DefaultKeyAssign::phyisicalKey_3;
        utDefaultKeyAssign["traitsType_3"] = &DefaultKeyAssign::traitsType_3;
        utDefaultKeyAssign["a2dOperator_3"] = &DefaultKeyAssign::a2dOperator_3;
        utDefaultKeyAssign["applyTarget_3"] = &DefaultKeyAssign::applyTarget_3;
        utDefaultKeyAssign["isAnalog_3"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.isAnalog_3; }, [](DefaultKeyAssign &param, uint8_t value) { param.isAnalog_3 = value; });
        utDefaultKeyAssign["enableWin64_3"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enableWin64_3; }, [](DefaultKeyAssign &param, uint8_t value) { param.enableWin64_3 = value; });
        utDefaultKeyAssign["enablePS4_3"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enablePS4_3; }, [](DefaultKeyAssign &param, uint8_t value) { param.enablePS4_3 = value; });
        utDefaultKeyAssign["enableXboxOne_3"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enableXboxOne_3; }, [](DefaultKeyAssign &param, uint8_t value) { param.enableXboxOne_3 = value; });
        utDefaultKeyAssign["time1_3"] = &DefaultKeyAssign::time1_3;
        utDefaultKeyAssign["time2_3"] = &DefaultKeyAssign::time2_3;
        utDefaultKeyAssign["a2dThreshold_3"] = &DefaultKeyAssign::a2dThreshold_3;
        utDefaultKeyAssign["phyisicalKey_4"] = &DefaultKeyAssign::phyisicalKey_4;
        utDefaultKeyAssign["traitsType_4"] = &DefaultKeyAssign::traitsType_4;
        utDefaultKeyAssign["a2dOperator_4"] = &DefaultKeyAssign::a2dOperator_4;
        utDefaultKeyAssign["applyTarget_4"] = &DefaultKeyAssign::applyTarget_4;
        utDefaultKeyAssign["isAnalog_4"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.isAnalog_4; }, [](DefaultKeyAssign &param, uint8_t value) { param.isAnalog_4 = value; });
        utDefaultKeyAssign["enableWin64_4"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enableWin64_4; }, [](DefaultKeyAssign &param, uint8_t value) { param.enableWin64_4 = value; });
        utDefaultKeyAssign["enablePS4_4"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enablePS4_4; }, [](DefaultKeyAssign &param, uint8_t value) { param.enablePS4_4 = value; });
        utDefaultKeyAssign["enableXboxOne_4"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enableXboxOne_4; }, [](DefaultKeyAssign &param, uint8_t value) { param.enableXboxOne_4 = value; });
        utDefaultKeyAssign["time1_4"] = &DefaultKeyAssign::time1_4;
        utDefaultKeyAssign["time2_4"] = &DefaultKeyAssign::time2_4;
        utDefaultKeyAssign["a2dThreshold_4"] = &DefaultKeyAssign::a2dThreshold_4;
        utDefaultKeyAssign["phyisicalKey_5"] = &DefaultKeyAssign::phyisicalKey_5;
        utDefaultKeyAssign["traitsType_5"] = &DefaultKeyAssign::traitsType_5;
        utDefaultKeyAssign["a2dOperator_5"] = &DefaultKeyAssign::a2dOperator_5;
        utDefaultKeyAssign["applyTarget_5"] = &DefaultKeyAssign::applyTarget_5;
        utDefaultKeyAssign["isAnalog_5"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.isAnalog_5; }, [](DefaultKeyAssign &param, uint8_t value) { param.isAnalog_5 = value; });
        utDefaultKeyAssign["enableWin64_5"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enableWin64_5; }, [](DefaultKeyAssign &param, uint8_t value) { param.enableWin64_5 = value; });
        utDefaultKeyAssign["enablePS4_5"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enablePS4_5; }, [](DefaultKeyAssign &param, uint8_t value) { param.enablePS4_5 = value; });
        utDefaultKeyAssign["enableXboxOne_5"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enableXboxOne_5; }, [](DefaultKeyAssign &param, uint8_t value) { param.enableXboxOne_5 = value; });
        utDefaultKeyAssign["time1_5"] = &DefaultKeyAssign::time1_5;
        utDefaultKeyAssign["time2_5"] = &DefaultKeyAssign::time2_5;
        utDefaultKeyAssign["a2dThreshold_5"] = &DefaultKeyAssign::a2dThreshold_5;
        utDefaultKeyAssign["phyisicalKey_6"] = &DefaultKeyAssign::phyisicalKey_6;
        utDefaultKeyAssign["traitsType_6"] = &DefaultKeyAssign::traitsType_6;
        utDefaultKeyAssign["a2dOperator_6"] = &DefaultKeyAssign::a2dOperator_6;
        utDefaultKeyAssign["applyTarget_6"] = &DefaultKeyAssign::applyTarget_6;
        utDefaultKeyAssign["isAnalog_6"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.isAnalog_6; }, [](DefaultKeyAssign &param, uint8_t value) { param.isAnalog_6 = value; });
        utDefaultKeyAssign["enableWin64_6"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enableWin64_6; }, [](DefaultKeyAssign &param, uint8_t value) { param.enableWin64_6 = value; });
        utDefaultKeyAssign["enablePS4_6"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enablePS4_6; }, [](DefaultKeyAssign &param, uint8_t value) { param.enablePS4_6 = value; });
        utDefaultKeyAssign["enableXboxOne_6"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enableXboxOne_6; }, [](DefaultKeyAssign &param, uint8_t value) { param.enableXboxOne_6 = value; });
        utDefaultKeyAssign["time1_6"] = &DefaultKeyAssign::time1_6;
        utDefaultKeyAssign["time2_6"] = &DefaultKeyAssign::time2_6;
        utDefaultKeyAssign["a2dThreshold_6"] = &DefaultKeyAssign::a2dThreshold_6;
        utDefaultKeyAssign["phyisicalKey_7"] = &DefaultKeyAssign::phyisicalKey_7;
        utDefaultKeyAssign["traitsType_7"] = &DefaultKeyAssign::traitsType_7;
        utDefaultKeyAssign["a2dOperator_7"] = &DefaultKeyAssign::a2dOperator_7;
        utDefaultKeyAssign["applyTarget_7"] = &DefaultKeyAssign::applyTarget_7;
        utDefaultKeyAssign["isAnalog_7"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.isAnalog_7; }, [](DefaultKeyAssign &param, uint8_t value) { param.isAnalog_7 = value; });
        utDefaultKeyAssign["enableWin64_7"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enableWin64_7; }, [](DefaultKeyAssign &param, uint8_t value) { param.enableWin64_7 = value; });
        utDefaultKeyAssign["enablePS4_7"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enablePS4_7; }, [](DefaultKeyAssign &param, uint8_t value) { param.enablePS4_7 = value; });
        utDefaultKeyAssign["enableXboxOne_7"] = sol::property([](DefaultKeyAssign &param) -> uint8_t { return param.enableXboxOne_7; }, [](DefaultKeyAssign &param, uint8_t value) { param.enableXboxOne_7 = value; });
        utDefaultKeyAssign["time1_7"] = &DefaultKeyAssign::time1_7;
        utDefaultKeyAssign["time2_7"] = &DefaultKeyAssign::time2_7;
        utDefaultKeyAssign["a2dThreshold_7"] = &DefaultKeyAssign::a2dThreshold_7;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<DefaultKeyAssign>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<DefaultKeyAssign>>(nullptr);
        indexer->setFieldNames({
            {"priority0", false},
            {"priority1", false},
            {"priority2", false},
            {"priority3", false},
            {"priority4", false},
            {"priority5", false},
            {"priority6", false},
            {"priority7", false},
            {"priority8", false},
            {"priority9", false},
            {"priority10", false},
            {"priority11", false},
            {"priority12", false},
            {"priority13", false},
            {"priority14", false},
            {"priority15", false},
            {"priority16", false},
            {"priority17", false},
            {"priority18", false},
            {"priority19", false},
            {"priority20", false},
            {"priority21", false},
            {"priority22", false},
            {"priority23", false},
            {"priority24", false},
            {"priority25", false},
            {"priority26", false},
            {"priority27", false},
            {"priority28", false},
            {"priority29", false},
            {"priority30", false},
            {"priority31", false},
            {"phyisicalKey_0", false},
            {"traitsType_0", false},
            {"a2dOperator_0", false},
            {"applyTarget_0", false},
            {"isAnalog_0", false},
            {"enableWin64_0", false},
            {"enablePS4_0", false},
            {"enableXboxOne_0", false},
            {"time1_0", false},
            {"time2_0", false},
            {"a2dThreshold_0", false},
            {"phyisicalKey_1", false},
            {"traitsType_1", false},
            {"a2dOperator_1", false},
            {"applyTarget_1", false},
            {"isAnalog_1", false},
            {"enableWin64_1", false},
            {"enablePS4_1", false},
            {"enableXboxOne_1", false},
            {"time1_1", false},
            {"time2_1", false},
            {"a2dThreshold_1", false},
            {"phyisicalKey_2", false},
            {"traitsType_2", false},
            {"a2dOperator_2", false},
            {"applyTarget_2", false},
            {"isAnalog_2", false},
            {"enableWin64_2", false},
            {"enablePS4_2", false},
            {"enableXboxOne_2", false},
            {"time1_2", false},
            {"time2_2", false},
            {"a2dThreshold_2", false},
            {"phyisicalKey_3", false},
            {"traitsType_3", false},
            {"a2dOperator_3", false},
            {"applyTarget_3", false},
            {"isAnalog_3", false},
            {"enableWin64_3", false},
            {"enablePS4_3", false},
            {"enableXboxOne_3", false},
            {"time1_3", false},
            {"time2_3", false},
            {"a2dThreshold_3", false},
            {"phyisicalKey_4", false},
            {"traitsType_4", false},
            {"a2dOperator_4", false},
            {"applyTarget_4", false},
            {"isAnalog_4", false},
            {"enableWin64_4", false},
            {"enablePS4_4", false},
            {"enableXboxOne_4", false},
            {"time1_4", false},
            {"time2_4", false},
            {"a2dThreshold_4", false},
            {"phyisicalKey_5", false},
            {"traitsType_5", false},
            {"a2dOperator_5", false},
            {"applyTarget_5", false},
            {"isAnalog_5", false},
            {"enableWin64_5", false},
            {"enablePS4_5", false},
            {"enableXboxOne_5", false},
            {"time1_5", false},
            {"time2_5", false},
            {"a2dThreshold_5", false},
            {"phyisicalKey_6", false},
            {"traitsType_6", false},
            {"a2dOperator_6", false},
            {"applyTarget_6", false},
            {"isAnalog_6", false},
            {"enableWin64_6", false},
            {"enablePS4_6", false},
            {"enableXboxOne_6", false},
            {"time1_6", false},
            {"time2_6", false},
            {"a2dThreshold_6", false},
            {"phyisicalKey_7", false},
            {"traitsType_7", false},
            {"a2dOperator_7", false},
            {"applyTarget_7", false},
            {"isAnalog_7", false},
            {"enableWin64_7", false},
            {"enablePS4_7", false},
            {"enableXboxOne_7", false},
            {"time1_7", false},
            {"time2_7", false},
            {"a2dThreshold_7", false},
        });
        return indexer;
    };
    paramsTable["DefaultKeyAssign"] = [tableLoader]() -> auto { return tableLoader(L"DefaultKeyAssign"); };
}

template<> void ParamTableIndexer<DefaultKeyAssign>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,priority0,priority1,priority2,priority3,priority4,priority5,priority6,priority7,priority8,priority9,priority10,priority11,priority12,priority13,priority14");
    fwprintf(f, L",priority15,priority16,priority17,priority18,priority19,priority20,priority21,priority22,priority23,priority24,priority25,priority26,priority27,priority28,priority29,priority30");
    fwprintf(f, L",priority31,phyisicalKey_0,traitsType_0,a2dOperator_0,applyTarget_0,isAnalog_0,enableWin64_0,enablePS4_0,enableXboxOne_0,time1_0,time2_0,a2dThreshold_0,phyisicalKey_1,traitsType_1,a2dOperator_1,applyTarget_1");
    fwprintf(f, L",isAnalog_1,enableWin64_1,enablePS4_1,enableXboxOne_1,time1_1,time2_1,a2dThreshold_1,phyisicalKey_2,traitsType_2,a2dOperator_2,applyTarget_2,isAnalog_2,enableWin64_2,enablePS4_2,enableXboxOne_2,time1_2");
    fwprintf(f, L",time2_2,a2dThreshold_2,phyisicalKey_3,traitsType_3,a2dOperator_3,applyTarget_3,isAnalog_3,enableWin64_3,enablePS4_3,enableXboxOne_3,time1_3,time2_3,a2dThreshold_3,phyisicalKey_4,traitsType_4,a2dOperator_4");
    fwprintf(f, L",applyTarget_4,isAnalog_4,enableWin64_4,enablePS4_4,enableXboxOne_4,time1_4,time2_4,a2dThreshold_4,phyisicalKey_5,traitsType_5,a2dOperator_5,applyTarget_5,isAnalog_5,enableWin64_5,enablePS4_5,enableXboxOne_5");
    fwprintf(f, L",time1_5,time2_5,a2dThreshold_5,phyisicalKey_6,traitsType_6,a2dOperator_6,applyTarget_6,isAnalog_6,enableWin64_6,enablePS4_6,enableXboxOne_6,time1_6,time2_6,a2dThreshold_6,phyisicalKey_7,traitsType_7");
    fwprintf(f, L",a2dOperator_7,applyTarget_7,isAnalog_7,enableWin64_7,enablePS4_7,enableXboxOne_7,time1_7,time2_7,a2dThreshold_7\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g,%d,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g,%d,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g,%d,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g,%d,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g,%d,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g,%d,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g,%d,%u,%u,%u,%u,%u,%u,%u,%g,%g,%g\n",
            this->paramId(i),
            param->priority0,
            param->priority1,
            param->priority2,
            param->priority3,
            param->priority4,
            param->priority5,
            param->priority6,
            param->priority7,
            param->priority8,
            param->priority9,
            param->priority10,
            param->priority11,
            param->priority12,
            param->priority13,
            param->priority14,
            param->priority15,
            param->priority16,
            param->priority17,
            param->priority18,
            param->priority19,
            param->priority20,
            param->priority21,
            param->priority22,
            param->priority23,
            param->priority24,
            param->priority25,
            param->priority26,
            param->priority27,
            param->priority28,
            param->priority29,
            param->priority30,
            param->priority31,
            param->phyisicalKey_0,
            param->traitsType_0,
            param->a2dOperator_0,
            param->applyTarget_0,
            param->isAnalog_0,
            param->enableWin64_0,
            param->enablePS4_0,
            param->enableXboxOne_0,
            param->time1_0,
            param->time2_0,
            param->a2dThreshold_0,
            param->phyisicalKey_1,
            param->traitsType_1,
            param->a2dOperator_1,
            param->applyTarget_1,
            param->isAnalog_1,
            param->enableWin64_1,
            param->enablePS4_1,
            param->enableXboxOne_1,
            param->time1_1,
            param->time2_1,
            param->a2dThreshold_1,
            param->phyisicalKey_2,
            param->traitsType_2,
            param->a2dOperator_2,
            param->applyTarget_2,
            param->isAnalog_2,
            param->enableWin64_2,
            param->enablePS4_2,
            param->enableXboxOne_2,
            param->time1_2,
            param->time2_2,
            param->a2dThreshold_2,
            param->phyisicalKey_3,
            param->traitsType_3,
            param->a2dOperator_3,
            param->applyTarget_3,
            param->isAnalog_3,
            param->enableWin64_3,
            param->enablePS4_3,
            param->enableXboxOne_3,
            param->time1_3,
            param->time2_3,
            param->a2dThreshold_3,
            param->phyisicalKey_4,
            param->traitsType_4,
            param->a2dOperator_4,
            param->applyTarget_4,
            param->isAnalog_4,
            param->enableWin64_4,
            param->enablePS4_4,
            param->enableXboxOne_4,
            param->time1_4,
            param->time2_4,
            param->a2dThreshold_4,
            param->phyisicalKey_5,
            param->traitsType_5,
            param->a2dOperator_5,
            param->applyTarget_5,
            param->isAnalog_5,
            param->enableWin64_5,
            param->enablePS4_5,
            param->enableXboxOne_5,
            param->time1_5,
            param->time2_5,
            param->a2dThreshold_5,
            param->phyisicalKey_6,
            param->traitsType_6,
            param->a2dOperator_6,
            param->applyTarget_6,
            param->isAnalog_6,
            param->enableWin64_6,
            param->enablePS4_6,
            param->enableXboxOne_6,
            param->time1_6,
            param->time2_6,
            param->a2dThreshold_6,
            param->phyisicalKey_7,
            param->traitsType_7,
            param->a2dOperator_7,
            param->applyTarget_7,
            param->isAnalog_7,
            param->enableWin64_7,
            param->enablePS4_7,
            param->enableXboxOne_7,
            param->time1_7,
            param->time2_7,
            param->a2dThreshold_7
        );
    }
    fclose(f);
}

}
