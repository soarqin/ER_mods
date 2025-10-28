#include "../luabindings.h"
#include "../defs/RandomAppearParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<RandomAppearParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerRandomAppearParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["RandomAppearParam"]; usertype) return;
        auto indexerRandomAppearParam = state->new_usertype<ParamTableIndexer<RandomAppearParam>>("RandomAppearParamTableIndexer");
        indexerRandomAppearParam["count"] = sol::property(&ParamTableIndexer<RandomAppearParam>::count);
        indexerRandomAppearParam["__index"] = &ParamTableIndexer<RandomAppearParam>::at;
        indexerRandomAppearParam["id"] = &ParamTableIndexer<RandomAppearParam>::paramId;
        indexerRandomAppearParam["get"] = &ParamTableIndexer<RandomAppearParam>::get;
        indexerRandomAppearParam["exportToCsv"] = &ParamTableIndexer<RandomAppearParam>::exportToCsv;
        indexerRandomAppearParam["importFromCsv"] = &ParamTableIndexer<RandomAppearParam>::importFromCsv;
        auto utRandomAppearParam = state->new_usertype<RandomAppearParam>("RandomAppearParam");
        utRandomAppearParam["slot0"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot0; }, [](RandomAppearParam &param, uint8_t value) { param.slot0 = value; });
        utRandomAppearParam["slot1"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot1; }, [](RandomAppearParam &param, uint8_t value) { param.slot1 = value; });
        utRandomAppearParam["slot2"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot2; }, [](RandomAppearParam &param, uint8_t value) { param.slot2 = value; });
        utRandomAppearParam["slot3"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot3; }, [](RandomAppearParam &param, uint8_t value) { param.slot3 = value; });
        utRandomAppearParam["slot4"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot4; }, [](RandomAppearParam &param, uint8_t value) { param.slot4 = value; });
        utRandomAppearParam["slot5"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot5; }, [](RandomAppearParam &param, uint8_t value) { param.slot5 = value; });
        utRandomAppearParam["slot6"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot6; }, [](RandomAppearParam &param, uint8_t value) { param.slot6 = value; });
        utRandomAppearParam["slot7"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot7; }, [](RandomAppearParam &param, uint8_t value) { param.slot7 = value; });
        utRandomAppearParam["slot8"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot8; }, [](RandomAppearParam &param, uint8_t value) { param.slot8 = value; });
        utRandomAppearParam["slot9"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot9; }, [](RandomAppearParam &param, uint8_t value) { param.slot9 = value; });
        utRandomAppearParam["slot10"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot10; }, [](RandomAppearParam &param, uint8_t value) { param.slot10 = value; });
        utRandomAppearParam["slot11"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot11; }, [](RandomAppearParam &param, uint8_t value) { param.slot11 = value; });
        utRandomAppearParam["slot12"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot12; }, [](RandomAppearParam &param, uint8_t value) { param.slot12 = value; });
        utRandomAppearParam["slot13"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot13; }, [](RandomAppearParam &param, uint8_t value) { param.slot13 = value; });
        utRandomAppearParam["slot14"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot14; }, [](RandomAppearParam &param, uint8_t value) { param.slot14 = value; });
        utRandomAppearParam["slot15"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot15; }, [](RandomAppearParam &param, uint8_t value) { param.slot15 = value; });
        utRandomAppearParam["slot16"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot16; }, [](RandomAppearParam &param, uint8_t value) { param.slot16 = value; });
        utRandomAppearParam["slot17"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot17; }, [](RandomAppearParam &param, uint8_t value) { param.slot17 = value; });
        utRandomAppearParam["slot18"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot18; }, [](RandomAppearParam &param, uint8_t value) { param.slot18 = value; });
        utRandomAppearParam["slot19"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot19; }, [](RandomAppearParam &param, uint8_t value) { param.slot19 = value; });
        utRandomAppearParam["slot20"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot20; }, [](RandomAppearParam &param, uint8_t value) { param.slot20 = value; });
        utRandomAppearParam["slot21"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot21; }, [](RandomAppearParam &param, uint8_t value) { param.slot21 = value; });
        utRandomAppearParam["slot22"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot22; }, [](RandomAppearParam &param, uint8_t value) { param.slot22 = value; });
        utRandomAppearParam["slot23"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot23; }, [](RandomAppearParam &param, uint8_t value) { param.slot23 = value; });
        utRandomAppearParam["slot24"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot24; }, [](RandomAppearParam &param, uint8_t value) { param.slot24 = value; });
        utRandomAppearParam["slot25"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot25; }, [](RandomAppearParam &param, uint8_t value) { param.slot25 = value; });
        utRandomAppearParam["slot26"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot26; }, [](RandomAppearParam &param, uint8_t value) { param.slot26 = value; });
        utRandomAppearParam["slot27"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot27; }, [](RandomAppearParam &param, uint8_t value) { param.slot27 = value; });
        utRandomAppearParam["slot28"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot28; }, [](RandomAppearParam &param, uint8_t value) { param.slot28 = value; });
        utRandomAppearParam["slot29"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot29; }, [](RandomAppearParam &param, uint8_t value) { param.slot29 = value; });
        utRandomAppearParam["slot30"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot30; }, [](RandomAppearParam &param, uint8_t value) { param.slot30 = value; });
        utRandomAppearParam["slot31"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot31; }, [](RandomAppearParam &param, uint8_t value) { param.slot31 = value; });
        utRandomAppearParam["slot32"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot32; }, [](RandomAppearParam &param, uint8_t value) { param.slot32 = value; });
        utRandomAppearParam["slot33"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot33; }, [](RandomAppearParam &param, uint8_t value) { param.slot33 = value; });
        utRandomAppearParam["slot34"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot34; }, [](RandomAppearParam &param, uint8_t value) { param.slot34 = value; });
        utRandomAppearParam["slot35"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot35; }, [](RandomAppearParam &param, uint8_t value) { param.slot35 = value; });
        utRandomAppearParam["slot36"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot36; }, [](RandomAppearParam &param, uint8_t value) { param.slot36 = value; });
        utRandomAppearParam["slot37"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot37; }, [](RandomAppearParam &param, uint8_t value) { param.slot37 = value; });
        utRandomAppearParam["slot38"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot38; }, [](RandomAppearParam &param, uint8_t value) { param.slot38 = value; });
        utRandomAppearParam["slot39"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot39; }, [](RandomAppearParam &param, uint8_t value) { param.slot39 = value; });
        utRandomAppearParam["slot40"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot40; }, [](RandomAppearParam &param, uint8_t value) { param.slot40 = value; });
        utRandomAppearParam["slot41"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot41; }, [](RandomAppearParam &param, uint8_t value) { param.slot41 = value; });
        utRandomAppearParam["slot42"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot42; }, [](RandomAppearParam &param, uint8_t value) { param.slot42 = value; });
        utRandomAppearParam["slot43"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot43; }, [](RandomAppearParam &param, uint8_t value) { param.slot43 = value; });
        utRandomAppearParam["slot44"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot44; }, [](RandomAppearParam &param, uint8_t value) { param.slot44 = value; });
        utRandomAppearParam["slot45"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot45; }, [](RandomAppearParam &param, uint8_t value) { param.slot45 = value; });
        utRandomAppearParam["slot46"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot46; }, [](RandomAppearParam &param, uint8_t value) { param.slot46 = value; });
        utRandomAppearParam["slot47"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot47; }, [](RandomAppearParam &param, uint8_t value) { param.slot47 = value; });
        utRandomAppearParam["slot48"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot48; }, [](RandomAppearParam &param, uint8_t value) { param.slot48 = value; });
        utRandomAppearParam["slot49"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot49; }, [](RandomAppearParam &param, uint8_t value) { param.slot49 = value; });
        utRandomAppearParam["slot50"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot50; }, [](RandomAppearParam &param, uint8_t value) { param.slot50 = value; });
        utRandomAppearParam["slot51"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot51; }, [](RandomAppearParam &param, uint8_t value) { param.slot51 = value; });
        utRandomAppearParam["slot52"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot52; }, [](RandomAppearParam &param, uint8_t value) { param.slot52 = value; });
        utRandomAppearParam["slot53"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot53; }, [](RandomAppearParam &param, uint8_t value) { param.slot53 = value; });
        utRandomAppearParam["slot54"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot54; }, [](RandomAppearParam &param, uint8_t value) { param.slot54 = value; });
        utRandomAppearParam["slot55"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot55; }, [](RandomAppearParam &param, uint8_t value) { param.slot55 = value; });
        utRandomAppearParam["slot56"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot56; }, [](RandomAppearParam &param, uint8_t value) { param.slot56 = value; });
        utRandomAppearParam["slot57"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot57; }, [](RandomAppearParam &param, uint8_t value) { param.slot57 = value; });
        utRandomAppearParam["slot58"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot58; }, [](RandomAppearParam &param, uint8_t value) { param.slot58 = value; });
        utRandomAppearParam["slot59"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot59; }, [](RandomAppearParam &param, uint8_t value) { param.slot59 = value; });
        utRandomAppearParam["slot60"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot60; }, [](RandomAppearParam &param, uint8_t value) { param.slot60 = value; });
        utRandomAppearParam["slot61"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot61; }, [](RandomAppearParam &param, uint8_t value) { param.slot61 = value; });
        utRandomAppearParam["slot62"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot62; }, [](RandomAppearParam &param, uint8_t value) { param.slot62 = value; });
        utRandomAppearParam["slot63"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot63; }, [](RandomAppearParam &param, uint8_t value) { param.slot63 = value; });
        utRandomAppearParam["slot64"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot64; }, [](RandomAppearParam &param, uint8_t value) { param.slot64 = value; });
        utRandomAppearParam["slot65"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot65; }, [](RandomAppearParam &param, uint8_t value) { param.slot65 = value; });
        utRandomAppearParam["slot66"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot66; }, [](RandomAppearParam &param, uint8_t value) { param.slot66 = value; });
        utRandomAppearParam["slot67"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot67; }, [](RandomAppearParam &param, uint8_t value) { param.slot67 = value; });
        utRandomAppearParam["slot68"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot68; }, [](RandomAppearParam &param, uint8_t value) { param.slot68 = value; });
        utRandomAppearParam["slot69"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot69; }, [](RandomAppearParam &param, uint8_t value) { param.slot69 = value; });
        utRandomAppearParam["slot70"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot70; }, [](RandomAppearParam &param, uint8_t value) { param.slot70 = value; });
        utRandomAppearParam["slot71"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot71; }, [](RandomAppearParam &param, uint8_t value) { param.slot71 = value; });
        utRandomAppearParam["slot72"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot72; }, [](RandomAppearParam &param, uint8_t value) { param.slot72 = value; });
        utRandomAppearParam["slot73"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot73; }, [](RandomAppearParam &param, uint8_t value) { param.slot73 = value; });
        utRandomAppearParam["slot74"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot74; }, [](RandomAppearParam &param, uint8_t value) { param.slot74 = value; });
        utRandomAppearParam["slot75"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot75; }, [](RandomAppearParam &param, uint8_t value) { param.slot75 = value; });
        utRandomAppearParam["slot76"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot76; }, [](RandomAppearParam &param, uint8_t value) { param.slot76 = value; });
        utRandomAppearParam["slot77"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot77; }, [](RandomAppearParam &param, uint8_t value) { param.slot77 = value; });
        utRandomAppearParam["slot78"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot78; }, [](RandomAppearParam &param, uint8_t value) { param.slot78 = value; });
        utRandomAppearParam["slot79"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot79; }, [](RandomAppearParam &param, uint8_t value) { param.slot79 = value; });
        utRandomAppearParam["slot80"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot80; }, [](RandomAppearParam &param, uint8_t value) { param.slot80 = value; });
        utRandomAppearParam["slot81"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot81; }, [](RandomAppearParam &param, uint8_t value) { param.slot81 = value; });
        utRandomAppearParam["slot82"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot82; }, [](RandomAppearParam &param, uint8_t value) { param.slot82 = value; });
        utRandomAppearParam["slot83"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot83; }, [](RandomAppearParam &param, uint8_t value) { param.slot83 = value; });
        utRandomAppearParam["slot84"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot84; }, [](RandomAppearParam &param, uint8_t value) { param.slot84 = value; });
        utRandomAppearParam["slot85"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot85; }, [](RandomAppearParam &param, uint8_t value) { param.slot85 = value; });
        utRandomAppearParam["slot86"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot86; }, [](RandomAppearParam &param, uint8_t value) { param.slot86 = value; });
        utRandomAppearParam["slot87"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot87; }, [](RandomAppearParam &param, uint8_t value) { param.slot87 = value; });
        utRandomAppearParam["slot88"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot88; }, [](RandomAppearParam &param, uint8_t value) { param.slot88 = value; });
        utRandomAppearParam["slot89"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot89; }, [](RandomAppearParam &param, uint8_t value) { param.slot89 = value; });
        utRandomAppearParam["slot90"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot90; }, [](RandomAppearParam &param, uint8_t value) { param.slot90 = value; });
        utRandomAppearParam["slot91"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot91; }, [](RandomAppearParam &param, uint8_t value) { param.slot91 = value; });
        utRandomAppearParam["slot92"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot92; }, [](RandomAppearParam &param, uint8_t value) { param.slot92 = value; });
        utRandomAppearParam["slot93"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot93; }, [](RandomAppearParam &param, uint8_t value) { param.slot93 = value; });
        utRandomAppearParam["slot94"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot94; }, [](RandomAppearParam &param, uint8_t value) { param.slot94 = value; });
        utRandomAppearParam["slot95"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot95; }, [](RandomAppearParam &param, uint8_t value) { param.slot95 = value; });
        utRandomAppearParam["slot96"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot96; }, [](RandomAppearParam &param, uint8_t value) { param.slot96 = value; });
        utRandomAppearParam["slot97"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot97; }, [](RandomAppearParam &param, uint8_t value) { param.slot97 = value; });
        utRandomAppearParam["slot98"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot98; }, [](RandomAppearParam &param, uint8_t value) { param.slot98 = value; });
        utRandomAppearParam["slot99"] = sol::property([](RandomAppearParam &param) -> uint8_t { return param.slot99; }, [](RandomAppearParam &param, uint8_t value) { param.slot99 = value; });
    };
    auto tableLoader = [delayInit = std::move(delayInit), state]() -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<RandomAppearParam>>(state, L"RandomAppearParam");
        indexer->setFieldNames({
            {"slot0", false},
            {"slot1", false},
            {"slot2", false},
            {"slot3", false},
            {"slot4", false},
            {"slot5", false},
            {"slot6", false},
            {"slot7", false},
            {"slot8", false},
            {"slot9", false},
            {"slot10", false},
            {"slot11", false},
            {"slot12", false},
            {"slot13", false},
            {"slot14", false},
            {"slot15", false},
            {"slot16", false},
            {"slot17", false},
            {"slot18", false},
            {"slot19", false},
            {"slot20", false},
            {"slot21", false},
            {"slot22", false},
            {"slot23", false},
            {"slot24", false},
            {"slot25", false},
            {"slot26", false},
            {"slot27", false},
            {"slot28", false},
            {"slot29", false},
            {"slot30", false},
            {"slot31", false},
            {"slot32", false},
            {"slot33", false},
            {"slot34", false},
            {"slot35", false},
            {"slot36", false},
            {"slot37", false},
            {"slot38", false},
            {"slot39", false},
            {"slot40", false},
            {"slot41", false},
            {"slot42", false},
            {"slot43", false},
            {"slot44", false},
            {"slot45", false},
            {"slot46", false},
            {"slot47", false},
            {"slot48", false},
            {"slot49", false},
            {"slot50", false},
            {"slot51", false},
            {"slot52", false},
            {"slot53", false},
            {"slot54", false},
            {"slot55", false},
            {"slot56", false},
            {"slot57", false},
            {"slot58", false},
            {"slot59", false},
            {"slot60", false},
            {"slot61", false},
            {"slot62", false},
            {"slot63", false},
            {"slot64", false},
            {"slot65", false},
            {"slot66", false},
            {"slot67", false},
            {"slot68", false},
            {"slot69", false},
            {"slot70", false},
            {"slot71", false},
            {"slot72", false},
            {"slot73", false},
            {"slot74", false},
            {"slot75", false},
            {"slot76", false},
            {"slot77", false},
            {"slot78", false},
            {"slot79", false},
            {"slot80", false},
            {"slot81", false},
            {"slot82", false},
            {"slot83", false},
            {"slot84", false},
            {"slot85", false},
            {"slot86", false},
            {"slot87", false},
            {"slot88", false},
            {"slot89", false},
            {"slot90", false},
            {"slot91", false},
            {"slot92", false},
            {"slot93", false},
            {"slot94", false},
            {"slot95", false},
            {"slot96", false},
            {"slot97", false},
            {"slot98", false},
            {"slot99", false},
        });
        return indexer;
    };
    paramsTable["RandomAppearParam"] = tableLoader;
}

