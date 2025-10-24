#include "../luabindings.h"
#include "../defs/PostureControlParam_Pro.h"

namespace paramadjuster::params {

void registerPostureControlParam_Pro(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["PostureControlParam_Pro"]; usertype) return;
        auto indexerPostureControlParam_Pro = state->new_usertype<ParamTableIndexer<PostureControlParam_Pro>>("PostureControlParam_ProTableIndexer");
        indexerPostureControlParam_Pro["count"] = sol::property(&ParamTableIndexer<PostureControlParam_Pro>::count);
        indexerPostureControlParam_Pro["__index"] = &ParamTableIndexer<PostureControlParam_Pro>::at;
        indexerPostureControlParam_Pro["id"] = &ParamTableIndexer<PostureControlParam_Pro>::paramId;
        indexerPostureControlParam_Pro["get"] = &ParamTableIndexer<PostureControlParam_Pro>::get;
        auto utPostureControlParam_Pro = state->new_usertype<PostureControlParam_Pro>("PostureControlParam_Pro");
        utPostureControlParam_Pro["a000_rightArmIO"] = &PostureControlParam_Pro::a000_rightArmIO;
        utPostureControlParam_Pro["a000_rightArmFB"] = &PostureControlParam_Pro::a000_rightArmFB;
        utPostureControlParam_Pro["a000_leftArmIO"] = &PostureControlParam_Pro::a000_leftArmIO;
        utPostureControlParam_Pro["a000_leftArmFB"] = &PostureControlParam_Pro::a000_leftArmFB;
        utPostureControlParam_Pro["a002_rightArmIO"] = &PostureControlParam_Pro::a002_rightArmIO;
        utPostureControlParam_Pro["a002_rightArmFB"] = &PostureControlParam_Pro::a002_rightArmFB;
        utPostureControlParam_Pro["a002_leftArmIO"] = &PostureControlParam_Pro::a002_leftArmIO;
        utPostureControlParam_Pro["a002_leftArmFB"] = &PostureControlParam_Pro::a002_leftArmFB;
        utPostureControlParam_Pro["a003_rightArmIO"] = &PostureControlParam_Pro::a003_rightArmIO;
        utPostureControlParam_Pro["a003_rightArmFB"] = &PostureControlParam_Pro::a003_rightArmFB;
        utPostureControlParam_Pro["a003_leftArmIO"] = &PostureControlParam_Pro::a003_leftArmIO;
        utPostureControlParam_Pro["a003_leftArmFB"] = &PostureControlParam_Pro::a003_leftArmFB;
        utPostureControlParam_Pro["a010_rightArmIO"] = &PostureControlParam_Pro::a010_rightArmIO;
        utPostureControlParam_Pro["a010_rightArmFB"] = &PostureControlParam_Pro::a010_rightArmFB;
        utPostureControlParam_Pro["a010_leftArmIO"] = &PostureControlParam_Pro::a010_leftArmIO;
        utPostureControlParam_Pro["a010_leftArmFB"] = &PostureControlParam_Pro::a010_leftArmFB;
        utPostureControlParam_Pro["a012_rightArmIO"] = &PostureControlParam_Pro::a012_rightArmIO;
        utPostureControlParam_Pro["a012_rightArmFB"] = &PostureControlParam_Pro::a012_rightArmFB;
        utPostureControlParam_Pro["a012_leftArmIO"] = &PostureControlParam_Pro::a012_leftArmIO;
        utPostureControlParam_Pro["a012_leftArmFB"] = &PostureControlParam_Pro::a012_leftArmFB;
        utPostureControlParam_Pro["a013_rightArmIO"] = &PostureControlParam_Pro::a013_rightArmIO;
        utPostureControlParam_Pro["a013_rightArmFB"] = &PostureControlParam_Pro::a013_rightArmFB;
        utPostureControlParam_Pro["a013_leftArmIO"] = &PostureControlParam_Pro::a013_leftArmIO;
        utPostureControlParam_Pro["a013_leftArmFB"] = &PostureControlParam_Pro::a013_leftArmFB;
        utPostureControlParam_Pro["a014_rightArmIO"] = &PostureControlParam_Pro::a014_rightArmIO;
        utPostureControlParam_Pro["a014_rightArmFB"] = &PostureControlParam_Pro::a014_rightArmFB;
        utPostureControlParam_Pro["a014_leftArmIO"] = &PostureControlParam_Pro::a014_leftArmIO;
        utPostureControlParam_Pro["a014_leftArmFB"] = &PostureControlParam_Pro::a014_leftArmFB;
        utPostureControlParam_Pro["a015_rightArmIO"] = &PostureControlParam_Pro::a015_rightArmIO;
        utPostureControlParam_Pro["a015_rightArmFB"] = &PostureControlParam_Pro::a015_rightArmFB;
        utPostureControlParam_Pro["a015_leftArmIO"] = &PostureControlParam_Pro::a015_leftArmIO;
        utPostureControlParam_Pro["a015_leftArmFB"] = &PostureControlParam_Pro::a015_leftArmFB;
        utPostureControlParam_Pro["a016_rightArmIO"] = &PostureControlParam_Pro::a016_rightArmIO;
        utPostureControlParam_Pro["a016_rightArmFB"] = &PostureControlParam_Pro::a016_rightArmFB;
        utPostureControlParam_Pro["a016_leftArmIO"] = &PostureControlParam_Pro::a016_leftArmIO;
        utPostureControlParam_Pro["a016_leftArmFB"] = &PostureControlParam_Pro::a016_leftArmFB;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<PostureControlParam_Pro>>(gParamMgr.findTable(L"PostureControlParam_Pro")); };
    paramsTable["PostureControlParam_Pro"] = tableLoader;
}

}
