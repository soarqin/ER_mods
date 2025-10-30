#include "../luabindings.h"
#include "../defs/EquipParamAccessory.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<EquipParamAccessory>::exportToCsvImpl(const std::wstring &csvPath);

void registerEquipParamAccessory(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["EquipParamAccessory"]; usertype) return;
        auto indexerEquipParamAccessory = state->new_usertype<ParamTableIndexer<EquipParamAccessory>>("EquipParamAccessoryTableIndexer");
        indexerEquipParamAccessory["count"] = sol::property(&ParamTableIndexer<EquipParamAccessory>::count);
        indexerEquipParamAccessory["__index"] = &ParamTableIndexer<EquipParamAccessory>::at;
        indexerEquipParamAccessory["id"] = &ParamTableIndexer<EquipParamAccessory>::paramId;
        indexerEquipParamAccessory["get"] = &ParamTableIndexer<EquipParamAccessory>::get;
        indexerEquipParamAccessory["exportToCsv"] = &ParamTableIndexer<EquipParamAccessory>::exportToCsv;
        indexerEquipParamAccessory["importFromCsv"] = &ParamTableIndexer<EquipParamAccessory>::importFromCsv;
        auto utEquipParamAccessory = state->new_usertype<EquipParamAccessory>("EquipParamAccessory");
        utEquipParamAccessory["disableParam_NT"] = sol::property([](EquipParamAccessory &param) -> uint8_t { return param.disableParam_NT; }, [](EquipParamAccessory &param, uint8_t value) { param.disableParam_NT = value; });
        utEquipParamAccessory["refId"] = &EquipParamAccessory::refId;
        utEquipParamAccessory["sfxVariationId"] = &EquipParamAccessory::sfxVariationId;
        utEquipParamAccessory["weight"] = &EquipParamAccessory::weight;
        utEquipParamAccessory["behaviorId"] = &EquipParamAccessory::behaviorId;
        utEquipParamAccessory["basicPrice"] = &EquipParamAccessory::basicPrice;
        utEquipParamAccessory["sellValue"] = &EquipParamAccessory::sellValue;
        utEquipParamAccessory["sortId"] = &EquipParamAccessory::sortId;
        utEquipParamAccessory["qwcId"] = &EquipParamAccessory::qwcId;
        utEquipParamAccessory["equipModelId"] = &EquipParamAccessory::equipModelId;
        utEquipParamAccessory["iconId"] = &EquipParamAccessory::iconId;
        utEquipParamAccessory["shopLv"] = &EquipParamAccessory::shopLv;
        utEquipParamAccessory["trophySGradeId"] = &EquipParamAccessory::trophySGradeId;
        utEquipParamAccessory["trophySeqId"] = &EquipParamAccessory::trophySeqId;
        utEquipParamAccessory["equipModelCategory"] = &EquipParamAccessory::equipModelCategory;
        utEquipParamAccessory["equipModelGender"] = &EquipParamAccessory::equipModelGender;
        utEquipParamAccessory["accessoryCategory"] = &EquipParamAccessory::accessoryCategory;
        utEquipParamAccessory["refCategory"] = &EquipParamAccessory::refCategory;
        utEquipParamAccessory["spEffectCategory"] = &EquipParamAccessory::spEffectCategory;
        utEquipParamAccessory["sortGroupId"] = &EquipParamAccessory::sortGroupId;
        utEquipParamAccessory["vagrantItemLotId"] = &EquipParamAccessory::vagrantItemLotId;
        utEquipParamAccessory["vagrantBonusEneDropItemLotId"] = &EquipParamAccessory::vagrantBonusEneDropItemLotId;
        utEquipParamAccessory["vagrantItemEneDropItemLotId"] = &EquipParamAccessory::vagrantItemEneDropItemLotId;
        utEquipParamAccessory["isDeposit"] = sol::property([](EquipParamAccessory &param) -> uint8_t { return param.isDeposit; }, [](EquipParamAccessory &param, uint8_t value) { param.isDeposit = value; });
        utEquipParamAccessory["isEquipOutBrake"] = sol::property([](EquipParamAccessory &param) -> uint8_t { return param.isEquipOutBrake; }, [](EquipParamAccessory &param, uint8_t value) { param.isEquipOutBrake = value; });
        utEquipParamAccessory["disableMultiDropShare"] = sol::property([](EquipParamAccessory &param) -> uint8_t { return param.disableMultiDropShare; }, [](EquipParamAccessory &param, uint8_t value) { param.disableMultiDropShare = value; });
        utEquipParamAccessory["isDiscard"] = sol::property([](EquipParamAccessory &param) -> uint8_t { return param.isDiscard; }, [](EquipParamAccessory &param, uint8_t value) { param.isDiscard = value; });
        utEquipParamAccessory["isDrop"] = sol::property([](EquipParamAccessory &param) -> uint8_t { return param.isDrop; }, [](EquipParamAccessory &param, uint8_t value) { param.isDrop = value; });
        utEquipParamAccessory["showLogCondType"] = sol::property([](EquipParamAccessory &param) -> uint8_t { return param.showLogCondType; }, [](EquipParamAccessory &param, uint8_t value) { param.showLogCondType = value; });
        utEquipParamAccessory["showDialogCondType"] = sol::property([](EquipParamAccessory &param) -> uint8_t { return param.showDialogCondType; }, [](EquipParamAccessory &param, uint8_t value) { param.showDialogCondType = value; });
        utEquipParamAccessory["rarity"] = &EquipParamAccessory::rarity;
        utEquipParamAccessory["saleValue"] = &EquipParamAccessory::saleValue;
        utEquipParamAccessory["accessoryGroup"] = &EquipParamAccessory::accessoryGroup;
        utEquipParamAccessory["compTrophySedId"] = &EquipParamAccessory::compTrophySedId;
        utEquipParamAccessory["residentSpEffectId1"] = &EquipParamAccessory::residentSpEffectId1;
        utEquipParamAccessory["residentSpEffectId2"] = &EquipParamAccessory::residentSpEffectId2;
        utEquipParamAccessory["residentSpEffectId3"] = &EquipParamAccessory::residentSpEffectId3;
        utEquipParamAccessory["residentSpEffectId4"] = &EquipParamAccessory::residentSpEffectId4;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<EquipParamAccessory>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<EquipParamAccessory>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"refId", false},
            {"sfxVariationId", false},
            {"weight", false},
            {"behaviorId", false},
            {"basicPrice", false},
            {"sellValue", false},
            {"sortId", false},
            {"qwcId", false},
            {"equipModelId", false},
            {"iconId", false},
            {"shopLv", false},
            {"trophySGradeId", false},
            {"trophySeqId", false},
            {"equipModelCategory", false},
            {"equipModelGender", false},
            {"accessoryCategory", false},
            {"refCategory", false},
            {"spEffectCategory", false},
            {"sortGroupId", false},
            {"vagrantItemLotId", false},
            {"vagrantBonusEneDropItemLotId", false},
            {"vagrantItemEneDropItemLotId", false},
            {"isDeposit", false},
            {"isEquipOutBrake", false},
            {"disableMultiDropShare", false},
            {"isDiscard", false},
            {"isDrop", false},
            {"showLogCondType", false},
            {"showDialogCondType", false},
            {"rarity", false},
            {"saleValue", false},
            {"accessoryGroup", false},
            {"compTrophySedId", false},
            {"residentSpEffectId1", false},
            {"residentSpEffectId2", false},
            {"residentSpEffectId3", false},
            {"residentSpEffectId4", false},
        });
        return indexer;
    };
    paramsTable["EquipParamAccessory"] = [tableLoader]() -> auto { return tableLoader(L"EquipParamAccessory"); };
}

