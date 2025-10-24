#include "../luabindings.h"
#include "../defs/ItemLotParam.h"

namespace paramadjuster::params {

void registerItemLotParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ItemLotParam"]; usertype) return;
        auto indexerItemLotParam = state->new_usertype<ParamTableIndexer<ItemLotParam>>("ItemLotParamTableIndexer");
        indexerItemLotParam["count"] = sol::property(&ParamTableIndexer<ItemLotParam>::count);
        indexerItemLotParam["__index"] = &ParamTableIndexer<ItemLotParam>::at;
        indexerItemLotParam["id"] = &ParamTableIndexer<ItemLotParam>::paramId;
        indexerItemLotParam["get"] = &ParamTableIndexer<ItemLotParam>::get;
        auto utItemLotParam = state->new_usertype<ItemLotParam>("ItemLotParam");
        utItemLotParam["lotItemId01"] = &ItemLotParam::lotItemId01;
        utItemLotParam["lotItemId02"] = &ItemLotParam::lotItemId02;
        utItemLotParam["lotItemId03"] = &ItemLotParam::lotItemId03;
        utItemLotParam["lotItemId04"] = &ItemLotParam::lotItemId04;
        utItemLotParam["lotItemId05"] = &ItemLotParam::lotItemId05;
        utItemLotParam["lotItemId06"] = &ItemLotParam::lotItemId06;
        utItemLotParam["lotItemId07"] = &ItemLotParam::lotItemId07;
        utItemLotParam["lotItemId08"] = &ItemLotParam::lotItemId08;
        utItemLotParam["lotItemCategory01"] = &ItemLotParam::lotItemCategory01;
        utItemLotParam["lotItemCategory02"] = &ItemLotParam::lotItemCategory02;
        utItemLotParam["lotItemCategory03"] = &ItemLotParam::lotItemCategory03;
        utItemLotParam["lotItemCategory04"] = &ItemLotParam::lotItemCategory04;
        utItemLotParam["lotItemCategory05"] = &ItemLotParam::lotItemCategory05;
        utItemLotParam["lotItemCategory06"] = &ItemLotParam::lotItemCategory06;
        utItemLotParam["lotItemCategory07"] = &ItemLotParam::lotItemCategory07;
        utItemLotParam["lotItemCategory08"] = &ItemLotParam::lotItemCategory08;
        utItemLotParam["lotItemBasePoint01"] = &ItemLotParam::lotItemBasePoint01;
        utItemLotParam["lotItemBasePoint02"] = &ItemLotParam::lotItemBasePoint02;
        utItemLotParam["lotItemBasePoint03"] = &ItemLotParam::lotItemBasePoint03;
        utItemLotParam["lotItemBasePoint04"] = &ItemLotParam::lotItemBasePoint04;
        utItemLotParam["lotItemBasePoint05"] = &ItemLotParam::lotItemBasePoint05;
        utItemLotParam["lotItemBasePoint06"] = &ItemLotParam::lotItemBasePoint06;
        utItemLotParam["lotItemBasePoint07"] = &ItemLotParam::lotItemBasePoint07;
        utItemLotParam["lotItemBasePoint08"] = &ItemLotParam::lotItemBasePoint08;
        utItemLotParam["cumulateLotPoint01"] = &ItemLotParam::cumulateLotPoint01;
        utItemLotParam["cumulateLotPoint02"] = &ItemLotParam::cumulateLotPoint02;
        utItemLotParam["cumulateLotPoint03"] = &ItemLotParam::cumulateLotPoint03;
        utItemLotParam["cumulateLotPoint04"] = &ItemLotParam::cumulateLotPoint04;
        utItemLotParam["cumulateLotPoint05"] = &ItemLotParam::cumulateLotPoint05;
        utItemLotParam["cumulateLotPoint06"] = &ItemLotParam::cumulateLotPoint06;
        utItemLotParam["cumulateLotPoint07"] = &ItemLotParam::cumulateLotPoint07;
        utItemLotParam["cumulateLotPoint08"] = &ItemLotParam::cumulateLotPoint08;
        utItemLotParam["getItemFlagId01"] = &ItemLotParam::getItemFlagId01;
        utItemLotParam["getItemFlagId02"] = &ItemLotParam::getItemFlagId02;
        utItemLotParam["getItemFlagId03"] = &ItemLotParam::getItemFlagId03;
        utItemLotParam["getItemFlagId04"] = &ItemLotParam::getItemFlagId04;
        utItemLotParam["getItemFlagId05"] = &ItemLotParam::getItemFlagId05;
        utItemLotParam["getItemFlagId06"] = &ItemLotParam::getItemFlagId06;
        utItemLotParam["getItemFlagId07"] = &ItemLotParam::getItemFlagId07;
        utItemLotParam["getItemFlagId08"] = &ItemLotParam::getItemFlagId08;
        utItemLotParam["getItemFlagId"] = &ItemLotParam::getItemFlagId;
        utItemLotParam["cumulateNumFlagId"] = &ItemLotParam::cumulateNumFlagId;
        utItemLotParam["cumulateNumMax"] = &ItemLotParam::cumulateNumMax;
        utItemLotParam["lotItem_Rarity"] = &ItemLotParam::lotItem_Rarity;
        utItemLotParam["lotItemNum01"] = &ItemLotParam::lotItemNum01;
        utItemLotParam["lotItemNum02"] = &ItemLotParam::lotItemNum02;
        utItemLotParam["lotItemNum03"] = &ItemLotParam::lotItemNum03;
        utItemLotParam["lotItemNum04"] = &ItemLotParam::lotItemNum04;
        utItemLotParam["lotItemNum05"] = &ItemLotParam::lotItemNum05;
        utItemLotParam["lotItemNum06"] = &ItemLotParam::lotItemNum06;
        utItemLotParam["lotItemNum07"] = &ItemLotParam::lotItemNum07;
        utItemLotParam["lotItemNum08"] = &ItemLotParam::lotItemNum08;
        utItemLotParam["enableLuck01"] = sol::property([](ItemLotParam &param) -> uint16_t { return param.enableLuck01; }, [](ItemLotParam &param, uint16_t value) { param.enableLuck01 = value; });
        utItemLotParam["enableLuck02"] = sol::property([](ItemLotParam &param) -> uint16_t { return param.enableLuck02; }, [](ItemLotParam &param, uint16_t value) { param.enableLuck02 = value; });
        utItemLotParam["enableLuck03"] = sol::property([](ItemLotParam &param) -> uint16_t { return param.enableLuck03; }, [](ItemLotParam &param, uint16_t value) { param.enableLuck03 = value; });
        utItemLotParam["enableLuck04"] = sol::property([](ItemLotParam &param) -> uint16_t { return param.enableLuck04; }, [](ItemLotParam &param, uint16_t value) { param.enableLuck04 = value; });
        utItemLotParam["enableLuck05"] = sol::property([](ItemLotParam &param) -> uint16_t { return param.enableLuck05; }, [](ItemLotParam &param, uint16_t value) { param.enableLuck05 = value; });
        utItemLotParam["enableLuck06"] = sol::property([](ItemLotParam &param) -> uint16_t { return param.enableLuck06; }, [](ItemLotParam &param, uint16_t value) { param.enableLuck06 = value; });
        utItemLotParam["enableLuck07"] = sol::property([](ItemLotParam &param) -> uint16_t { return param.enableLuck07; }, [](ItemLotParam &param, uint16_t value) { param.enableLuck07 = value; });
        utItemLotParam["enableLuck08"] = sol::property([](ItemLotParam &param) -> uint16_t { return param.enableLuck08; }, [](ItemLotParam &param, uint16_t value) { param.enableLuck08 = value; });
        utItemLotParam["cumulateReset01"] = sol::property([](ItemLotParam &param) -> uint16_t { return param.cumulateReset01; }, [](ItemLotParam &param, uint16_t value) { param.cumulateReset01 = value; });
        utItemLotParam["cumulateReset02"] = sol::property([](ItemLotParam &param) -> uint16_t { return param.cumulateReset02; }, [](ItemLotParam &param, uint16_t value) { param.cumulateReset02 = value; });
        utItemLotParam["cumulateReset03"] = sol::property([](ItemLotParam &param) -> uint16_t { return param.cumulateReset03; }, [](ItemLotParam &param, uint16_t value) { param.cumulateReset03 = value; });
        utItemLotParam["cumulateReset04"] = sol::property([](ItemLotParam &param) -> uint16_t { return param.cumulateReset04; }, [](ItemLotParam &param, uint16_t value) { param.cumulateReset04 = value; });
        utItemLotParam["cumulateReset05"] = sol::property([](ItemLotParam &param) -> uint16_t { return param.cumulateReset05; }, [](ItemLotParam &param, uint16_t value) { param.cumulateReset05 = value; });
        utItemLotParam["cumulateReset06"] = sol::property([](ItemLotParam &param) -> uint16_t { return param.cumulateReset06; }, [](ItemLotParam &param, uint16_t value) { param.cumulateReset06 = value; });
        utItemLotParam["cumulateReset07"] = sol::property([](ItemLotParam &param) -> uint16_t { return param.cumulateReset07; }, [](ItemLotParam &param, uint16_t value) { param.cumulateReset07 = value; });
        utItemLotParam["cumulateReset08"] = sol::property([](ItemLotParam &param) -> uint16_t { return param.cumulateReset08; }, [](ItemLotParam &param, uint16_t value) { param.cumulateReset08 = value; });
        utItemLotParam["GameClearOffset"] = &ItemLotParam::GameClearOffset;
        utItemLotParam["canExecByFriendlyGhost"] = sol::property([](ItemLotParam &param) -> uint8_t { return param.canExecByFriendlyGhost; }, [](ItemLotParam &param, uint8_t value) { param.canExecByFriendlyGhost = value; });
        utItemLotParam["canExecByHostileGhost"] = sol::property([](ItemLotParam &param) -> uint8_t { return param.canExecByHostileGhost; }, [](ItemLotParam &param, uint8_t value) { param.canExecByHostileGhost = value; });
        utItemLotParam["PAD1"] = sol::property([](ItemLotParam &param) -> uint8_t { return param.PAD1; }, [](ItemLotParam &param, uint8_t value) { param.PAD1 = value; });
        utItemLotParam["PAD2"] = &ItemLotParam::PAD2;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<ItemLotParam>>(gParamMgr.findTable(L"ItemLotParam")); };
    paramsTable["ItemLotParam_enemy"] = tableLoader;
    paramsTable["ItemLotParam_map"] = tableLoader;
}

}
