#include "../luabindings.h"
#include "../defs/ResistCorrectParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<ResistCorrectParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerResistCorrectParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ResistCorrectParam"]; usertype) return;
        auto indexerResistCorrectParam = state->new_usertype<ParamTableIndexer<ResistCorrectParam>>("ResistCorrectParamTableIndexer");
        indexerResistCorrectParam["count"] = sol::property(&ParamTableIndexer<ResistCorrectParam>::count);
        indexerResistCorrectParam["__index"] = &ParamTableIndexer<ResistCorrectParam>::at;
        indexerResistCorrectParam["id"] = &ParamTableIndexer<ResistCorrectParam>::paramId;
        indexerResistCorrectParam["get"] = &ParamTableIndexer<ResistCorrectParam>::get;
        indexerResistCorrectParam["exportToCsv"] = &ParamTableIndexer<ResistCorrectParam>::exportToCsv;
        indexerResistCorrectParam["importFromCsv"] = &ParamTableIndexer<ResistCorrectParam>::importFromCsv;
        auto utResistCorrectParam = state->new_usertype<ResistCorrectParam>("ResistCorrectParam");
        utResistCorrectParam["addPoint1"] = &ResistCorrectParam::addPoint1;
        utResistCorrectParam["addPoint2"] = &ResistCorrectParam::addPoint2;
        utResistCorrectParam["addPoint3"] = &ResistCorrectParam::addPoint3;
        utResistCorrectParam["addPoint4"] = &ResistCorrectParam::addPoint4;
        utResistCorrectParam["addPoint5"] = &ResistCorrectParam::addPoint5;
        utResistCorrectParam["addRate1"] = &ResistCorrectParam::addRate1;
        utResistCorrectParam["addRate2"] = &ResistCorrectParam::addRate2;
        utResistCorrectParam["addRate3"] = &ResistCorrectParam::addRate3;
        utResistCorrectParam["addRate4"] = &ResistCorrectParam::addRate4;
        utResistCorrectParam["addRate5"] = &ResistCorrectParam::addRate5;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<ResistCorrectParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<ResistCorrectParam>>(nullptr);
        indexer->setFieldNames({
            {"addPoint1", false},
            {"addPoint2", false},
            {"addPoint3", false},
            {"addPoint4", false},
            {"addPoint5", false},
            {"addRate1", false},
            {"addRate2", false},
            {"addRate3", false},
            {"addRate4", false},
            {"addRate5", false},
        });
        return indexer;
    };
    paramsTable["ResistCorrectParam"] = [tableLoader]() -> auto { return tableLoader(L"ResistCorrectParam"); };
}

template<> void ParamTableIndexer<ResistCorrectParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,addPoint1,addPoint2,addPoint3,addPoint4,addPoint5,addRate1,addRate2,addRate3,addRate4,addRate5\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g\n",
            this->paramId(i),
            param->addPoint1,
            param->addPoint2,
            param->addPoint3,
            param->addPoint4,
            param->addPoint5,
            param->addRate1,
            param->addRate2,
            param->addRate3,
            param->addRate4,
            param->addRate5
        );
    }
    fclose(f);
}

}
