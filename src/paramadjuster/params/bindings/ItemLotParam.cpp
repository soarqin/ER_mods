#include "../luabindings.h"
#include "../defs/ItemLotParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<ItemLotParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerItemLotParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["ItemLotParam"]; usertype) return;
        auto indexerItemLotParam = state->new_usertype<ParamTableIndexer<ItemLotParam>>("ItemLotParamTableIndexer");
        indexerItemLotParam["count"] = sol::property(&ParamTableIndexer<ItemLotParam>::count);
        indexerItemLotParam["__index"] = &ParamTableIndexer<ItemLotParam>::at;
        indexerItemLotParam["id"] = &ParamTableIndexer<ItemLotParam>::paramId;
        indexerItemLotParam["get"] = &ParamTableIndexer<ItemLotParam>::get;
        indexerItemLotParam["exportToCsv"] = &ParamTableIndexer<ItemLotParam>::exportToCsv;
        indexerItemLotParam["importFromCsv"] = &ParamTableIndexer<ItemLotParam>::importFromCsv;
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
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<ItemLotParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<ItemLotParam>>(nullptr);
        indexer->setFieldNames({
            {"lotItemId01", false},
            {"lotItemId02", false},
            {"lotItemId03", false},
            {"lotItemId04", false},
            {"lotItemId05", false},
            {"lotItemId06", false},
            {"lotItemId07", false},
            {"lotItemId08", false},
            {"lotItemCategory01", false},
            {"lotItemCategory02", false},
            {"lotItemCategory03", false},
            {"lotItemCategory04", false},
            {"lotItemCategory05", false},
            {"lotItemCategory06", false},
            {"lotItemCategory07", false},
            {"lotItemCategory08", false},
            {"lotItemBasePoint01", false},
            {"lotItemBasePoint02", false},
            {"lotItemBasePoint03", false},
            {"lotItemBasePoint04", false},
            {"lotItemBasePoint05", false},
            {"lotItemBasePoint06", false},
            {"lotItemBasePoint07", false},
            {"lotItemBasePoint08", false},
            {"cumulateLotPoint01", false},
            {"cumulateLotPoint02", false},
            {"cumulateLotPoint03", false},
            {"cumulateLotPoint04", false},
            {"cumulateLotPoint05", false},
            {"cumulateLotPoint06", false},
            {"cumulateLotPoint07", false},
            {"cumulateLotPoint08", false},
            {"getItemFlagId01", false},
            {"getItemFlagId02", false},
            {"getItemFlagId03", false},
            {"getItemFlagId04", false},
            {"getItemFlagId05", false},
            {"getItemFlagId06", false},
            {"getItemFlagId07", false},
            {"getItemFlagId08", false},
            {"getItemFlagId", false},
            {"cumulateNumFlagId", false},
            {"cumulateNumMax", false},
            {"lotItem_Rarity", false},
            {"lotItemNum01", false},
            {"lotItemNum02", false},
            {"lotItemNum03", false},
            {"lotItemNum04", false},
            {"lotItemNum05", false},
            {"lotItemNum06", false},
            {"lotItemNum07", false},
            {"lotItemNum08", false},
            {"enableLuck01", false},
            {"enableLuck02", false},
            {"enableLuck03", false},
            {"enableLuck04", false},
            {"enableLuck05", false},
            {"enableLuck06", false},
            {"enableLuck07", false},
            {"enableLuck08", false},
            {"cumulateReset01", false},
            {"cumulateReset02", false},
            {"cumulateReset03", false},
            {"cumulateReset04", false},
            {"cumulateReset05", false},
            {"cumulateReset06", false},
            {"cumulateReset07", false},
            {"cumulateReset08", false},
            {"GameClearOffset", false},
            {"canExecByFriendlyGhost", false},
            {"canExecByHostileGhost", false},
            {"PAD1", false},
            {"PAD2", false},
        });
        return indexer;
    };
    paramsTable["ItemLotParam_enemy"] = [tableLoader]() -> auto { return tableLoader(L"ItemLotParam_enemy"); };
    paramsTable["ItemLotParam_map"] = [tableLoader]() -> auto { return tableLoader(L"ItemLotParam_map"); };
}

