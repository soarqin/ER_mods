#include "../luabindings.h"
#include "../defs/ShopLineupParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<ShopLineupParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerShopLineupParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ShopLineupParam"]; usertype) return;
        auto indexerShopLineupParam = state->new_usertype<ParamTableIndexer<ShopLineupParam>>("ShopLineupParamTableIndexer");
        indexerShopLineupParam["count"] = sol::property(&ParamTableIndexer<ShopLineupParam>::count);
        indexerShopLineupParam["__index"] = &ParamTableIndexer<ShopLineupParam>::at;
        indexerShopLineupParam["id"] = &ParamTableIndexer<ShopLineupParam>::paramId;
        indexerShopLineupParam["get"] = &ParamTableIndexer<ShopLineupParam>::get;
        indexerShopLineupParam["exportToCsv"] = &ParamTableIndexer<ShopLineupParam>::exportToCsv;
        indexerShopLineupParam["importFromCsv"] = &ParamTableIndexer<ShopLineupParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<ShopLineupParam>>(state, L"ShopLineupParam");
        indexer->setFieldNames({
            {"equipId", false},
            {"value", false},
            {"mtrlId", false},
            {"eventFlag_forStock", false},
            {"eventFlag_forRelease", false},
            {"sellQuantity", false},
            {"equipType", false},
            {"costType", false},
            {"setNum", false},
            {"value_Add", false},
            {"value_Magnification", false},
            {"iconId", false},
            {"nameMsgId", false},
            {"menuTitleMsgId", false},
            {"menuIconId", false},
        });
        return indexer;
    };
    paramsTable["ShopLineupParam"] = tableLoader;
    paramsTable["ShopLineupParam_Recipe"] = tableLoader;
}

template<> void ParamTableIndexer<ShopLineupParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,equipId,value,mtrlId,eventFlag_forStock,eventFlag_forRelease,sellQuantity,equipType,costType,setNum,value_Add,value_Magnification,iconId,nameMsgId,menuTitleMsgId,menuIconId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%u,%u,%d,%u,%u,%u,%d,%g,%d,%d,%d,%d\n",
            this->paramId(i),
            param->equipId,
            param->value,
            param->mtrlId,
            param->eventFlag_forStock,
            param->eventFlag_forRelease,
            param->sellQuantity,
            param->equipType,
            param->costType,
            param->setNum,
            param->value_Add,
            param->value_Magnification,
            param->iconId,
            param->nameMsgId,
            param->menuTitleMsgId,
            param->menuIconId
        );
    }
    fclose(f);
}

}
