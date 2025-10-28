#include "../luabindings.h"
#include "../defs/CutsceneTimezoneConvertParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<CutsceneTimezoneConvertParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerCutsceneTimezoneConvertParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CutsceneTimezoneConvertParam"]; usertype) return;
        auto indexerCutsceneTimezoneConvertParam = state->new_usertype<ParamTableIndexer<CutsceneTimezoneConvertParam>>("CutsceneTimezoneConvertParamTableIndexer");
        indexerCutsceneTimezoneConvertParam["count"] = sol::property(&ParamTableIndexer<CutsceneTimezoneConvertParam>::count);
        indexerCutsceneTimezoneConvertParam["__index"] = &ParamTableIndexer<CutsceneTimezoneConvertParam>::at;
        indexerCutsceneTimezoneConvertParam["id"] = &ParamTableIndexer<CutsceneTimezoneConvertParam>::paramId;
        indexerCutsceneTimezoneConvertParam["get"] = &ParamTableIndexer<CutsceneTimezoneConvertParam>::get;
        indexerCutsceneTimezoneConvertParam["exportToCsv"] = &ParamTableIndexer<CutsceneTimezoneConvertParam>::exportToCsv;
        indexerCutsceneTimezoneConvertParam["importFromCsv"] = &ParamTableIndexer<CutsceneTimezoneConvertParam>::importFromCsv;
        auto utCutsceneTimezoneConvertParam = state->new_usertype<CutsceneTimezoneConvertParam>("CutsceneTimezoneConvertParam");
        utCutsceneTimezoneConvertParam["SrcTimezoneStart"] = &CutsceneTimezoneConvertParam::SrcTimezoneStart;
        utCutsceneTimezoneConvertParam["DstCutscenTime"] = &CutsceneTimezoneConvertParam::DstCutscenTime;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<CutsceneTimezoneConvertParam>>(state, L"CutsceneTimezoneConvertParam");
        indexer->setFieldNames({
            {"SrcTimezoneStart", false},
            {"DstCutscenTime", false},
        });
        return indexer;
    };
    paramsTable["CutsceneTimezoneConvertParam"] = tableLoader;
}

template<> void ParamTableIndexer<CutsceneTimezoneConvertParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,SrcTimezoneStart,DstCutscenTime\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g\n",
            this->paramId(i),
            param->SrcTimezoneStart,
            param->DstCutscenTime
        );
    }
    fclose(f);
}

}
