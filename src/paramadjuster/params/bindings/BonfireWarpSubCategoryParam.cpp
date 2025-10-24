#include "../luabindings.h"
#include "../defs/BonfireWarpSubCategoryParam.h"

namespace paramadjuster::params {

void registerBonfireWarpSubCategoryParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BonfireWarpSubCategoryParam"]; usertype) return;
        auto indexerBonfireWarpSubCategoryParam = state->new_usertype<ParamTableIndexer<BonfireWarpSubCategoryParam>>("BonfireWarpSubCategoryParamTableIndexer");
        indexerBonfireWarpSubCategoryParam["count"] = sol::property(&ParamTableIndexer<BonfireWarpSubCategoryParam>::count);
        indexerBonfireWarpSubCategoryParam["__index"] = &ParamTableIndexer<BonfireWarpSubCategoryParam>::at;
        indexerBonfireWarpSubCategoryParam["id"] = &ParamTableIndexer<BonfireWarpSubCategoryParam>::paramId;
        indexerBonfireWarpSubCategoryParam["get"] = &ParamTableIndexer<BonfireWarpSubCategoryParam>::get;
        auto utBonfireWarpSubCategoryParam = state->new_usertype<BonfireWarpSubCategoryParam>("BonfireWarpSubCategoryParam");
        utBonfireWarpSubCategoryParam["disableParam_NT"] = sol::property([](BonfireWarpSubCategoryParam &param) -> uint8_t { return param.disableParam_NT; }, [](BonfireWarpSubCategoryParam &param, uint8_t value) { param.disableParam_NT = value; });
        utBonfireWarpSubCategoryParam["textId"] = &BonfireWarpSubCategoryParam::textId;
        utBonfireWarpSubCategoryParam["tabId"] = &BonfireWarpSubCategoryParam::tabId;
        utBonfireWarpSubCategoryParam["sortId"] = &BonfireWarpSubCategoryParam::sortId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<BonfireWarpSubCategoryParam>>(gParamMgr.findTable(L"BonfireWarpSubCategoryParam")); };
    paramsTable["BonfireWarpSubCategoryParam"] = tableLoader;
}

}
