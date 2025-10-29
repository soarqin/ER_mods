#include "../luabindings.h"
#include "../defs/WhiteSignCoolTimeParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<WhiteSignCoolTimeParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerWhiteSignCoolTimeParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WhiteSignCoolTimeParam"]; usertype) return;
        auto indexerWhiteSignCoolTimeParam = state->new_usertype<ParamTableIndexer<WhiteSignCoolTimeParam>>("WhiteSignCoolTimeParamTableIndexer");
        indexerWhiteSignCoolTimeParam["count"] = sol::property(&ParamTableIndexer<WhiteSignCoolTimeParam>::count);
        indexerWhiteSignCoolTimeParam["__index"] = &ParamTableIndexer<WhiteSignCoolTimeParam>::at;
        indexerWhiteSignCoolTimeParam["id"] = &ParamTableIndexer<WhiteSignCoolTimeParam>::paramId;
        indexerWhiteSignCoolTimeParam["get"] = &ParamTableIndexer<WhiteSignCoolTimeParam>::get;
        indexerWhiteSignCoolTimeParam["exportToCsv"] = &ParamTableIndexer<WhiteSignCoolTimeParam>::exportToCsv;
        indexerWhiteSignCoolTimeParam["importFromCsv"] = &ParamTableIndexer<WhiteSignCoolTimeParam>::importFromCsv;
        auto utWhiteSignCoolTimeParam = state->new_usertype<WhiteSignCoolTimeParam>("WhiteSignCoolTimeParam");
        utWhiteSignCoolTimeParam["limitationTime_Normal"] = &WhiteSignCoolTimeParam::limitationTime_Normal;
        utWhiteSignCoolTimeParam["limitationTime_NormalDriedFinger"] = &WhiteSignCoolTimeParam::limitationTime_NormalDriedFinger;
        utWhiteSignCoolTimeParam["limitationTime_Guardian"] = &WhiteSignCoolTimeParam::limitationTime_Guardian;
        utWhiteSignCoolTimeParam["limitationTime_GuardianDriedFinger"] = &WhiteSignCoolTimeParam::limitationTime_GuardianDriedFinger;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<WhiteSignCoolTimeParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<WhiteSignCoolTimeParam>>(nullptr);
        indexer->setFieldNames({
            {"limitationTime_Normal", false},
            {"limitationTime_NormalDriedFinger", false},
            {"limitationTime_Guardian", false},
            {"limitationTime_GuardianDriedFinger", false},
        });
        return indexer;
    };
    paramsTable["WhiteSignCoolTimeParam"] = [tableLoader]() -> auto { return tableLoader(L"WhiteSignCoolTimeParam"); };
}

template<> void ParamTableIndexer<WhiteSignCoolTimeParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,limitationTime_Normal,limitationTime_NormalDriedFinger,limitationTime_Guardian,limitationTime_GuardianDriedFinger\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g\n",
            this->paramId(i),
            param->limitationTime_Normal,
            param->limitationTime_NormalDriedFinger,
            param->limitationTime_Guardian,
            param->limitationTime_GuardianDriedFinger
        );
    }
    fclose(f);
}

}
