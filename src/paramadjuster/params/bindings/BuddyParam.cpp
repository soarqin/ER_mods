#include "../luabindings.h"
#include "../defs/BuddyParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<BuddyParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerBuddyParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BuddyParam"]; usertype) return;
        auto indexerBuddyParam = state->new_usertype<ParamTableIndexer<BuddyParam>>("BuddyParamTableIndexer");
        indexerBuddyParam["count"] = sol::property(&ParamTableIndexer<BuddyParam>::count);
        indexerBuddyParam["__index"] = &ParamTableIndexer<BuddyParam>::at;
        indexerBuddyParam["id"] = &ParamTableIndexer<BuddyParam>::paramId;
        indexerBuddyParam["get"] = &ParamTableIndexer<BuddyParam>::get;
        indexerBuddyParam["exportToCsv"] = &ParamTableIndexer<BuddyParam>::exportToCsv;
        indexerBuddyParam["importFromCsv"] = &ParamTableIndexer<BuddyParam>::importFromCsv;
        auto utBuddyParam = state->new_usertype<BuddyParam>("BuddyParam");
        utBuddyParam["disableParam_NT"] = sol::property([](BuddyParam &param) -> uint8_t { return param.disableParam_NT; }, [](BuddyParam &param, uint8_t value) { param.disableParam_NT = value; });
        utBuddyParam["triggerSpEffectId"] = &BuddyParam::triggerSpEffectId;
        utBuddyParam["npcParamId"] = &BuddyParam::npcParamId;
        utBuddyParam["npcThinkParamId"] = &BuddyParam::npcThinkParamId;
        utBuddyParam["npcParamId_ridden"] = &BuddyParam::npcParamId_ridden;
        utBuddyParam["npcThinkParamId_ridden"] = &BuddyParam::npcThinkParamId_ridden;
        utBuddyParam["x_offset"] = &BuddyParam::x_offset;
        utBuddyParam["z_offset"] = &BuddyParam::z_offset;
        utBuddyParam["y_angle"] = &BuddyParam::y_angle;
        utBuddyParam["appearOnAroundSekihi"] = &BuddyParam::appearOnAroundSekihi;
        utBuddyParam["disablePCTargetShare"] = &BuddyParam::disablePCTargetShare;
        utBuddyParam["pcFollowType"] = &BuddyParam::pcFollowType;
        utBuddyParam["dopingSpEffect_lv0"] = &BuddyParam::dopingSpEffect_lv0;
        utBuddyParam["dopingSpEffect_lv1"] = &BuddyParam::dopingSpEffect_lv1;
        utBuddyParam["dopingSpEffect_lv2"] = &BuddyParam::dopingSpEffect_lv2;
        utBuddyParam["dopingSpEffect_lv3"] = &BuddyParam::dopingSpEffect_lv3;
        utBuddyParam["dopingSpEffect_lv4"] = &BuddyParam::dopingSpEffect_lv4;
        utBuddyParam["dopingSpEffect_lv5"] = &BuddyParam::dopingSpEffect_lv5;
        utBuddyParam["dopingSpEffect_lv6"] = &BuddyParam::dopingSpEffect_lv6;
        utBuddyParam["dopingSpEffect_lv7"] = &BuddyParam::dopingSpEffect_lv7;
        utBuddyParam["dopingSpEffect_lv8"] = &BuddyParam::dopingSpEffect_lv8;
        utBuddyParam["dopingSpEffect_lv9"] = &BuddyParam::dopingSpEffect_lv9;
        utBuddyParam["dopingSpEffect_lv10"] = &BuddyParam::dopingSpEffect_lv10;
        utBuddyParam["npcPlayerInitParamId"] = &BuddyParam::npcPlayerInitParamId;
        utBuddyParam["generateAnimId"] = &BuddyParam::generateAnimId;
        utBuddyParam["unknown_0x5c"] = &BuddyParam::unknown_0x5c;
        utBuddyParam["unknown_0x60"] = &BuddyParam::unknown_0x60;
        utBuddyParam["unknown_0x64"] = &BuddyParam::unknown_0x64;
        utBuddyParam["unknown_0x68"] = &BuddyParam::unknown_0x68;
        utBuddyParam["unknown_0x6c"] = &BuddyParam::unknown_0x6c;
        utBuddyParam["unknown_0x70"] = &BuddyParam::unknown_0x70;
        utBuddyParam["unknown_0x74"] = &BuddyParam::unknown_0x74;
        utBuddyParam["unknown_0x78"] = &BuddyParam::unknown_0x78;
        utBuddyParam["unknown_0x7c"] = &BuddyParam::unknown_0x7c;
        utBuddyParam["unknown_0x80"] = &BuddyParam::unknown_0x80;
        utBuddyParam["unknown_0x84"] = &BuddyParam::unknown_0x84;
        utBuddyParam["unknown_0x88"] = &BuddyParam::unknown_0x88;
        utBuddyParam["unknown_0x8c"] = &BuddyParam::unknown_0x8c;
        utBuddyParam["unknown_0x90"] = &BuddyParam::unknown_0x90;
        utBuddyParam["unknown_0x94"] = &BuddyParam::unknown_0x94;
        utBuddyParam["unknown_0x98"] = &BuddyParam::unknown_0x98;
        utBuddyParam["unknown_0x9c"] = &BuddyParam::unknown_0x9c;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<BuddyParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<BuddyParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"triggerSpEffectId", false},
            {"npcParamId", false},
            {"npcThinkParamId", false},
            {"npcParamId_ridden", false},
            {"npcThinkParamId_ridden", false},
            {"x_offset", false},
            {"z_offset", false},
            {"y_angle", false},
            {"appearOnAroundSekihi", false},
            {"disablePCTargetShare", false},
            {"pcFollowType", false},
            {"dopingSpEffect_lv0", false},
            {"dopingSpEffect_lv1", false},
            {"dopingSpEffect_lv2", false},
            {"dopingSpEffect_lv3", false},
            {"dopingSpEffect_lv4", false},
            {"dopingSpEffect_lv5", false},
            {"dopingSpEffect_lv6", false},
            {"dopingSpEffect_lv7", false},
            {"dopingSpEffect_lv8", false},
            {"dopingSpEffect_lv9", false},
            {"dopingSpEffect_lv10", false},
            {"npcPlayerInitParamId", false},
            {"generateAnimId", false},
            {"unknown_0x5c", false},
            {"unknown_0x60", false},
            {"unknown_0x64", false},
            {"unknown_0x68", false},
            {"unknown_0x6c", false},
            {"unknown_0x70", false},
            {"unknown_0x74", false},
            {"unknown_0x78", false},
            {"unknown_0x7c", false},
            {"unknown_0x80", false},
            {"unknown_0x84", false},
            {"unknown_0x88", false},
            {"unknown_0x8c", false},
            {"unknown_0x90", false},
            {"unknown_0x94", false},
            {"unknown_0x98", false},
            {"unknown_0x9c", false},
        });
        return indexer;
    };
    paramsTable["BuddyParam"] = [tableLoader]() -> auto { return tableLoader(L"BuddyParam"); };
}

