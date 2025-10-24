#include "../luabindings.h"
#include "../defs/AssetModelSfxParam.h"

namespace paramadjuster::params {

void registerAssetModelSfxParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["AssetModelSfxParam"]; usertype) return;
        auto indexerAssetModelSfxParam = state->new_usertype<ParamTableIndexer<AssetModelSfxParam>>("AssetModelSfxParamTableIndexer");
        indexerAssetModelSfxParam["count"] = sol::property(&ParamTableIndexer<AssetModelSfxParam>::count);
        indexerAssetModelSfxParam["__index"] = &ParamTableIndexer<AssetModelSfxParam>::at;
        indexerAssetModelSfxParam["id"] = &ParamTableIndexer<AssetModelSfxParam>::paramId;
        indexerAssetModelSfxParam["get"] = &ParamTableIndexer<AssetModelSfxParam>::get;
        auto utAssetModelSfxParam = state->new_usertype<AssetModelSfxParam>("AssetModelSfxParam");
        utAssetModelSfxParam["sfxId_0"] = &AssetModelSfxParam::sfxId_0;
        utAssetModelSfxParam["dmypolyId_0"] = &AssetModelSfxParam::dmypolyId_0;
        utAssetModelSfxParam["sfxId_1"] = &AssetModelSfxParam::sfxId_1;
        utAssetModelSfxParam["dmypolyId_1"] = &AssetModelSfxParam::dmypolyId_1;
        utAssetModelSfxParam["sfxId_2"] = &AssetModelSfxParam::sfxId_2;
        utAssetModelSfxParam["dmypolyId_2"] = &AssetModelSfxParam::dmypolyId_2;
        utAssetModelSfxParam["sfxId_3"] = &AssetModelSfxParam::sfxId_3;
        utAssetModelSfxParam["dmypolyId_3"] = &AssetModelSfxParam::dmypolyId_3;
        utAssetModelSfxParam["sfxId_4"] = &AssetModelSfxParam::sfxId_4;
        utAssetModelSfxParam["dmypolyId_4"] = &AssetModelSfxParam::dmypolyId_4;
        utAssetModelSfxParam["sfxId_5"] = &AssetModelSfxParam::sfxId_5;
        utAssetModelSfxParam["dmypolyId_5"] = &AssetModelSfxParam::dmypolyId_5;
        utAssetModelSfxParam["sfxId_6"] = &AssetModelSfxParam::sfxId_6;
        utAssetModelSfxParam["dmypolyId_6"] = &AssetModelSfxParam::dmypolyId_6;
        utAssetModelSfxParam["sfxId_7"] = &AssetModelSfxParam::sfxId_7;
        utAssetModelSfxParam["dmypolyId_7"] = &AssetModelSfxParam::dmypolyId_7;
        utAssetModelSfxParam["isDisableIV"] = &AssetModelSfxParam::isDisableIV;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<AssetModelSfxParam>>(gParamMgr.findTable(L"AssetModelSfxParam")); };
    paramsTable["AssetModelSfxParam"] = tableLoader;
}

}
