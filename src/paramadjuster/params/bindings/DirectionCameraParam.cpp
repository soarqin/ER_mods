#include "../luabindings.h"
#include "../defs/DirectionCameraParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<DirectionCameraParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerDirectionCameraParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["DirectionCameraParam"]; usertype) return;
        auto indexerDirectionCameraParam = state->new_usertype<ParamTableIndexer<DirectionCameraParam>>("DirectionCameraParamTableIndexer");
        indexerDirectionCameraParam["count"] = sol::property(&ParamTableIndexer<DirectionCameraParam>::count);
        indexerDirectionCameraParam["__index"] = &ParamTableIndexer<DirectionCameraParam>::at;
        indexerDirectionCameraParam["id"] = &ParamTableIndexer<DirectionCameraParam>::paramId;
        indexerDirectionCameraParam["get"] = &ParamTableIndexer<DirectionCameraParam>::get;
        indexerDirectionCameraParam["exportToCsv"] = &ParamTableIndexer<DirectionCameraParam>::exportToCsv;
        indexerDirectionCameraParam["importFromCsv"] = &ParamTableIndexer<DirectionCameraParam>::importFromCsv;
        auto utDirectionCameraParam = state->new_usertype<DirectionCameraParam>("DirectionCameraParam");
        utDirectionCameraParam["isUseOption"] = sol::property([](DirectionCameraParam &param) -> uint8_t { return param.isUseOption; }, [](DirectionCameraParam &param, uint8_t value) { param.isUseOption = value; });
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<DirectionCameraParam>>(state, L"DirectionCameraParam");
        indexer->setFieldNames({
            {"isUseOption", false},
        });
        return indexer;
    };
    paramsTable["DirectionCameraParam"] = tableLoader;
}

template<> void ParamTableIndexer<DirectionCameraParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,isUseOption\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u\n",
            this->paramId(i),
            param->isUseOption
        );
    }
    fclose(f);
}

}
