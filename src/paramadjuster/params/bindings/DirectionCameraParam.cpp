#include "../luabindings.h"
#include "../defs/DirectionCameraParam.h"

namespace paramadjuster::params {

void registerDirectionCameraParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["DirectionCameraParam"]; usertype) return;
        auto indexerDirectionCameraParam = state->new_usertype<ParamTableIndexer<DirectionCameraParam>>("DirectionCameraParamTableIndexer");
        indexerDirectionCameraParam["count"] = sol::property(&ParamTableIndexer<DirectionCameraParam>::count);
        indexerDirectionCameraParam["__index"] = &ParamTableIndexer<DirectionCameraParam>::at;
        indexerDirectionCameraParam["id"] = &ParamTableIndexer<DirectionCameraParam>::paramId;
        indexerDirectionCameraParam["get"] = &ParamTableIndexer<DirectionCameraParam>::get;
        auto utDirectionCameraParam = state->new_usertype<DirectionCameraParam>("DirectionCameraParam");
        utDirectionCameraParam["isUseOption"] = sol::property([](DirectionCameraParam &param) -> uint8_t { return param.isUseOption; }, [](DirectionCameraParam &param, uint8_t value) { param.isUseOption = value; });
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<DirectionCameraParam>>(gParamMgr.findTable(L"DirectionCameraParam")); };
    paramsTable["DirectionCameraParam"] = tableLoader;
}

}
