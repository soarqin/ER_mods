#include "../luabindings.h"
#include "../defs/CeremonyParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<CeremonyParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerCeremonyParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CeremonyParam"]; usertype) return;
        auto indexerCeremonyParam = state->new_usertype<ParamTableIndexer<CeremonyParam>>("CeremonyParamTableIndexer");
        indexerCeremonyParam["count"] = sol::property(&ParamTableIndexer<CeremonyParam>::count);
        indexerCeremonyParam["__index"] = &ParamTableIndexer<CeremonyParam>::at;
        indexerCeremonyParam["id"] = &ParamTableIndexer<CeremonyParam>::paramId;
        indexerCeremonyParam["get"] = &ParamTableIndexer<CeremonyParam>::get;
        indexerCeremonyParam["exportToCsv"] = &ParamTableIndexer<CeremonyParam>::exportToCsv;
        indexerCeremonyParam["importFromCsv"] = &ParamTableIndexer<CeremonyParam>::importFromCsv;
        auto utCeremonyParam = state->new_usertype<CeremonyParam>("CeremonyParam");
        utCeremonyParam["eventLayerId"] = &CeremonyParam::eventLayerId;
        utCeremonyParam["mapStudioLayerId"] = &CeremonyParam::mapStudioLayerId;
        utCeremonyParam["multiPlayAreaOffset"] = &CeremonyParam::multiPlayAreaOffset;
        utCeremonyParam["overrideMapPlaceNameId"] = &CeremonyParam::overrideMapPlaceNameId;
        utCeremonyParam["overrideSaveMapNameId"] = &CeremonyParam::overrideSaveMapNameId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<CeremonyParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<CeremonyParam>>(nullptr);
        indexer->setFieldNames({
            {"eventLayerId", false},
            {"mapStudioLayerId", false},
            {"multiPlayAreaOffset", false},
            {"overrideMapPlaceNameId", false},
            {"overrideSaveMapNameId", false},
        });
        return indexer;
    };
    paramsTable["Ceremony"] = [tableLoader]() -> auto { return tableLoader(L"Ceremony"); };
}

template<> void ParamTableIndexer<CeremonyParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,eventLayerId,mapStudioLayerId,multiPlayAreaOffset,overrideMapPlaceNameId,overrideSaveMapNameId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->eventLayerId,
            param->mapStudioLayerId,
            param->multiPlayAreaOffset,
            param->overrideMapPlaceNameId,
            param->overrideSaveMapNameId
        );
    }
    fclose(f);
}

}
