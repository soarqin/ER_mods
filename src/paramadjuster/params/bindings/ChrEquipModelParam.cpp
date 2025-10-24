#include "../luabindings.h"
#include "../defs/ChrEquipModelParam.h"

namespace paramadjuster::params {

void registerChrEquipModelParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ChrEquipModelParam"]; usertype) return;
        auto indexerChrEquipModelParam = state->new_usertype<ParamTableIndexer<ChrEquipModelParam>>("ChrEquipModelParamTableIndexer");
        indexerChrEquipModelParam["count"] = sol::property(&ParamTableIndexer<ChrEquipModelParam>::count);
        indexerChrEquipModelParam["__index"] = &ParamTableIndexer<ChrEquipModelParam>::at;
        indexerChrEquipModelParam["id"] = &ParamTableIndexer<ChrEquipModelParam>::paramId;
        indexerChrEquipModelParam["get"] = &ParamTableIndexer<ChrEquipModelParam>::get;
        auto utChrEquipModelParam = state->new_usertype<ChrEquipModelParam>("ChrEquipModelParam");
        utChrEquipModelParam["unknown_0x0"] = &ChrEquipModelParam::unknown_0x0;
        utChrEquipModelParam["unknown_0x4"] = &ChrEquipModelParam::unknown_0x4;
        utChrEquipModelParam["unknown_0x8"] = &ChrEquipModelParam::unknown_0x8;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<ChrEquipModelParam>>(gParamMgr.findTable(L"ChrEquipModelParam")); };
    paramsTable["ChrEquipModelParam"] = tableLoader;
}

}
