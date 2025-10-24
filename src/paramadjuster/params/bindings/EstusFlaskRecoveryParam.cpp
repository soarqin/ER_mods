#include "../luabindings.h"
#include "../defs/EstusFlaskRecoveryParam.h"

namespace paramadjuster::params {

void registerEstusFlaskRecoveryParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["EstusFlaskRecoveryParam"]; usertype) return;
        auto indexerEstusFlaskRecoveryParam = state->new_usertype<ParamTableIndexer<EstusFlaskRecoveryParam>>("EstusFlaskRecoveryParamTableIndexer");
        indexerEstusFlaskRecoveryParam["count"] = sol::property(&ParamTableIndexer<EstusFlaskRecoveryParam>::count);
        indexerEstusFlaskRecoveryParam["__index"] = &ParamTableIndexer<EstusFlaskRecoveryParam>::at;
        indexerEstusFlaskRecoveryParam["id"] = &ParamTableIndexer<EstusFlaskRecoveryParam>::paramId;
        indexerEstusFlaskRecoveryParam["get"] = &ParamTableIndexer<EstusFlaskRecoveryParam>::get;
        auto utEstusFlaskRecoveryParam = state->new_usertype<EstusFlaskRecoveryParam>("EstusFlaskRecoveryParam");
        utEstusFlaskRecoveryParam["host"] = &EstusFlaskRecoveryParam::host;
        utEstusFlaskRecoveryParam["invadeOrb_None"] = &EstusFlaskRecoveryParam::invadeOrb_None;
        utEstusFlaskRecoveryParam["invadeOrb_Umbasa"] = &EstusFlaskRecoveryParam::invadeOrb_Umbasa;
        utEstusFlaskRecoveryParam["invadeOrb_Berserker"] = &EstusFlaskRecoveryParam::invadeOrb_Berserker;
        utEstusFlaskRecoveryParam["invadeOrb_Sinners"] = &EstusFlaskRecoveryParam::invadeOrb_Sinners;
        utEstusFlaskRecoveryParam["invadeSign_None"] = &EstusFlaskRecoveryParam::invadeSign_None;
        utEstusFlaskRecoveryParam["invadeSign_Umbasa"] = &EstusFlaskRecoveryParam::invadeSign_Umbasa;
        utEstusFlaskRecoveryParam["invadeSign_Berserker"] = &EstusFlaskRecoveryParam::invadeSign_Berserker;
        utEstusFlaskRecoveryParam["invadeSign_Sinners"] = &EstusFlaskRecoveryParam::invadeSign_Sinners;
        utEstusFlaskRecoveryParam["invadeRing_Sinners"] = &EstusFlaskRecoveryParam::invadeRing_Sinners;
        utEstusFlaskRecoveryParam["invadeRing_Rosalia"] = &EstusFlaskRecoveryParam::invadeRing_Rosalia;
        utEstusFlaskRecoveryParam["invadeRing_Forest"] = &EstusFlaskRecoveryParam::invadeRing_Forest;
        utEstusFlaskRecoveryParam["coopSign_None"] = &EstusFlaskRecoveryParam::coopSign_None;
        utEstusFlaskRecoveryParam["coopSign_Umbasa"] = &EstusFlaskRecoveryParam::coopSign_Umbasa;
        utEstusFlaskRecoveryParam["coopSign_Berserker"] = &EstusFlaskRecoveryParam::coopSign_Berserker;
        utEstusFlaskRecoveryParam["coopSign_Sinners"] = &EstusFlaskRecoveryParam::coopSign_Sinners;
        utEstusFlaskRecoveryParam["coopRing_RedHunter"] = &EstusFlaskRecoveryParam::coopRing_RedHunter;
        utEstusFlaskRecoveryParam["invadeRing_Anor"] = &EstusFlaskRecoveryParam::invadeRing_Anor;
        utEstusFlaskRecoveryParam["paramReplaceRate"] = &EstusFlaskRecoveryParam::paramReplaceRate;
        utEstusFlaskRecoveryParam["paramReplaceId"] = &EstusFlaskRecoveryParam::paramReplaceId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<EstusFlaskRecoveryParam>>(gParamMgr.findTable(L"EstusFlaskRecoveryParam")); };
    paramsTable["HPEstusFlaskRecoveryParam"] = tableLoader;
    paramsTable["MPEstusFlaskRecoveryParam"] = tableLoader;
}

}
