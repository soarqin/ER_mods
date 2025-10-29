#include "../luabindings.h"
#include "../defs/RideParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<RideParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerRideParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["RideParam"]; usertype) return;
        auto indexerRideParam = state->new_usertype<ParamTableIndexer<RideParam>>("RideParamTableIndexer");
        indexerRideParam["count"] = sol::property(&ParamTableIndexer<RideParam>::count);
        indexerRideParam["__index"] = &ParamTableIndexer<RideParam>::at;
        indexerRideParam["id"] = &ParamTableIndexer<RideParam>::paramId;
        indexerRideParam["get"] = &ParamTableIndexer<RideParam>::get;
        indexerRideParam["exportToCsv"] = &ParamTableIndexer<RideParam>::exportToCsv;
        indexerRideParam["importFromCsv"] = &ParamTableIndexer<RideParam>::importFromCsv;
        auto utRideParam = state->new_usertype<RideParam>("RideParam");
        utRideParam["atkChrId"] = &RideParam::atkChrId;
        utRideParam["defChrId"] = &RideParam::defChrId;
        utRideParam["rideCamParamId"] = &RideParam::rideCamParamId;
        utRideParam["atkChrAnimId"] = &RideParam::atkChrAnimId;
        utRideParam["defChrAnimId"] = &RideParam::defChrAnimId;
        utRideParam["defAdjustDmyId"] = &RideParam::defAdjustDmyId;
        utRideParam["defCheckDmyId"] = &RideParam::defCheckDmyId;
        utRideParam["diffAngMyToDef"] = &RideParam::diffAngMyToDef;
        utRideParam["dist"] = &RideParam::dist;
        utRideParam["upperYRange"] = &RideParam::upperYRange;
        utRideParam["lowerYRange"] = &RideParam::lowerYRange;
        utRideParam["diffAngMin"] = &RideParam::diffAngMin;
        utRideParam["diffAngMax"] = &RideParam::diffAngMax;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<RideParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<RideParam>>(nullptr);
        indexer->setFieldNames({
            {"atkChrId", false},
            {"defChrId", false},
            {"rideCamParamId", false},
            {"atkChrAnimId", false},
            {"defChrAnimId", false},
            {"defAdjustDmyId", false},
            {"defCheckDmyId", false},
            {"diffAngMyToDef", false},
            {"dist", false},
            {"upperYRange", false},
            {"lowerYRange", false},
            {"diffAngMin", false},
            {"diffAngMax", false},
        });
        return indexer;
    };
    paramsTable["RideParam"] = [tableLoader]() -> auto { return tableLoader(L"RideParam"); };
}

template<> void ParamTableIndexer<RideParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,atkChrId,defChrId,rideCamParamId,atkChrAnimId,defChrAnimId,defAdjustDmyId,defCheckDmyId,diffAngMyToDef,dist,upperYRange,lowerYRange,diffAngMin,diffAngMax\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%d,%u,%u,%d,%d,%g,%g,%g,%g,%g,%g\n",
            this->paramId(i),
            param->atkChrId,
            param->defChrId,
            param->rideCamParamId,
            param->atkChrAnimId,
            param->defChrAnimId,
            param->defAdjustDmyId,
            param->defCheckDmyId,
            param->diffAngMyToDef,
            param->dist,
            param->upperYRange,
            param->lowerYRange,
            param->diffAngMin,
            param->diffAngMax
        );
    }
    fclose(f);
}

}