template<> void ParamTableIndexer<BuddyParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,triggerSpEffectId,npcParamId,npcThinkParamId,npcParamId_ridden,npcThinkParamId_ridden,x_offset,z_offset,y_angle,appearOnAroundSekihi,disablePCTargetShare,pcFollowType,dopingSpEffect_lv0,dopingSpEffect_lv1,dopingSpEffect_lv2");
    fwprintf(f, L",dopingSpEffect_lv3,dopingSpEffect_lv4,dopingSpEffect_lv5,dopingSpEffect_lv6,dopingSpEffect_lv7,dopingSpEffect_lv8,dopingSpEffect_lv9,dopingSpEffect_lv10,npcPlayerInitParamId,generateAnimId,unknown_0x5c,unknown_0x60,unknown_0x64,unknown_0x68,unknown_0x6c,unknown_0x70");
    fwprintf(f, L",unknown_0x74,unknown_0x78,unknown_0x7c,unknown_0x80,unknown_0x84,unknown_0x88,unknown_0x8c,unknown_0x90,unknown_0x94,unknown_0x98,unknown_0x9c\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%d,%d,%d,%d,%g,%g,%g,%u,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%d,%d,%d,%d,%d,%d,%d,%d,%u,%d,%d,%d,%d,%d,%u\n",
            this->paramId(i),
            param->disableParam_NT,
            param->triggerSpEffectId,
            param->npcParamId,
            param->npcThinkParamId,
            param->npcParamId_ridden,
            param->npcThinkParamId_ridden,
            param->x_offset,
            param->z_offset,
            param->y_angle,
            param->appearOnAroundSekihi,
            param->disablePCTargetShare,
            param->pcFollowType,
            param->dopingSpEffect_lv0,
            param->dopingSpEffect_lv1,
            param->dopingSpEffect_lv2,
            param->dopingSpEffect_lv3,
            param->dopingSpEffect_lv4,
            param->dopingSpEffect_lv5,
            param->dopingSpEffect_lv6,
            param->dopingSpEffect_lv7,
            param->dopingSpEffect_lv8,
            param->dopingSpEffect_lv9,
            param->dopingSpEffect_lv10,
            param->npcPlayerInitParamId,
            param->generateAnimId,
            param->unknown_0x5c,
            param->unknown_0x60,
            param->unknown_0x64,
            param->unknown_0x68,
            param->unknown_0x6c,
            param->unknown_0x70,
            param->unknown_0x74,
            param->unknown_0x78,
            param->unknown_0x7c,
            param->unknown_0x80,
            param->unknown_0x84,
            param->unknown_0x88,
            param->unknown_0x8c,
            param->unknown_0x90,
            param->unknown_0x94,
            param->unknown_0x98,
            param->unknown_0x9c
        );
    }
    fclose(f);
}

}
