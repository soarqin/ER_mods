#include "../luabindings.h"
#include "../defs/EnvObjLotParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<EnvObjLotParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerEnvObjLotParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["EnvObjLotParam"]; usertype) return;
        auto indexerEnvObjLotParam = state->new_usertype<ParamTableIndexer<EnvObjLotParam>>("EnvObjLotParamTableIndexer");
        indexerEnvObjLotParam["count"] = sol::property(&ParamTableIndexer<EnvObjLotParam>::count);
        indexerEnvObjLotParam["__index"] = &ParamTableIndexer<EnvObjLotParam>::at;
        indexerEnvObjLotParam["id"] = &ParamTableIndexer<EnvObjLotParam>::paramId;
        indexerEnvObjLotParam["get"] = &ParamTableIndexer<EnvObjLotParam>::get;
        indexerEnvObjLotParam["exportToCsv"] = &ParamTableIndexer<EnvObjLotParam>::exportToCsv;
        indexerEnvObjLotParam["importFromCsv"] = &ParamTableIndexer<EnvObjLotParam>::importFromCsv;
        auto utEnvObjLotParam = state->new_usertype<EnvObjLotParam>("EnvObjLotParam");
        utEnvObjLotParam["AssetId_0"] = &EnvObjLotParam::AssetId_0;
        utEnvObjLotParam["AssetId_1"] = &EnvObjLotParam::AssetId_1;
        utEnvObjLotParam["AssetId_2"] = &EnvObjLotParam::AssetId_2;
        utEnvObjLotParam["AssetId_3"] = &EnvObjLotParam::AssetId_3;
        utEnvObjLotParam["AssetId_4"] = &EnvObjLotParam::AssetId_4;
        utEnvObjLotParam["AssetId_5"] = &EnvObjLotParam::AssetId_5;
        utEnvObjLotParam["AssetId_6"] = &EnvObjLotParam::AssetId_6;
        utEnvObjLotParam["AssetId_7"] = &EnvObjLotParam::AssetId_7;
        utEnvObjLotParam["CreateWeight_0"] = &EnvObjLotParam::CreateWeight_0;
        utEnvObjLotParam["CreateWeight_1"] = &EnvObjLotParam::CreateWeight_1;
        utEnvObjLotParam["CreateWeight_2"] = &EnvObjLotParam::CreateWeight_2;
        utEnvObjLotParam["CreateWeight_3"] = &EnvObjLotParam::CreateWeight_3;
        utEnvObjLotParam["CreateWeight_4"] = &EnvObjLotParam::CreateWeight_4;
        utEnvObjLotParam["CreateWeight_5"] = &EnvObjLotParam::CreateWeight_5;
        utEnvObjLotParam["CreateWeight_6"] = &EnvObjLotParam::CreateWeight_6;
        utEnvObjLotParam["CreateWeight_7"] = &EnvObjLotParam::CreateWeight_7;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<EnvObjLotParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<EnvObjLotParam>>(nullptr);
        indexer->setFieldNames({
            {"AssetId_0", false},
            {"AssetId_1", false},
            {"AssetId_2", false},
            {"AssetId_3", false},
            {"AssetId_4", false},
            {"AssetId_5", false},
            {"AssetId_6", false},
            {"AssetId_7", false},
            {"CreateWeight_0", false},
            {"CreateWeight_1", false},
            {"CreateWeight_2", false},
            {"CreateWeight_3", false},
            {"CreateWeight_4", false},
            {"CreateWeight_5", false},
            {"CreateWeight_6", false},
            {"CreateWeight_7", false},
        });
        return indexer;
    };
    paramsTable["EnvObjLotParam"] = [tableLoader]() -> auto { return tableLoader(L"EnvObjLotParam"); };
}

template<> void ParamTableIndexer<EnvObjLotParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,AssetId_0,AssetId_1,AssetId_2,AssetId_3,AssetId_4,AssetId_5,AssetId_6,AssetId_7,CreateWeight_0,CreateWeight_1,CreateWeight_2,CreateWeight_3,CreateWeight_4,CreateWeight_5,CreateWeight_6");
    fwprintf(f, L",CreateWeight_7\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u\n",
            this->paramId(i),
            param->AssetId_0,
            param->AssetId_1,
            param->AssetId_2,
            param->AssetId_3,
            param->AssetId_4,
            param->AssetId_5,
            param->AssetId_6,
            param->AssetId_7,
            param->CreateWeight_0,
            param->CreateWeight_1,
            param->CreateWeight_2,
            param->CreateWeight_3,
            param->CreateWeight_4,
            param->CreateWeight_5,
            param->CreateWeight_6,
            param->CreateWeight_7
        );
    }
    fclose(f);
}

}
