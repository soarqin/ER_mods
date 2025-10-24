#include "../luabindings.h"
#include "../defs/MultiSoulBonusRateParam.h"

namespace paramadjuster::params {

void registerMultiSoulBonusRateParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MultiSoulBonusRateParam"]; usertype) return;
        auto indexerMultiSoulBonusRateParam = state->new_usertype<ParamTableIndexer<MultiSoulBonusRateParam>>("MultiSoulBonusRateParamTableIndexer");
        indexerMultiSoulBonusRateParam["count"] = sol::property(&ParamTableIndexer<MultiSoulBonusRateParam>::count);
        indexerMultiSoulBonusRateParam["__index"] = &ParamTableIndexer<MultiSoulBonusRateParam>::at;
        indexerMultiSoulBonusRateParam["id"] = &ParamTableIndexer<MultiSoulBonusRateParam>::paramId;
        indexerMultiSoulBonusRateParam["get"] = &ParamTableIndexer<MultiSoulBonusRateParam>::get;
        auto utMultiSoulBonusRateParam = state->new_usertype<MultiSoulBonusRateParam>("MultiSoulBonusRateParam");
        utMultiSoulBonusRateParam["host"] = &MultiSoulBonusRateParam::host;
        utMultiSoulBonusRateParam["WhiteGhost_None"] = &MultiSoulBonusRateParam::WhiteGhost_None;
        utMultiSoulBonusRateParam["WhiteGhost_Umbasa"] = &MultiSoulBonusRateParam::WhiteGhost_Umbasa;
        utMultiSoulBonusRateParam["WhiteGhost_Berserker"] = &MultiSoulBonusRateParam::WhiteGhost_Berserker;
        utMultiSoulBonusRateParam["BlackGhost_None_Sign"] = &MultiSoulBonusRateParam::BlackGhost_None_Sign;
        utMultiSoulBonusRateParam["BlackGhost_Umbasa_Sign"] = &MultiSoulBonusRateParam::BlackGhost_Umbasa_Sign;
        utMultiSoulBonusRateParam["BlackGhost_Berserker_Sign"] = &MultiSoulBonusRateParam::BlackGhost_Berserker_Sign;
        utMultiSoulBonusRateParam["BlackGhost_None_Invade"] = &MultiSoulBonusRateParam::BlackGhost_None_Invade;
        utMultiSoulBonusRateParam["BlackGhost_Umbasa_Invade"] = &MultiSoulBonusRateParam::BlackGhost_Umbasa_Invade;
        utMultiSoulBonusRateParam["BlackGhost_Berserker_Invade"] = &MultiSoulBonusRateParam::BlackGhost_Berserker_Invade;
        utMultiSoulBonusRateParam["RedHunter1"] = &MultiSoulBonusRateParam::RedHunter1;
        utMultiSoulBonusRateParam["RedHunter2"] = &MultiSoulBonusRateParam::RedHunter2;
        utMultiSoulBonusRateParam["GuardianOfForest"] = &MultiSoulBonusRateParam::GuardianOfForest;
        utMultiSoulBonusRateParam["GuardianOfAnor"] = &MultiSoulBonusRateParam::GuardianOfAnor;
        utMultiSoulBonusRateParam["BattleRoyal"] = &MultiSoulBonusRateParam::BattleRoyal;
        utMultiSoulBonusRateParam["YellowMonk"] = &MultiSoulBonusRateParam::YellowMonk;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<MultiSoulBonusRateParam>>(gParamMgr.findTable(L"MultiSoulBonusRateParam")); };
    paramsTable["MultiSoulBonusRateParam"] = tableLoader;
}

}
