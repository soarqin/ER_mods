#include "../luabindings.h"
#include "../defs/ShopLineupParam.h"

namespace paramadjuster::params {

void registerShopLineupParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ShopLineupParam"]; usertype) return;
        auto indexerShopLineupParam = state->new_usertype<ParamTableIndexer<ShopLineupParam>>("ShopLineupParamTableIndexer");
        indexerShopLineupParam["count"] = sol::property(&ParamTableIndexer<ShopLineupParam>::count);
        indexerShopLineupParam["__index"] = &ParamTableIndexer<ShopLineupParam>::at;
        indexerShopLineupParam["id"] = &ParamTableIndexer<ShopLineupParam>::paramId;
        indexerShopLineupParam["get"] = &ParamTableIndexer<ShopLineupParam>::get;
        auto utShopLineupParam = state->new_usertype<ShopLineupParam>("ShopLineupParam");
        utShopLineupParam["equipId"] = &ShopLineupParam::equipId;
        utShopLineupParam["value"] = &ShopLineupParam::value;
        utShopLineupParam["mtrlId"] = &ShopLineupParam::mtrlId;
        utShopLineupParam["eventFlag_forStock"] = &ShopLineupParam::eventFlag_forStock;
        utShopLineupParam["eventFlag_forRelease"] = &ShopLineupParam::eventFlag_forRelease;
        utShopLineupParam["sellQuantity"] = &ShopLineupParam::sellQuantity;
        utShopLineupParam["equipType"] = &ShopLineupParam::equipType;
        utShopLineupParam["costType"] = &ShopLineupParam::costType;
        utShopLineupParam["setNum"] = &ShopLineupParam::setNum;
        utShopLineupParam["value_Add"] = &ShopLineupParam::value_Add;
        utShopLineupParam["value_Magnification"] = &ShopLineupParam::value_Magnification;
        utShopLineupParam["iconId"] = &ShopLineupParam::iconId;
        utShopLineupParam["nameMsgId"] = &ShopLineupParam::nameMsgId;
        utShopLineupParam["menuTitleMsgId"] = &ShopLineupParam::menuTitleMsgId;
        utShopLineupParam["menuIconId"] = &ShopLineupParam::menuIconId;
    };
    auto tableLoader = [delayInit = std::move(delayInit)]() -> auto { delayInit(); return std::make_unique<ParamTableIndexer<ShopLineupParam>>(gParamMgr.findTable(L"ShopLineupParam")); };
    paramsTable["ShopLineupParam"] = tableLoader;
    paramsTable["ShopLineupParam_Recipe"] = tableLoader;
}

}
