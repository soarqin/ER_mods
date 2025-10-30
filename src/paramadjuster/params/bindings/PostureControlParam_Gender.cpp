#include "../luabindings.h"
#include "../defs/PostureControlParam_Gender.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<PostureControlParam_Gender>::exportToCsvImpl(const std::wstring &csvPath);

void registerPostureControlParam_Gender(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["PostureControlParam_Gender"]; usertype) return;
        auto indexerPostureControlParam_Gender = state->new_usertype<ParamTableIndexer<PostureControlParam_Gender>>("PostureControlParam_GenderTableIndexer");
        indexerPostureControlParam_Gender["count"] = sol::property(&ParamTableIndexer<PostureControlParam_Gender>::count);
        indexerPostureControlParam_Gender["__index"] = &ParamTableIndexer<PostureControlParam_Gender>::at;
        indexerPostureControlParam_Gender["id"] = &ParamTableIndexer<PostureControlParam_Gender>::paramId;
        indexerPostureControlParam_Gender["get"] = &ParamTableIndexer<PostureControlParam_Gender>::get;
        indexerPostureControlParam_Gender["exportToCsv"] = &ParamTableIndexer<PostureControlParam_Gender>::exportToCsv;
        indexerPostureControlParam_Gender["importFromCsv"] = &ParamTableIndexer<PostureControlParam_Gender>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<PostureControlParam_Gender>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<PostureControlParam_Gender>>(nullptr);
        indexer->setFieldNames({
            {"a000_rightElbowIO", false},
            {"a000_leftElbowIO", false},
            {"a000_bothLegsIO", false},
            {"a002_rightElbowIO", false},
            {"a002_leftElbowIO", false},
            {"a002_bothLegsIO", false},
            {"a003_rightElbowIO", false},
            {"a003_leftElbowIO", false},
            {"a003_bothLegsIO", false},
            {"a010_rightElbowIO", false},
            {"a010_leftElbowIO", false},
            {"a010_bothLegsIO", false},
            {"a012_rightElbowIO", false},
            {"a012_leftElbowIO", false},
            {"a012_bothLegsIO", false},
            {"a013_rightElbowIO", false},
            {"a013_leftElbowIO", false},
            {"a013_bothLegsIO", false},
            {"a014_rightElbowIO", false},
            {"a014_leftElbowIO", false},
            {"a014_bothLegsIO", false},
            {"a015_rightElbowIO", false},
            {"a015_leftElbowIO", false},
            {"a015_bothLegsIO", false},
            {"a016_rightElbowIO", false},
            {"a016_leftElbowIO", false},
            {"a016_bothLegsIO", false},
        });
        return indexer;
    };
    paramsTable["PostureControlParam_Gender"] = [tableLoader]() -> auto { return tableLoader(L"PostureControlParam_Gender"); };
}

template<> void ParamTableIndexer<PostureControlParam_Gender>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,a000_rightElbowIO,a000_leftElbowIO,a000_bothLegsIO,a002_rightElbowIO,a002_leftElbowIO,a002_bothLegsIO,a003_rightElbowIO,a003_leftElbowIO,a003_bothLegsIO,a010_rightElbowIO,a010_leftElbowIO,a010_bothLegsIO,a012_rightElbowIO,a012_leftElbowIO,a012_bothLegsIO");
    fwprintf(f, L",a013_rightElbowIO,a013_leftElbowIO,a013_bothLegsIO,a014_rightElbowIO,a014_leftElbowIO,a014_bothLegsIO,a015_rightElbowIO,a015_leftElbowIO,a015_bothLegsIO,a016_rightElbowIO,a016_leftElbowIO,a016_bothLegsIO\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->a000_rightElbowIO,
            param->a000_leftElbowIO,
            param->a000_bothLegsIO,
            param->a002_rightElbowIO,
            param->a002_leftElbowIO,
            param->a002_bothLegsIO,
            param->a003_rightElbowIO,
            param->a003_leftElbowIO,
            param->a003_bothLegsIO,
            param->a010_rightElbowIO,
            param->a010_leftElbowIO,
            param->a010_bothLegsIO,
            param->a012_rightElbowIO,
            param->a012_leftElbowIO,
            param->a012_bothLegsIO,
            param->a013_rightElbowIO,
            param->a013_leftElbowIO,
            param->a013_bothLegsIO,
            param->a014_rightElbowIO,
            param->a014_leftElbowIO,
            param->a014_bothLegsIO,
            param->a015_rightElbowIO,
            param->a015_leftElbowIO,
            param->a015_bothLegsIO,
            param->a016_rightElbowIO,
            param->a016_leftElbowIO,
            param->a016_bothLegsIO
        );
    }
    fclose(f);
}

}
