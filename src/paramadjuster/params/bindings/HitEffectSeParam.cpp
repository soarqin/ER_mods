#include "../luabindings.h"
#include "../defs/HitEffectSeParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<HitEffectSeParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerHitEffectSeParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["HitEffectSeParam"]; usertype) return;
        auto indexerHitEffectSeParam = state->new_usertype<ParamTableIndexer<HitEffectSeParam>>("HitEffectSeParamTableIndexer");
        indexerHitEffectSeParam["count"] = sol::property(&ParamTableIndexer<HitEffectSeParam>::count);
        indexerHitEffectSeParam["__index"] = &ParamTableIndexer<HitEffectSeParam>::at;
        indexerHitEffectSeParam["id"] = &ParamTableIndexer<HitEffectSeParam>::paramId;
        indexerHitEffectSeParam["get"] = &ParamTableIndexer<HitEffectSeParam>::get;
        indexerHitEffectSeParam["exportToCsv"] = &ParamTableIndexer<HitEffectSeParam>::exportToCsv;
        indexerHitEffectSeParam["importFromCsv"] = &ParamTableIndexer<HitEffectSeParam>::importFromCsv;
        auto utHitEffectSeParam = state->new_usertype<HitEffectSeParam>("HitEffectSeParam");
        utHitEffectSeParam["Iron_Slash_S"] = &HitEffectSeParam::Iron_Slash_S;
        utHitEffectSeParam["Iron_Slash_L"] = &HitEffectSeParam::Iron_Slash_L;
        utHitEffectSeParam["Iron_Slash_LL"] = &HitEffectSeParam::Iron_Slash_LL;
        utHitEffectSeParam["Iron_Thrust_S"] = &HitEffectSeParam::Iron_Thrust_S;
        utHitEffectSeParam["Iron_Thrust_L"] = &HitEffectSeParam::Iron_Thrust_L;
        utHitEffectSeParam["Iron_Thrust_LL"] = &HitEffectSeParam::Iron_Thrust_LL;
        utHitEffectSeParam["Iron_Blow_S"] = &HitEffectSeParam::Iron_Blow_S;
        utHitEffectSeParam["Iron_Blow_L"] = &HitEffectSeParam::Iron_Blow_L;
        utHitEffectSeParam["Iron_Blow_LL"] = &HitEffectSeParam::Iron_Blow_LL;
        utHitEffectSeParam["Fire_Slash_S"] = &HitEffectSeParam::Fire_Slash_S;
        utHitEffectSeParam["Fire_Slash_L"] = &HitEffectSeParam::Fire_Slash_L;
        utHitEffectSeParam["Fire_Slash_LL"] = &HitEffectSeParam::Fire_Slash_LL;
        utHitEffectSeParam["Fire_Thrust_S"] = &HitEffectSeParam::Fire_Thrust_S;
        utHitEffectSeParam["Fire_Thrust_L"] = &HitEffectSeParam::Fire_Thrust_L;
        utHitEffectSeParam["Fire_Thrust_LL"] = &HitEffectSeParam::Fire_Thrust_LL;
        utHitEffectSeParam["Fire_Blow_S"] = &HitEffectSeParam::Fire_Blow_S;
        utHitEffectSeParam["Fire_Blow_L"] = &HitEffectSeParam::Fire_Blow_L;
        utHitEffectSeParam["Fire_Blow_LL"] = &HitEffectSeParam::Fire_Blow_LL;
        utHitEffectSeParam["Wood_Slash_S"] = &HitEffectSeParam::Wood_Slash_S;
        utHitEffectSeParam["Wood_Slash_L"] = &HitEffectSeParam::Wood_Slash_L;
        utHitEffectSeParam["Wood_Slash_LL"] = &HitEffectSeParam::Wood_Slash_LL;
        utHitEffectSeParam["Wood_Thrust_S"] = &HitEffectSeParam::Wood_Thrust_S;
        utHitEffectSeParam["Wood_Thrust_L"] = &HitEffectSeParam::Wood_Thrust_L;
        utHitEffectSeParam["Wood_Thrust_LL"] = &HitEffectSeParam::Wood_Thrust_LL;
        utHitEffectSeParam["Wood_Blow_S"] = &HitEffectSeParam::Wood_Blow_S;
        utHitEffectSeParam["Wood_Blow_L"] = &HitEffectSeParam::Wood_Blow_L;
        utHitEffectSeParam["Wood_Blow_LL"] = &HitEffectSeParam::Wood_Blow_LL;
        utHitEffectSeParam["Body_Slash_S"] = &HitEffectSeParam::Body_Slash_S;
        utHitEffectSeParam["Body_Slash_L"] = &HitEffectSeParam::Body_Slash_L;
        utHitEffectSeParam["Body_Slash_LL"] = &HitEffectSeParam::Body_Slash_LL;
        utHitEffectSeParam["Body_Thrust_S"] = &HitEffectSeParam::Body_Thrust_S;
        utHitEffectSeParam["Body_Thrust_L"] = &HitEffectSeParam::Body_Thrust_L;
        utHitEffectSeParam["Body_Thrust_LL"] = &HitEffectSeParam::Body_Thrust_LL;
        utHitEffectSeParam["Body_Blow_S"] = &HitEffectSeParam::Body_Blow_S;
        utHitEffectSeParam["Body_Blow_L"] = &HitEffectSeParam::Body_Blow_L;
        utHitEffectSeParam["Body_Blow_LL"] = &HitEffectSeParam::Body_Blow_LL;
        utHitEffectSeParam["Eclipse_Slash_S"] = &HitEffectSeParam::Eclipse_Slash_S;
        utHitEffectSeParam["Eclipse_Slash_L"] = &HitEffectSeParam::Eclipse_Slash_L;
        utHitEffectSeParam["Eclipse_Slash_LL"] = &HitEffectSeParam::Eclipse_Slash_LL;
        utHitEffectSeParam["Eclipse_Thrust_S"] = &HitEffectSeParam::Eclipse_Thrust_S;
        utHitEffectSeParam["Eclipse_Thrust_L"] = &HitEffectSeParam::Eclipse_Thrust_L;
        utHitEffectSeParam["Eclipse_Thrust_LL"] = &HitEffectSeParam::Eclipse_Thrust_LL;
        utHitEffectSeParam["Eclipse_Blow_S"] = &HitEffectSeParam::Eclipse_Blow_S;
        utHitEffectSeParam["Eclipse_Blow_L"] = &HitEffectSeParam::Eclipse_Blow_L;
        utHitEffectSeParam["Eclipse_Blow_LL"] = &HitEffectSeParam::Eclipse_Blow_LL;
        utHitEffectSeParam["Energy_Slash_S"] = &HitEffectSeParam::Energy_Slash_S;
        utHitEffectSeParam["Energy_Slash_L"] = &HitEffectSeParam::Energy_Slash_L;
        utHitEffectSeParam["Energy_Slash_LL"] = &HitEffectSeParam::Energy_Slash_LL;
        utHitEffectSeParam["Energy_Thrust_S"] = &HitEffectSeParam::Energy_Thrust_S;
        utHitEffectSeParam["Energy_Thrust_L"] = &HitEffectSeParam::Energy_Thrust_L;
        utHitEffectSeParam["Energy_Thrust_LL"] = &HitEffectSeParam::Energy_Thrust_LL;
        utHitEffectSeParam["Energy_Blow_S"] = &HitEffectSeParam::Energy_Blow_S;
        utHitEffectSeParam["Energy_Blow_L"] = &HitEffectSeParam::Energy_Blow_L;
        utHitEffectSeParam["Energy_Blow_LL"] = &HitEffectSeParam::Energy_Blow_LL;
        utHitEffectSeParam["None_Slash_S"] = &HitEffectSeParam::None_Slash_S;
        utHitEffectSeParam["None_Slash_L"] = &HitEffectSeParam::None_Slash_L;
        utHitEffectSeParam["None_Slash_LL"] = &HitEffectSeParam::None_Slash_LL;
        utHitEffectSeParam["None_Thrust_S"] = &HitEffectSeParam::None_Thrust_S;
        utHitEffectSeParam["None_Thrust_L"] = &HitEffectSeParam::None_Thrust_L;
        utHitEffectSeParam["None_Thrust_LL"] = &HitEffectSeParam::None_Thrust_LL;
        utHitEffectSeParam["None_Blow_S"] = &HitEffectSeParam::None_Blow_S;
        utHitEffectSeParam["None_Blow_L"] = &HitEffectSeParam::None_Blow_L;
        utHitEffectSeParam["None_Blow_LL"] = &HitEffectSeParam::None_Blow_LL;
        utHitEffectSeParam["Dmy1_Slash_S"] = &HitEffectSeParam::Dmy1_Slash_S;
        utHitEffectSeParam["Dmy1_Slash_L"] = &HitEffectSeParam::Dmy1_Slash_L;
        utHitEffectSeParam["Dmy1_Slash_LL"] = &HitEffectSeParam::Dmy1_Slash_LL;
        utHitEffectSeParam["Dmy1_Thrust_S"] = &HitEffectSeParam::Dmy1_Thrust_S;
        utHitEffectSeParam["Dmy1_Thrust_L"] = &HitEffectSeParam::Dmy1_Thrust_L;
        utHitEffectSeParam["Dmy1_Thrust_LL"] = &HitEffectSeParam::Dmy1_Thrust_LL;
        utHitEffectSeParam["Dmy1_Blow_S"] = &HitEffectSeParam::Dmy1_Blow_S;
        utHitEffectSeParam["Dmy1_Blow_L"] = &HitEffectSeParam::Dmy1_Blow_L;
        utHitEffectSeParam["Dmy1_Blow_LL"] = &HitEffectSeParam::Dmy1_Blow_LL;
        utHitEffectSeParam["Dmy2_Slash_S"] = &HitEffectSeParam::Dmy2_Slash_S;
        utHitEffectSeParam["Dmy2_Slash_L"] = &HitEffectSeParam::Dmy2_Slash_L;
        utHitEffectSeParam["Dmy2_Slash_LL"] = &HitEffectSeParam::Dmy2_Slash_LL;
        utHitEffectSeParam["Dmy2_Thrust_S"] = &HitEffectSeParam::Dmy2_Thrust_S;
        utHitEffectSeParam["Dmy2_Thrust_L"] = &HitEffectSeParam::Dmy2_Thrust_L;
        utHitEffectSeParam["Dmy2_Thrust_LL"] = &HitEffectSeParam::Dmy2_Thrust_LL;
        utHitEffectSeParam["Dmy2_Blow_S"] = &HitEffectSeParam::Dmy2_Blow_S;
        utHitEffectSeParam["Dmy2_Blow_L"] = &HitEffectSeParam::Dmy2_Blow_L;
        utHitEffectSeParam["Dmy2_Blow_LL"] = &HitEffectSeParam::Dmy2_Blow_LL;
        utHitEffectSeParam["Dmy3_Slash_S"] = &HitEffectSeParam::Dmy3_Slash_S;
        utHitEffectSeParam["Dmy3_Slash_L"] = &HitEffectSeParam::Dmy3_Slash_L;
        utHitEffectSeParam["Dmy3_Slash_LL"] = &HitEffectSeParam::Dmy3_Slash_LL;
        utHitEffectSeParam["Dmy3_Thrust_S"] = &HitEffectSeParam::Dmy3_Thrust_S;
        utHitEffectSeParam["Dmy3_Thrust_L"] = &HitEffectSeParam::Dmy3_Thrust_L;
        utHitEffectSeParam["Dmy3_Thrust_LL"] = &HitEffectSeParam::Dmy3_Thrust_LL;
        utHitEffectSeParam["Dmy3_Blow_S"] = &HitEffectSeParam::Dmy3_Blow_S;
        utHitEffectSeParam["Dmy3_Blow_L"] = &HitEffectSeParam::Dmy3_Blow_L;
        utHitEffectSeParam["Dmy3_Blow_LL"] = &HitEffectSeParam::Dmy3_Blow_LL;
        utHitEffectSeParam["Maggot_Slash_S"] = &HitEffectSeParam::Maggot_Slash_S;
        utHitEffectSeParam["Maggot_Slash_L"] = &HitEffectSeParam::Maggot_Slash_L;
        utHitEffectSeParam["Maggot_Slash_LL"] = &HitEffectSeParam::Maggot_Slash_LL;
        utHitEffectSeParam["Maggot_Thrust_S"] = &HitEffectSeParam::Maggot_Thrust_S;
        utHitEffectSeParam["Maggot_Thrust_L"] = &HitEffectSeParam::Maggot_Thrust_L;
        utHitEffectSeParam["Maggot_Thrust_LL"] = &HitEffectSeParam::Maggot_Thrust_LL;
        utHitEffectSeParam["Maggot_Blow_S"] = &HitEffectSeParam::Maggot_Blow_S;
        utHitEffectSeParam["Maggot_Blow_L"] = &HitEffectSeParam::Maggot_Blow_L;
        utHitEffectSeParam["Maggot_Blow_LL"] = &HitEffectSeParam::Maggot_Blow_LL;
        utHitEffectSeParam["Wax_Slash_S"] = &HitEffectSeParam::Wax_Slash_S;
        utHitEffectSeParam["Wax_Slash_L"] = &HitEffectSeParam::Wax_Slash_L;
        utHitEffectSeParam["Wax_Slash_LL"] = &HitEffectSeParam::Wax_Slash_LL;
        utHitEffectSeParam["Wax_Thrust_S"] = &HitEffectSeParam::Wax_Thrust_S;
        utHitEffectSeParam["Wax_Thrust_L"] = &HitEffectSeParam::Wax_Thrust_L;
        utHitEffectSeParam["Wax_Thrust_LL"] = &HitEffectSeParam::Wax_Thrust_LL;
        utHitEffectSeParam["Wax_Blow_S"] = &HitEffectSeParam::Wax_Blow_S;
        utHitEffectSeParam["Wax_Blow_L"] = &HitEffectSeParam::Wax_Blow_L;
        utHitEffectSeParam["Wax_Blow_LL"] = &HitEffectSeParam::Wax_Blow_LL;
        utHitEffectSeParam["FireFlame_Slash_S"] = &HitEffectSeParam::FireFlame_Slash_S;
        utHitEffectSeParam["FireFlame_Slash_L"] = &HitEffectSeParam::FireFlame_Slash_L;
        utHitEffectSeParam["FireFlame_Slash_LL"] = &HitEffectSeParam::FireFlame_Slash_LL;
        utHitEffectSeParam["FireFlame_Thrust_S"] = &HitEffectSeParam::FireFlame_Thrust_S;
        utHitEffectSeParam["FireFlame_Thrust_L"] = &HitEffectSeParam::FireFlame_Thrust_L;
        utHitEffectSeParam["FireFlame_Thrust_LL"] = &HitEffectSeParam::FireFlame_Thrust_LL;
        utHitEffectSeParam["FireFlame_Blow_S"] = &HitEffectSeParam::FireFlame_Blow_S;
        utHitEffectSeParam["FireFlame_Blow_L"] = &HitEffectSeParam::FireFlame_Blow_L;
        utHitEffectSeParam["FireFlame_Blow_LL"] = &HitEffectSeParam::FireFlame_Blow_LL;
        utHitEffectSeParam["EclipseGas_Slash_S"] = &HitEffectSeParam::EclipseGas_Slash_S;
        utHitEffectSeParam["EclipseGas_Slash_L"] = &HitEffectSeParam::EclipseGas_Slash_L;
        utHitEffectSeParam["EclipseGas_Slash_LL"] = &HitEffectSeParam::EclipseGas_Slash_LL;
        utHitEffectSeParam["EclipseGas_Thrust_S"] = &HitEffectSeParam::EclipseGas_Thrust_S;
        utHitEffectSeParam["EclipseGas_Thrust_L"] = &HitEffectSeParam::EclipseGas_Thrust_L;
        utHitEffectSeParam["EclipseGas_Thrust_LL"] = &HitEffectSeParam::EclipseGas_Thrust_LL;
        utHitEffectSeParam["EclipseGas_Blow_S"] = &HitEffectSeParam::EclipseGas_Blow_S;
        utHitEffectSeParam["EclipseGas_Blow_L"] = &HitEffectSeParam::EclipseGas_Blow_L;
        utHitEffectSeParam["EclipseGas_Blow_LL"] = &HitEffectSeParam::EclipseGas_Blow_LL;
        utHitEffectSeParam["EnergyStrong_Slash_S"] = &HitEffectSeParam::EnergyStrong_Slash_S;
        utHitEffectSeParam["EnergyStrong_Slash_L"] = &HitEffectSeParam::EnergyStrong_Slash_L;
        utHitEffectSeParam["EnergyStrong_Slash_LL"] = &HitEffectSeParam::EnergyStrong_Slash_LL;
        utHitEffectSeParam["EnergyStrong_Thrust_S"] = &HitEffectSeParam::EnergyStrong_Thrust_S;
        utHitEffectSeParam["EnergyStrong_Thrust_L"] = &HitEffectSeParam::EnergyStrong_Thrust_L;
        utHitEffectSeParam["EnergyStrong_Thrust_LL"] = &HitEffectSeParam::EnergyStrong_Thrust_LL;
        utHitEffectSeParam["EnergyStrong_Blow_S"] = &HitEffectSeParam::EnergyStrong_Blow_S;
        utHitEffectSeParam["EnergyStrong_Blow_L"] = &HitEffectSeParam::EnergyStrong_Blow_L;
        utHitEffectSeParam["EnergyStrong_Blow_LL"] = &HitEffectSeParam::EnergyStrong_Blow_LL;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<HitEffectSeParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<HitEffectSeParam>>(nullptr);
        indexer->setFieldNames({
            {"Iron_Slash_S", false},
            {"Iron_Slash_L", false},
            {"Iron_Slash_LL", false},
            {"Iron_Thrust_S", false},
            {"Iron_Thrust_L", false},
            {"Iron_Thrust_LL", false},
            {"Iron_Blow_S", false},
            {"Iron_Blow_L", false},
            {"Iron_Blow_LL", false},
            {"Fire_Slash_S", false},
            {"Fire_Slash_L", false},
            {"Fire_Slash_LL", false},
            {"Fire_Thrust_S", false},
            {"Fire_Thrust_L", false},
            {"Fire_Thrust_LL", false},
            {"Fire_Blow_S", false},
            {"Fire_Blow_L", false},
            {"Fire_Blow_LL", false},
            {"Wood_Slash_S", false},
            {"Wood_Slash_L", false},
            {"Wood_Slash_LL", false},
            {"Wood_Thrust_S", false},
            {"Wood_Thrust_L", false},
            {"Wood_Thrust_LL", false},
            {"Wood_Blow_S", false},
            {"Wood_Blow_L", false},
            {"Wood_Blow_LL", false},
            {"Body_Slash_S", false},
            {"Body_Slash_L", false},
            {"Body_Slash_LL", false},
            {"Body_Thrust_S", false},
            {"Body_Thrust_L", false},
            {"Body_Thrust_LL", false},
            {"Body_Blow_S", false},
            {"Body_Blow_L", false},
            {"Body_Blow_LL", false},
            {"Eclipse_Slash_S", false},
            {"Eclipse_Slash_L", false},
            {"Eclipse_Slash_LL", false},
            {"Eclipse_Thrust_S", false},
            {"Eclipse_Thrust_L", false},
            {"Eclipse_Thrust_LL", false},
            {"Eclipse_Blow_S", false},
            {"Eclipse_Blow_L", false},
            {"Eclipse_Blow_LL", false},
            {"Energy_Slash_S", false},
            {"Energy_Slash_L", false},
            {"Energy_Slash_LL", false},
            {"Energy_Thrust_S", false},
            {"Energy_Thrust_L", false},
            {"Energy_Thrust_LL", false},
            {"Energy_Blow_S", false},
            {"Energy_Blow_L", false},
            {"Energy_Blow_LL", false},
            {"None_Slash_S", false},
            {"None_Slash_L", false},
            {"None_Slash_LL", false},
            {"None_Thrust_S", false},
            {"None_Thrust_L", false},
            {"None_Thrust_LL", false},
            {"None_Blow_S", false},
            {"None_Blow_L", false},
            {"None_Blow_LL", false},
            {"Dmy1_Slash_S", false},
            {"Dmy1_Slash_L", false},
            {"Dmy1_Slash_LL", false},
            {"Dmy1_Thrust_S", false},
            {"Dmy1_Thrust_L", false},
            {"Dmy1_Thrust_LL", false},
            {"Dmy1_Blow_S", false},
            {"Dmy1_Blow_L", false},
            {"Dmy1_Blow_LL", false},
            {"Dmy2_Slash_S", false},
            {"Dmy2_Slash_L", false},
            {"Dmy2_Slash_LL", false},
            {"Dmy2_Thrust_S", false},
            {"Dmy2_Thrust_L", false},
            {"Dmy2_Thrust_LL", false},
            {"Dmy2_Blow_S", false},
            {"Dmy2_Blow_L", false},
            {"Dmy2_Blow_LL", false},
            {"Dmy3_Slash_S", false},
            {"Dmy3_Slash_L", false},
            {"Dmy3_Slash_LL", false},
            {"Dmy3_Thrust_S", false},
            {"Dmy3_Thrust_L", false},
            {"Dmy3_Thrust_LL", false},
            {"Dmy3_Blow_S", false},
            {"Dmy3_Blow_L", false},
            {"Dmy3_Blow_LL", false},
            {"Maggot_Slash_S", false},
            {"Maggot_Slash_L", false},
            {"Maggot_Slash_LL", false},
            {"Maggot_Thrust_S", false},
            {"Maggot_Thrust_L", false},
            {"Maggot_Thrust_LL", false},
            {"Maggot_Blow_S", false},
            {"Maggot_Blow_L", false},
            {"Maggot_Blow_LL", false},
            {"Wax_Slash_S", false},
            {"Wax_Slash_L", false},
            {"Wax_Slash_LL", false},
            {"Wax_Thrust_S", false},
            {"Wax_Thrust_L", false},
            {"Wax_Thrust_LL", false},
            {"Wax_Blow_S", false},
            {"Wax_Blow_L", false},
            {"Wax_Blow_LL", false},
            {"FireFlame_Slash_S", false},
            {"FireFlame_Slash_L", false},
            {"FireFlame_Slash_LL", false},
            {"FireFlame_Thrust_S", false},
            {"FireFlame_Thrust_L", false},
            {"FireFlame_Thrust_LL", false},
            {"FireFlame_Blow_S", false},
            {"FireFlame_Blow_L", false},
            {"FireFlame_Blow_LL", false},
            {"EclipseGas_Slash_S", false},
            {"EclipseGas_Slash_L", false},
            {"EclipseGas_Slash_LL", false},
            {"EclipseGas_Thrust_S", false},
            {"EclipseGas_Thrust_L", false},
            {"EclipseGas_Thrust_LL", false},
            {"EclipseGas_Blow_S", false},
            {"EclipseGas_Blow_L", false},
            {"EclipseGas_Blow_LL", false},
            {"EnergyStrong_Slash_S", false},
            {"EnergyStrong_Slash_L", false},
            {"EnergyStrong_Slash_LL", false},
            {"EnergyStrong_Thrust_S", false},
            {"EnergyStrong_Thrust_L", false},
            {"EnergyStrong_Thrust_LL", false},
            {"EnergyStrong_Blow_S", false},
            {"EnergyStrong_Blow_L", false},
            {"EnergyStrong_Blow_LL", false},
        });
        return indexer;
    };
    paramsTable["HitEffectSeParam"] = [tableLoader]() -> auto { return tableLoader(L"HitEffectSeParam"); };
}

