#include "../luabindings.h"
#include "../defs/ThrowDirectionSfxParam.h"

namespace paramadjuster::params {

void registerThrowDirectionSfxParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ThrowDirectionSfxParam"]; usertype) return;
        auto indexerThrowDirectionSfxParam = state->new_usertype<ParamTableIndexer<ThrowDirectionSfxParam>>("ThrowDirectionSfxParamTableIndexer");
        indexerThrowDirectionSfxParam["count"] = sol::property(&ParamTableIndexer<ThrowDirectionSfxParam>::count);
        indexerThrowDirectionSfxParam["__index"] = &ParamTableIndexer<ThrowDirectionSfxParam>::at;
        indexerThrowDirectionSfxParam["id"] = &ParamTableIndexer<ThrowDirectionSfxParam>::paramId;
        indexerThrowDirectionSfxParam["get"] = &ParamTableIndexer<ThrowDirectionSfxParam>::get;
        auto utThrowDirectionSfxParam = state->new_usertype<ThrowDirectionSfxParam>("ThrowDirectionSfxParam");
        utThrowDirectionSfxParam["sfxId_00"] = &ThrowDirectionSfxParam::sfxId_00;
        utThrowDirectionSfxParam["sfxId_01"] = &ThrowDirectionSfxParam::sfxId_01;
        utThrowDirectionSfxParam["sfxId_02"] = &ThrowDirectionSfxParam::sfxId_02;
        utThrowDirectionSfxParam["sfxId_03"] = &ThrowDirectionSfxParam::sfxId_03;
        utThrowDirectionSfxParam["sfxId_04"] = &ThrowDirectionSfxParam::sfxId_04;
        utThrowDirectionSfxParam["sfxId_05"] = &ThrowDirectionSfxParam::sfxId_05;
        utThrowDirectionSfxParam["sfxId_06"] = &ThrowDirectionSfxParam::sfxId_06;
        utThrowDirectionSfxParam["sfxId_07"] = &ThrowDirectionSfxParam::sfxId_07;
        utThrowDirectionSfxParam["sfxId_08"] = &ThrowDirectionSfxParam::sfxId_08;
        utThrowDirectionSfxParam["sfxId_09"] = &ThrowDirectionSfxParam::sfxId_09;
        utThrowDirectionSfxParam["sfxId_10"] = &ThrowDirectionSfxParam::sfxId_10;
        utThrowDirectionSfxParam["sfxId_11"] = &ThrowDirectionSfxParam::sfxId_11;
        utThrowDirectionSfxParam["sfxId_12"] = &ThrowDirectionSfxParam::sfxId_12;
        utThrowDirectionSfxParam["sfxId_13"] = &ThrowDirectionSfxParam::sfxId_13;
        utThrowDirectionSfxParam["sfxId_14"] = &ThrowDirectionSfxParam::sfxId_14;
        utThrowDirectionSfxParam["sfxId_15"] = &ThrowDirectionSfxParam::sfxId_15;
        utThrowDirectionSfxParam["sfxId_16"] = &ThrowDirectionSfxParam::sfxId_16;
        utThrowDirectionSfxParam["sfxId_17"] = &ThrowDirectionSfxParam::sfxId_17;
        utThrowDirectionSfxParam["sfxId_18"] = &ThrowDirectionSfxParam::sfxId_18;
        utThrowDirectionSfxParam["sfxId_19"] = &ThrowDirectionSfxParam::sfxId_19;
        utThrowDirectionSfxParam["sfxId_20"] = &ThrowDirectionSfxParam::sfxId_20;
        utThrowDirectionSfxParam["sfxId_21"] = &ThrowDirectionSfxParam::sfxId_21;
        utThrowDirectionSfxParam["sfxId_22"] = &ThrowDirectionSfxParam::sfxId_22;
        utThrowDirectionSfxParam["sfxId_23"] = &ThrowDirectionSfxParam::sfxId_23;
        utThrowDirectionSfxParam["sfxId_24"] = &ThrowDirectionSfxParam::sfxId_24;
        utThrowDirectionSfxParam["sfxId_25"] = &ThrowDirectionSfxParam::sfxId_25;
        utThrowDirectionSfxParam["sfxId_26"] = &ThrowDirectionSfxParam::sfxId_26;
        utThrowDirectionSfxParam["sfxId_27"] = &ThrowDirectionSfxParam::sfxId_27;
        utThrowDirectionSfxParam["sfxId_28"] = &ThrowDirectionSfxParam::sfxId_28;
        utThrowDirectionSfxParam["sfxId_29"] = &ThrowDirectionSfxParam::sfxId_29;
        utThrowDirectionSfxParam["sfxId_30"] = &ThrowDirectionSfxParam::sfxId_30;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<ThrowDirectionSfxParam>>(gParamMgr.findTable(L"ThrowDirectionSfxParam")); };
    paramsTable["ThrowDirectionSfxParam"] = tableLoader;
}

}
