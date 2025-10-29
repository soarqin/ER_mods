#include "../luabindings.h"
#include "../defs/CutSceneTextureLoadParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<CutSceneTextureLoadParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerCutSceneTextureLoadParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CutSceneTextureLoadParam"]; usertype) return;
        auto indexerCutSceneTextureLoadParam = state->new_usertype<ParamTableIndexer<CutSceneTextureLoadParam>>("CutSceneTextureLoadParamTableIndexer");
        indexerCutSceneTextureLoadParam["count"] = sol::property(&ParamTableIndexer<CutSceneTextureLoadParam>::count);
        indexerCutSceneTextureLoadParam["__index"] = &ParamTableIndexer<CutSceneTextureLoadParam>::at;
        indexerCutSceneTextureLoadParam["id"] = &ParamTableIndexer<CutSceneTextureLoadParam>::paramId;
        indexerCutSceneTextureLoadParam["get"] = &ParamTableIndexer<CutSceneTextureLoadParam>::get;
        indexerCutSceneTextureLoadParam["exportToCsv"] = &ParamTableIndexer<CutSceneTextureLoadParam>::exportToCsv;
        indexerCutSceneTextureLoadParam["importFromCsv"] = &ParamTableIndexer<CutSceneTextureLoadParam>::importFromCsv;
        auto utCutSceneTextureLoadParam = state->new_usertype<CutSceneTextureLoadParam>("CutSceneTextureLoadParam");
        utCutSceneTextureLoadParam["disableParam_NT"] = sol::property([](CutSceneTextureLoadParam &param) -> uint8_t { return param.disableParam_NT; }, [](CutSceneTextureLoadParam &param, uint8_t value) { param.disableParam_NT = value; });
        utCutSceneTextureLoadParam["disableParam_Debug"] = sol::property([](CutSceneTextureLoadParam &param) -> uint8_t { return param.disableParam_Debug; }, [](CutSceneTextureLoadParam &param, uint8_t value) { param.disableParam_Debug = value; });
        utCutSceneTextureLoadParam["texName_00"] = sol::property([](CutSceneTextureLoadParam &param) -> std::string { return param.texName_00; }, [](CutSceneTextureLoadParam &param, const std::string& value) { cStrToFixedStr(param.texName_00, value); });
        utCutSceneTextureLoadParam["texName_01"] = sol::property([](CutSceneTextureLoadParam &param) -> std::string { return param.texName_01; }, [](CutSceneTextureLoadParam &param, const std::string& value) { cStrToFixedStr(param.texName_01, value); });
        utCutSceneTextureLoadParam["texName_02"] = sol::property([](CutSceneTextureLoadParam &param) -> std::string { return param.texName_02; }, [](CutSceneTextureLoadParam &param, const std::string& value) { cStrToFixedStr(param.texName_02, value); });
        utCutSceneTextureLoadParam["texName_03"] = sol::property([](CutSceneTextureLoadParam &param) -> std::string { return param.texName_03; }, [](CutSceneTextureLoadParam &param, const std::string& value) { cStrToFixedStr(param.texName_03, value); });
        utCutSceneTextureLoadParam["texName_04"] = sol::property([](CutSceneTextureLoadParam &param) -> std::string { return param.texName_04; }, [](CutSceneTextureLoadParam &param, const std::string& value) { cStrToFixedStr(param.texName_04, value); });
        utCutSceneTextureLoadParam["texName_05"] = sol::property([](CutSceneTextureLoadParam &param) -> std::string { return param.texName_05; }, [](CutSceneTextureLoadParam &param, const std::string& value) { cStrToFixedStr(param.texName_05, value); });
        utCutSceneTextureLoadParam["texName_06"] = sol::property([](CutSceneTextureLoadParam &param) -> std::string { return param.texName_06; }, [](CutSceneTextureLoadParam &param, const std::string& value) { cStrToFixedStr(param.texName_06, value); });
        utCutSceneTextureLoadParam["texName_07"] = sol::property([](CutSceneTextureLoadParam &param) -> std::string { return param.texName_07; }, [](CutSceneTextureLoadParam &param, const std::string& value) { cStrToFixedStr(param.texName_07, value); });
        utCutSceneTextureLoadParam["texName_08"] = sol::property([](CutSceneTextureLoadParam &param) -> std::string { return param.texName_08; }, [](CutSceneTextureLoadParam &param, const std::string& value) { cStrToFixedStr(param.texName_08, value); });
        utCutSceneTextureLoadParam["texName_09"] = sol::property([](CutSceneTextureLoadParam &param) -> std::string { return param.texName_09; }, [](CutSceneTextureLoadParam &param, const std::string& value) { cStrToFixedStr(param.texName_09, value); });
        utCutSceneTextureLoadParam["texName_10"] = sol::property([](CutSceneTextureLoadParam &param) -> std::string { return param.texName_10; }, [](CutSceneTextureLoadParam &param, const std::string& value) { cStrToFixedStr(param.texName_10, value); });
        utCutSceneTextureLoadParam["texName_11"] = sol::property([](CutSceneTextureLoadParam &param) -> std::string { return param.texName_11; }, [](CutSceneTextureLoadParam &param, const std::string& value) { cStrToFixedStr(param.texName_11, value); });
        utCutSceneTextureLoadParam["texName_12"] = sol::property([](CutSceneTextureLoadParam &param) -> std::string { return param.texName_12; }, [](CutSceneTextureLoadParam &param, const std::string& value) { cStrToFixedStr(param.texName_12, value); });
        utCutSceneTextureLoadParam["texName_13"] = sol::property([](CutSceneTextureLoadParam &param) -> std::string { return param.texName_13; }, [](CutSceneTextureLoadParam &param, const std::string& value) { cStrToFixedStr(param.texName_13, value); });
        utCutSceneTextureLoadParam["texName_14"] = sol::property([](CutSceneTextureLoadParam &param) -> std::string { return param.texName_14; }, [](CutSceneTextureLoadParam &param, const std::string& value) { cStrToFixedStr(param.texName_14, value); });
        utCutSceneTextureLoadParam["texName_15"] = sol::property([](CutSceneTextureLoadParam &param) -> std::string { return param.texName_15; }, [](CutSceneTextureLoadParam &param, const std::string& value) { cStrToFixedStr(param.texName_15, value); });
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<CutSceneTextureLoadParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<CutSceneTextureLoadParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"disableParam_Debug", false},
            {"texName_00", true},
            {"texName_01", true},
            {"texName_02", true},
            {"texName_03", true},
            {"texName_04", true},
            {"texName_05", true},
            {"texName_06", true},
            {"texName_07", true},
            {"texName_08", true},
            {"texName_09", true},
            {"texName_10", true},
            {"texName_11", true},
            {"texName_12", true},
            {"texName_13", true},
            {"texName_14", true},
            {"texName_15", true},
        });
        return indexer;
    };
    paramsTable["CutSceneTextureLoadParam"] = [tableLoader]() -> auto { return tableLoader(L"CutSceneTextureLoadParam"); };
}

template<> void ParamTableIndexer<CutSceneTextureLoadParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,disableParam_Debug,texName_00,texName_01,texName_02,texName_03,texName_04,texName_05,texName_06,texName_07,texName_08,texName_09,texName_10,texName_11,texName_12,texName_13,texName_14,texName_15\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,\"%hs\",\"%hs\",\"%hs\",\"%hs\",\"%hs\",\"%hs\",\"%hs\",\"%hs\",\"%hs\",\"%hs\",\"%hs\",\"%hs\",\"%hs\",\"%hs\",\"%hs\",\"%hs\"\n",
            this->paramId(i),
            param->disableParam_NT,
            param->disableParam_Debug,
            param->texName_00,
            param->texName_01,
            param->texName_02,
            param->texName_03,
            param->texName_04,
            param->texName_05,
            param->texName_06,
            param->texName_07,
            param->texName_08,
            param->texName_09,
            param->texName_10,
            param->texName_11,
            param->texName_12,
            param->texName_13,
            param->texName_14,
            param->texName_15
        );
    }
    fclose(f);
}

}
