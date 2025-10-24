#include "../luabindings.h"
#include "../defs/WepAbsorpPosParam.h"

namespace paramadjuster::params {

void registerWepAbsorpPosParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["WepAbsorpPosParam"]; usertype) return;
        auto indexerWepAbsorpPosParam = state->new_usertype<ParamTableIndexer<WepAbsorpPosParam>>("WepAbsorpPosParamTableIndexer");
        indexerWepAbsorpPosParam["count"] = sol::property(&ParamTableIndexer<WepAbsorpPosParam>::count);
        indexerWepAbsorpPosParam["__index"] = &ParamTableIndexer<WepAbsorpPosParam>::at;
        indexerWepAbsorpPosParam["id"] = &ParamTableIndexer<WepAbsorpPosParam>::paramId;
        indexerWepAbsorpPosParam["get"] = &ParamTableIndexer<WepAbsorpPosParam>::get;
        auto utWepAbsorpPosParam = state->new_usertype<WepAbsorpPosParam>("WepAbsorpPosParam");
        utWepAbsorpPosParam["disableParam_NT"] = sol::property([](WepAbsorpPosParam &param) -> uint8_t { return param.disableParam_NT; }, [](WepAbsorpPosParam &param, uint8_t value) { param.disableParam_NT = value; });
        utWepAbsorpPosParam["hangPosType"] = &WepAbsorpPosParam::hangPosType;
        utWepAbsorpPosParam["isSkeletonBind"] = &WepAbsorpPosParam::isSkeletonBind;
        utWepAbsorpPosParam["right_0"] = &WepAbsorpPosParam::right_0;
        utWepAbsorpPosParam["left_0"] = &WepAbsorpPosParam::left_0;
        utWepAbsorpPosParam["both_0"] = &WepAbsorpPosParam::both_0;
        utWepAbsorpPosParam["leftHang_0"] = &WepAbsorpPosParam::leftHang_0;
        utWepAbsorpPosParam["rightHang_0"] = &WepAbsorpPosParam::rightHang_0;
        utWepAbsorpPosParam["right_1"] = &WepAbsorpPosParam::right_1;
        utWepAbsorpPosParam["left_1"] = &WepAbsorpPosParam::left_1;
        utWepAbsorpPosParam["both_1"] = &WepAbsorpPosParam::both_1;
        utWepAbsorpPosParam["leftHang_1"] = &WepAbsorpPosParam::leftHang_1;
        utWepAbsorpPosParam["rightHang_1"] = &WepAbsorpPosParam::rightHang_1;
        utWepAbsorpPosParam["right_2"] = &WepAbsorpPosParam::right_2;
        utWepAbsorpPosParam["left_2"] = &WepAbsorpPosParam::left_2;
        utWepAbsorpPosParam["both_2"] = &WepAbsorpPosParam::both_2;
        utWepAbsorpPosParam["leftHang_2"] = &WepAbsorpPosParam::leftHang_2;
        utWepAbsorpPosParam["rightHang_2"] = &WepAbsorpPosParam::rightHang_2;
        utWepAbsorpPosParam["right_3"] = &WepAbsorpPosParam::right_3;
        utWepAbsorpPosParam["left_3"] = &WepAbsorpPosParam::left_3;
        utWepAbsorpPosParam["both_3"] = &WepAbsorpPosParam::both_3;
        utWepAbsorpPosParam["leftHang_3"] = &WepAbsorpPosParam::leftHang_3;
        utWepAbsorpPosParam["rightHang_3"] = &WepAbsorpPosParam::rightHang_3;
        utWepAbsorpPosParam["wepInvisibleType_0"] = &WepAbsorpPosParam::wepInvisibleType_0;
        utWepAbsorpPosParam["wepInvisibleType_1"] = &WepAbsorpPosParam::wepInvisibleType_1;
        utWepAbsorpPosParam["wepInvisibleType_2"] = &WepAbsorpPosParam::wepInvisibleType_2;
        utWepAbsorpPosParam["wepInvisibleType_3"] = &WepAbsorpPosParam::wepInvisibleType_3;
        utWepAbsorpPosParam["leftBoth_0"] = &WepAbsorpPosParam::leftBoth_0;
        utWepAbsorpPosParam["leftBoth_1"] = &WepAbsorpPosParam::leftBoth_1;
        utWepAbsorpPosParam["leftBoth_2"] = &WepAbsorpPosParam::leftBoth_2;
        utWepAbsorpPosParam["leftBoth_3"] = &WepAbsorpPosParam::leftBoth_3;
        utWepAbsorpPosParam["dispPosType_right_0"] = &WepAbsorpPosParam::dispPosType_right_0;
        utWepAbsorpPosParam["dispPosType_left_0"] = &WepAbsorpPosParam::dispPosType_left_0;
        utWepAbsorpPosParam["dispPosType_rightBoth_0"] = &WepAbsorpPosParam::dispPosType_rightBoth_0;
        utWepAbsorpPosParam["dispPosType_leftBoth_0"] = &WepAbsorpPosParam::dispPosType_leftBoth_0;
        utWepAbsorpPosParam["dispPosType_rightHang_0"] = &WepAbsorpPosParam::dispPosType_rightHang_0;
        utWepAbsorpPosParam["dispPosType_leftHang_0"] = &WepAbsorpPosParam::dispPosType_leftHang_0;
        utWepAbsorpPosParam["dispPosType_right_1"] = &WepAbsorpPosParam::dispPosType_right_1;
        utWepAbsorpPosParam["dispPosType_left_1"] = &WepAbsorpPosParam::dispPosType_left_1;
        utWepAbsorpPosParam["dispPosType_rightBoth_1"] = &WepAbsorpPosParam::dispPosType_rightBoth_1;
        utWepAbsorpPosParam["dispPosType_leftBoth_1"] = &WepAbsorpPosParam::dispPosType_leftBoth_1;
        utWepAbsorpPosParam["dispPosType_rightHang_1"] = &WepAbsorpPosParam::dispPosType_rightHang_1;
        utWepAbsorpPosParam["dispPosType_leftHang_1"] = &WepAbsorpPosParam::dispPosType_leftHang_1;
        utWepAbsorpPosParam["dispPosType_right_2"] = &WepAbsorpPosParam::dispPosType_right_2;
        utWepAbsorpPosParam["dispPosType_left_2"] = &WepAbsorpPosParam::dispPosType_left_2;
        utWepAbsorpPosParam["dispPosType_rightBoth_2"] = &WepAbsorpPosParam::dispPosType_rightBoth_2;
        utWepAbsorpPosParam["dispPosType_leftBoth_2"] = &WepAbsorpPosParam::dispPosType_leftBoth_2;
        utWepAbsorpPosParam["dispPosType_rightHang_2"] = &WepAbsorpPosParam::dispPosType_rightHang_2;
        utWepAbsorpPosParam["dispPosType_leftHang_2"] = &WepAbsorpPosParam::dispPosType_leftHang_2;
        utWepAbsorpPosParam["dispPosType_right_3"] = &WepAbsorpPosParam::dispPosType_right_3;
        utWepAbsorpPosParam["dispPosType_left_3"] = &WepAbsorpPosParam::dispPosType_left_3;
        utWepAbsorpPosParam["dispPosType_rightBoth_3"] = &WepAbsorpPosParam::dispPosType_rightBoth_3;
        utWepAbsorpPosParam["dispPosType_leftBoth_3"] = &WepAbsorpPosParam::dispPosType_leftBoth_3;
        utWepAbsorpPosParam["dispPosType_rightHang_3"] = &WepAbsorpPosParam::dispPosType_rightHang_3;
        utWepAbsorpPosParam["dispPosType_leftHang_3"] = &WepAbsorpPosParam::dispPosType_leftHang_3;
        utWepAbsorpPosParam["unknown_0x54"] = &WepAbsorpPosParam::unknown_0x54;
        utWepAbsorpPosParam["unknown_0x55"] = &WepAbsorpPosParam::unknown_0x55;
        utWepAbsorpPosParam["unknown_0x56"] = &WepAbsorpPosParam::unknown_0x56;
        utWepAbsorpPosParam["unknown_0x57"] = &WepAbsorpPosParam::unknown_0x57;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<WepAbsorpPosParam>>(gParamMgr.findTable(L"WepAbsorpPosParam")); };
    paramsTable["WepAbsorpPosParam"] = tableLoader;
}

}
