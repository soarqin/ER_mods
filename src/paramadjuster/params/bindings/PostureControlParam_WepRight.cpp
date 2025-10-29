#include "../luabindings.h"
#include "../defs/PostureControlParam_WepRight.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<PostureControlParam_WepRight>::exportToCsvImpl(const std::wstring &csvPath);

void registerPostureControlParam_WepRight(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["PostureControlParam_WepRight"]; usertype) return;
        auto indexerPostureControlParam_WepRight = state->new_usertype<ParamTableIndexer<PostureControlParam_WepRight>>("PostureControlParam_WepRightTableIndexer");
        indexerPostureControlParam_WepRight["count"] = sol::property(&ParamTableIndexer<PostureControlParam_WepRight>::count);
        indexerPostureControlParam_WepRight["__index"] = &ParamTableIndexer<PostureControlParam_WepRight>::at;
        indexerPostureControlParam_WepRight["id"] = &ParamTableIndexer<PostureControlParam_WepRight>::paramId;
        indexerPostureControlParam_WepRight["get"] = &ParamTableIndexer<PostureControlParam_WepRight>::get;
        indexerPostureControlParam_WepRight["exportToCsv"] = &ParamTableIndexer<PostureControlParam_WepRight>::exportToCsv;
        indexerPostureControlParam_WepRight["importFromCsv"] = &ParamTableIndexer<PostureControlParam_WepRight>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<PostureControlParam_WepRight>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<PostureControlParam_WepRight>>(nullptr);
        indexer->setFieldNames({
            {"a000_rightArmFB", false},
            {"a000_rightWristFB", false},
            {"a000_rightWristIO", false},
            {"a000_rightWeaponRotation", false},
            {"a000_leftArmFB", false},
            {"a000_leftWristFB", false},
            {"a000_leftWristIO", false},
            {"a000_lefttWeaponRotation", false},
            {"a002_rightArmFB", false},
            {"a002_rightWristFB", false},
            {"a002_rightWristIO", false},
            {"a002_rightWeaponRotation", false},
            {"a002_leftArmFB", false},
            {"a002_leftWristFB", false},
            {"a002_leftWristIO", false},
            {"a002_lefttWeaponRotation", false},
            {"a003_rightArmFB", false},
            {"a003_rightWristFB", false},
            {"a003_rightWristIO", false},
            {"a003_rightWeaponRotation", false},
            {"a003_leftArmFB", false},
            {"a003_leftWristFB", false},
            {"a003_leftWristIO", false},
            {"a003_lefttWeaponRotation", false},
            {"a010_rightArmFB", false},
            {"a010_rightWristFB", false},
            {"a010_rightWristIO", false},
            {"a010_rightWeaponRotation", false},
            {"a010_leftArmFB", false},
            {"a010_leftWristFB", false},
            {"a010_leftWristIO", false},
            {"a010_lefttWeaponRotation", false},
            {"a012_rightArmFB", false},
            {"a012_rightWristFB", false},
            {"a012_rightWristIO", false},
            {"a012_rightWeaponRotation", false},
            {"a012_leftArmFB", false},
            {"a012_leftWristFB", false},
            {"a012_leftWristIO", false},
            {"a012_lefttWeaponRotation", false},
            {"a013_rightArmFB", false},
            {"a013_rightWristFB", false},
            {"a013_rightWristIO", false},
            {"a013_rightWeaponRotation", false},
            {"a013_leftArmFB", false},
            {"a013_leftWristFB", false},
            {"a013_leftWristIO", false},
            {"a013_lefttWeaponRotation", false},
            {"a014_rightArmFB", false},
            {"a014_rightWristFB", false},
            {"a014_rightWristIO", false},
            {"a014_rightWeaponRotation", false},
            {"a014_leftArmFB", false},
            {"a014_leftWristFB", false},
            {"a014_leftWristIO", false},
            {"a014_lefttWeaponRotation", false},
            {"a015_rightArmFB", false},
            {"a015_rightWristFB", false},
            {"a015_rightWristIO", false},
            {"a015_rightWeaponRotation", false},
            {"a015_leftArmFB", false},
            {"a015_leftWristFB", false},
            {"a015_leftWristIO", false},
            {"a015_lefttWeaponRotation", false},
            {"a016_rightArmFB", false},
            {"a016_rightWristFB", false},
            {"a016_rightWristIO", false},
            {"a016_rightWeaponRotation", false},
            {"a016_leftArmFB", false},
            {"a016_leftWristFB", false},
            {"a016_leftWristIO", false},
            {"a016_lefttWeaponRotation", false},
        });
        return indexer;
    };
    paramsTable["PostureControlParam_WepRight"] = [tableLoader]() -> auto { return tableLoader(L"PostureControlParam_WepRight"); };
}

