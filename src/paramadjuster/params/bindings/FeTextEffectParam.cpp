#include "../luabindings.h"
#include "../defs/FeTextEffectParam.h"

namespace paramadjuster::params {

void registerFeTextEffectParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["FeTextEffectParam"]; usertype) return;
        auto indexerFeTextEffectParam = state->new_usertype<ParamTableIndexer<FeTextEffectParam>>("FeTextEffectParamTableIndexer");
        indexerFeTextEffectParam["count"] = sol::property(&ParamTableIndexer<FeTextEffectParam>::count);
        indexerFeTextEffectParam["__index"] = &ParamTableIndexer<FeTextEffectParam>::at;
        indexerFeTextEffectParam["id"] = &ParamTableIndexer<FeTextEffectParam>::paramId;
        indexerFeTextEffectParam["get"] = &ParamTableIndexer<FeTextEffectParam>::get;
        auto utFeTextEffectParam = state->new_usertype<FeTextEffectParam>("FeTextEffectParam");
        utFeTextEffectParam["resId"] = &FeTextEffectParam::resId;
        utFeTextEffectParam["textId"] = &FeTextEffectParam::textId;
        utFeTextEffectParam["seId"] = &FeTextEffectParam::seId;
        utFeTextEffectParam["canMixMapName"] = sol::property([](FeTextEffectParam &param) -> uint8_t { return param.canMixMapName; }, [](FeTextEffectParam &param, uint8_t value) { param.canMixMapName = value; });
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<FeTextEffectParam>>(gParamMgr.findTable(L"FeTextEffectParam")); };
    paramsTable["FeTextEffectParam"] = tableLoader;
}

}
