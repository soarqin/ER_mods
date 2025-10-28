#include "../luabindings.h"
#include "../defs/MenuPropertyLayoutParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<MenuPropertyLayoutParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerMenuPropertyLayoutParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["MenuPropertyLayoutParam"]; usertype) return;
        auto indexerMenuPropertyLayoutParam = state->new_usertype<ParamTableIndexer<MenuPropertyLayoutParam>>("MenuPropertyLayoutParamTableIndexer");
        indexerMenuPropertyLayoutParam["count"] = sol::property(&ParamTableIndexer<MenuPropertyLayoutParam>::count);
        indexerMenuPropertyLayoutParam["__index"] = &ParamTableIndexer<MenuPropertyLayoutParam>::at;
        indexerMenuPropertyLayoutParam["id"] = &ParamTableIndexer<MenuPropertyLayoutParam>::paramId;
        indexerMenuPropertyLayoutParam["get"] = &ParamTableIndexer<MenuPropertyLayoutParam>::get;
        indexerMenuPropertyLayoutParam["exportToCsv"] = &ParamTableIndexer<MenuPropertyLayoutParam>::exportToCsv;
        indexerMenuPropertyLayoutParam["importFromCsv"] = &ParamTableIndexer<MenuPropertyLayoutParam>::importFromCsv;
        auto utMenuPropertyLayoutParam = state->new_usertype<MenuPropertyLayoutParam>("MenuPropertyLayoutParam");
        utMenuPropertyLayoutParam["LayoutPath"] = sol::property([](MenuPropertyLayoutParam &param) -> std::string { return param.LayoutPath; }, [](MenuPropertyLayoutParam &param, const std::string& value) { cStrToFixedStr(param.LayoutPath, value); });
        utMenuPropertyLayoutParam["PropertyID"] = &MenuPropertyLayoutParam::PropertyID;
        utMenuPropertyLayoutParam["CaptionTextID"] = &MenuPropertyLayoutParam::CaptionTextID;
        utMenuPropertyLayoutParam["HelpTextID"] = &MenuPropertyLayoutParam::HelpTextID;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<MenuPropertyLayoutParam>>(state, L"MenuPropertyLayoutParam");
        indexer->setFieldNames({
            {"LayoutPath", true},
            {"PropertyID", false},
            {"CaptionTextID", false},
            {"HelpTextID", false},
        });
        return indexer;
    };
    paramsTable["MenuPropertyLayoutParam"] = tableLoader;
}

template<> void ParamTableIndexer<MenuPropertyLayoutParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,LayoutPath,PropertyID,CaptionTextID,HelpTextID\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,\"%hs\",%d,%d,%d\n",
            this->paramId(i),
            param->LayoutPath,
            param->PropertyID,
            param->CaptionTextID,
            param->HelpTextID
        );
    }
    fclose(f);
}

}
