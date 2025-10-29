#include "../luabindings.h"
#include "../defs/BulletCreateLimitParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<BulletCreateLimitParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerBulletCreateLimitParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["BulletCreateLimitParam"]; usertype) return;
        auto indexerBulletCreateLimitParam = state->new_usertype<ParamTableIndexer<BulletCreateLimitParam>>("BulletCreateLimitParamTableIndexer");
        indexerBulletCreateLimitParam["count"] = sol::property(&ParamTableIndexer<BulletCreateLimitParam>::count);
        indexerBulletCreateLimitParam["__index"] = &ParamTableIndexer<BulletCreateLimitParam>::at;
        indexerBulletCreateLimitParam["id"] = &ParamTableIndexer<BulletCreateLimitParam>::paramId;
        indexerBulletCreateLimitParam["get"] = &ParamTableIndexer<BulletCreateLimitParam>::get;
        indexerBulletCreateLimitParam["exportToCsv"] = &ParamTableIndexer<BulletCreateLimitParam>::exportToCsv;
        indexerBulletCreateLimitParam["importFromCsv"] = &ParamTableIndexer<BulletCreateLimitParam>::importFromCsv;
        auto utBulletCreateLimitParam = state->new_usertype<BulletCreateLimitParam>("BulletCreateLimitParam");
        utBulletCreateLimitParam["limitNum_byGroup"] = &BulletCreateLimitParam::limitNum_byGroup;
        utBulletCreateLimitParam["isLimitEachOwner"] = sol::property([](BulletCreateLimitParam &param) -> uint8_t { return param.isLimitEachOwner; }, [](BulletCreateLimitParam &param, uint8_t value) { param.isLimitEachOwner = value; });
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<BulletCreateLimitParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<BulletCreateLimitParam>>(nullptr);
        indexer->setFieldNames({
            {"limitNum_byGroup", false},
            {"isLimitEachOwner", false},
        });
        return indexer;
    };
    paramsTable["BulletCreateLimitParam"] = [tableLoader]() -> auto { return tableLoader(L"BulletCreateLimitParam"); };
}

template<> void ParamTableIndexer<BulletCreateLimitParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,limitNum_byGroup,isLimitEachOwner\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u\n",
            this->paramId(i),
            param->limitNum_byGroup,
            param->isLimitEachOwner
        );
    }
    fclose(f);
}

}
