#include "../luabindings.h"
#include "../defs/PostureControlParam_Pro.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<PostureControlParam_Pro>::exportToCsvImpl(const std::wstring &csvPath);

void registerPostureControlParam_Pro(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["PostureControlParam_Pro"]; usertype) return;
        auto indexerPostureControlParam_Pro = state->new_usertype<ParamTableIndexer<PostureControlParam_Pro>>("PostureControlParam_ProTableIndexer");
        indexerPostureControlParam_Pro["count"] = sol::property(&ParamTableIndexer<PostureControlParam_Pro>::count);
        indexerPostureControlParam_Pro["__index"] = &ParamTableIndexer<PostureControlParam_Pro>::at;
        indexerPostureControlParam_Pro["id"] = &ParamTableIndexer<PostureControlParam_Pro>::paramId;
        indexerPostureControlParam_Pro["get"] = &ParamTableIndexer<PostureControlParam_Pro>::get;
        indexerPostureControlParam_Pro["exportToCsv"] = &ParamTableIndexer<PostureControlParam_Pro>::exportToCsv;
        indexerPostureControlParam_Pro["importFromCsv"] = &ParamTableIndexer<PostureControlParam_Pro>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<PostureControlParam_Pro>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<PostureControlParam_Pro>>(nullptr);
        indexer->setFieldNames({
            {"a000_rightArmIO", false},
            {"a000_rightArmFB", false},
            {"a000_leftArmIO", false},
            {"a000_leftArmFB", false},
            {"a002_rightArmIO", false},
            {"a002_rightArmFB", false},
            {"a002_leftArmIO", false},
            {"a002_leftArmFB", false},
            {"a003_rightArmIO", false},
            {"a003_rightArmFB", false},
            {"a003_leftArmIO", false},
            {"a003_leftArmFB", false},
            {"a010_rightArmIO", false},
            {"a010_rightArmFB", false},
            {"a010_leftArmIO", false},
            {"a010_leftArmFB", false},
            {"a012_rightArmIO", false},
            {"a012_rightArmFB", false},
            {"a012_leftArmIO", false},
            {"a012_leftArmFB", false},
            {"a013_rightArmIO", false},
            {"a013_rightArmFB", false},
            {"a013_leftArmIO", false},
            {"a013_leftArmFB", false},
            {"a014_rightArmIO", false},
            {"a014_rightArmFB", false},
            {"a014_leftArmIO", false},
            {"a014_leftArmFB", false},
            {"a015_rightArmIO", false},
            {"a015_rightArmFB", false},
            {"a015_leftArmIO", false},
            {"a015_leftArmFB", false},
            {"a016_rightArmIO", false},
            {"a016_rightArmFB", false},
            {"a016_leftArmIO", false},
            {"a016_leftArmFB", false},
        });
        return indexer;
    };
    paramsTable["PostureControlParam_Pro"] = [tableLoader]() -> auto { return tableLoader(L"PostureControlParam_Pro"); };
}

template<> void ParamTableIndexer<PostureControlParam_Pro>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,a000_rightArmIO,a000_rightArmFB,a000_leftArmIO,a000_leftArmFB,a002_rightArmIO,a002_rightArmFB,a002_leftArmIO,a002_leftArmFB,a003_rightArmIO,a003_rightArmFB,a003_leftArmIO,a003_leftArmFB,a010_rightArmIO,a010_rightArmFB,a010_leftArmIO");
    fwprintf(f, L",a010_leftArmFB,a012_rightArmIO,a012_rightArmFB,a012_leftArmIO,a012_leftArmFB,a013_rightArmIO,a013_rightArmFB,a013_leftArmIO,a013_leftArmFB,a014_rightArmIO,a014_rightArmFB,a014_leftArmIO,a014_leftArmFB,a015_rightArmIO,a015_rightArmFB,a015_leftArmIO");
    fwprintf(f, L",a015_leftArmFB,a016_rightArmIO,a016_rightArmFB,a016_leftArmIO,a016_leftArmFB\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->a000_rightArmIO,
            param->a000_rightArmFB,
            param->a000_leftArmIO,
            param->a000_leftArmFB,
            param->a002_rightArmIO,
            param->a002_rightArmFB,
            param->a002_leftArmIO,
            param->a002_leftArmFB,
            param->a003_rightArmIO,
            param->a003_rightArmFB,
            param->a003_leftArmIO,
            param->a003_leftArmFB,
            param->a010_rightArmIO,
            param->a010_rightArmFB,
            param->a010_leftArmIO,
            param->a010_leftArmFB,
            param->a012_rightArmIO,
            param->a012_rightArmFB,
            param->a012_leftArmIO,
            param->a012_leftArmFB,
            param->a013_rightArmIO,
            param->a013_rightArmFB,
            param->a013_leftArmIO,
            param->a013_leftArmFB,
            param->a014_rightArmIO,
            param->a014_rightArmFB,
            param->a014_leftArmIO,
            param->a014_leftArmFB,
            param->a015_rightArmIO,
            param->a015_rightArmFB,
            param->a015_leftArmIO,
            param->a015_leftArmFB,
            param->a016_rightArmIO,
            param->a016_rightArmFB,
            param->a016_leftArmIO,
            param->a016_leftArmFB
        );
    }
    fclose(f);
}

}
