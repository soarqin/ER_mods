#include "../luabindings.h"
#include "../defs/BuddyParam.h"

namespace paramadjuster::params {

void registerBuddyParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BuddyParam"]; usertype) return;
        auto indexerBuddyParam = state->new_usertype<ParamTableIndexer<BuddyParam>>("BuddyParamTableIndexer");
        indexerBuddyParam["count"] = sol::property(&ParamTableIndexer<BuddyParam>::count);
        indexerBuddyParam["__index"] = &ParamTableIndexer<BuddyParam>::at;
        indexerBuddyParam["id"] = &ParamTableIndexer<BuddyParam>::paramId;
        indexerBuddyParam["get"] = &ParamTableIndexer<BuddyParam>::get;
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
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<BuddyParam>>(gParamMgr.findTable(L"BuddyParam")); };
    paramsTable["BuddyParam"] = tableLoader;
}

}