template<> void ParamTableIndexer<ItemLotParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,lotItemId01,lotItemId02,lotItemId03,lotItemId04,lotItemId05,lotItemId06,lotItemId07,lotItemId08,lotItemCategory01,lotItemCategory02,lotItemCategory03,lotItemCategory04,lotItemCategory05,lotItemCategory06,lotItemCategory07,lotItemCategory08,lotItemBasePoint01,lotItemBasePoint02,lotItemBasePoint03,lotItemBasePoint04,lotItemBasePoint05,lotItemBasePoint06,lotItemBasePoint07,lotItemBasePoint08,cumulateLotPoint01,cumulateLotPoint02,cumulateLotPoint03,cumulateLotPoint04,cumulateLotPoint05,cumulateLotPoint06,cumulateLotPoint07,cumulateLotPoint08,getItemFlagId01,getItemFlagId02,getItemFlagId03,getItemFlagId04,getItemFlagId05,getItemFlagId06,getItemFlagId07,getItemFlagId08,getItemFlagId,cumulateNumFlagId,cumulateNumMax,lotItem_Rarity,lotItemNum01,lotItemNum02,lotItemNum03,lotItemNum04,lotItemNum05,lotItemNum06,lotItemNum07,lotItemNum08,enableLuck01,enableLuck02,enableLuck03,enableLuck04,enableLuck05,enableLuck06,enableLuck07,enableLuck08,cumulateReset01,cumulateReset02,cumulateReset03,cumulateReset04,cumulateReset05,cumulateReset06,cumulateReset07,cumulateReset08,GameClearOffset,canExecByFriendlyGhost,canExecByHostileGhost,PAD1,PAD2\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%u,%u,%u,%u\n",
            this->paramId(i),
            param->lotItemId01,
            param->lotItemId02,
            param->lotItemId03,
            param->lotItemId04,
            param->lotItemId05,
            param->lotItemId06,
            param->lotItemId07,
            param->lotItemId08,
            param->lotItemCategory01,
            param->lotItemCategory02,
            param->lotItemCategory03,
            param->lotItemCategory04,
            param->lotItemCategory05,
            param->lotItemCategory06,
            param->lotItemCategory07,
            param->lotItemCategory08,
            param->lotItemBasePoint01,
            param->lotItemBasePoint02,
            param->lotItemBasePoint03,
            param->lotItemBasePoint04,
            param->lotItemBasePoint05,
            param->lotItemBasePoint06,
            param->lotItemBasePoint07,
            param->lotItemBasePoint08,
            param->cumulateLotPoint01,
            param->cumulateLotPoint02,
            param->cumulateLotPoint03,
            param->cumulateLotPoint04,
            param->cumulateLotPoint05,
            param->cumulateLotPoint06,
            param->cumulateLotPoint07,
            param->cumulateLotPoint08,
            param->getItemFlagId01,
            param->getItemFlagId02,
            param->getItemFlagId03,
            param->getItemFlagId04,
            param->getItemFlagId05,
            param->getItemFlagId06,
            param->getItemFlagId07,
            param->getItemFlagId08,
            param->getItemFlagId,
            param->cumulateNumFlagId,
            param->cumulateNumMax,
            param->lotItem_Rarity,
            param->lotItemNum01,
            param->lotItemNum02,
            param->lotItemNum03,
            param->lotItemNum04,
            param->lotItemNum05,
            param->lotItemNum06,
            param->lotItemNum07,
            param->lotItemNum08,
            param->enableLuck01,
            param->enableLuck02,
            param->enableLuck03,
            param->enableLuck04,
            param->enableLuck05,
            param->enableLuck06,
            param->enableLuck07,
            param->enableLuck08,
            param->cumulateReset01,
            param->cumulateReset02,
            param->cumulateReset03,
            param->cumulateReset04,
            param->cumulateReset05,
            param->cumulateReset06,
            param->cumulateReset07,
            param->cumulateReset08,
            param->GameClearOffset,
            param->canExecByFriendlyGhost,
            param->canExecByHostileGhost,
            param->PAD1,
            param->PAD2
        );
    }
    fclose(f);
}

}
