#include "../luabindings.h"
#include "../defs/BaseChrSelectMenuParam.h"

namespace paramadjuster::params {

void registerBaseChrSelectMenuParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BaseChrSelectMenuParam"]; usertype) return;
        auto indexerBaseChrSelectMenuParam = state->new_usertype<ParamTableIndexer<BaseChrSelectMenuParam>>("BaseChrSelectMenuParamTableIndexer");
        indexerBaseChrSelectMenuParam["count"] = sol::property(&ParamTableIndexer<BaseChrSelectMenuParam>::count);
        indexerBaseChrSelectMenuParam["__index"] = &ParamTableIndexer<BaseChrSelectMenuParam>::at;
        indexerBaseChrSelectMenuParam["id"] = &ParamTableIndexer<BaseChrSelectMenuParam>::paramId;
        indexerBaseChrSelectMenuParam["get"] = &ParamTableIndexer<BaseChrSelectMenuParam>::get;
        auto utBaseChrSelectMenuParam = state->new_usertype<BaseChrSelectMenuParam>("BaseChrSelectMenuParam");
        utBaseChrSelectMenuParam["disableParam_NT"] = sol::property([](BaseChrSelectMenuParam &param) -> uint8_t { return param.disableParam_NT; }, [](BaseChrSelectMenuParam &param, uint8_t value) { param.disableParam_NT = value; });
        utBaseChrSelectMenuParam["chrInitParam"] = &BaseChrSelectMenuParam::chrInitParam;
        utBaseChrSelectMenuParam["originChrInitParam"] = &BaseChrSelectMenuParam::originChrInitParam;
        utBaseChrSelectMenuParam["imageId"] = &BaseChrSelectMenuParam::imageId;
        utBaseChrSelectMenuParam["textId"] = &BaseChrSelectMenuParam::textId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<BaseChrSelectMenuParam>>(gParamMgr.findTable(L"BaseChrSelectMenuParam")); };
    paramsTable["BaseChrSelectMenuParam"] = tableLoader;
}

}
