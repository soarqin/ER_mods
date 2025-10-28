#include "../luabindings.h"
#include "../defs/SignPuddleParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<SignPuddleParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerSignPuddleParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["SignPuddleParam"]; usertype) return;
        auto indexerSignPuddleParam = state->new_usertype<ParamTableIndexer<SignPuddleParam>>("SignPuddleParamTableIndexer");
        indexerSignPuddleParam["count"] = sol::property(&ParamTableIndexer<SignPuddleParam>::count);
        indexerSignPuddleParam["__index"] = &ParamTableIndexer<SignPuddleParam>::at;
        indexerSignPuddleParam["id"] = &ParamTableIndexer<SignPuddleParam>::paramId;
        indexerSignPuddleParam["get"] = &ParamTableIndexer<SignPuddleParam>::get;
        indexerSignPuddleParam["exportToCsv"] = &ParamTableIndexer<SignPuddleParam>::exportToCsv;
        indexerSignPuddleParam["importFromCsv"] = &ParamTableIndexer<SignPuddleParam>::importFromCsv;
        auto utSignPuddleParam = state->new_usertype<SignPuddleParam>("SignPuddleParam");
        utSignPuddleParam["disableParam_NT"] = sol::property([](SignPuddleParam &param) -> uint8_t { return param.disableParam_NT; }, [](SignPuddleParam &param, uint8_t value) { param.disableParam_NT = value; });
        utSignPuddleParam["matchAreaId"] = &SignPuddleParam::matchAreaId;
        utSignPuddleParam["unknown_0x20"] = &SignPuddleParam::unknown_0x20;
        utSignPuddleParam["unknown_0x24"] = &SignPuddleParam::unknown_0x24;
        utSignPuddleParam["areaNo"] = &SignPuddleParam::areaNo;
        utSignPuddleParam["gridXNo"] = &SignPuddleParam::gridXNo;
        utSignPuddleParam["gridZNo"] = &SignPuddleParam::gridZNo;
        utSignPuddleParam["posX"] = &SignPuddleParam::posX;
        utSignPuddleParam["posY"] = &SignPuddleParam::posY;
        utSignPuddleParam["posZ"] = &SignPuddleParam::posZ;
        utSignPuddleParam["signSubCategoryId"] = &SignPuddleParam::signSubCategoryId;
        utSignPuddleParam["locationTextId"] = &SignPuddleParam::locationTextId;
        utSignPuddleParam["sortId"] = &SignPuddleParam::sortId;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<SignPuddleParam>>(state, L"SignPuddleParam");
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"matchAreaId", false},
            {"unknown_0x20", false},
            {"unknown_0x24", false},
            {"areaNo", false},
            {"gridXNo", false},
            {"gridZNo", false},
            {"posX", false},
            {"posY", false},
            {"posZ", false},
            {"signSubCategoryId", false},
            {"locationTextId", false},
            {"sortId", false},
        });
        return indexer;
    };
    paramsTable["SignPuddleParam"] = tableLoader;
}

template<> void ParamTableIndexer<SignPuddleParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,matchAreaId,unknown_0x20,unknown_0x24,areaNo,gridXNo,gridZNo,posX,posY,posZ,signSubCategoryId,locationTextId,sortId\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%d,%d,%u,%u,%u,%g,%g,%g,%d,%d,%d\n",
            this->paramId(i),
            param->disableParam_NT,
            param->matchAreaId,
            param->unknown_0x20,
            param->unknown_0x24,
            param->areaNo,
            param->gridXNo,
            param->gridZNo,
            param->posX,
            param->posY,
            param->posZ,
            param->signSubCategoryId,
            param->locationTextId,
            param->sortId
        );
    }
    fclose(f);
}

}