template<> void ParamTableIndexer<HitEffectSeParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,Iron_Slash_S,Iron_Slash_L,Iron_Slash_LL,Iron_Thrust_S,Iron_Thrust_L,Iron_Thrust_LL,Iron_Blow_S,Iron_Blow_L,Iron_Blow_LL,Fire_Slash_S,Fire_Slash_L,Fire_Slash_LL,Fire_Thrust_S,Fire_Thrust_L,Fire_Thrust_LL,Fire_Blow_S,Fire_Blow_L,Fire_Blow_LL,Wood_Slash_S,Wood_Slash_L,Wood_Slash_LL,Wood_Thrust_S,Wood_Thrust_L,Wood_Thrust_LL,Wood_Blow_S,Wood_Blow_L,Wood_Blow_LL,Body_Slash_S,Body_Slash_L,Body_Slash_LL,Body_Thrust_S,Body_Thrust_L,Body_Thrust_LL,Body_Blow_S,Body_Blow_L,Body_Blow_LL,Eclipse_Slash_S,Eclipse_Slash_L,Eclipse_Slash_LL,Eclipse_Thrust_S,Eclipse_Thrust_L,Eclipse_Thrust_LL,Eclipse_Blow_S,Eclipse_Blow_L,Eclipse_Blow_LL,Energy_Slash_S,Energy_Slash_L,Energy_Slash_LL,Energy_Thrust_S,Energy_Thrust_L,Energy_Thrust_LL,Energy_Blow_S,Energy_Blow_L,Energy_Blow_LL,None_Slash_S,None_Slash_L,None_Slash_LL,None_Thrust_S,None_Thrust_L,None_Thrust_LL,None_Blow_S,None_Blow_L,None_Blow_LL,Dmy1_Slash_S,Dmy1_Slash_L,Dmy1_Slash_LL,Dmy1_Thrust_S,Dmy1_Thrust_L,Dmy1_Thrust_LL,Dmy1_Blow_S,Dmy1_Blow_L,Dmy1_Blow_LL,Dmy2_Slash_S,Dmy2_Slash_L,Dmy2_Slash_LL,Dmy2_Thrust_S,Dmy2_Thrust_L,Dmy2_Thrust_LL,Dmy2_Blow_S,Dmy2_Blow_L,Dmy2_Blow_LL,Dmy3_Slash_S,Dmy3_Slash_L,Dmy3_Slash_LL,Dmy3_Thrust_S,Dmy3_Thrust_L,Dmy3_Thrust_LL,Dmy3_Blow_S,Dmy3_Blow_L,Dmy3_Blow_LL,Maggot_Slash_S,Maggot_Slash_L,Maggot_Slash_LL,Maggot_Thrust_S,Maggot_Thrust_L,Maggot_Thrust_LL,Maggot_Blow_S,Maggot_Blow_L,Maggot_Blow_LL,Wax_Slash_S,Wax_Slash_L,Wax_Slash_LL,Wax_Thrust_S,Wax_Thrust_L,Wax_Thrust_LL,Wax_Blow_S,Wax_Blow_L,Wax_Blow_LL,FireFlame_Slash_S,FireFlame_Slash_L,FireFlame_Slash_LL,FireFlame_Thrust_S,FireFlame_Thrust_L,FireFlame_Thrust_LL,FireFlame_Blow_S,FireFlame_Blow_L,FireFlame_Blow_LL,EclipseGas_Slash_S,EclipseGas_Slash_L,EclipseGas_Slash_LL,EclipseGas_Thrust_S,EclipseGas_Thrust_L,EclipseGas_Thrust_LL,EclipseGas_Blow_S,EclipseGas_Blow_L,EclipseGas_Blow_LL,EnergyStrong_Slash_S,EnergyStrong_Slash_L,EnergyStrong_Slash_LL,EnergyStrong_Thrust_S,EnergyStrong_Thrust_L,EnergyStrong_Thrust_LL,EnergyStrong_Blow_S,EnergyStrong_Blow_L,EnergyStrong_Blow_LL\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->Iron_Slash_S,
            param->Iron_Slash_L,
            param->Iron_Slash_LL,
            param->Iron_Thrust_S,
            param->Iron_Thrust_L,
            param->Iron_Thrust_LL,
            param->Iron_Blow_S,
            param->Iron_Blow_L,
            param->Iron_Blow_LL,
            param->Fire_Slash_S,
            param->Fire_Slash_L,
            param->Fire_Slash_LL,
            param->Fire_Thrust_S,
            param->Fire_Thrust_L,
            param->Fire_Thrust_LL,
            param->Fire_Blow_S,
            param->Fire_Blow_L,
            param->Fire_Blow_LL,
            param->Wood_Slash_S,
            param->Wood_Slash_L,
            param->Wood_Slash_LL,
            param->Wood_Thrust_S,
            param->Wood_Thrust_L,
            param->Wood_Thrust_LL,
            param->Wood_Blow_S,
            param->Wood_Blow_L,
            param->Wood_Blow_LL,
            param->Body_Slash_S,
            param->Body_Slash_L,
            param->Body_Slash_LL,
            param->Body_Thrust_S,
            param->Body_Thrust_L,
            param->Body_Thrust_LL,
            param->Body_Blow_S,
            param->Body_Blow_L,
            param->Body_Blow_LL,
            param->Eclipse_Slash_S,
            param->Eclipse_Slash_L,
            param->Eclipse_Slash_LL,
            param->Eclipse_Thrust_S,
            param->Eclipse_Thrust_L,
            param->Eclipse_Thrust_LL,
            param->Eclipse_Blow_S,
            param->Eclipse_Blow_L,
            param->Eclipse_Blow_LL,
            param->Energy_Slash_S,
            param->Energy_Slash_L,
            param->Energy_Slash_LL,
            param->Energy_Thrust_S,
            param->Energy_Thrust_L,
            param->Energy_Thrust_LL,
            param->Energy_Blow_S,
            param->Energy_Blow_L,
            param->Energy_Blow_LL,
            param->None_Slash_S,
            param->None_Slash_L,
            param->None_Slash_LL,
            param->None_Thrust_S,
            param->None_Thrust_L,
            param->None_Thrust_LL,
            param->None_Blow_S,
            param->None_Blow_L,
            param->None_Blow_LL,
            param->Dmy1_Slash_S,
            param->Dmy1_Slash_L,
            param->Dmy1_Slash_LL,
            param->Dmy1_Thrust_S,
            param->Dmy1_Thrust_L,
            param->Dmy1_Thrust_LL,
            param->Dmy1_Blow_S,
            param->Dmy1_Blow_L,
            param->Dmy1_Blow_LL,
            param->Dmy2_Slash_S,
            param->Dmy2_Slash_L,
            param->Dmy2_Slash_LL,
            param->Dmy2_Thrust_S,
            param->Dmy2_Thrust_L,
            param->Dmy2_Thrust_LL,
            param->Dmy2_Blow_S,
            param->Dmy2_Blow_L,
            param->Dmy2_Blow_LL,
            param->Dmy3_Slash_S,
            param->Dmy3_Slash_L,
            param->Dmy3_Slash_LL,
            param->Dmy3_Thrust_S,
            param->Dmy3_Thrust_L,
            param->Dmy3_Thrust_LL,
            param->Dmy3_Blow_S,
            param->Dmy3_Blow_L,
            param->Dmy3_Blow_LL,
            param->Maggot_Slash_S,
            param->Maggot_Slash_L,
            param->Maggot_Slash_LL,
            param->Maggot_Thrust_S,
            param->Maggot_Thrust_L,
            param->Maggot_Thrust_LL,
            param->Maggot_Blow_S,
            param->Maggot_Blow_L,
            param->Maggot_Blow_LL,
            param->Wax_Slash_S,
            param->Wax_Slash_L,
            param->Wax_Slash_LL,
            param->Wax_Thrust_S,
            param->Wax_Thrust_L,
            param->Wax_Thrust_LL,
            param->Wax_Blow_S,
            param->Wax_Blow_L,
            param->Wax_Blow_LL,
            param->FireFlame_Slash_S,
            param->FireFlame_Slash_L,
            param->FireFlame_Slash_LL,
            param->FireFlame_Thrust_S,
            param->FireFlame_Thrust_L,
            param->FireFlame_Thrust_LL,
            param->FireFlame_Blow_S,
            param->FireFlame_Blow_L,
            param->FireFlame_Blow_LL,
            param->EclipseGas_Slash_S,
            param->EclipseGas_Slash_L,
            param->EclipseGas_Slash_LL,
            param->EclipseGas_Thrust_S,
            param->EclipseGas_Thrust_L,
            param->EclipseGas_Thrust_LL,
            param->EclipseGas_Blow_S,
            param->EclipseGas_Blow_L,
            param->EclipseGas_Blow_LL,
            param->EnergyStrong_Slash_S,
            param->EnergyStrong_Slash_L,
            param->EnergyStrong_Slash_LL,
            param->EnergyStrong_Thrust_S,
            param->EnergyStrong_Thrust_L,
            param->EnergyStrong_Thrust_LL,
            param->EnergyStrong_Blow_S,
            param->EnergyStrong_Blow_L,
            param->EnergyStrong_Blow_LL
        );
    }
    fclose(f);
}

}
