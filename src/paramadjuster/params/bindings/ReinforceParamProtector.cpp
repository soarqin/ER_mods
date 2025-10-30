#include "../luabindings.h"
#include "../defs/ReinforceParamProtector.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<ReinforceParamProtector>::exportToCsvImpl(const std::wstring &csvPath);

void registerReinforceParamProtector(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ReinforceParamProtector"]; usertype) return;
        auto indexerReinforceParamProtector = state->new_usertype<ParamTableIndexer<ReinforceParamProtector>>("ReinforceParamProtectorTableIndexer");
        indexerReinforceParamProtector["count"] = sol::property(&ParamTableIndexer<ReinforceParamProtector>::count);
        indexerReinforceParamProtector["__index"] = &ParamTableIndexer<ReinforceParamProtector>::at;
        indexerReinforceParamProtector["id"] = &ParamTableIndexer<ReinforceParamProtector>::paramId;
        indexerReinforceParamProtector["get"] = &ParamTableIndexer<ReinforceParamProtector>::get;
        indexerReinforceParamProtector["exportToCsv"] = &ParamTableIndexer<ReinforceParamProtector>::exportToCsv;
        indexerReinforceParamProtector["importFromCsv"] = &ParamTableIndexer<ReinforceParamProtector>::importFromCsv;
        auto utReinforceParamProtector = state->new_usertype<ReinforceParamProtector>("ReinforceParamProtector");
        utReinforceParamProtector["physicsDefRate"] = &ReinforceParamProtector::physicsDefRate;
        utReinforceParamProtector["magicDefRate"] = &ReinforceParamProtector::magicDefRate;
        utReinforceParamProtector["fireDefRate"] = &ReinforceParamProtector::fireDefRate;
        utReinforceParamProtector["thunderDefRate"] = &ReinforceParamProtector::thunderDefRate;
        utReinforceParamProtector["slashDefRate"] = &ReinforceParamProtector::slashDefRate;
        utReinforceParamProtector["blowDefRate"] = &ReinforceParamProtector::blowDefRate;
        utReinforceParamProtector["thrustDefRate"] = &ReinforceParamProtector::thrustDefRate;
        utReinforceParamProtector["resistPoisonRate"] = &ReinforceParamProtector::resistPoisonRate;
        utReinforceParamProtector["resistDiseaseRate"] = &ReinforceParamProtector::resistDiseaseRate;
        utReinforceParamProtector["resistBloodRate"] = &ReinforceParamProtector::resistBloodRate;
        utReinforceParamProtector["resistCurseRate"] = &ReinforceParamProtector::resistCurseRate;
        utReinforceParamProtector["residentSpEffectId1"] = &ReinforceParamProtector::residentSpEffectId1;
        utReinforceParamProtector["residentSpEffectId2"] = &ReinforceParamProtector::residentSpEffectId2;
        utReinforceParamProtector["residentSpEffectId3"] = &ReinforceParamProtector::residentSpEffectId3;
        utReinforceParamProtector["materialSetId"] = &ReinforceParamProtector::materialSetId;
        utReinforceParamProtector["darkDefRate"] = &ReinforceParamProtector::darkDefRate;
        utReinforceParamProtector["resistFreezeRate"] = &ReinforceParamProtector::resistFreezeRate;
        utReinforceParamProtector["resistSleepRate"] = &ReinforceParamProtector::resistSleepRate;
        utReinforceParamProtector["resistMadnessRate"] = &ReinforceParamProtector::resistMadnessRate;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<ReinforceParamProtector>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<ReinforceParamProtector>>(nullptr);
        indexer->setFieldNames({
            {"physicsDefRate", false},
            {"magicDefRate", false},
            {"fireDefRate", false},
            {"thunderDefRate", false},
            {"slashDefRate", false},
            {"blowDefRate", false},
            {"thrustDefRate", false},
            {"resistPoisonRate", false},
            {"resistDiseaseRate", false},
            {"resistBloodRate", false},
            {"resistCurseRate", false},
            {"residentSpEffectId1", false},
            {"residentSpEffectId2", false},
            {"residentSpEffectId3", false},
            {"materialSetId", false},
            {"darkDefRate", false},
            {"resistFreezeRate", false},
            {"resistSleepRate", false},
            {"resistMadnessRate", false},
        });
        return indexer;
    };
    paramsTable["ReinforceParamProtector"] = [tableLoader]() -> auto { return tableLoader(L"ReinforceParamProtector"); };
}

template<> void ParamTableIndexer<ReinforceParamProtector>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,physicsDefRate,magicDefRate,fireDefRate,thunderDefRate,slashDefRate,blowDefRate,thrustDefRate,resistPoisonRate,resistDiseaseRate,resistBloodRate,resistCurseRate,residentSpEffectId1,residentSpEffectId2,residentSpEffectId3,materialSetId");
    fwprintf(f, L",darkDefRate,resistFreezeRate,resistSleepRate,resistMadnessRate\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%g,%u,%u,%u,%u,%g,%g,%g,%g\n",
            this->paramId(i),
            param->physicsDefRate,
            param->magicDefRate,
            param->fireDefRate,
            param->thunderDefRate,
            param->slashDefRate,
            param->blowDefRate,
            param->thrustDefRate,
            param->resistPoisonRate,
            param->resistDiseaseRate,
            param->resistBloodRate,
            param->resistCurseRate,
            param->residentSpEffectId1,
            param->residentSpEffectId2,
            param->residentSpEffectId3,
            param->materialSetId,
            param->darkDefRate,
            param->resistFreezeRate,
            param->resistSleepRate,
            param->resistMadnessRate
        );
    }
    fclose(f);
}

}
