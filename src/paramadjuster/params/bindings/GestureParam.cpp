#include "../luabindings.h"
#include "../defs/GestureParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<GestureParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerGestureParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["GestureParam"]; usertype) return;
        auto indexerGestureParam = state->new_usertype<ParamTableIndexer<GestureParam>>("GestureParamTableIndexer");
        indexerGestureParam["count"] = sol::property(&ParamTableIndexer<GestureParam>::count);
        indexerGestureParam["__index"] = &ParamTableIndexer<GestureParam>::at;
        indexerGestureParam["id"] = &ParamTableIndexer<GestureParam>::paramId;
        indexerGestureParam["get"] = &ParamTableIndexer<GestureParam>::get;
        indexerGestureParam["exportToCsv"] = &ParamTableIndexer<GestureParam>::exportToCsv;
        indexerGestureParam["importFromCsv"] = &ParamTableIndexer<GestureParam>::importFromCsv;
        auto utGestureParam = state->new_usertype<GestureParam>("GestureParam");
        utGestureParam["disableParam_NT"] = sol::property([](GestureParam &param) -> uint8_t { return param.disableParam_NT; }, [](GestureParam &param, uint8_t value) { param.disableParam_NT = value; });
        utGestureParam["itemId"] = &GestureParam::itemId;
        utGestureParam["msgAnimId"] = &GestureParam::msgAnimId;
        utGestureParam["cannotUseRiding"] = sol::property([](GestureParam &param) -> uint8_t { return param.cannotUseRiding; }, [](GestureParam &param, uint8_t value) { param.cannotUseRiding = value; });
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<GestureParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<GestureParam>>(nullptr);
        indexer->setFieldNames({
            {"disableParam_NT", false},
            {"itemId", false},
            {"msgAnimId", false},
            {"cannotUseRiding", false},
        });
        return indexer;
    };
    paramsTable["GestureParam"] = [tableLoader]() -> auto { return tableLoader(L"GestureParam"); };
}

template<> void ParamTableIndexer<GestureParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,disableParam_NT,itemId,msgAnimId,cannotUseRiding\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%d,%d,%u\n",
            this->paramId(i),
            param->disableParam_NT,
            param->itemId,
            param->msgAnimId,
            param->cannotUseRiding
        );
    }
    fclose(f);
}

}
