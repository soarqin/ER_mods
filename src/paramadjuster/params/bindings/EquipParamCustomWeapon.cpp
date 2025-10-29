#include "../luabindings.h"
#include "../defs/EquipParamCustomWeapon.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<EquipParamCustomWeapon>::exportToCsvImpl(const std::wstring &csvPath);

void registerEquipParamCustomWeapon(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["EquipParamCustomWeapon"]; usertype) return;
        auto indexerEquipParamCustomWeapon = state->new_usertype<ParamTableIndexer<EquipParamCustomWeapon>>("EquipParamCustomWeaponTableIndexer");
        indexerEquipParamCustomWeapon["count"] = sol::property(&ParamTableIndexer<EquipParamCustomWeapon>::count);
        indexerEquipParamCustomWeapon["__index"] = &ParamTableIndexer<EquipParamCustomWeapon>::at;
        indexerEquipParamCustomWeapon["id"] = &ParamTableIndexer<EquipParamCustomWeapon>::paramId;
        indexerEquipParamCustomWeapon["get"] = &ParamTableIndexer<EquipParamCustomWeapon>::get;
        indexerEquipParamCustomWeapon["exportToCsv"] = &ParamTableIndexer<EquipParamCustomWeapon>::exportToCsv;
        indexerEquipParamCustomWeapon["importFromCsv"] = &ParamTableIndexer<EquipParamCustomWeapon>::importFromCsv;
        auto utEquipParamCustomWeapon = state->new_usertype<EquipParamCustomWeapon>("EquipParamCustomWeapon");
        utEquipParamCustomWeapon["baseWepId"] = &EquipParamCustomWeapon::baseWepId;
        utEquipParamCustomWeapon["gemId"] = &EquipParamCustomWeapon::gemId;
        utEquipParamCustomWeapon["reinforceLv"] = &EquipParamCustomWeapon::reinforceLv;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<EquipParamCustomWeapon>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<EquipParamCustomWeapon>>(nullptr);
        indexer->setFieldNames({
            {"baseWepId", false},
            {"gemId", false},
            {"reinforceLv", false},
        });
        return indexer;
    };
    paramsTable["EquipParamCustomWeapon"] = [tableLoader]() -> auto { return tableLoader(L"EquipParamCustomWeapon"); };
}

template<> void ParamTableIndexer<EquipParamCustomWeapon>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,baseWepId,gemId,reinforceLv\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%u\n",
            this->paramId(i),
            param->baseWepId,
            param->gemId,
            param->reinforceLv
        );
    }
    fclose(f);
}

}