template<> void ParamTableIndexer<PostureControlParam_WepRight>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,a000_rightArmFB,a000_rightWristFB,a000_rightWristIO,a000_rightWeaponRotation,a000_leftArmFB,a000_leftWristFB,a000_leftWristIO,a000_lefttWeaponRotation,a002_rightArmFB,a002_rightWristFB,a002_rightWristIO,a002_rightWeaponRotation,a002_leftArmFB,a002_leftWristFB,a002_leftWristIO,a002_lefttWeaponRotation,a003_rightArmFB,a003_rightWristFB,a003_rightWristIO,a003_rightWeaponRotation,a003_leftArmFB,a003_leftWristFB,a003_leftWristIO,a003_lefttWeaponRotation,a010_rightArmFB,a010_rightWristFB,a010_rightWristIO,a010_rightWeaponRotation,a010_leftArmFB,a010_leftWristFB,a010_leftWristIO,a010_lefttWeaponRotation,a012_rightArmFB,a012_rightWristFB,a012_rightWristIO,a012_rightWeaponRotation,a012_leftArmFB,a012_leftWristFB,a012_leftWristIO,a012_lefttWeaponRotation,a013_rightArmFB,a013_rightWristFB,a013_rightWristIO,a013_rightWeaponRotation,a013_leftArmFB,a013_leftWristFB,a013_leftWristIO,a013_lefttWeaponRotation,a014_rightArmFB,a014_rightWristFB,a014_rightWristIO,a014_rightWeaponRotation,a014_leftArmFB,a014_leftWristFB,a014_leftWristIO,a014_lefttWeaponRotation,a015_rightArmFB,a015_rightWristFB,a015_rightWristIO,a015_rightWeaponRotation,a015_leftArmFB,a015_leftWristFB,a015_leftWristIO,a015_lefttWeaponRotation,a016_rightArmFB,a016_rightWristFB,a016_rightWristIO,a016_rightWeaponRotation,a016_leftArmFB,a016_leftWristFB,a016_leftWristIO,a016_lefttWeaponRotation\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->a000_rightArmFB,
            param->a000_rightWristFB,
            param->a000_rightWristIO,
            param->a000_rightWeaponRotation,
            param->a000_leftArmFB,
            param->a000_leftWristFB,
            param->a000_leftWristIO,
            param->a000_lefttWeaponRotation,
            param->a002_rightArmFB,
            param->a002_rightWristFB,
            param->a002_rightWristIO,
            param->a002_rightWeaponRotation,
            param->a002_leftArmFB,
            param->a002_leftWristFB,
            param->a002_leftWristIO,
            param->a002_lefttWeaponRotation,
            param->a003_rightArmFB,
            param->a003_rightWristFB,
            param->a003_rightWristIO,
            param->a003_rightWeaponRotation,
            param->a003_leftArmFB,
            param->a003_leftWristFB,
            param->a003_leftWristIO,
            param->a003_lefttWeaponRotation,
            param->a010_rightArmFB,
            param->a010_rightWristFB,
            param->a010_rightWristIO,
            param->a010_rightWeaponRotation,
            param->a010_leftArmFB,
            param->a010_leftWristFB,
            param->a010_leftWristIO,
            param->a010_lefttWeaponRotation,
            param->a012_rightArmFB,
            param->a012_rightWristFB,
            param->a012_rightWristIO,
            param->a012_rightWeaponRotation,
            param->a012_leftArmFB,
            param->a012_leftWristFB,
            param->a012_leftWristIO,
            param->a012_lefttWeaponRotation,
            param->a013_rightArmFB,
            param->a013_rightWristFB,
            param->a013_rightWristIO,
            param->a013_rightWeaponRotation,
            param->a013_leftArmFB,
            param->a013_leftWristFB,
            param->a013_leftWristIO,
            param->a013_lefttWeaponRotation,
            param->a014_rightArmFB,
            param->a014_rightWristFB,
            param->a014_rightWristIO,
            param->a014_rightWeaponRotation,
            param->a014_leftArmFB,
            param->a014_leftWristFB,
            param->a014_leftWristIO,
            param->a014_lefttWeaponRotation,
            param->a015_rightArmFB,
            param->a015_rightWristFB,
            param->a015_rightWristIO,
            param->a015_rightWeaponRotation,
            param->a015_leftArmFB,
            param->a015_leftWristFB,
            param->a015_leftWristIO,
            param->a015_lefttWeaponRotation,
            param->a016_rightArmFB,
            param->a016_rightWristFB,
            param->a016_rightWristIO,
            param->a016_rightWeaponRotation,
            param->a016_leftArmFB,
            param->a016_leftWristFB,
            param->a016_leftWristIO,
            param->a016_lefttWeaponRotation
        );
    }
    fclose(f);
}

}
