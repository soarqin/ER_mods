#include "../luabindings.h"
#include "../defs/SpeedtreeModel.h"

namespace paramadjuster::params {

void registerSpeedtreeModel(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SpeedtreeModel"]; usertype) return;
        auto indexerSpeedtreeModel = state->new_usertype<ParamTableIndexer<SpeedtreeModel>>("SpeedtreeModelTableIndexer");
        indexerSpeedtreeModel["count"] = sol::property(&ParamTableIndexer<SpeedtreeModel>::count);
        indexerSpeedtreeModel["__index"] = &ParamTableIndexer<SpeedtreeModel>::at;
        indexerSpeedtreeModel["id"] = &ParamTableIndexer<SpeedtreeModel>::paramId;
        indexerSpeedtreeModel["get"] = &ParamTableIndexer<SpeedtreeModel>::get;
        auto utSpeedtreeModel = state->new_usertype<SpeedtreeModel>("SpeedtreeModel");
        utSpeedtreeModel["MinFadeLeaf"] = &SpeedtreeModel::MinFadeLeaf;
        utSpeedtreeModel["MinFadeFrond"] = &SpeedtreeModel::MinFadeFrond;
        utSpeedtreeModel["MinFadeBranch"] = &SpeedtreeModel::MinFadeBranch;
        utSpeedtreeModel["MinTranslucencyLeaf"] = &SpeedtreeModel::MinTranslucencyLeaf;
        utSpeedtreeModel["MaxTranslucencyLeaf"] = &SpeedtreeModel::MaxTranslucencyLeaf;
        utSpeedtreeModel["MinTranslucencyFrond"] = &SpeedtreeModel::MinTranslucencyFrond;
        utSpeedtreeModel["MaxTranslucencyFrond"] = &SpeedtreeModel::MaxTranslucencyFrond;
        utSpeedtreeModel["MinTranslucencyBranch"] = &SpeedtreeModel::MinTranslucencyBranch;
        utSpeedtreeModel["MaxTranslucencyBranch"] = &SpeedtreeModel::MaxTranslucencyBranch;
        utSpeedtreeModel["BillboardBackSpecularWeakenParam"] = &SpeedtreeModel::BillboardBackSpecularWeakenParam;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<SpeedtreeModel>>(gParamMgr.findTable(L"SpeedtreeModel")); };
    paramsTable["SpeedtreeParam"] = tableLoader;
}

}
