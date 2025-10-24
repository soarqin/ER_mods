#include "../luabindings.h"
#include "../defs/CutSceneTextureLoadParam.h"

namespace paramadjuster::params {

void registerCutSceneTextureLoadParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CutSceneTextureLoadParam"]; usertype) return;
        auto indexerCutSceneTextureLoadParam = state->new_usertype<ParamTableIndexer<CutSceneTextureLoadParam>>("CutSceneTextureLoadParamTableIndexer");
        indexerCutSceneTextureLoadParam["count"] = sol::property(&ParamTableIndexer<CutSceneTextureLoadParam>::count);
        indexerCutSceneTextureLoadParam["__index"] = &ParamTableIndexer<CutSceneTextureLoadParam>::at;
        indexerCutSceneTextureLoadParam["id"] = &ParamTableIndexer<CutSceneTextureLoadParam>::paramId;
        indexerCutSceneTextureLoadParam["get"] = &ParamTableIndexer<CutSceneTextureLoadParam>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<CutSceneTextureLoadParam>>(gParamMgr.findTable(L"CutSceneTextureLoadParam")); };
    paramsTable["CutSceneTextureLoadParam"] = tableLoader;
}

}
