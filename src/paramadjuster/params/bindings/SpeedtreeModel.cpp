#include "../luabindings.h"
#include "../defs/SpeedtreeModel.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<SpeedtreeModel>::exportToCsvImpl(const std::wstring &csvPath);

void registerSpeedtreeModel(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SpeedtreeModel"]; usertype) return;
        auto indexerSpeedtreeModel = state->new_usertype<ParamTableIndexer<SpeedtreeModel>>("SpeedtreeModelTableIndexer");
        indexerSpeedtreeModel["count"] = sol::property(&ParamTableIndexer<SpeedtreeModel>::count);
        indexerSpeedtreeModel["__index"] = &ParamTableIndexer<SpeedtreeModel>::at;
        indexerSpeedtreeModel["id"] = &ParamTableIndexer<SpeedtreeModel>::paramId;
        indexerSpeedtreeModel["get"] = &ParamTableIndexer<SpeedtreeModel>::get;
        indexerSpeedtreeModel["exportToCsv"] = &ParamTableIndexer<SpeedtreeModel>::exportToCsv;
        indexerSpeedtreeModel["importFromCsv"] = &ParamTableIndexer<SpeedtreeModel>::importFromCsv;
        auto utSpeedtreeModel = state->new_usertype<SpeedtreeModel>("SpeedtreeModel");
        utSpeedtreeModel["MinFadeLeaf"] = &SpeedtreeModel::MinFadeLeaf;
        utSpeedtreeModel["MinFadeFrond"] = &SpeedtreeModel::MinFadeFrond;
        utSpeedtreeModel["MinFadeBranch"] = &SpeedtreeModel::MinFadeBranch;
        utSpeedtreeModel["MinTranslucencyLeaf"] = &SpeedtreeModel::MinTranslucencyLeaf;
        utSpeedtreeModel["MaxTranslucencyLeaf"] = &SpeedtreeModel::MaxTranslucencyLeaf;
        utSpeedtreeModel["MinTranslucencyFrond"] = &SpeedtreeModel::MinTranslucencyFrond;
        utSpeedtreeModel["MaxTranslucencyFrond"] = &SpeedtreeModel::MaxTranslucencyFrond;
        utSpeedtreeModel["MinTranslucencyBranch"] = &SpeedtreeModel::MinTranslucencyBranch;
        utSpeedtreeModel["MaxTranslucencyBranch"] = &SpeedtreeModel::MaxTranslucencyBranch;
        utSpeedtreeModel["BillboardBackSpecularWeakenParam"] = &SpeedtreeModel::BillboardBackSpecularWeakenParam;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<SpeedtreeModel>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<SpeedtreeModel>>(nullptr);
        indexer->setFieldNames({
            {"MinFadeLeaf", false},
            {"MinFadeFrond", false},
            {"MinFadeBranch", false},
            {"MinTranslucencyLeaf", false},
            {"MaxTranslucencyLeaf", false},
            {"MinTranslucencyFrond", false},
            {"MaxTranslucencyFrond", false},
            {"MinTranslucencyBranch", false},
            {"MaxTranslucencyBranch", false},
            {"BillboardBackSpecularWeakenParam", false},
        });
        return indexer;
    };
    paramsTable["SpeedtreeParam"] = [tableLoader]() -> auto { return tableLoader(L"SpeedtreeParam"); };
}

template<> void ParamTableIndexer<SpeedtreeModel>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,MinFadeLeaf,MinFadeFrond,MinFadeBranch,MinTranslucencyLeaf,MaxTranslucencyLeaf,MinTranslucencyFrond,MaxTranslucencyFrond,MinTranslucencyBranch,MaxTranslucencyBranch,BillboardBackSpecularWeakenParam\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g\n",
            this->paramId(i),
            param->MinFadeLeaf,
            param->MinFadeFrond,
            param->MinFadeBranch,
            param->MinTranslucencyLeaf,
            param->MaxTranslucencyLeaf,
            param->MinTranslucencyFrond,
            param->MaxTranslucencyFrond,
            param->MinTranslucencyBranch,
            param->MaxTranslucencyBranch,
            param->BillboardBackSpecularWeakenParam
        );
    }
    fclose(f);
}

}
