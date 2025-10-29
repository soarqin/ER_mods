#include "../luabindings.h"
#include "../defs/WaypointParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<WaypointParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerWaypointParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WaypointParam"]; usertype) return;
        auto indexerWaypointParam = state->new_usertype<ParamTableIndexer<WaypointParam>>("WaypointParamTableIndexer");
        indexerWaypointParam["count"] = sol::property(&ParamTableIndexer<WaypointParam>::count);
        indexerWaypointParam["__index"] = &ParamTableIndexer<WaypointParam>::at;
        indexerWaypointParam["id"] = &ParamTableIndexer<WaypointParam>::paramId;
        indexerWaypointParam["get"] = &ParamTableIndexer<WaypointParam>::get;
        indexerWaypointParam["exportToCsv"] = &ParamTableIndexer<WaypointParam>::exportToCsv;
        indexerWaypointParam["importFromCsv"] = &ParamTableIndexer<WaypointParam>::importFromCsv;
        auto utWaypointParam = state->new_usertype<WaypointParam>("WaypointParam");
        utWaypointParam["attribute1"] = &WaypointParam::attribute1;
        utWaypointParam["attribute2"] = &WaypointParam::attribute2;
        utWaypointParam["attribute3"] = &WaypointParam::attribute3;
        utWaypointParam["attribute4"] = &WaypointParam::attribute4;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<WaypointParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<WaypointParam>>(nullptr);
        indexer->setFieldNames({
            {"attribute1", false},
            {"attribute2", false},
            {"attribute3", false},
            {"attribute4", false},
        });
        return indexer;
    };
    paramsTable["WaypointParam"] = [tableLoader]() -> auto { return tableLoader(L"WaypointParam"); };
}

template<> void ParamTableIndexer<WaypointParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,attribute1,attribute2,attribute3,attribute4\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d\n",
            this->paramId(i),
            param->attribute1,
            param->attribute2,
            param->attribute3,
            param->attribute4
        );
    }
    fclose(f);
}

}
