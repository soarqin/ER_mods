#include "../luabindings.h"
#include "../defs/SwordArtsParam.h"

namespace paramadjuster::params {

void registerSwordArtsParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SwordArtsParam"]; usertype) return;
        auto indexerSwordArtsParam = state->new_usertype<ParamTableIndexer<SwordArtsParam>>("SwordArtsParamTableIndexer");
        indexerSwordArtsParam["count"] = sol::property(&ParamTableIndexer<SwordArtsParam>::count);
        indexerSwordArtsParam["__index"] = &ParamTableIndexer<SwordArtsParam>::at;
        indexerSwordArtsParam["id"] = &ParamTableIndexer<SwordArtsParam>::paramId;
        indexerSwordArtsParam["get"] = &ParamTableIndexer<SwordArtsParam>::get;
        auto utSwordArtsParam = state->new_usertype<SwordArtsParam>("SwordArtsParam");
        utSwordArtsParam["disableParam_NT"] = sol::property([](SwordArtsParam &param) -> uint8_t { return param.disableParam_NT; }, [](SwordArtsParam &param, uint8_t value) { param.disableParam_NT = value; });
        utSwordArtsParam["swordArtsType"] = &SwordArtsParam::swordArtsType;
        utSwordArtsParam["artsSpeedType"] = &SwordArtsParam::artsSpeedType;
        utSwordArtsParam["refStatus"] = &SwordArtsParam::refStatus;
        utSwordArtsParam["isRefRightArts"] = sol::property([](SwordArtsParam &param) -> uint8_t { return param.isRefRightArts; }, [](SwordArtsParam &param, uint8_t value) { param.isRefRightArts = value; });
        utSwordArtsParam["isGrayoutLeftHand"] = sol::property([](SwordArtsParam &param) -> uint8_t { return param.isGrayoutLeftHand; }, [](SwordArtsParam &param, uint8_t value) { param.isGrayoutLeftHand = value; });
        utSwordArtsParam["isGrayoutRightHand"] = sol::property([](SwordArtsParam &param) -> uint8_t { return param.isGrayoutRightHand; }, [](SwordArtsParam &param, uint8_t value) { param.isGrayoutRightHand = value; });
        utSwordArtsParam["isGrayoutBothHand"] = sol::property([](SwordArtsParam &param) -> uint8_t { return param.isGrayoutBothHand; }, [](SwordArtsParam &param, uint8_t value) { param.isGrayoutBothHand = value; });
        utSwordArtsParam["usePoint_L1"] = &SwordArtsParam::usePoint_L1;
        utSwordArtsParam["usePoint_L2"] = &SwordArtsParam::usePoint_L2;
        utSwordArtsParam["usePoint_R1"] = &SwordArtsParam::usePoint_R1;
        utSwordArtsParam["usePoint_R2"] = &SwordArtsParam::usePoint_R2;
        utSwordArtsParam["textId"] = &SwordArtsParam::textId;
        utSwordArtsParam["useMagicPoint_L1"] = &SwordArtsParam::useMagicPoint_L1;
        utSwordArtsParam["useMagicPoint_L2"] = &SwordArtsParam::useMagicPoint_L2;
        utSwordArtsParam["useMagicPoint_R1"] = &SwordArtsParam::useMagicPoint_R1;
        utSwordArtsParam["useMagicPoint_R2"] = &SwordArtsParam::useMagicPoint_R2;
        utSwordArtsParam["swordArtsTypeNew"] = &SwordArtsParam::swordArtsTypeNew;
        utSwordArtsParam["iconId"] = &SwordArtsParam::iconId;
        utSwordArtsParam["aiUsageId"] = &SwordArtsParam::aiUsageId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<SwordArtsParam>>(gParamMgr.findTable(L"SwordArtsParam")); };
    paramsTable["SwordArtsParam"] = tableLoader;
}

}
