#include "../luabindings.h"
#include "../defs/EquipParamAccessory.h"

namespace paramadjuster::params {

void registerEquipParamAccessory(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["EquipParamAccessory"]; usertype) return;
        auto indexerEquipParamAccessory = state->new_usertype<ParamTableIndexer<EquipParamAccessory>>("EquipParamAccessoryTableIndexer");
        indexerEquipParamAccessory["count"] = sol::property(&ParamTableIndexer<EquipParamAccessory>::count);
        indexerEquipParamAccessory["__index"] = &ParamTableIndexer<EquipParamAccessory>::at;
        indexerEquipParamAccessory["id"] = &ParamTableIndexer<EquipParamAccessory>::paramId;
        indexerEquipParamAccessory["get"] = &ParamTableIndexer<EquipParamAccessory>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<EquipParamAccessory>>(gParamMgr.findTable(L"EquipParamAccessory")); };
    paramsTable["EquipParamAccessory"] = tableLoader;
}

}
