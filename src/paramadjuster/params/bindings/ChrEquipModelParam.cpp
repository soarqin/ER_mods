#include "../luabindings.h"
#include "../defs/ChrEquipModelParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<ChrEquipModelParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerChrEquipModelParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ChrEquipModelParam"]; usertype) return;
        auto indexerChrEquipModelParam = state->new_usertype<ParamTableIndexer<ChrEquipModelParam>>("ChrEquipModelParamTableIndexer");
        indexerChrEquipModelParam["count"] = sol::property(&ParamTableIndexer<ChrEquipModelParam>::count);
        indexerChrEquipModelParam["__index"] = &ParamTableIndexer<ChrEquipModelParam>::at;
        indexerChrEquipModelParam["id"] = &ParamTableIndexer<ChrEquipModelParam>::paramId;
        indexerChrEquipModelParam["get"] = &ParamTableIndexer<ChrEquipModelParam>::get;
        indexerChrEquipModelParam["exportToCsv"] = &ParamTableIndexer<ChrEquipModelParam>::exportToCsv;
        indexerChrEquipModelParam["importFromCsv"] = &ParamTableIndexer<ChrEquipModelParam>::importFromCsv;
        auto utChrEquipModelParam = state->new_usertype<ChrEquipModelParam>("ChrEquipModelParam");
        utChrEquipModelParam["unknown_0x0"] = &ChrEquipModelParam::unknown_0x0;
        utChrEquipModelParam["unknown_0x4"] = &ChrEquipModelParam::unknown_0x4;
        utChrEquipModelParam["unknown_0x8"] = &ChrEquipModelParam::unknown_0x8;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<ChrEquipModelParam>>(state, L"ChrEquipModelParam");
        indexer->setFieldNames({
            {"unknown_0x0", false},
            {"unknown_0x4", false},
            {"unknown_0x8", false},
        });
        return indexer;
    };
    paramsTable["ChrEquipModelParam"] = tableLoader;
}

template<> void ParamTableIndexer<ChrEquipModelParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,unknown_0x0,unknown_0x4,unknown_0x8\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d\n",
            this->paramId(i),
            param->unknown_0x0,
            param->unknown_0x4,
            param->unknown_0x8
        );
    }
    fclose(f);
}

}
