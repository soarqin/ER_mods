#include "../luabindings.h"
#include "../defs/SwordArtsParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<SwordArtsParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerSwordArtsParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SwordArtsParam"]; usertype) return;
        auto indexerSwordArtsParam = state->new_usertype<ParamTableIndexer<SwordArtsParam>>("SwordArtsParamTableIndexer");
        indexerSwordArtsParam["count"] = sol::property(&ParamTableIndexer<SwordArtsParam>::count);
        indexerSwordArtsParam["__index"] = &ParamTableIndexer<SwordArtsParam>::at;
        indexerSwordArtsParam["id"] = &ParamTableIndexer<SwordArtsParam>::paramId;
        indexerSwordArtsParam["get"] = &ParamTableIndexer<SwordArtsParam>::get;
        indexerSwordArtsParam["exportToCsv"] = &ParamTableIndexer<SwordArtsParam>::exportToCsv;
        indexerSwordArtsParam["importFromCsv"] = &ParamTableIndexer<SwordArtsParam>::importFromCsv;
        auto utSwordArtsParam = state->new_usertype<SwordArtsParam>("SwordArtsParam");
        utSwordArtsParam["disableParam_NT"] = sol::property([](SwordArtsParam &param) -> uint8_t { return param.disableParam_NT; }, [](SwordArtsParam &param, uint8_t value) { param.disableParam_NT = value; });
        utSwordArtsParam["swordArtsType"] = &SwordArtsParam::swordArtsType;
        utSwordArtsParam["artsSpeedType"] = &SwordArtsParam::artsSpeedType;
        utSwordArtsParam["refStatus"] = &SwordArtsParam::refStatus;
        utSwordArtsParam["isRefRightArts"] = sol::property([](SwordArtsParam &param) -> uint8_t { return param.isRefRightArts; }, [](SwordArtsParam &param, uint8_t value) { param.isRefRightArts = value; });
        utSwordArtsParam["isGrayoutLeftHand"] = sol::property([](SwordArtsParam &param) -> uint8_t { return param.isGrayoutLeftHand; }, [](SwordArtsParam &param, uint8_t value) { param.isGrayoutLeftHand = value; });
        utSwordArtsParam["isGrayoutRightHand"] = sol::property([](SwordArtsParam &param) -> uint8_t { return param.isGrayoutRightHand; }, [](SwordArtsParam &param, uint8_t value) { param.isGrayoutRightHand = value; });
        utSwordArtsParam["isGrayoutBothHand"] = sol::property([](SwordArtsParam &param) -> uint8_t { return param.isGrayoutBothHand; }, [](SwordArtsParam &param, uint8_t value) { param.isGrayoutBothHand = value; });
        utSwordArtsParam["usePoint_L1"] = &SwordArtsParam::usePoint_L1;
        utSwordArtsParam["usePoint_L2"] = &SwordArtsParam::usePoint_L2;
        utSwordArtsParam["usePoint_R1"] = &SwordArtsParam::usePoint_R1;
        utSwordArtsParam["usePoint_R2"] = &SwordArtsParam::usePoint_R2;
        utSwordArtsParam["textId"] = &SwordArtsParam::textId;
        utSwordArtsParam["useMagicPoint_L1"] = &SwordArtsParam::useMagicPoint_L1;
        utSwordArtsParam["useMagicPoint_L2"] = &SwordArtsParam::useMagicPoint_L2;
        utSwordArtsParam["useMagicPoint_R1"] = &SwordArtsParam::useMagicPoint_R1;
        utSwordArtsParam["useMagicPoint_R2"] = &SwordArtsParam::useMagicPoint_R2;
        utSwordArtsParam["swordArtsTypeNew"] = &SwordArtsParam::swordArtsTypeNew;
        utSwordArtsParam["iconId"] = &SwordArtsParam::iconId;
        utSwordArtsParam["aiUsageId"] = &SwordArtsParam::aiUsageId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<SwordArtsParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<SwordArtsParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"swordArtsType", false},
            {"artsSpeedType", false},
            {"refStatus", false},
            {"isRefRightArts", false},
            {"isGrayoutLeftHand", false},
            {"isGrayoutRightHand", false},
            {"isGrayoutBothHand", false},
            {"usePoint_L1", false},
            {"usePoint_L2", false},
            {"usePoint_R1", false},
            {"usePoint_R2", false},
            {"textId", false},
            {"useMagicPoint_L1", false},
            {"useMagicPoint_L2", false},
            {"useMagicPoint_R1", false},
            {"useMagicPoint_R2", false},
            {"swordArtsTypeNew", false},
            {"iconId", false},
            {"aiUsageId", false},
        });
        return indexer;
    };
    paramsTable["SwordArtsParam"] = [tableLoader]() -> auto { return tableLoader(L"SwordArtsParam"); };
}

template<> void ParamTableIndexer<SwordArtsParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,swordArtsType,artsSpeedType,refStatus,isRefRightArts,isGrayoutLeftHand,isGrayoutRightHand,isGrayoutBothHand,usePoint_L1,usePoint_L2,usePoint_R1,usePoint_R2,textId,useMagicPoint_L1,useMagicPoint_L2,useMagicPoint_R1,useMagicPoint_R2,swordArtsTypeNew,iconId,aiUsageId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%d,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->swordArtsType,
            param->artsSpeedType,
            param->refStatus,
            param->isRefRightArts,
            param->isGrayoutLeftHand,
            param->isGrayoutRightHand,
            param->isGrayoutBothHand,
            param->usePoint_L1,
            param->usePoint_L2,
            param->usePoint_R1,
            param->usePoint_R2,
            param->textId,
            param->useMagicPoint_L1,
            param->useMagicPoint_L2,
            param->useMagicPoint_R1,
            param->useMagicPoint_R2,
            param->swordArtsTypeNew,
            param->iconId,
            param->aiUsageId
        );
    }
    fclose(f);
}

}
