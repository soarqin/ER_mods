#include "../luabindings.h"
#include "../defs/RollingObjLotParam.h"

namespace paramadjuster::params {

void registerRollingObjLotParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["RollingObjLotParam"]; usertype) return;
        auto indexerRollingObjLotParam = state->new_usertype<ParamTableIndexer<RollingObjLotParam>>("RollingObjLotParamTableIndexer");
        indexerRollingObjLotParam["count"] = sol::property(&ParamTableIndexer<RollingObjLotParam>::count);
        indexerRollingObjLotParam["__index"] = &ParamTableIndexer<RollingObjLotParam>::at;
        indexerRollingObjLotParam["id"] = &ParamTableIndexer<RollingObjLotParam>::paramId;
        indexerRollingObjLotParam["get"] = &ParamTableIndexer<RollingObjLotParam>::get;
        auto utRollingObjLotParam = state->new_usertype<RollingObjLotParam>("RollingObjLotParam");
        utRollingObjLotParam["disableParam_NT"] = sol::property([](RollingObjLotParam &param) -> uint8_t { return param.disableParam_NT; }, [](RollingObjLotParam &param, uint8_t value) { param.disableParam_NT = value; });
        utRollingObjLotParam["AssetId_0"] = &RollingObjLotParam::AssetId_0;
        utRollingObjLotParam["AssetId_1"] = &RollingObjLotParam::AssetId_1;
        utRollingObjLotParam["AssetId_2"] = &RollingObjLotParam::AssetId_2;
        utRollingObjLotParam["AssetId_3"] = &RollingObjLotParam::AssetId_3;
        utRollingObjLotParam["AssetId_4"] = &RollingObjLotParam::AssetId_4;
        utRollingObjLotParam["AssetId_5"] = &RollingObjLotParam::AssetId_5;
        utRollingObjLotParam["AssetId_6"] = &RollingObjLotParam::AssetId_6;
        utRollingObjLotParam["AssetId_7"] = &RollingObjLotParam::AssetId_7;
        utRollingObjLotParam["CreateWeight_0"] = &RollingObjLotParam::CreateWeight_0;
        utRollingObjLotParam["CreateWeight_1"] = &RollingObjLotParam::CreateWeight_1;
        utRollingObjLotParam["CreateWeight_2"] = &RollingObjLotParam::CreateWeight_2;
        utRollingObjLotParam["CreateWeight_3"] = &RollingObjLotParam::CreateWeight_3;
        utRollingObjLotParam["CreateWeight_4"] = &RollingObjLotParam::CreateWeight_4;
        utRollingObjLotParam["CreateWeight_5"] = &RollingObjLotParam::CreateWeight_5;
        utRollingObjLotParam["CreateWeight_6"] = &RollingObjLotParam::CreateWeight_6;
        utRollingObjLotParam["CreateWeight_7"] = &RollingObjLotParam::CreateWeight_7;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<RollingObjLotParam>>(gParamMgr.findTable(L"RollingObjLotParam")); };
    paramsTable["RollingObjLotParam"] = tableLoader;
}

}
