#include "../luabindings.h"
#include "../defs/ActionButtonParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<ActionButtonParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerActionButtonParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ActionButtonParam"]; usertype) return;
        auto indexerActionButtonParam = state->new_usertype<ParamTableIndexer<ActionButtonParam>>("ActionButtonParamTableIndexer");
        indexerActionButtonParam["count"] = sol::property(&ParamTableIndexer<ActionButtonParam>::count);
        indexerActionButtonParam["__index"] = &ParamTableIndexer<ActionButtonParam>::at;
        indexerActionButtonParam["id"] = &ParamTableIndexer<ActionButtonParam>::paramId;
        indexerActionButtonParam["get"] = &ParamTableIndexer<ActionButtonParam>::get;
        indexerActionButtonParam["exportToCsv"] = &ParamTableIndexer<ActionButtonParam>::exportToCsv;
        indexerActionButtonParam["importFromCsv"] = &ParamTableIndexer<ActionButtonParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<ActionButtonParam>>(state, L"ActionButtonParam");
        indexer->setFieldNames({
            {"regionType", false},
            {"category", false},
            {"dummyPoly1", false},
            {"dummyPoly2", false},
            {"radius", false},
            {"angle", false},
            {"depth", false},
            {"width", false},
            {"height", false},
            {"baseHeightOffset", false},
            {"angleCheckType", false},
            {"allowAngle", false},
            {"spotDummyPoly", false},
            {"textBoxType", false},
            {"isInvalidForRide", false},
            {"isGrayoutForRide", false},
            {"isInvalidForCrouching", false},
            {"isGrayoutForCrouching", false},
            {"textId", false},
            {"invalidFlag", false},
            {"grayoutFlag", false},
            {"overrideActionButtonIdForRide", false},
            {"execInvalidTime", false},
        });
        return indexer;
    };
    paramsTable["ActionButtonParam"] = tableLoader;
}

template<> void ParamTableIndexer<ActionButtonParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,regionType,category,dummyPoly1,dummyPoly2,radius,angle,depth,width,height,baseHeightOffset,angleCheckType,allowAngle,spotDummyPoly,textBoxType,isInvalidForRide,isGrayoutForRide,isInvalidForCrouching,isGrayoutForCrouching,textId,invalidFlag,grayoutFlag,overrideActionButtonIdForRide,execInvalidTime\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%d,%d,%g,%d,%g,%g,%g,%g,%u,%d,%d,%u,%u,%u,%u,%u,%d,%u,%u,%d,%g\n",
            this->paramId(i),
            param->regionType,
            param->category,
            param->dummyPoly1,
            param->dummyPoly2,
            param->radius,
            param->angle,
            param->depth,
            param->width,
            param->height,
            param->baseHeightOffset,
            param->angleCheckType,
            param->allowAngle,
            param->spotDummyPoly,
            param->textBoxType,
            param->isInvalidForRide,
            param->isGrayoutForRide,
            param->isInvalidForCrouching,
            param->isGrayoutForCrouching,
            param->textId,
            param->invalidFlag,
            param->grayoutFlag,
            param->overrideActionButtonIdForRide,
            param->execInvalidTime
        );
    }
    fclose(f);
}

}
