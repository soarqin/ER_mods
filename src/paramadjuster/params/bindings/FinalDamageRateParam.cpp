#include "../luabindings.h"
#include "../defs/FinalDamageRateParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<FinalDamageRateParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerFinalDamageRateParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["FinalDamageRateParam"]; usertype) return;
        auto indexerFinalDamageRateParam = state->new_usertype<ParamTableIndexer<FinalDamageRateParam>>("FinalDamageRateParamTableIndexer");
        indexerFinalDamageRateParam["count"] = sol::property(&ParamTableIndexer<FinalDamageRateParam>::count);
        indexerFinalDamageRateParam["__index"] = &ParamTableIndexer<FinalDamageRateParam>::at;
        indexerFinalDamageRateParam["id"] = &ParamTableIndexer<FinalDamageRateParam>::paramId;
        indexerFinalDamageRateParam["get"] = &ParamTableIndexer<FinalDamageRateParam>::get;
        indexerFinalDamageRateParam["exportToCsv"] = &ParamTableIndexer<FinalDamageRateParam>::exportToCsv;
        indexerFinalDamageRateParam["importFromCsv"] = &ParamTableIndexer<FinalDamageRateParam>::importFromCsv;
        auto utFinalDamageRateParam = state->new_usertype<FinalDamageRateParam>("FinalDamageRateParam");
        utFinalDamageRateParam["physRate"] = &FinalDamageRateParam::physRate;
        utFinalDamageRateParam["magRate"] = &FinalDamageRateParam::magRate;
        utFinalDamageRateParam["fireRate"] = &FinalDamageRateParam::fireRate;
        utFinalDamageRateParam["thunRate"] = &FinalDamageRateParam::thunRate;
        utFinalDamageRateParam["darkRate"] = &FinalDamageRateParam::darkRate;
        utFinalDamageRateParam["staminaRate"] = &FinalDamageRateParam::staminaRate;
        utFinalDamageRateParam["saRate"] = &FinalDamageRateParam::saRate;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<FinalDamageRateParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<FinalDamageRateParam>>(nullptr);
        indexer->setFieldNames({
            {"physRate", false},
            {"magRate", false},
            {"fireRate", false},
            {"thunRate", false},
            {"darkRate", false},
            {"staminaRate", false},
            {"saRate", false},
        });
        return indexer;
    };
    paramsTable["FinalDamageRateParam"] = [tableLoader]() -> auto { return tableLoader(L"FinalDamageRateParam"); };
}

template<> void ParamTableIndexer<FinalDamageRateParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,physRate,magRate,fireRate,thunRate,darkRate,staminaRate,saRate\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g,%g,%g\n",
            this->paramId(i),
            param->physRate,
            param->magRate,
            param->fireRate,
            param->thunRate,
            param->darkRate,
            param->staminaRate,
            param->saRate
        );
    }
    fclose(f);
}

}
