#include "../luabindings.h"
#include "../defs/PostureControlParam_WepRight.h"

namespace paramadjuster::params {

void registerPostureControlParam_WepRight(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["PostureControlParam_WepRight"]; usertype) return;
        auto indexerPostureControlParam_WepRight = state->new_usertype<ParamTableIndexer<PostureControlParam_WepRight>>("PostureControlParam_WepRightTableIndexer");
        indexerPostureControlParam_WepRight["count"] = sol::property(&ParamTableIndexer<PostureControlParam_WepRight>::count);
        indexerPostureControlParam_WepRight["__index"] = &ParamTableIndexer<PostureControlParam_WepRight>::at;
        indexerPostureControlParam_WepRight["id"] = &ParamTableIndexer<PostureControlParam_WepRight>::paramId;
        indexerPostureControlParam_WepRight["get"] = &ParamTableIndexer<PostureControlParam_WepRight>::get;
        auto utPostureControlParam_WepRight = state->new_usertype<PostureControlParam_WepRight>("PostureControlParam_WepRight");
        utPostureControlParam_WepRight["a000_rightArmFB"] = &PostureControlParam_WepRight::a000_rightArmFB;
        utPostureControlParam_WepRight["a000_rightWristFB"] = &PostureControlParam_WepRight::a000_rightWristFB;
        utPostureControlParam_WepRight["a000_rightWristIO"] = &PostureControlParam_WepRight::a000_rightWristIO;
        utPostureControlParam_WepRight["a000_rightWeaponRotation"] = &PostureControlParam_WepRight::a000_rightWeaponRotation;
        utPostureControlParam_WepRight["a000_leftArmFB"] = &PostureControlParam_WepRight::a000_leftArmFB;
        utPostureControlParam_WepRight["a000_leftWristFB"] = &PostureControlParam_WepRight::a000_leftWristFB;
        utPostureControlParam_WepRight["a000_leftWristIO"] = &PostureControlParam_WepRight::a000_leftWristIO;
        utPostureControlParam_WepRight["a000_lefttWeaponRotation"] = &PostureControlParam_WepRight::a000_lefttWeaponRotation;
        utPostureControlParam_WepRight["a002_rightArmFB"] = &PostureControlParam_WepRight::a002_rightArmFB;
        utPostureControlParam_WepRight["a002_rightWristFB"] = &PostureControlParam_WepRight::a002_rightWristFB;
        utPostureControlParam_WepRight["a002_rightWristIO"] = &PostureControlParam_WepRight::a002_rightWristIO;
        utPostureControlParam_WepRight["a002_rightWeaponRotation"] = &PostureControlParam_WepRight::a002_rightWeaponRotation;
        utPostureControlParam_WepRight["a002_leftArmFB"] = &PostureControlParam_WepRight::a002_leftArmFB;
        utPostureControlParam_WepRight["a002_leftWristFB"] = &PostureControlParam_WepRight::a002_leftWristFB;
        utPostureControlParam_WepRight["a002_leftWristIO"] = &PostureControlParam_WepRight::a002_leftWristIO;
        utPostureControlParam_WepRight["a002_lefttWeaponRotation"] = &PostureControlParam_WepRight::a002_lefttWeaponRotation;
        utPostureControlParam_WepRight["a003_rightArmFB"] = &PostureControlParam_WepRight::a003_rightArmFB;
        utPostureControlParam_WepRight["a003_rightWristFB"] = &PostureControlParam_WepRight::a003_rightWristFB;
        utPostureControlParam_WepRight["a003_rightWristIO"] = &PostureControlParam_WepRight::a003_rightWristIO;
        utPostureControlParam_WepRight["a003_rightWeaponRotation"] = &PostureControlParam_WepRight::a003_rightWeaponRotation;
        utPostureControlParam_WepRight["a003_leftArmFB"] = &PostureControlParam_WepRight::a003_leftArmFB;
        utPostureControlParam_WepRight["a003_leftWristFB"] = &PostureControlParam_WepRight::a003_leftWristFB;
        utPostureControlParam_WepRight["a003_leftWristIO"] = &PostureControlParam_WepRight::a003_leftWristIO;
        utPostureControlParam_WepRight["a003_lefttWeaponRotation"] = &PostureControlParam_WepRight::a003_lefttWeaponRotation;
        utPostureControlParam_WepRight["a010_rightArmFB"] = &PostureControlParam_WepRight::a010_rightArmFB;
        utPostureControlParam_WepRight["a010_rightWristFB"] = &PostureControlParam_WepRight::a010_rightWristFB;
        utPostureControlParam_WepRight["a010_rightWristIO"] = &PostureControlParam_WepRight::a010_rightWristIO;
        utPostureControlParam_WepRight["a010_rightWeaponRotation"] = &PostureControlParam_WepRight::a010_rightWeaponRotation;
        utPostureControlParam_WepRight["a010_leftArmFB"] = &PostureControlParam_WepRight::a010_leftArmFB;
        utPostureControlParam_WepRight["a010_leftWristFB"] = &PostureControlParam_WepRight::a010_leftWristFB;
        utPostureControlParam_WepRight["a010_leftWristIO"] = &PostureControlParam_WepRight::a010_leftWristIO;
        utPostureControlParam_WepRight["a010_lefttWeaponRotation"] = &PostureControlParam_WepRight::a010_lefttWeaponRotation;
        utPostureControlParam_WepRight["a012_rightArmFB"] = &PostureControlParam_WepRight::a012_rightArmFB;
        utPostureControlParam_WepRight["a012_rightWristFB"] = &PostureControlParam_WepRight::a012_rightWristFB;
        utPostureControlParam_WepRight["a012_rightWristIO"] = &PostureControlParam_WepRight::a012_rightWristIO;
        utPostureControlParam_WepRight["a012_rightWeaponRotation"] = &PostureControlParam_WepRight::a012_rightWeaponRotation;
        utPostureControlParam_WepRight["a012_leftArmFB"] = &PostureControlParam_WepRight::a012_leftArmFB;
        utPostureControlParam_WepRight["a012_leftWristFB"] = &PostureControlParam_WepRight::a012_leftWristFB;
        utPostureControlParam_WepRight["a012_leftWristIO"] = &PostureControlParam_WepRight::a012_leftWristIO;
        utPostureControlParam_WepRight["a012_lefttWeaponRotation"] = &PostureControlParam_WepRight::a012_lefttWeaponRotation;
        utPostureControlParam_WepRight["a013_rightArmFB"] = &PostureControlParam_WepRight::a013_rightArmFB;
        utPostureControlParam_WepRight["a013_rightWristFB"] = &PostureControlParam_WepRight::a013_rightWristFB;
        utPostureControlParam_WepRight["a013_rightWristIO"] = &PostureControlParam_WepRight::a013_rightWristIO;
        utPostureControlParam_WepRight["a013_rightWeaponRotation"] = &PostureControlParam_WepRight::a013_rightWeaponRotation;
        utPostureControlParam_WepRight["a013_leftArmFB"] = &PostureControlParam_WepRight::a013_leftArmFB;
        utPostureControlParam_WepRight["a013_leftWristFB"] = &PostureControlParam_WepRight::a013_leftWristFB;
        utPostureControlParam_WepRight["a013_leftWristIO"] = &PostureControlParam_WepRight::a013_leftWristIO;
        utPostureControlParam_WepRight["a013_lefttWeaponRotation"] = &PostureControlParam_WepRight::a013_lefttWeaponRotation;
        utPostureControlParam_WepRight["a014_rightArmFB"] = &PostureControlParam_WepRight::a014_rightArmFB;
        utPostureControlParam_WepRight["a014_rightWristFB"] = &PostureControlParam_WepRight::a014_rightWristFB;
        utPostureControlParam_WepRight["a014_rightWristIO"] = &PostureControlParam_WepRight::a014_rightWristIO;
        utPostureControlParam_WepRight["a014_rightWeaponRotation"] = &PostureControlParam_WepRight::a014_rightWeaponRotation;
        utPostureControlParam_WepRight["a014_leftArmFB"] = &PostureControlParam_WepRight::a014_leftArmFB;
        utPostureControlParam_WepRight["a014_leftWristFB"] = &PostureControlParam_WepRight::a014_leftWristFB;
        utPostureControlParam_WepRight["a014_leftWristIO"] = &PostureControlParam_WepRight::a014_leftWristIO;
        utPostureControlParam_WepRight["a014_lefttWeaponRotation"] = &PostureControlParam_WepRight::a014_lefttWeaponRotation;
        utPostureControlParam_WepRight["a015_rightArmFB"] = &PostureControlParam_WepRight::a015_rightArmFB;
        utPostureControlParam_WepRight["a015_rightWristFB"] = &PostureControlParam_WepRight::a015_rightWristFB;
        utPostureControlParam_WepRight["a015_rightWristIO"] = &PostureControlParam_WepRight::a015_rightWristIO;
        utPostureControlParam_WepRight["a015_rightWeaponRotation"] = &PostureControlParam_WepRight::a015_rightWeaponRotation;
        utPostureControlParam_WepRight["a015_leftArmFB"] = &PostureControlParam_WepRight::a015_leftArmFB;
        utPostureControlParam_WepRight["a015_leftWristFB"] = &PostureControlParam_WepRight::a015_leftWristFB;
        utPostureControlParam_WepRight["a015_leftWristIO"] = &PostureControlParam_WepRight::a015_leftWristIO;
        utPostureControlParam_WepRight["a015_lefttWeaponRotation"] = &PostureControlParam_WepRight::a015_lefttWeaponRotation;
        utPostureControlParam_WepRight["a016_rightArmFB"] = &PostureControlParam_WepRight::a016_rightArmFB;
        utPostureControlParam_WepRight["a016_rightWristFB"] = &PostureControlParam_WepRight::a016_rightWristFB;
        utPostureControlParam_WepRight["a016_rightWristIO"] = &PostureControlParam_WepRight::a016_rightWristIO;
        utPostureControlParam_WepRight["a016_rightWeaponRotation"] = &PostureControlParam_WepRight::a016_rightWeaponRotation;
        utPostureControlParam_WepRight["a016_leftArmFB"] = &PostureControlParam_WepRight::a016_leftArmFB;
        utPostureControlParam_WepRight["a016_leftWristFB"] = &PostureControlParam_WepRight::a016_leftWristFB;
        utPostureControlParam_WepRight["a016_leftWristIO"] = &PostureControlParam_WepRight::a016_leftWristIO;
        utPostureControlParam_WepRight["a016_lefttWeaponRotation"] = &PostureControlParam_WepRight::a016_lefttWeaponRotation;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<PostureControlParam_WepRight>>(gParamMgr.findTable(L"PostureControlParam_WepRight")); };
    paramsTable["PostureControlParam_WepRight"] = tableLoader;
}

}