template<> void ParamTableIndexer<EquipParamAccessory>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,refId,sfxVariationId,weight,behaviorId,basicPrice,sellValue,sortId,qwcId,equipModelId,iconId,shopLv,trophySGradeId,trophySeqId,equipModelCategory");
    fwprintf(f, L",equipModelGender,accessoryCategory,refCategory,spEffectCategory,sortGroupId,vagrantItemLotId,vagrantBonusEneDropItemLotId,vagrantItemEneDropItemLotId,isDeposit,isEquipOutBrake,disableMultiDropShare,isDiscard,isDrop,showLogCondType,showDialogCondType,rarity");
    fwprintf(f, L",saleValue,accessoryGroup,compTrophySedId,residentSpEffectId1,residentSpEffectId2,residentSpEffectId3,residentSpEffectId4\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%d,%g,%d,%d,%d,%d,%d,%u,%u,%d,%d,%d,%u,%u,%u,%u,%u,%u,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->refId,
            param->sfxVariationId,
            param->weight,
            param->behaviorId,
            param->basicPrice,
            param->sellValue,
            param->sortId,
            param->qwcId,
            param->equipModelId,
            param->iconId,
            param->shopLv,
            param->trophySGradeId,
            param->trophySeqId,
            param->equipModelCategory,
            param->equipModelGender,
            param->accessoryCategory,
            param->refCategory,
            param->spEffectCategory,
            param->sortGroupId,
            param->vagrantItemLotId,
            param->vagrantBonusEneDropItemLotId,
            param->vagrantItemEneDropItemLotId,
            param->isDeposit,
            param->isEquipOutBrake,
            param->disableMultiDropShare,
            param->isDiscard,
            param->isDrop,
            param->showLogCondType,
            param->showDialogCondType,
            param->rarity,
            param->saleValue,
            param->accessoryGroup,
            param->compTrophySedId,
            param->residentSpEffectId1,
            param->residentSpEffectId2,
            param->residentSpEffectId3,
            param->residentSpEffectId4
        );
    }
    fclose(f);
}

}
