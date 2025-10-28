#include "../luabindings.h"
#include "../defs/PostureControlParam_WepLeft.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<PostureControlParam_WepLeft>::exportToCsvImpl(const std::wstring &csvPath);

void registerPostureControlParam_WepLeft(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["PostureControlParam_WepLeft"]; usertype) return;
        auto indexerPostureControlParam_WepLeft = state->new_usertype<ParamTableIndexer<PostureControlParam_WepLeft>>("PostureControlParam_WepLeftTableIndexer");
        indexerPostureControlParam_WepLeft["count"] = sol::property(&ParamTableIndexer<PostureControlParam_WepLeft>::count);
        indexerPostureControlParam_WepLeft["__index"] = &ParamTableIndexer<PostureControlParam_WepLeft>::at;
        indexerPostureControlParam_WepLeft["id"] = &ParamTableIndexer<PostureControlParam_WepLeft>::paramId;
        indexerPostureControlParam_WepLeft["get"] = &ParamTableIndexer<PostureControlParam_WepLeft>::get;
        indexerPostureControlParam_WepLeft["exportToCsv"] = &ParamTableIndexer<PostureControlParam_WepLeft>::exportToCsv;
        indexerPostureControlParam_WepLeft["importFromCsv"] = &ParamTableIndexer<PostureControlParam_WepLeft>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<PostureControlParam_WepLeft>>(state, L"PostureControlParam_WepLeft");
        indexer->setFieldNames({
            {"a000_leftArmFB", false},
            {"a000_leftWristFB", false},
            {"a000_leftWristIO", false},
            {"a000_leftWeaponRotation", false},
            {"a002_leftArmFB", false},
            {"a002_leftWristFB", false},
            {"a002_leftWristIO", false},
            {"a002_leftWeaponRotation", false},
            {"a003_leftArmFB", false},
            {"a003_leftWristFB", false},
            {"a003_leftWristIO", false},
            {"a003_leftWeaponRotation", false},
        });
        return indexer;
    };
    paramsTable["PostureControlParam_WepLeft"] = tableLoader;
}

template<> void ParamTableIndexer<PostureControlParam_WepLeft>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,a000_leftArmFB,a000_leftWristFB,a000_leftWristIO,a000_leftWeaponRotation,a002_leftArmFB,a002_leftWristFB,a002_leftWristIO,a002_leftWeaponRotation,a003_leftArmFB,a003_leftWristFB,a003_leftWristIO,a003_leftWeaponRotation\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->a000_leftArmFB,
            param->a000_leftWristFB,
            param->a000_leftWristIO,
            param->a000_leftWeaponRotation,
            param->a002_leftArmFB,
            param->a002_leftWristFB,
            param->a002_leftWristIO,
            param->a002_leftWeaponRotation,
            param->a003_leftArmFB,
            param->a003_leftWristFB,
            param->a003_leftWristIO,
            param->a003_leftWeaponRotation
        );
    }
    fclose(f);
}

}
