#include "../luabindings.h"
#include "../defs/RuntimeBoneControlParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<RuntimeBoneControlParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerRuntimeBoneControlParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["RuntimeBoneControlParam"]; usertype) return;
        auto indexerRuntimeBoneControlParam = state->new_usertype<ParamTableIndexer<RuntimeBoneControlParam>>("RuntimeBoneControlParamTableIndexer");
        indexerRuntimeBoneControlParam["count"] = sol::property(&ParamTableIndexer<RuntimeBoneControlParam>::count);
        indexerRuntimeBoneControlParam["__index"] = &ParamTableIndexer<RuntimeBoneControlParam>::at;
        indexerRuntimeBoneControlParam["id"] = &ParamTableIndexer<RuntimeBoneControlParam>::paramId;
        indexerRuntimeBoneControlParam["get"] = &ParamTableIndexer<RuntimeBoneControlParam>::get;
        indexerRuntimeBoneControlParam["exportToCsv"] = &ParamTableIndexer<RuntimeBoneControlParam>::exportToCsv;
        indexerRuntimeBoneControlParam["importFromCsv"] = &ParamTableIndexer<RuntimeBoneControlParam>::importFromCsv;
        auto utRuntimeBoneControlParam = state->new_usertype<RuntimeBoneControlParam>("RuntimeBoneControlParam");
        utRuntimeBoneControlParam["chrId"] = &RuntimeBoneControlParam::chrId;
        utRuntimeBoneControlParam["ctrlType"] = &RuntimeBoneControlParam::ctrlType;
        utRuntimeBoneControlParam["applyBone"] = sol::property([](RuntimeBoneControlParam &param) -> std::string { return param.applyBone; }, [](RuntimeBoneControlParam &param, const std::string& value) { cStrToFixedStr(param.applyBone, value); });
        utRuntimeBoneControlParam["targetBone1"] = sol::property([](RuntimeBoneControlParam &param) -> std::string { return param.targetBone1; }, [](RuntimeBoneControlParam &param, const std::string& value) { cStrToFixedStr(param.targetBone1, value); });
        utRuntimeBoneControlParam["targetBone2"] = sol::property([](RuntimeBoneControlParam &param) -> std::string { return param.targetBone2; }, [](RuntimeBoneControlParam &param, const std::string& value) { cStrToFixedStr(param.targetBone2, value); });
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<RuntimeBoneControlParam>>(state, L"RuntimeBoneControlParam");
        indexer->setFieldNames({
            {"chrId", false},
            {"ctrlType", false},
            {"applyBone", true},
            {"targetBone1", true},
            {"targetBone2", true},
        });
        return indexer;
    };
    paramsTable["RuntimeBoneControlParam"] = tableLoader;
}

template<> void ParamTableIndexer<RuntimeBoneControlParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,chrId,ctrlType,applyBone,targetBone1,targetBone2\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,\"%hs\",\"%hs\",\"%hs\"\n",
            this->paramId(i),
            param->chrId,
            param->ctrlType,
            param->applyBone,
            param->targetBone1,
            param->targetBone2
        );
    }
    fclose(f);
}

}
