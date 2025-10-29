#include "../luabindings.h"
#include "../defs/KeyAssignParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<KeyAssignParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerKeyAssignParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["KeyAssignParam"]; usertype) return;
        auto indexerKeyAssignParam = state->new_usertype<ParamTableIndexer<KeyAssignParam>>("KeyAssignParamTableIndexer");
        indexerKeyAssignParam["count"] = sol::property(&ParamTableIndexer<KeyAssignParam>::count);
        indexerKeyAssignParam["__index"] = &ParamTableIndexer<KeyAssignParam>::at;
        indexerKeyAssignParam["id"] = &ParamTableIndexer<KeyAssignParam>::paramId;
        indexerKeyAssignParam["get"] = &ParamTableIndexer<KeyAssignParam>::get;
        indexerKeyAssignParam["exportToCsv"] = &ParamTableIndexer<KeyAssignParam>::exportToCsv;
        indexerKeyAssignParam["importFromCsv"] = &ParamTableIndexer<KeyAssignParam>::importFromCsv;
        auto utKeyAssignParam = state->new_usertype<KeyAssignParam>("KeyAssignParam");
        utKeyAssignParam["padKeyId"] = &KeyAssignParam::padKeyId;
        utKeyAssignParam["keyboardModifyKey"] = &KeyAssignParam::keyboardModifyKey;
        utKeyAssignParam["keyboardKeyId"] = &KeyAssignParam::keyboardKeyId;
        utKeyAssignParam["mouseModifyKey"] = &KeyAssignParam::mouseModifyKey;
        utKeyAssignParam["mouseKeyId"] = &KeyAssignParam::mouseKeyId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<KeyAssignParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<KeyAssignParam>>(nullptr);
        indexer->setFieldNames({
            {"padKeyId", false},
            {"keyboardModifyKey", false},
            {"keyboardKeyId", false},
            {"mouseModifyKey", false},
            {"mouseKeyId", false},
        });
        return indexer;
    };
    paramsTable["KeyAssignParam_TypeA"] = [tableLoader]() -> auto { return tableLoader(L"KeyAssignParam_TypeA"); };
    paramsTable["KeyAssignParam_TypeB"] = [tableLoader]() -> auto { return tableLoader(L"KeyAssignParam_TypeB"); };
    paramsTable["KeyAssignParam_TypeC"] = [tableLoader]() -> auto { return tableLoader(L"KeyAssignParam_TypeC"); };
}

template<> void ParamTableIndexer<KeyAssignParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,padKeyId,keyboardModifyKey,keyboardKeyId,mouseModifyKey,mouseKeyId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->padKeyId,
            param->keyboardModifyKey,
            param->keyboardKeyId,
            param->mouseModifyKey,
            param->mouseKeyId
        );
    }
    fclose(f);
}

}
