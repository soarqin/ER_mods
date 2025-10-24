#include "../luabindings.h"
#include "../defs/ResistCorrectParam.h"

namespace paramadjuster::params {

void registerResistCorrectParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ResistCorrectParam"]; usertype) return;
        auto indexerResistCorrectParam = state->new_usertype<ParamTableIndexer<ResistCorrectParam>>("ResistCorrectParamTableIndexer");
        indexerResistCorrectParam["count"] = sol::property(&ParamTableIndexer<ResistCorrectParam>::count);
        indexerResistCorrectParam["__index"] = &ParamTableIndexer<ResistCorrectParam>::at;
        indexerResistCorrectParam["id"] = &ParamTableIndexer<ResistCorrectParam>::paramId;
        indexerResistCorrectParam["get"] = &ParamTableIndexer<ResistCorrectParam>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<ResistCorrectParam>>(gParamMgr.findTable(L"ResistCorrectParam")); };
    paramsTable["ResistCorrectParam"] = tableLoader;
}

}
