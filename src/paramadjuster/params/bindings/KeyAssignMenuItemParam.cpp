#include "../luabindings.h"
#include "../defs/KeyAssignMenuItemParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<KeyAssignMenuItemParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerKeyAssignMenuItemParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["KeyAssignMenuItemParam"]; usertype) return;
        auto indexerKeyAssignMenuItemParam = state->new_usertype<ParamTableIndexer<KeyAssignMenuItemParam>>("KeyAssignMenuItemParamTableIndexer");
        indexerKeyAssignMenuItemParam["count"] = sol::property(&ParamTableIndexer<KeyAssignMenuItemParam>::count);
        indexerKeyAssignMenuItemParam["__index"] = &ParamTableIndexer<KeyAssignMenuItemParam>::at;
        indexerKeyAssignMenuItemParam["id"] = &ParamTableIndexer<KeyAssignMenuItemParam>::paramId;
        indexerKeyAssignMenuItemParam["get"] = &ParamTableIndexer<KeyAssignMenuItemParam>::get;
        indexerKeyAssignMenuItemParam["exportToCsv"] = &ParamTableIndexer<KeyAssignMenuItemParam>::exportToCsv;
        indexerKeyAssignMenuItemParam["importFromCsv"] = &ParamTableIndexer<KeyAssignMenuItemParam>::importFromCsv;
        auto utKeyAssignMenuItemParam = state->new_usertype<KeyAssignMenuItemParam>("KeyAssignMenuItemParam");
        utKeyAssignMenuItemParam["textID"] = &KeyAssignMenuItemParam::textID;
        utKeyAssignMenuItemParam["key"] = &KeyAssignMenuItemParam::key;
        utKeyAssignMenuItemParam["enableUnassign"] = &KeyAssignMenuItemParam::enableUnassign;
        utKeyAssignMenuItemParam["enablePadConfig"] = &KeyAssignMenuItemParam::enablePadConfig;
        utKeyAssignMenuItemParam["enableMouseConfig"] = &KeyAssignMenuItemParam::enableMouseConfig;
        utKeyAssignMenuItemParam["group"] = &KeyAssignMenuItemParam::group;
        utKeyAssignMenuItemParam["mappingTextID"] = &KeyAssignMenuItemParam::mappingTextID;
        utKeyAssignMenuItemParam["viewPad"] = &KeyAssignMenuItemParam::viewPad;
        utKeyAssignMenuItemParam["viewKeyboardMouse"] = &KeyAssignMenuItemParam::viewKeyboardMouse;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<KeyAssignMenuItemParam>>(state, L"KeyAssignMenuItemParam");
        indexer->setFieldNames({
            {"textID", false},
            {"key", false},
            {"enableUnassign", false},
            {"enablePadConfig", false},
            {"enableMouseConfig", false},
            {"group", false},
            {"mappingTextID", false},
            {"viewPad", false},
            {"viewKeyboardMouse", false},
        });
        return indexer;
    };
    paramsTable["KeyAssignMenuItemParam"] = tableLoader;
}

template<> void ParamTableIndexer<KeyAssignMenuItemParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,textID,key,enableUnassign,enablePadConfig,enableMouseConfig,group,mappingTextID,viewPad,viewKeyboardMouse\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%u,%u,%u,%u,%d,%u,%u\n",
            this->paramId(i),
            param->textID,
            param->key,
            param->enableUnassign,
            param->enablePadConfig,
            param->enableMouseConfig,
            param->group,
            param->mappingTextID,
            param->viewPad,
            param->viewKeyboardMouse
        );
    }
    fclose(f);
}

}
