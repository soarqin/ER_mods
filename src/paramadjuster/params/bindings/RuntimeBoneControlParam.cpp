#include "../luabindings.h"
#include "../defs/RuntimeBoneControlParam.h"

namespace paramadjuster::params {

void registerRuntimeBoneControlParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["RuntimeBoneControlParam"]; usertype) return;
        auto indexerRuntimeBoneControlParam = state->new_usertype<ParamTableIndexer<RuntimeBoneControlParam>>("RuntimeBoneControlParamTableIndexer");
        indexerRuntimeBoneControlParam["count"] = sol::property(&ParamTableIndexer<RuntimeBoneControlParam>::count);
        indexerRuntimeBoneControlParam["__index"] = &ParamTableIndexer<RuntimeBoneControlParam>::at;
        indexerRuntimeBoneControlParam["id"] = &ParamTableIndexer<RuntimeBoneControlParam>::paramId;
        indexerRuntimeBoneControlParam["get"] = &ParamTableIndexer<RuntimeBoneControlParam>::get;
        auto utRuntimeBoneControlParam = state->new_usertype<RuntimeBoneControlParam>("RuntimeBoneControlParam");
        utRuntimeBoneControlParam["chrId"] = &RuntimeBoneControlParam::chrId;
        utRuntimeBoneControlParam["ctrlType"] = &RuntimeBoneControlParam::ctrlType;
        utRuntimeBoneControlParam["applyBone"] = sol::property([](RuntimeBoneControlParam &param) -> std::string { return param.applyBone; }, [](RuntimeBoneControlParam &param, const std::string& value) { cStrToFixedStr(param.applyBone, value); });
        utRuntimeBoneControlParam["targetBone1"] = sol::property([](RuntimeBoneControlParam &param) -> std::string { return param.targetBone1; }, [](RuntimeBoneControlParam &param, const std::string& value) { cStrToFixedStr(param.targetBone1, value); });
        utRuntimeBoneControlParam["targetBone2"] = sol::property([](RuntimeBoneControlParam &param) -> std::string { return param.targetBone2; }, [](RuntimeBoneControlParam &param, const std::string& value) { cStrToFixedStr(param.targetBone2, value); });
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<RuntimeBoneControlParam>>(gParamMgr.findTable(L"RuntimeBoneControlParam")); };
    paramsTable["RuntimeBoneControlParam"] = tableLoader;
}

}
