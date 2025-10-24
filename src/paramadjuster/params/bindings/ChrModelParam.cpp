#include "../luabindings.h"
#include "../defs/ChrModelParam.h"

namespace paramadjuster::params {

void registerChrModelParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ChrModelParam"]; usertype) return;
        auto indexerChrModelParam = state->new_usertype<ParamTableIndexer<ChrModelParam>>("ChrModelParamTableIndexer");
        indexerChrModelParam["count"] = sol::property(&ParamTableIndexer<ChrModelParam>::count);
        indexerChrModelParam["__index"] = &ParamTableIndexer<ChrModelParam>::at;
        indexerChrModelParam["id"] = &ParamTableIndexer<ChrModelParam>::paramId;
        indexerChrModelParam["get"] = &ParamTableIndexer<ChrModelParam>::get;
        auto utChrModelParam = state->new_usertype<ChrModelParam>("ChrModelParam");
        utChrModelParam["disableParam_NT"] = sol::property([](ChrModelParam &param) -> uint8_t { return param.disableParam_NT; }, [](ChrModelParam &param, uint8_t value) { param.disableParam_NT = value; });
        utChrModelParam["modelMemoryType"] = &ChrModelParam::modelMemoryType;
        utChrModelParam["texMemoryType"] = &ChrModelParam::texMemoryType;
        utChrModelParam["cameraDitherFadeId"] = &ChrModelParam::cameraDitherFadeId;
        utChrModelParam["reportAnimMemSizeMb"] = &ChrModelParam::reportAnimMemSizeMb;
        utChrModelParam["unk"] = &ChrModelParam::unk;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<ChrModelParam>>(gParamMgr.findTable(L"ChrModelParam")); };
    paramsTable["ChrModelParam"] = tableLoader;
}

}
