#include "../luabindings.h"
#include "../defs/ActionButtonParam.h"

namespace paramadjuster::params {

void registerActionButtonParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ActionButtonParam"]; usertype) return;
        auto indexerActionButtonParam = state->new_usertype<ParamTableIndexer<ActionButtonParam>>("ActionButtonParamTableIndexer");
        indexerActionButtonParam["count"] = sol::property(&ParamTableIndexer<ActionButtonParam>::count);
        indexerActionButtonParam["__index"] = &ParamTableIndexer<ActionButtonParam>::at;
        indexerActionButtonParam["id"] = &ParamTableIndexer<ActionButtonParam>::paramId;
        indexerActionButtonParam["get"] = &ParamTableIndexer<ActionButtonParam>::get;
        auto utActionButtonParam = state->new_usertype<ActionButtonParam>("ActionButtonParam");
        utActionButtonParam["regionType"] = &ActionButtonParam::regionType;
        utActionButtonParam["category"] = &ActionButtonParam::category;
        utActionButtonParam["dummyPoly1"] = &ActionButtonParam::dummyPoly1;
        utActionButtonParam["dummyPoly2"] = &ActionButtonParam::dummyPoly2;
        utActionButtonParam["radius"] = &ActionButtonParam::radius;
        utActionButtonParam["angle"] = &ActionButtonParam::angle;
        utActionButtonParam["depth"] = &ActionButtonParam::depth;
        utActionButtonParam["width"] = &ActionButtonParam::width;
        utActionButtonParam["height"] = &ActionButtonParam::height;
        utActionButtonParam["baseHeightOffset"] = &ActionButtonParam::baseHeightOffset;
        utActionButtonParam["angleCheckType"] = &ActionButtonParam::angleCheckType;
        utActionButtonParam["allowAngle"] = &ActionButtonParam::allowAngle;
        utActionButtonParam["spotDummyPoly"] = &ActionButtonParam::spotDummyPoly;
        utActionButtonParam["textBoxType"] = &ActionButtonParam::textBoxType;
        utActionButtonParam["isInvalidForRide"] = sol::property([](ActionButtonParam &param) -> uint8_t { return param.isInvalidForRide; }, [](ActionButtonParam &param, uint8_t value) { param.isInvalidForRide = value; });
        utActionButtonParam["isGrayoutForRide"] = sol::property([](ActionButtonParam &param) -> uint8_t { return param.isGrayoutForRide; }, [](ActionButtonParam &param, uint8_t value) { param.isGrayoutForRide = value; });
        utActionButtonParam["isInvalidForCrouching"] = sol::property([](ActionButtonParam &param) -> uint8_t { return param.isInvalidForCrouching; }, [](ActionButtonParam &param, uint8_t value) { param.isInvalidForCrouching = value; });
        utActionButtonParam["isGrayoutForCrouching"] = sol::property([](ActionButtonParam &param) -> uint8_t { return param.isGrayoutForCrouching; }, [](ActionButtonParam &param, uint8_t value) { param.isGrayoutForCrouching = value; });
        utActionButtonParam["textId"] = &ActionButtonParam::textId;
        utActionButtonParam["invalidFlag"] = &ActionButtonParam::invalidFlag;
        utActionButtonParam["grayoutFlag"] = &ActionButtonParam::grayoutFlag;
        utActionButtonParam["overrideActionButtonIdForRide"] = &ActionButtonParam::overrideActionButtonIdForRide;
        utActionButtonParam["execInvalidTime"] = &ActionButtonParam::execInvalidTime;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<ActionButtonParam>>(gParamMgr.findTable(L"ActionButtonParam")); };
    paramsTable["ActionButtonParam"] = tableLoader;
}

}
