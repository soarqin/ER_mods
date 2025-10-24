#include "../luabindings.h"
#include "../defs/TutorialParam.h"

namespace paramadjuster::params {

void registerTutorialParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["TutorialParam"]; usertype) return;
        auto indexerTutorialParam = state->new_usertype<ParamTableIndexer<TutorialParam>>("TutorialParamTableIndexer");
        indexerTutorialParam["count"] = sol::property(&ParamTableIndexer<TutorialParam>::count);
        indexerTutorialParam["__index"] = &ParamTableIndexer<TutorialParam>::at;
        indexerTutorialParam["id"] = &ParamTableIndexer<TutorialParam>::paramId;
        indexerTutorialParam["get"] = &ParamTableIndexer<TutorialParam>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<TutorialParam>>(gParamMgr.findTable(L"TutorialParam")); };
    paramsTable["TutorialParam"] = tableLoader;
}

}
