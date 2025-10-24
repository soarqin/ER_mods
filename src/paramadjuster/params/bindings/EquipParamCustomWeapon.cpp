#include "../luabindings.h"
#include "../defs/EquipParamCustomWeapon.h"

namespace paramadjuster::params {

void registerEquipParamCustomWeapon(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["EquipParamCustomWeapon"]; usertype) return;
        auto indexerEquipParamCustomWeapon = state->new_usertype<ParamTableIndexer<EquipParamCustomWeapon>>("EquipParamCustomWeaponTableIndexer");
        indexerEquipParamCustomWeapon["count"] = sol::property(&ParamTableIndexer<EquipParamCustomWeapon>::count);
        indexerEquipParamCustomWeapon["__index"] = &ParamTableIndexer<EquipParamCustomWeapon>::at;
        indexerEquipParamCustomWeapon["id"] = &ParamTableIndexer<EquipParamCustomWeapon>::paramId;
        indexerEquipParamCustomWeapon["get"] = &ParamTableIndexer<EquipParamCustomWeapon>::get;
        auto utEquipParamCustomWeapon = state->new_usertype<EquipParamCustomWeapon>("EquipParamCustomWeapon");
        utEquipParamCustomWeapon["baseWepId"] = &EquipParamCustomWeapon::baseWepId;
        utEquipParamCustomWeapon["gemId"] = &EquipParamCustomWeapon::gemId;
        utEquipParamCustomWeapon["reinforceLv"] = &EquipParamCustomWeapon::reinforceLv;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<EquipParamCustomWeapon>>(gParamMgr.findTable(L"EquipParamCustomWeapon")); };
    paramsTable["EquipParamCustomWeapon"] = tableLoader;
}

}
