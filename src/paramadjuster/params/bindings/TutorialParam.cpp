#include "../luabindings.h"
#include "../defs/TutorialParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<TutorialParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerTutorialParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["TutorialParam"]; usertype) return;
        auto indexerTutorialParam = state->new_usertype<ParamTableIndexer<TutorialParam>>("TutorialParamTableIndexer");
        indexerTutorialParam["count"] = sol::property(&ParamTableIndexer<TutorialParam>::count);
        indexerTutorialParam["__index"] = &ParamTableIndexer<TutorialParam>::at;
        indexerTutorialParam["id"] = &ParamTableIndexer<TutorialParam>::paramId;
        indexerTutorialParam["get"] = &ParamTableIndexer<TutorialParam>::get;
        indexerTutorialParam["exportToCsv"] = &ParamTableIndexer<TutorialParam>::exportToCsv;
        indexerTutorialParam["importFromCsv"] = &ParamTableIndexer<TutorialParam>::importFromCsv;
        auto utTutorialParam = state->new_usertype<TutorialParam>("TutorialParam");
        utTutorialParam["disableParam_NT"] = sol::property([](TutorialParam &param) -> uint8_t { return param.disableParam_NT; }, [](TutorialParam &param, uint8_t value) { param.disableParam_NT = value; });
        utTutorialParam["menuType"] = &TutorialParam::menuType;
        utTutorialParam["triggerType"] = &TutorialParam::triggerType;
        utTutorialParam["repeatType"] = &TutorialParam::repeatType;
        utTutorialParam["imageId"] = &TutorialParam::imageId;
        utTutorialParam["unlockEventFlagId"] = &TutorialParam::unlockEventFlagId;
        utTutorialParam["textId"] = &TutorialParam::textId;
        utTutorialParam["displayMinTime"] = &TutorialParam::displayMinTime;
        utTutorialParam["displayTime"] = &TutorialParam::displayTime;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<TutorialParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<TutorialParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"menuType", false},
            {"triggerType", false},
            {"repeatType", false},
            {"imageId", false},
            {"unlockEventFlagId", false},
            {"textId", false},
            {"displayMinTime", false},
            {"displayTime", false},
        });
        return indexer;
    };
    paramsTable["TutorialParam"] = [tableLoader]() -> auto { return tableLoader(L"TutorialParam"); };
}

template<> void ParamTableIndexer<TutorialParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,menuType,triggerType,repeatType,imageId,unlockEventFlagId,textId,displayMinTime,displayTime\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%u,%u,%d,%g,%g\n",
            this->paramId(i),
            param->disableParam_NT,
            param->menuType,
            param->triggerType,
            param->repeatType,
            param->imageId,
            param->unlockEventFlagId,
            param->textId,
            param->displayMinTime,
            param->displayTime
        );
    }
    fclose(f);
}

}
