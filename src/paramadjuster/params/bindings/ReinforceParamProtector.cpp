#include "../luabindings.h"
#include "../defs/ReinforceParamProtector.h"

namespace paramadjuster::params {

void registerReinforceParamProtector(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ReinforceParamProtector"]; usertype) return;
        auto indexerReinforceParamProtector = state->new_usertype<ParamTableIndexer<ReinforceParamProtector>>("ReinforceParamProtectorTableIndexer");
        indexerReinforceParamProtector["count"] = sol::property(&ParamTableIndexer<ReinforceParamProtector>::count);
        indexerReinforceParamProtector["__index"] = &ParamTableIndexer<ReinforceParamProtector>::at;
        indexerReinforceParamProtector["id"] = &ParamTableIndexer<ReinforceParamProtector>::paramId;
        indexerReinforceParamProtector["get"] = &ParamTableIndexer<ReinforceParamProtector>::get;
        auto utReinforceParamProtector = state->new_usertype<ReinforceParamProtector>("ReinforceParamProtector");
        utReinforceParamProtector["physicsDefRate"] = &ReinforceParamProtector::physicsDefRate;
        utReinforceParamProtector["magicDefRate"] = &ReinforceParamProtector::magicDefRate;
        utReinforceParamProtector["fireDefRate"] = &ReinforceParamProtector::fireDefRate;
        utReinforceParamProtector["thunderDefRate"] = &ReinforceParamProtector::thunderDefRate;
        utReinforceParamProtector["slashDefRate"] = &ReinforceParamProtector::slashDefRate;
        utReinforceParamProtector["blowDefRate"] = &ReinforceParamProtector::blowDefRate;
        utReinforceParamProtector["thrustDefRate"] = &ReinforceParamProtector::thrustDefRate;
        utReinforceParamProtector["resistPoisonRate"] = &ReinforceParamProtector::resistPoisonRate;
        utReinforceParamProtector["resistDiseaseRate"] = &ReinforceParamProtector::resistDiseaseRate;
        utReinforceParamProtector["resistBloodRate"] = &ReinforceParamProtector::resistBloodRate;
        utReinforceParamProtector["resistCurseRate"] = &ReinforceParamProtector::resistCurseRate;
        utReinforceParamProtector["residentSpEffectId1"] = &ReinforceParamProtector::residentSpEffectId1;
        utReinforceParamProtector["residentSpEffectId2"] = &ReinforceParamProtector::residentSpEffectId2;
        utReinforceParamProtector["residentSpEffectId3"] = &ReinforceParamProtector::residentSpEffectId3;
        utReinforceParamProtector["materialSetId"] = &ReinforceParamProtector::materialSetId;
        utReinforceParamProtector["darkDefRate"] = &ReinforceParamProtector::darkDefRate;
        utReinforceParamProtector["resistFreezeRate"] = &ReinforceParamProtector::resistFreezeRate;
        utReinforceParamProtector["resistSleepRate"] = &ReinforceParamProtector::resistSleepRate;
        utReinforceParamProtector["resistMadnessRate"] = &ReinforceParamProtector::resistMadnessRate;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<ReinforceParamProtector>>(gParamMgr.findTable(L"ReinforceParamProtector")); };
    paramsTable["ReinforceParamProtector"] = tableLoader;
}

}
