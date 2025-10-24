#include "../luabindings.h"
#include "../defs/EnvObjLotParam.h"

namespace paramadjuster::params {

void registerEnvObjLotParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["EnvObjLotParam"]; usertype) return;
        auto indexerEnvObjLotParam = state->new_usertype<ParamTableIndexer<EnvObjLotParam>>("EnvObjLotParamTableIndexer");
        indexerEnvObjLotParam["count"] = sol::property(&ParamTableIndexer<EnvObjLotParam>::count);
        indexerEnvObjLotParam["__index"] = &ParamTableIndexer<EnvObjLotParam>::at;
        indexerEnvObjLotParam["id"] = &ParamTableIndexer<EnvObjLotParam>::paramId;
        indexerEnvObjLotParam["get"] = &ParamTableIndexer<EnvObjLotParam>::get;
        auto utEnvObjLotParam = state->new_usertype<EnvObjLotParam>("EnvObjLotParam");
        utEnvObjLotParam["AssetId_0"] = &EnvObjLotParam::AssetId_0;
        utEnvObjLotParam["AssetId_1"] = &EnvObjLotParam::AssetId_1;
        utEnvObjLotParam["AssetId_2"] = &EnvObjLotParam::AssetId_2;
        utEnvObjLotParam["AssetId_3"] = &EnvObjLotParam::AssetId_3;
        utEnvObjLotParam["AssetId_4"] = &EnvObjLotParam::AssetId_4;
        utEnvObjLotParam["AssetId_5"] = &EnvObjLotParam::AssetId_5;
        utEnvObjLotParam["AssetId_6"] = &EnvObjLotParam::AssetId_6;
        utEnvObjLotParam["AssetId_7"] = &EnvObjLotParam::AssetId_7;
        utEnvObjLotParam["CreateWeight_0"] = &EnvObjLotParam::CreateWeight_0;
        utEnvObjLotParam["CreateWeight_1"] = &EnvObjLotParam::CreateWeight_1;
        utEnvObjLotParam["CreateWeight_2"] = &EnvObjLotParam::CreateWeight_2;
        utEnvObjLotParam["CreateWeight_3"] = &EnvObjLotParam::CreateWeight_3;
        utEnvObjLotParam["CreateWeight_4"] = &EnvObjLotParam::CreateWeight_4;
        utEnvObjLotParam["CreateWeight_5"] = &EnvObjLotParam::CreateWeight_5;
        utEnvObjLotParam["CreateWeight_6"] = &EnvObjLotParam::CreateWeight_6;
        utEnvObjLotParam["CreateWeight_7"] = &EnvObjLotParam::CreateWeight_7;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<EnvObjLotParam>>(gParamMgr.findTable(L"EnvObjLotParam")); };
    paramsTable["EnvObjLotParam"] = tableLoader;
}

}