template<> void ParamTableIndexer<RandomAppearParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,slot0,slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9,slot10,slot11,slot12,slot13,slot14,slot15,slot16,slot17,slot18,slot19,slot20,slot21,slot22,slot23,slot24,slot25,slot26,slot27,slot28,slot29,slot30,slot31,slot32,slot33,slot34,slot35,slot36,slot37,slot38,slot39,slot40,slot41,slot42,slot43,slot44,slot45,slot46,slot47,slot48,slot49,slot50,slot51,slot52,slot53,slot54,slot55,slot56,slot57,slot58,slot59,slot60,slot61,slot62,slot63,slot64,slot65,slot66,slot67,slot68,slot69,slot70,slot71,slot72,slot73,slot74,slot75,slot76,slot77,slot78,slot79,slot80,slot81,slot82,slot83,slot84,slot85,slot86,slot87,slot88,slot89,slot90,slot91,slot92,slot93,slot94,slot95,slot96,slot97,slot98,slot99\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u\n",
            this->paramId(i),
            param->slot0,
            param->slot1,
            param->slot2,
            param->slot3,
            param->slot4,
            param->slot5,
            param->slot6,
            param->slot7,
            param->slot8,
            param->slot9,
            param->slot10,
            param->slot11,
            param->slot12,
            param->slot13,
            param->slot14,
            param->slot15,
            param->slot16,
            param->slot17,
            param->slot18,
            param->slot19,
            param->slot20,
            param->slot21,
            param->slot22,
            param->slot23,
            param->slot24,
            param->slot25,
            param->slot26,
            param->slot27,
            param->slot28,
            param->slot29,
            param->slot30,
            param->slot31,
            param->slot32,
            param->slot33,
            param->slot34,
            param->slot35,
            param->slot36,
            param->slot37,
            param->slot38,
            param->slot39,
            param->slot40,
            param->slot41,
            param->slot42,
            param->slot43,
            param->slot44,
            param->slot45,
            param->slot46,
            param->slot47,
            param->slot48,
            param->slot49,
            param->slot50,
            param->slot51,
            param->slot52,
            param->slot53,
            param->slot54,
            param->slot55,
            param->slot56,
            param->slot57,
            param->slot58,
            param->slot59,
            param->slot60,
            param->slot61,
            param->slot62,
            param->slot63,
            param->slot64,
            param->slot65,
            param->slot66,
            param->slot67,
            param->slot68,
            param->slot69,
            param->slot70,
            param->slot71,
            param->slot72,
            param->slot73,
            param->slot74,
            param->slot75,
            param->slot76,
            param->slot77,
            param->slot78,
            param->slot79,
            param->slot80,
            param->slot81,
            param->slot82,
            param->slot83,
            param->slot84,
            param->slot85,
            param->slot86,
            param->slot87,
            param->slot88,
            param->slot89,
            param->slot90,
            param->slot91,
            param->slot92,
            param->slot93,
            param->slot94,
            param->slot95,
            param->slot96,
            param->slot97,
            param->slot98,
            param->slot99
        );
    }
    fclose(f);
}

}
