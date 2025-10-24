#include "../luabindings.h"
#include "../defs/PostureControlParam_Gender.h"

namespace paramadjuster::params {

void registerPostureControlParam_Gender(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["PostureControlParam_Gender"]; usertype) return;
        auto indexerPostureControlParam_Gender = state->new_usertype<ParamTableIndexer<PostureControlParam_Gender>>("PostureControlParam_GenderTableIndexer");
        indexerPostureControlParam_Gender["count"] = sol::property(&ParamTableIndexer<PostureControlParam_Gender>::count);
        indexerPostureControlParam_Gender["__index"] = &ParamTableIndexer<PostureControlParam_Gender>::at;
        indexerPostureControlParam_Gender["id"] = &ParamTableIndexer<PostureControlParam_Gender>::paramId;
        indexerPostureControlParam_Gender["get"] = &ParamTableIndexer<PostureControlParam_Gender>::get;
        auto utPostureControlParam_Gender = state->new_usertype<PostureControlParam_Gender>("PostureControlParam_Gender");
        utPostureControlParam_Gender["a000_rightElbowIO"] = &PostureControlParam_Gender::a000_rightElbowIO;
        utPostureControlParam_Gender["a000_leftElbowIO"] = &PostureControlParam_Gender::a000_leftElbowIO;
        utPostureControlParam_Gender["a000_bothLegsIO"] = &PostureControlParam_Gender::a000_bothLegsIO;
        utPostureControlParam_Gender["a002_rightElbowIO"] = &PostureControlParam_Gender::a002_rightElbowIO;
        utPostureControlParam_Gender["a002_leftElbowIO"] = &PostureControlParam_Gender::a002_leftElbowIO;
        utPostureControlParam_Gender["a002_bothLegsIO"] = &PostureControlParam_Gender::a002_bothLegsIO;
        utPostureControlParam_Gender["a003_rightElbowIO"] = &PostureControlParam_Gender::a003_rightElbowIO;
        utPostureControlParam_Gender["a003_leftElbowIO"] = &PostureControlParam_Gender::a003_leftElbowIO;
        utPostureControlParam_Gender["a003_bothLegsIO"] = &PostureControlParam_Gender::a003_bothLegsIO;
        utPostureControlParam_Gender["a010_rightElbowIO"] = &PostureControlParam_Gender::a010_rightElbowIO;
        utPostureControlParam_Gender["a010_leftElbowIO"] = &PostureControlParam_Gender::a010_leftElbowIO;
        utPostureControlParam_Gender["a010_bothLegsIO"] = &PostureControlParam_Gender::a010_bothLegsIO;
        utPostureControlParam_Gender["a012_rightElbowIO"] = &PostureControlParam_Gender::a012_rightElbowIO;
        utPostureControlParam_Gender["a012_leftElbowIO"] = &PostureControlParam_Gender::a012_leftElbowIO;
        utPostureControlParam_Gender["a012_bothLegsIO"] = &PostureControlParam_Gender::a012_bothLegsIO;
        utPostureControlParam_Gender["a013_rightElbowIO"] = &PostureControlParam_Gender::a013_rightElbowIO;
        utPostureControlParam_Gender["a013_leftElbowIO"] = &PostureControlParam_Gender::a013_leftElbowIO;
        utPostureControlParam_Gender["a013_bothLegsIO"] = &PostureControlParam_Gender::a013_bothLegsIO;
        utPostureControlParam_Gender["a014_rightElbowIO"] = &PostureControlParam_Gender::a014_rightElbowIO;
        utPostureControlParam_Gender["a014_leftElbowIO"] = &PostureControlParam_Gender::a014_leftElbowIO;
        utPostureControlParam_Gender["a014_bothLegsIO"] = &PostureControlParam_Gender::a014_bothLegsIO;
        utPostureControlParam_Gender["a015_rightElbowIO"] = &PostureControlParam_Gender::a015_rightElbowIO;
        utPostureControlParam_Gender["a015_leftElbowIO"] = &PostureControlParam_Gender::a015_leftElbowIO;
        utPostureControlParam_Gender["a015_bothLegsIO"] = &PostureControlParam_Gender::a015_bothLegsIO;
        utPostureControlParam_Gender["a016_rightElbowIO"] = &PostureControlParam_Gender::a016_rightElbowIO;
        utPostureControlParam_Gender["a016_leftElbowIO"] = &PostureControlParam_Gender::a016_leftElbowIO;
        utPostureControlParam_Gender["a016_bothLegsIO"] = &PostureControlParam_Gender::a016_bothLegsIO;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<PostureControlParam_Gender>>(gParamMgr.findTable(L"PostureControlParam_Gender")); };
    paramsTable["PostureControlParam_Gender"] = tableLoader;
}

}
