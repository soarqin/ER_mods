#include "../luabindings.h"
#include "../defs/RollingObjLotParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<RollingObjLotParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerRollingObjLotParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["RollingObjLotParam"]; usertype) return;
        auto indexerRollingObjLotParam = state->new_usertype<ParamTableIndexer<RollingObjLotParam>>("RollingObjLotParamTableIndexer");
        indexerRollingObjLotParam["count"] = sol::property(&ParamTableIndexer<RollingObjLotParam>::count);
        indexerRollingObjLotParam["__index"] = &ParamTableIndexer<RollingObjLotParam>::at;
        indexerRollingObjLotParam["id"] = &ParamTableIndexer<RollingObjLotParam>::paramId;
        indexerRollingObjLotParam["get"] = &ParamTableIndexer<RollingObjLotParam>::get;
        indexerRollingObjLotParam["exportToCsv"] = &ParamTableIndexer<RollingObjLotParam>::exportToCsv;
        indexerRollingObjLotParam["importFromCsv"] = &ParamTableIndexer<RollingObjLotParam>::importFromCsv;
        auto utRollingObjLotParam = state->new_usertype<RollingObjLotParam>("RollingObjLotParam");
        utRollingObjLotParam["disableParam_NT"] = sol::property([](RollingObjLotParam &param) -> uint8_t { return param.disableParam_NT; }, [](RollingObjLotParam &param, uint8_t value) { param.disableParam_NT = value; });
        utRollingObjLotParam["AssetId_0"] = &RollingObjLotParam::AssetId_0;
        utRollingObjLotParam["AssetId_1"] = &RollingObjLotParam::AssetId_1;
        utRollingObjLotParam["AssetId_2"] = &RollingObjLotParam::AssetId_2;
        utRollingObjLotParam["AssetId_3"] = &RollingObjLotParam::AssetId_3;
        utRollingObjLotParam["AssetId_4"] = &RollingObjLotParam::AssetId_4;
        utRollingObjLotParam["AssetId_5"] = &RollingObjLotParam::AssetId_5;
        utRollingObjLotParam["AssetId_6"] = &RollingObjLotParam::AssetId_6;
        utRollingObjLotParam["AssetId_7"] = &RollingObjLotParam::AssetId_7;
        utRollingObjLotParam["CreateWeight_0"] = &RollingObjLotParam::CreateWeight_0;
        utRollingObjLotParam["CreateWeight_1"] = &RollingObjLotParam::CreateWeight_1;
        utRollingObjLotParam["CreateWeight_2"] = &RollingObjLotParam::CreateWeight_2;
        utRollingObjLotParam["CreateWeight_3"] = &RollingObjLotParam::CreateWeight_3;
        utRollingObjLotParam["CreateWeight_4"] = &RollingObjLotParam::CreateWeight_4;
        utRollingObjLotParam["CreateWeight_5"] = &RollingObjLotParam::CreateWeight_5;
        utRollingObjLotParam["CreateWeight_6"] = &RollingObjLotParam::CreateWeight_6;
        utRollingObjLotParam["CreateWeight_7"] = &RollingObjLotParam::CreateWeight_7;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<RollingObjLotParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<RollingObjLotParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
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
    paramsTable["RollingObjLotParam"] = [tableLoader]() -> auto { return tableLoader(L"RollingObjLotParam"); };
}

template<> void ParamTableIndexer<RollingObjLotParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,AssetId_0,AssetId_1,AssetId_2,AssetId_3,AssetId_4,AssetId_5,AssetId_6,AssetId_7,CreateWeight_0,CreateWeight_1,CreateWeight_2,CreateWeight_3,CreateWeight_4,CreateWeight_5,CreateWeight_6,CreateWeight_7\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u\n",
            this->paramId(i),
            param->disableParam_NT,
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
