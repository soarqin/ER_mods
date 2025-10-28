#include "../luabindings.h"
#include "../defs/AssetMaterialSfxParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<AssetMaterialSfxParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerAssetMaterialSfxParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["AssetMaterialSfxParam"]; usertype) return;
        auto indexerAssetMaterialSfxParam = state->new_usertype<ParamTableIndexer<AssetMaterialSfxParam>>("AssetMaterialSfxParamTableIndexer");
        indexerAssetMaterialSfxParam["count"] = sol::property(&ParamTableIndexer<AssetMaterialSfxParam>::count);
        indexerAssetMaterialSfxParam["__index"] = &ParamTableIndexer<AssetMaterialSfxParam>::at;
        indexerAssetMaterialSfxParam["id"] = &ParamTableIndexer<AssetMaterialSfxParam>::paramId;
        indexerAssetMaterialSfxParam["get"] = &ParamTableIndexer<AssetMaterialSfxParam>::get;
        indexerAssetMaterialSfxParam["exportToCsv"] = &ParamTableIndexer<AssetMaterialSfxParam>::exportToCsv;
        indexerAssetMaterialSfxParam["importFromCsv"] = &ParamTableIndexer<AssetMaterialSfxParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<AssetMaterialSfxParam>>(state, L"AssetMaterialSfxParam");
        indexer->setFieldNames({
            {"sfxId_00", false},
            {"sfxId_01", false},
            {"sfxId_02", false},
            {"sfxId_03", false},
            {"sfxId_04", false},
            {"sfxId_05", false},
            {"sfxId_06", false},
            {"sfxId_07", false},
            {"sfxId_08", false},
            {"sfxId_09", false},
            {"sfxId_10", false},
            {"sfxId_11", false},
            {"sfxId_12", false},
            {"sfxId_13", false},
            {"sfxId_14", false},
            {"sfxId_15", false},
            {"sfxId_16", false},
            {"sfxId_17", false},
            {"sfxId_18", false},
            {"sfxId_19", false},
            {"sfxId_20", false},
            {"sfxId_21", false},
            {"sfxId_22", false},
            {"sfxId_23", false},
            {"sfxId_24", false},
            {"sfxId_25", false},
            {"sfxId_26", false},
            {"sfxId_27", false},
            {"sfxId_28", false},
            {"sfxId_29", false},
            {"sfxId_30", false},
            {"sfxId_31", false},
        });
        return indexer;
    };
    paramsTable["AssetMaterialSfxParam"] = tableLoader;
}

template<> void ParamTableIndexer<AssetMaterialSfxParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,sfxId_00,sfxId_01,sfxId_02,sfxId_03,sfxId_04,sfxId_05,sfxId_06,sfxId_07,sfxId_08,sfxId_09,sfxId_10,sfxId_11,sfxId_12,sfxId_13,sfxId_14,sfxId_15,sfxId_16,sfxId_17,sfxId_18,sfxId_19,sfxId_20,sfxId_21,sfxId_22,sfxId_23,sfxId_24,sfxId_25,sfxId_26,sfxId_27,sfxId_28,sfxId_29,sfxId_30,sfxId_31\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u\n",
            this->paramId(i),
            param->sfxId_00,
            param->sfxId_01,
            param->sfxId_02,
            param->sfxId_03,
            param->sfxId_04,
            param->sfxId_05,
            param->sfxId_06,
            param->sfxId_07,
            param->sfxId_08,
            param->sfxId_09,
            param->sfxId_10,
            param->sfxId_11,
            param->sfxId_12,
            param->sfxId_13,
            param->sfxId_14,
            param->sfxId_15,
            param->sfxId_16,
            param->sfxId_17,
            param->sfxId_18,
            param->sfxId_19,
            param->sfxId_20,
            param->sfxId_21,
            param->sfxId_22,
            param->sfxId_23,
            param->sfxId_24,
            param->sfxId_25,
            param->sfxId_26,
            param->sfxId_27,
            param->sfxId_28,
            param->sfxId_29,
            param->sfxId_30,
            param->sfxId_31
        );
    }
    fclose(f);
}

}
