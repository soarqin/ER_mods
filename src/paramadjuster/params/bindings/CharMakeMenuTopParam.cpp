#include "../luabindings.h"
#include "../defs/CharMakeMenuTopParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<CharMakeMenuTopParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerCharMakeMenuTopParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["CharMakeMenuTopParam"]; usertype) return;
        auto indexerCharMakeMenuTopParam = state->new_usertype<ParamTableIndexer<CharMakeMenuTopParam>>("CharMakeMenuTopParamTableIndexer");
        indexerCharMakeMenuTopParam["count"] = sol::property(&ParamTableIndexer<CharMakeMenuTopParam>::count);
        indexerCharMakeMenuTopParam["__index"] = &ParamTableIndexer<CharMakeMenuTopParam>::at;
        indexerCharMakeMenuTopParam["id"] = &ParamTableIndexer<CharMakeMenuTopParam>::paramId;
        indexerCharMakeMenuTopParam["get"] = &ParamTableIndexer<CharMakeMenuTopParam>::get;
        indexerCharMakeMenuTopParam["exportToCsv"] = &ParamTableIndexer<CharMakeMenuTopParam>::exportToCsv;
        indexerCharMakeMenuTopParam["importFromCsv"] = &ParamTableIndexer<CharMakeMenuTopParam>::importFromCsv;
        auto utCharMakeMenuTopParam = state->new_usertype<CharMakeMenuTopParam>("CharMakeMenuTopParam");
        utCharMakeMenuTopParam["commandType"] = &CharMakeMenuTopParam::commandType;
        utCharMakeMenuTopParam["captionId"] = &CharMakeMenuTopParam::captionId;
        utCharMakeMenuTopParam["faceParamId"] = &CharMakeMenuTopParam::faceParamId;
        utCharMakeMenuTopParam["tableId"] = &CharMakeMenuTopParam::tableId;
        utCharMakeMenuTopParam["viewCondition"] = &CharMakeMenuTopParam::viewCondition;
        utCharMakeMenuTopParam["previewMode"] = &CharMakeMenuTopParam::previewMode;
        utCharMakeMenuTopParam["tableId2"] = &CharMakeMenuTopParam::tableId2;
        utCharMakeMenuTopParam["refFaceParamId"] = &CharMakeMenuTopParam::refFaceParamId;
        utCharMakeMenuTopParam["refTextId"] = &CharMakeMenuTopParam::refTextId;
        utCharMakeMenuTopParam["helpTextId"] = &CharMakeMenuTopParam::helpTextId;
        utCharMakeMenuTopParam["unlockEventFlagId"] = &CharMakeMenuTopParam::unlockEventFlagId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<CharMakeMenuTopParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<CharMakeMenuTopParam>>(nullptr);
        indexer->setFieldNames({
            {"commandType", false},
            {"captionId", false},
            {"faceParamId", false},
            {"tableId", false},
            {"viewCondition", false},
            {"previewMode", false},
            {"tableId2", false},
            {"refFaceParamId", false},
            {"refTextId", false},
            {"helpTextId", false},
            {"unlockEventFlagId", false},
        });
        return indexer;
    };
    paramsTable["CharMakeMenuTopParam"] = [tableLoader]() -> auto { return tableLoader(L"CharMakeMenuTopParam"); };
}

template<> void ParamTableIndexer<CharMakeMenuTopParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,commandType,captionId,faceParamId,tableId,viewCondition,previewMode,tableId2,refFaceParamId,refTextId,helpTextId,unlockEventFlagId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u\n",
            this->paramId(i),
            param->commandType,
            param->captionId,
            param->faceParamId,
            param->tableId,
            param->viewCondition,
            param->previewMode,
            param->tableId2,
            param->refFaceParamId,
            param->refTextId,
            param->helpTextId,
            param->unlockEventFlagId
        );
    }
    fclose(f);
}

}
