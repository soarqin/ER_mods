#include "../luabindings.h"
#include "../defs/PostureControlParam_WepLeft.h"

namespace paramadjuster::params {

void registerPostureControlParam_WepLeft(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["PostureControlParam_WepLeft"]; usertype) return;
        auto indexerPostureControlParam_WepLeft = state->new_usertype<ParamTableIndexer<PostureControlParam_WepLeft>>("PostureControlParam_WepLeftTableIndexer");
        indexerPostureControlParam_WepLeft["count"] = sol::property(&ParamTableIndexer<PostureControlParam_WepLeft>::count);
        indexerPostureControlParam_WepLeft["__index"] = &ParamTableIndexer<PostureControlParam_WepLeft>::at;
        indexerPostureControlParam_WepLeft["id"] = &ParamTableIndexer<PostureControlParam_WepLeft>::paramId;
        indexerPostureControlParam_WepLeft["get"] = &ParamTableIndexer<PostureControlParam_WepLeft>::get;
        auto utPostureControlParam_WepLeft = state->new_usertype<PostureControlParam_WepLeft>("PostureControlParam_WepLeft");
        utPostureControlParam_WepLeft["a000_leftArmFB"] = &PostureControlParam_WepLeft::a000_leftArmFB;
        utPostureControlParam_WepLeft["a000_leftWristFB"] = &PostureControlParam_WepLeft::a000_leftWristFB;
        utPostureControlParam_WepLeft["a000_leftWristIO"] = &PostureControlParam_WepLeft::a000_leftWristIO;
        utPostureControlParam_WepLeft["a000_leftWeaponRotation"] = &PostureControlParam_WepLeft::a000_leftWeaponRotation;
        utPostureControlParam_WepLeft["a002_leftArmFB"] = &PostureControlParam_WepLeft::a002_leftArmFB;
        utPostureControlParam_WepLeft["a002_leftWristFB"] = &PostureControlParam_WepLeft::a002_leftWristFB;
        utPostureControlParam_WepLeft["a002_leftWristIO"] = &PostureControlParam_WepLeft::a002_leftWristIO;
        utPostureControlParam_WepLeft["a002_leftWeaponRotation"] = &PostureControlParam_WepLeft::a002_leftWeaponRotation;
        utPostureControlParam_WepLeft["a003_leftArmFB"] = &PostureControlParam_WepLeft::a003_leftArmFB;
        utPostureControlParam_WepLeft["a003_leftWristFB"] = &PostureControlParam_WepLeft::a003_leftWristFB;
        utPostureControlParam_WepLeft["a003_leftWristIO"] = &PostureControlParam_WepLeft::a003_leftWristIO;
        utPostureControlParam_WepLeft["a003_leftWeaponRotation"] = &PostureControlParam_WepLeft::a003_leftWeaponRotation;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<PostureControlParam_WepLeft>>(gParamMgr.findTable(L"PostureControlParam_WepLeft")); };
    paramsTable["PostureControlParam_WepLeft"] = tableLoader;
}

}
