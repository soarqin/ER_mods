#include "../luabindings.h"
#include "../defs/AssetMaterialSfxParam.h"

namespace paramadjuster::params {

void registerAssetMaterialSfxParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["AssetMaterialSfxParam"]; usertype) return;
        auto indexerAssetMaterialSfxParam = state->new_usertype<ParamTableIndexer<AssetMaterialSfxParam>>("AssetMaterialSfxParamTableIndexer");
        indexerAssetMaterialSfxParam["count"] = sol::property(&ParamTableIndexer<AssetMaterialSfxParam>::count);
        indexerAssetMaterialSfxParam["__index"] = &ParamTableIndexer<AssetMaterialSfxParam>::at;
        indexerAssetMaterialSfxParam["id"] = &ParamTableIndexer<AssetMaterialSfxParam>::paramId;
        indexerAssetMaterialSfxParam["get"] = &ParamTableIndexer<AssetMaterialSfxParam>::get;
        auto utAssetMaterialSfxParam = state->new_usertype<AssetMaterialSfxParam>("AssetMaterialSfxParam");
        utAssetMaterialSfxParam["sfxId_00"] = &AssetMaterialSfxParam::sfxId_00;
        utAssetMaterialSfxParam["sfxId_01"] = &AssetMaterialSfxParam::sfxId_01;
        utAssetMaterialSfxParam["sfxId_02"] = &AssetMaterialSfxParam::sfxId_02;
        utAssetMaterialSfxParam["sfxId_03"] = &AssetMaterialSfxParam::sfxId_03;
        utAssetMaterialSfxParam["sfxId_04"] = &AssetMaterialSfxParam::sfxId_04;
        utAssetMaterialSfxParam["sfxId_05"] = &AssetMaterialSfxParam::sfxId_05;
        utAssetMaterialSfxParam["sfxId_06"] = &AssetMaterialSfxParam::sfxId_06;
        utAssetMaterialSfxParam["sfxId_07"] = &AssetMaterialSfxParam::sfxId_07;
        utAssetMaterialSfxParam["sfxId_08"] = &AssetMaterialSfxParam::sfxId_08;
        utAssetMaterialSfxParam["sfxId_09"] = &AssetMaterialSfxParam::sfxId_09;
        utAssetMaterialSfxParam["sfxId_10"] = &AssetMaterialSfxParam::sfxId_10;
        utAssetMaterialSfxParam["sfxId_11"] = &AssetMaterialSfxParam::sfxId_11;
        utAssetMaterialSfxParam["sfxId_12"] = &AssetMaterialSfxParam::sfxId_12;
        utAssetMaterialSfxParam["sfxId_13"] = &AssetMaterialSfxParam::sfxId_13;
        utAssetMaterialSfxParam["sfxId_14"] = &AssetMaterialSfxParam::sfxId_14;
        utAssetMaterialSfxParam["sfxId_15"] = &AssetMaterialSfxParam::sfxId_15;
        utAssetMaterialSfxParam["sfxId_16"] = &AssetMaterialSfxParam::sfxId_16;
        utAssetMaterialSfxParam["sfxId_17"] = &AssetMaterialSfxParam::sfxId_17;
        utAssetMaterialSfxParam["sfxId_18"] = &AssetMaterialSfxParam::sfxId_18;
        utAssetMaterialSfxParam["sfxId_19"] = &AssetMaterialSfxParam::sfxId_19;
        utAssetMaterialSfxParam["sfxId_20"] = &AssetMaterialSfxParam::sfxId_20;
        utAssetMaterialSfxParam["sfxId_21"] = &AssetMaterialSfxParam::sfxId_21;
        utAssetMaterialSfxParam["sfxId_22"] = &AssetMaterialSfxParam::sfxId_22;
        utAssetMaterialSfxParam["sfxId_23"] = &AssetMaterialSfxParam::sfxId_23;
        utAssetMaterialSfxParam["sfxId_24"] = &AssetMaterialSfxParam::sfxId_24;
        utAssetMaterialSfxParam["sfxId_25"] = &AssetMaterialSfxParam::sfxId_25;
        utAssetMaterialSfxParam["sfxId_26"] = &AssetMaterialSfxParam::sfxId_26;
        utAssetMaterialSfxParam["sfxId_27"] = &AssetMaterialSfxParam::sfxId_27;
        utAssetMaterialSfxParam["sfxId_28"] = &AssetMaterialSfxParam::sfxId_28;
        utAssetMaterialSfxParam["sfxId_29"] = &AssetMaterialSfxParam::sfxId_29;
        utAssetMaterialSfxParam["sfxId_30"] = &AssetMaterialSfxParam::sfxId_30;
        utAssetMaterialSfxParam["sfxId_31"] = &AssetMaterialSfxParam::sfxId_31;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<AssetMaterialSfxParam>>(gParamMgr.findTable(L"AssetMaterialSfxParam")); };
    paramsTable["AssetMaterialSfxParam"] = tableLoader;
}

}
