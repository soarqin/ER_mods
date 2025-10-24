#include "../luabindings.h"
#include "../defs/CutsceneTimezoneConvertParam.h"

namespace paramadjuster::params {

void registerCutsceneTimezoneConvertParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CutsceneTimezoneConvertParam"]; usertype) return;
        auto indexerCutsceneTimezoneConvertParam = state->new_usertype<ParamTableIndexer<CutsceneTimezoneConvertParam>>("CutsceneTimezoneConvertParamTableIndexer");
        indexerCutsceneTimezoneConvertParam["count"] = sol::property(&ParamTableIndexer<CutsceneTimezoneConvertParam>::count);
        indexerCutsceneTimezoneConvertParam["__index"] = &ParamTableIndexer<CutsceneTimezoneConvertParam>::at;
        indexerCutsceneTimezoneConvertParam["id"] = &ParamTableIndexer<CutsceneTimezoneConvertParam>::paramId;
        indexerCutsceneTimezoneConvertParam["get"] = &ParamTableIndexer<CutsceneTimezoneConvertParam>::get;
        auto utCutsceneTimezoneConvertParam = state->new_usertype<CutsceneTimezoneConvertParam>("CutsceneTimezoneConvertParam");
        utCutsceneTimezoneConvertParam["SrcTimezoneStart"] = &CutsceneTimezoneConvertParam::SrcTimezoneStart;
        utCutsceneTimezoneConvertParam["DstCutscenTime"] = &CutsceneTimezoneConvertParam::DstCutscenTime;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<CutsceneTimezoneConvertParam>>(gParamMgr.findTable(L"CutsceneTimezoneConvertParam")); };
    paramsTable["CutsceneTimezoneConvertParam"] = tableLoader;
}

}
