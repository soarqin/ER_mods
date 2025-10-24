#include "../luabindings.h"
#include "../defs/MultiEstusFlaskBonusParam.h"

namespace paramadjuster::params {

void registerMultiEstusFlaskBonusParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MultiEstusFlaskBonusParam"]; usertype) return;
        auto indexerMultiEstusFlaskBonusParam = state->new_usertype<ParamTableIndexer<MultiEstusFlaskBonusParam>>("MultiEstusFlaskBonusParamTableIndexer");
        indexerMultiEstusFlaskBonusParam["count"] = sol::property(&ParamTableIndexer<MultiEstusFlaskBonusParam>::count);
        indexerMultiEstusFlaskBonusParam["__index"] = &ParamTableIndexer<MultiEstusFlaskBonusParam>::at;
        indexerMultiEstusFlaskBonusParam["id"] = &ParamTableIndexer<MultiEstusFlaskBonusParam>::paramId;
        indexerMultiEstusFlaskBonusParam["get"] = &ParamTableIndexer<MultiEstusFlaskBonusParam>::get;
        auto utMultiEstusFlaskBonusParam = state->new_usertype<MultiEstusFlaskBonusParam>("MultiEstusFlaskBonusParam");
        utMultiEstusFlaskBonusParam["host"] = &MultiEstusFlaskBonusParam::host;
        utMultiEstusFlaskBonusParam["WhiteGhost_None"] = &MultiEstusFlaskBonusParam::WhiteGhost_None;
        utMultiEstusFlaskBonusParam["WhiteGhost_Umbasa"] = &MultiEstusFlaskBonusParam::WhiteGhost_Umbasa;
        utMultiEstusFlaskBonusParam["WhiteGhost_Berserker"] = &MultiEstusFlaskBonusParam::WhiteGhost_Berserker;
        utMultiEstusFlaskBonusParam["BlackGhost_None_Sign"] = &MultiEstusFlaskBonusParam::BlackGhost_None_Sign;
        utMultiEstusFlaskBonusParam["BlackGhost_Umbasa_Sign"] = &MultiEstusFlaskBonusParam::BlackGhost_Umbasa_Sign;
        utMultiEstusFlaskBonusParam["BlackGhost_Berserker_Sign"] = &MultiEstusFlaskBonusParam::BlackGhost_Berserker_Sign;
        utMultiEstusFlaskBonusParam["BlackGhost_None_Invade"] = &MultiEstusFlaskBonusParam::BlackGhost_None_Invade;
        utMultiEstusFlaskBonusParam["BlackGhost_Umbasa_Invade"] = &MultiEstusFlaskBonusParam::BlackGhost_Umbasa_Invade;
        utMultiEstusFlaskBonusParam["BlackGhost_Berserker_Invade"] = &MultiEstusFlaskBonusParam::BlackGhost_Berserker_Invade;
        utMultiEstusFlaskBonusParam["RedHunter1"] = &MultiEstusFlaskBonusParam::RedHunter1;
        utMultiEstusFlaskBonusParam["RedHunter2"] = &MultiEstusFlaskBonusParam::RedHunter2;
        utMultiEstusFlaskBonusParam["GuardianOfForest"] = &MultiEstusFlaskBonusParam::GuardianOfForest;
        utMultiEstusFlaskBonusParam["GuardianOfAnor"] = &MultiEstusFlaskBonusParam::GuardianOfAnor;
        utMultiEstusFlaskBonusParam["BattleRoyal"] = &MultiEstusFlaskBonusParam::BattleRoyal;
        utMultiEstusFlaskBonusParam["YellowMonk"] = &MultiEstusFlaskBonusParam::YellowMonk;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MultiEstusFlaskBonusParam>>(gParamMgr.findTable(L"MultiEstusFlaskBonusParam")); };
    paramsTable["MultiHPEstusFlaskBonusParam"] = tableLoader;
    paramsTable["MultiMPEstusFlaskBonusParam"] = tableLoader;
}

}
