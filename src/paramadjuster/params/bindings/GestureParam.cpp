#include "../luabindings.h"
#include "../defs/GestureParam.h"

namespace paramadjuster::params {

void registerGestureParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["GestureParam"]; usertype) return;
        auto indexerGestureParam = state->new_usertype<ParamTableIndexer<GestureParam>>("GestureParamTableIndexer");
        indexerGestureParam["count"] = sol::property(&ParamTableIndexer<GestureParam>::count);
        indexerGestureParam["__index"] = &ParamTableIndexer<GestureParam>::at;
        indexerGestureParam["id"] = &ParamTableIndexer<GestureParam>::paramId;
        indexerGestureParam["get"] = &ParamTableIndexer<GestureParam>::get;
        auto utGestureParam = state->new_usertype<GestureParam>("GestureParam");
        utGestureParam["disableParam_NT"] = sol::property([](GestureParam &param) -> uint8_t { return param.disableParam_NT; }, [](GestureParam &param, uint8_t value) { param.disableParam_NT = value; });
        utGestureParam["itemId"] = &GestureParam::itemId;
        utGestureParam["msgAnimId"] = &GestureParam::msgAnimId;
        utGestureParam["cannotUseRiding"] = sol::property([](GestureParam &param) -> uint8_t { return param.cannotUseRiding; }, [](GestureParam &param, uint8_t value) { param.cannotUseRiding = value; });
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<GestureParam>>(gParamMgr.findTable(L"GestureParam")); };
    paramsTable["GestureParam"] = tableLoader;
}

}
