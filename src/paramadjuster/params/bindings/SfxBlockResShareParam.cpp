#include "../luabindings.h"
#include "../defs/SfxBlockResShareParam.h"

namespace paramadjuster::params {

void registerSfxBlockResShareParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SfxBlockResShareParam"]; usertype) return;
        auto indexerSfxBlockResShareParam = state->new_usertype<ParamTableIndexer<SfxBlockResShareParam>>("SfxBlockResShareParamTableIndexer");
        indexerSfxBlockResShareParam["count"] = sol::property(&ParamTableIndexer<SfxBlockResShareParam>::count);
        indexerSfxBlockResShareParam["__index"] = &ParamTableIndexer<SfxBlockResShareParam>::at;
        indexerSfxBlockResShareParam["id"] = &ParamTableIndexer<SfxBlockResShareParam>::paramId;
        indexerSfxBlockResShareParam["get"] = &ParamTableIndexer<SfxBlockResShareParam>::get;
        auto utSfxBlockResShareParam = state->new_usertype<SfxBlockResShareParam>("SfxBlockResShareParam");
        utSfxBlockResShareParam["shareBlockRsMapUidVal"] = &SfxBlockResShareParam::shareBlockRsMapUidVal;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<SfxBlockResShareParam>>(gParamMgr.findTable(L"SfxBlockResShareParam")); };
    paramsTable["SfxBlockResShareParam"] = tableLoader;
}

}
