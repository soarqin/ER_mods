#include "../luabindings.h"
#include "../defs/NpcAiBehaviorProbabilityParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<NpcAiBehaviorProbabilityParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerNpcAiBehaviorProbabilityParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["NpcAiBehaviorProbabilityParam"]; usertype) return;
        auto indexerNpcAiBehaviorProbabilityParam = state->new_usertype<ParamTableIndexer<NpcAiBehaviorProbabilityParam>>("NpcAiBehaviorProbabilityParamTableIndexer");
        indexerNpcAiBehaviorProbabilityParam["count"] = sol::property(&ParamTableIndexer<NpcAiBehaviorProbabilityParam>::count);
        indexerNpcAiBehaviorProbabilityParam["__index"] = &ParamTableIndexer<NpcAiBehaviorProbabilityParam>::at;
        indexerNpcAiBehaviorProbabilityParam["id"] = &ParamTableIndexer<NpcAiBehaviorProbabilityParam>::paramId;
        indexerNpcAiBehaviorProbabilityParam["get"] = &ParamTableIndexer<NpcAiBehaviorProbabilityParam>::get;
        indexerNpcAiBehaviorProbabilityParam["exportToCsv"] = &ParamTableIndexer<NpcAiBehaviorProbabilityParam>::exportToCsv;
        indexerNpcAiBehaviorProbabilityParam["importFromCsv"] = &ParamTableIndexer<NpcAiBehaviorProbabilityParam>::importFromCsv;
        auto utNpcAiBehaviorProbabilityParam = state->new_usertype<NpcAiBehaviorProbabilityParam>("NpcAiBehaviorProbabilityParam");
        utNpcAiBehaviorProbabilityParam["param000"] = &NpcAiBehaviorProbabilityParam::param000;
        utNpcAiBehaviorProbabilityParam["param001"] = &NpcAiBehaviorProbabilityParam::param001;
        utNpcAiBehaviorProbabilityParam["param002"] = &NpcAiBehaviorProbabilityParam::param002;
        utNpcAiBehaviorProbabilityParam["param003"] = &NpcAiBehaviorProbabilityParam::param003;
        utNpcAiBehaviorProbabilityParam["param004"] = &NpcAiBehaviorProbabilityParam::param004;
        utNpcAiBehaviorProbabilityParam["param005"] = &NpcAiBehaviorProbabilityParam::param005;
        utNpcAiBehaviorProbabilityParam["param006"] = &NpcAiBehaviorProbabilityParam::param006;
        utNpcAiBehaviorProbabilityParam["param007"] = &NpcAiBehaviorProbabilityParam::param007;
        utNpcAiBehaviorProbabilityParam["param008"] = &NpcAiBehaviorProbabilityParam::param008;
        utNpcAiBehaviorProbabilityParam["param009"] = &NpcAiBehaviorProbabilityParam::param009;
        utNpcAiBehaviorProbabilityParam["param010"] = &NpcAiBehaviorProbabilityParam::param010;
        utNpcAiBehaviorProbabilityParam["param011"] = &NpcAiBehaviorProbabilityParam::param011;
        utNpcAiBehaviorProbabilityParam["param012"] = &NpcAiBehaviorProbabilityParam::param012;
        utNpcAiBehaviorProbabilityParam["param013"] = &NpcAiBehaviorProbabilityParam::param013;
        utNpcAiBehaviorProbabilityParam["param014"] = &NpcAiBehaviorProbabilityParam::param014;
        utNpcAiBehaviorProbabilityParam["param015"] = &NpcAiBehaviorProbabilityParam::param015;
        utNpcAiBehaviorProbabilityParam["param016"] = &NpcAiBehaviorProbabilityParam::param016;
        utNpcAiBehaviorProbabilityParam["param017"] = &NpcAiBehaviorProbabilityParam::param017;
        utNpcAiBehaviorProbabilityParam["param018"] = &NpcAiBehaviorProbabilityParam::param018;
        utNpcAiBehaviorProbabilityParam["param019"] = &NpcAiBehaviorProbabilityParam::param019;
        utNpcAiBehaviorProbabilityParam["param020"] = &NpcAiBehaviorProbabilityParam::param020;
        utNpcAiBehaviorProbabilityParam["param021"] = &NpcAiBehaviorProbabilityParam::param021;
        utNpcAiBehaviorProbabilityParam["param022"] = &NpcAiBehaviorProbabilityParam::param022;
        utNpcAiBehaviorProbabilityParam["param023"] = &NpcAiBehaviorProbabilityParam::param023;
        utNpcAiBehaviorProbabilityParam["param024"] = &NpcAiBehaviorProbabilityParam::param024;
        utNpcAiBehaviorProbabilityParam["param025"] = &NpcAiBehaviorProbabilityParam::param025;
        utNpcAiBehaviorProbabilityParam["param026"] = &NpcAiBehaviorProbabilityParam::param026;
        utNpcAiBehaviorProbabilityParam["param027"] = &NpcAiBehaviorProbabilityParam::param027;
        utNpcAiBehaviorProbabilityParam["param028"] = &NpcAiBehaviorProbabilityParam::param028;
        utNpcAiBehaviorProbabilityParam["param029"] = &NpcAiBehaviorProbabilityParam::param029;
        utNpcAiBehaviorProbabilityParam["param030"] = &NpcAiBehaviorProbabilityParam::param030;
        utNpcAiBehaviorProbabilityParam["param031"] = &NpcAiBehaviorProbabilityParam::param031;
        utNpcAiBehaviorProbabilityParam["param032"] = &NpcAiBehaviorProbabilityParam::param032;
        utNpcAiBehaviorProbabilityParam["param033"] = &NpcAiBehaviorProbabilityParam::param033;
        utNpcAiBehaviorProbabilityParam["param034"] = &NpcAiBehaviorProbabilityParam::param034;
        utNpcAiBehaviorProbabilityParam["param035"] = &NpcAiBehaviorProbabilityParam::param035;
        utNpcAiBehaviorProbabilityParam["param036"] = &NpcAiBehaviorProbabilityParam::param036;
        utNpcAiBehaviorProbabilityParam["param037"] = &NpcAiBehaviorProbabilityParam::param037;
        utNpcAiBehaviorProbabilityParam["param038"] = &NpcAiBehaviorProbabilityParam::param038;
        utNpcAiBehaviorProbabilityParam["param039"] = &NpcAiBehaviorProbabilityParam::param039;
        utNpcAiBehaviorProbabilityParam["param040"] = &NpcAiBehaviorProbabilityParam::param040;
        utNpcAiBehaviorProbabilityParam["param041"] = &NpcAiBehaviorProbabilityParam::param041;
        utNpcAiBehaviorProbabilityParam["param042"] = &NpcAiBehaviorProbabilityParam::param042;
        utNpcAiBehaviorProbabilityParam["param043"] = &NpcAiBehaviorProbabilityParam::param043;
        utNpcAiBehaviorProbabilityParam["param044"] = &NpcAiBehaviorProbabilityParam::param044;
        utNpcAiBehaviorProbabilityParam["param045"] = &NpcAiBehaviorProbabilityParam::param045;
        utNpcAiBehaviorProbabilityParam["param046"] = &NpcAiBehaviorProbabilityParam::param046;
        utNpcAiBehaviorProbabilityParam["param047"] = &NpcAiBehaviorProbabilityParam::param047;
        utNpcAiBehaviorProbabilityParam["param048"] = &NpcAiBehaviorProbabilityParam::param048;
        utNpcAiBehaviorProbabilityParam["param049"] = &NpcAiBehaviorProbabilityParam::param049;
        utNpcAiBehaviorProbabilityParam["param050"] = &NpcAiBehaviorProbabilityParam::param050;
        utNpcAiBehaviorProbabilityParam["param051"] = &NpcAiBehaviorProbabilityParam::param051;
        utNpcAiBehaviorProbabilityParam["param052"] = &NpcAiBehaviorProbabilityParam::param052;
        utNpcAiBehaviorProbabilityParam["param053"] = &NpcAiBehaviorProbabilityParam::param053;
        utNpcAiBehaviorProbabilityParam["param054"] = &NpcAiBehaviorProbabilityParam::param054;
        utNpcAiBehaviorProbabilityParam["param055"] = &NpcAiBehaviorProbabilityParam::param055;
        utNpcAiBehaviorProbabilityParam["param056"] = &NpcAiBehaviorProbabilityParam::param056;
        utNpcAiBehaviorProbabilityParam["param057"] = &NpcAiBehaviorProbabilityParam::param057;
        utNpcAiBehaviorProbabilityParam["param058"] = &NpcAiBehaviorProbabilityParam::param058;
        utNpcAiBehaviorProbabilityParam["param059"] = &NpcAiBehaviorProbabilityParam::param059;
        utNpcAiBehaviorProbabilityParam["param060"] = &NpcAiBehaviorProbabilityParam::param060;
        utNpcAiBehaviorProbabilityParam["param061"] = &NpcAiBehaviorProbabilityParam::param061;
        utNpcAiBehaviorProbabilityParam["param062"] = &NpcAiBehaviorProbabilityParam::param062;
        utNpcAiBehaviorProbabilityParam["param063"] = &NpcAiBehaviorProbabilityParam::param063;
        utNpcAiBehaviorProbabilityParam["param064"] = &NpcAiBehaviorProbabilityParam::param064;
        utNpcAiBehaviorProbabilityParam["param065"] = &NpcAiBehaviorProbabilityParam::param065;
        utNpcAiBehaviorProbabilityParam["param066"] = &NpcAiBehaviorProbabilityParam::param066;
        utNpcAiBehaviorProbabilityParam["param067"] = &NpcAiBehaviorProbabilityParam::param067;
        utNpcAiBehaviorProbabilityParam["param068"] = &NpcAiBehaviorProbabilityParam::param068;
        utNpcAiBehaviorProbabilityParam["param069"] = &NpcAiBehaviorProbabilityParam::param069;
        utNpcAiBehaviorProbabilityParam["param070"] = &NpcAiBehaviorProbabilityParam::param070;
        utNpcAiBehaviorProbabilityParam["param071"] = &NpcAiBehaviorProbabilityParam::param071;
        utNpcAiBehaviorProbabilityParam["param072"] = &NpcAiBehaviorProbabilityParam::param072;
        utNpcAiBehaviorProbabilityParam["param073"] = &NpcAiBehaviorProbabilityParam::param073;
        utNpcAiBehaviorProbabilityParam["param074"] = &NpcAiBehaviorProbabilityParam::param074;
        utNpcAiBehaviorProbabilityParam["param075"] = &NpcAiBehaviorProbabilityParam::param075;
        utNpcAiBehaviorProbabilityParam["param076"] = &NpcAiBehaviorProbabilityParam::param076;
        utNpcAiBehaviorProbabilityParam["param077"] = &NpcAiBehaviorProbabilityParam::param077;
        utNpcAiBehaviorProbabilityParam["param078"] = &NpcAiBehaviorProbabilityParam::param078;
        utNpcAiBehaviorProbabilityParam["param079"] = &NpcAiBehaviorProbabilityParam::param079;
        utNpcAiBehaviorProbabilityParam["param080"] = &NpcAiBehaviorProbabilityParam::param080;
        utNpcAiBehaviorProbabilityParam["param081"] = &NpcAiBehaviorProbabilityParam::param081;
        utNpcAiBehaviorProbabilityParam["param082"] = &NpcAiBehaviorProbabilityParam::param082;
        utNpcAiBehaviorProbabilityParam["param083"] = &NpcAiBehaviorProbabilityParam::param083;
        utNpcAiBehaviorProbabilityParam["param084"] = &NpcAiBehaviorProbabilityParam::param084;
        utNpcAiBehaviorProbabilityParam["param085"] = &NpcAiBehaviorProbabilityParam::param085;
        utNpcAiBehaviorProbabilityParam["param086"] = &NpcAiBehaviorProbabilityParam::param086;
        utNpcAiBehaviorProbabilityParam["param087"] = &NpcAiBehaviorProbabilityParam::param087;
        utNpcAiBehaviorProbabilityParam["param088"] = &NpcAiBehaviorProbabilityParam::param088;
        utNpcAiBehaviorProbabilityParam["param089"] = &NpcAiBehaviorProbabilityParam::param089;
        utNpcAiBehaviorProbabilityParam["param090"] = &NpcAiBehaviorProbabilityParam::param090;
        utNpcAiBehaviorProbabilityParam["param091"] = &NpcAiBehaviorProbabilityParam::param091;
        utNpcAiBehaviorProbabilityParam["param092"] = &NpcAiBehaviorProbabilityParam::param092;
        utNpcAiBehaviorProbabilityParam["param093"] = &NpcAiBehaviorProbabilityParam::param093;
        utNpcAiBehaviorProbabilityParam["param094"] = &NpcAiBehaviorProbabilityParam::param094;
        utNpcAiBehaviorProbabilityParam["param095"] = &NpcAiBehaviorProbabilityParam::param095;
        utNpcAiBehaviorProbabilityParam["param096"] = &NpcAiBehaviorProbabilityParam::param096;
        utNpcAiBehaviorProbabilityParam["param097"] = &NpcAiBehaviorProbabilityParam::param097;
        utNpcAiBehaviorProbabilityParam["param098"] = &NpcAiBehaviorProbabilityParam::param098;
        utNpcAiBehaviorProbabilityParam["param099"] = &NpcAiBehaviorProbabilityParam::param099;
        utNpcAiBehaviorProbabilityParam["param100"] = &NpcAiBehaviorProbabilityParam::param100;
        utNpcAiBehaviorProbabilityParam["param101"] = &NpcAiBehaviorProbabilityParam::param101;
        utNpcAiBehaviorProbabilityParam["param102"] = &NpcAiBehaviorProbabilityParam::param102;
        utNpcAiBehaviorProbabilityParam["param103"] = &NpcAiBehaviorProbabilityParam::param103;
        utNpcAiBehaviorProbabilityParam["param104"] = &NpcAiBehaviorProbabilityParam::param104;
        utNpcAiBehaviorProbabilityParam["param105"] = &NpcAiBehaviorProbabilityParam::param105;
        utNpcAiBehaviorProbabilityParam["param106"] = &NpcAiBehaviorProbabilityParam::param106;
        utNpcAiBehaviorProbabilityParam["param107"] = &NpcAiBehaviorProbabilityParam::param107;
        utNpcAiBehaviorProbabilityParam["param108"] = &NpcAiBehaviorProbabilityParam::param108;
        utNpcAiBehaviorProbabilityParam["param109"] = &NpcAiBehaviorProbabilityParam::param109;
        utNpcAiBehaviorProbabilityParam["param110"] = &NpcAiBehaviorProbabilityParam::param110;
        utNpcAiBehaviorProbabilityParam["param111"] = &NpcAiBehaviorProbabilityParam::param111;
        utNpcAiBehaviorProbabilityParam["param112"] = &NpcAiBehaviorProbabilityParam::param112;
        utNpcAiBehaviorProbabilityParam["param113"] = &NpcAiBehaviorProbabilityParam::param113;
        utNpcAiBehaviorProbabilityParam["param114"] = &NpcAiBehaviorProbabilityParam::param114;
        utNpcAiBehaviorProbabilityParam["param115"] = &NpcAiBehaviorProbabilityParam::param115;
        utNpcAiBehaviorProbabilityParam["param116"] = &NpcAiBehaviorProbabilityParam::param116;
        utNpcAiBehaviorProbabilityParam["param117"] = &NpcAiBehaviorProbabilityParam::param117;
        utNpcAiBehaviorProbabilityParam["param118"] = &NpcAiBehaviorProbabilityParam::param118;
        utNpcAiBehaviorProbabilityParam["param119"] = &NpcAiBehaviorProbabilityParam::param119;
        utNpcAiBehaviorProbabilityParam["param120"] = &NpcAiBehaviorProbabilityParam::param120;
        utNpcAiBehaviorProbabilityParam["param121"] = &NpcAiBehaviorProbabilityParam::param121;
        utNpcAiBehaviorProbabilityParam["param122"] = &NpcAiBehaviorProbabilityParam::param122;
        utNpcAiBehaviorProbabilityParam["param123"] = &NpcAiBehaviorProbabilityParam::param123;
        utNpcAiBehaviorProbabilityParam["param124"] = &NpcAiBehaviorProbabilityParam::param124;
        utNpcAiBehaviorProbabilityParam["param125"] = &NpcAiBehaviorProbabilityParam::param125;
        utNpcAiBehaviorProbabilityParam["param126"] = &NpcAiBehaviorProbabilityParam::param126;
        utNpcAiBehaviorProbabilityParam["param127"] = &NpcAiBehaviorProbabilityParam::param127;
        utNpcAiBehaviorProbabilityParam["param128"] = &NpcAiBehaviorProbabilityParam::param128;
        utNpcAiBehaviorProbabilityParam["param129"] = &NpcAiBehaviorProbabilityParam::param129;
        utNpcAiBehaviorProbabilityParam["param130"] = &NpcAiBehaviorProbabilityParam::param130;
        utNpcAiBehaviorProbabilityParam["param131"] = &NpcAiBehaviorProbabilityParam::param131;
        utNpcAiBehaviorProbabilityParam["param132"] = &NpcAiBehaviorProbabilityParam::param132;
        utNpcAiBehaviorProbabilityParam["param133"] = &NpcAiBehaviorProbabilityParam::param133;
        utNpcAiBehaviorProbabilityParam["param134"] = &NpcAiBehaviorProbabilityParam::param134;
        utNpcAiBehaviorProbabilityParam["param135"] = &NpcAiBehaviorProbabilityParam::param135;
        utNpcAiBehaviorProbabilityParam["param136"] = &NpcAiBehaviorProbabilityParam::param136;
        utNpcAiBehaviorProbabilityParam["param137"] = &NpcAiBehaviorProbabilityParam::param137;
        utNpcAiBehaviorProbabilityParam["param138"] = &NpcAiBehaviorProbabilityParam::param138;
        utNpcAiBehaviorProbabilityParam["param139"] = &NpcAiBehaviorProbabilityParam::param139;
        utNpcAiBehaviorProbabilityParam["param140"] = &NpcAiBehaviorProbabilityParam::param140;
        utNpcAiBehaviorProbabilityParam["param141"] = &NpcAiBehaviorProbabilityParam::param141;
        utNpcAiBehaviorProbabilityParam["param142"] = &NpcAiBehaviorProbabilityParam::param142;
        utNpcAiBehaviorProbabilityParam["param143"] = &NpcAiBehaviorProbabilityParam::param143;
        utNpcAiBehaviorProbabilityParam["param144"] = &NpcAiBehaviorProbabilityParam::param144;
        utNpcAiBehaviorProbabilityParam["param145"] = &NpcAiBehaviorProbabilityParam::param145;
        utNpcAiBehaviorProbabilityParam["param146"] = &NpcAiBehaviorProbabilityParam::param146;
        utNpcAiBehaviorProbabilityParam["param147"] = &NpcAiBehaviorProbabilityParam::param147;
        utNpcAiBehaviorProbabilityParam["param148"] = &NpcAiBehaviorProbabilityParam::param148;
        utNpcAiBehaviorProbabilityParam["param149"] = &NpcAiBehaviorProbabilityParam::param149;
        utNpcAiBehaviorProbabilityParam["param150"] = &NpcAiBehaviorProbabilityParam::param150;
        utNpcAiBehaviorProbabilityParam["param151"] = &NpcAiBehaviorProbabilityParam::param151;
        utNpcAiBehaviorProbabilityParam["param152"] = &NpcAiBehaviorProbabilityParam::param152;
        utNpcAiBehaviorProbabilityParam["param153"] = &NpcAiBehaviorProbabilityParam::param153;
        utNpcAiBehaviorProbabilityParam["param154"] = &NpcAiBehaviorProbabilityParam::param154;
        utNpcAiBehaviorProbabilityParam["param155"] = &NpcAiBehaviorProbabilityParam::param155;
        utNpcAiBehaviorProbabilityParam["param156"] = &NpcAiBehaviorProbabilityParam::param156;
        utNpcAiBehaviorProbabilityParam["param157"] = &NpcAiBehaviorProbabilityParam::param157;
        utNpcAiBehaviorProbabilityParam["param158"] = &NpcAiBehaviorProbabilityParam::param158;
        utNpcAiBehaviorProbabilityParam["param159"] = &NpcAiBehaviorProbabilityParam::param159;
        utNpcAiBehaviorProbabilityParam["param160"] = &NpcAiBehaviorProbabilityParam::param160;
        utNpcAiBehaviorProbabilityParam["param161"] = &NpcAiBehaviorProbabilityParam::param161;
        utNpcAiBehaviorProbabilityParam["param162"] = &NpcAiBehaviorProbabilityParam::param162;
        utNpcAiBehaviorProbabilityParam["param163"] = &NpcAiBehaviorProbabilityParam::param163;
        utNpcAiBehaviorProbabilityParam["param164"] = &NpcAiBehaviorProbabilityParam::param164;
        utNpcAiBehaviorProbabilityParam["param165"] = &NpcAiBehaviorProbabilityParam::param165;
        utNpcAiBehaviorProbabilityParam["param166"] = &NpcAiBehaviorProbabilityParam::param166;
        utNpcAiBehaviorProbabilityParam["param167"] = &NpcAiBehaviorProbabilityParam::param167;
        utNpcAiBehaviorProbabilityParam["param168"] = &NpcAiBehaviorProbabilityParam::param168;
        utNpcAiBehaviorProbabilityParam["param169"] = &NpcAiBehaviorProbabilityParam::param169;
        utNpcAiBehaviorProbabilityParam["param170"] = &NpcAiBehaviorProbabilityParam::param170;
        utNpcAiBehaviorProbabilityParam["param171"] = &NpcAiBehaviorProbabilityParam::param171;
        utNpcAiBehaviorProbabilityParam["param172"] = &NpcAiBehaviorProbabilityParam::param172;
        utNpcAiBehaviorProbabilityParam["param173"] = &NpcAiBehaviorProbabilityParam::param173;
        utNpcAiBehaviorProbabilityParam["param174"] = &NpcAiBehaviorProbabilityParam::param174;
        utNpcAiBehaviorProbabilityParam["param175"] = &NpcAiBehaviorProbabilityParam::param175;
        utNpcAiBehaviorProbabilityParam["param176"] = &NpcAiBehaviorProbabilityParam::param176;
        utNpcAiBehaviorProbabilityParam["param177"] = &NpcAiBehaviorProbabilityParam::param177;
        utNpcAiBehaviorProbabilityParam["param178"] = &NpcAiBehaviorProbabilityParam::param178;
        utNpcAiBehaviorProbabilityParam["param179"] = &NpcAiBehaviorProbabilityParam::param179;
        utNpcAiBehaviorProbabilityParam["param180"] = &NpcAiBehaviorProbabilityParam::param180;
        utNpcAiBehaviorProbabilityParam["param181"] = &NpcAiBehaviorProbabilityParam::param181;
        utNpcAiBehaviorProbabilityParam["param182"] = &NpcAiBehaviorProbabilityParam::param182;
        utNpcAiBehaviorProbabilityParam["param183"] = &NpcAiBehaviorProbabilityParam::param183;
        utNpcAiBehaviorProbabilityParam["param184"] = &NpcAiBehaviorProbabilityParam::param184;
        utNpcAiBehaviorProbabilityParam["param185"] = &NpcAiBehaviorProbabilityParam::param185;
        utNpcAiBehaviorProbabilityParam["param186"] = &NpcAiBehaviorProbabilityParam::param186;
        utNpcAiBehaviorProbabilityParam["param187"] = &NpcAiBehaviorProbabilityParam::param187;
        utNpcAiBehaviorProbabilityParam["param188"] = &NpcAiBehaviorProbabilityParam::param188;
        utNpcAiBehaviorProbabilityParam["param189"] = &NpcAiBehaviorProbabilityParam::param189;
        utNpcAiBehaviorProbabilityParam["param190"] = &NpcAiBehaviorProbabilityParam::param190;
        utNpcAiBehaviorProbabilityParam["param191"] = &NpcAiBehaviorProbabilityParam::param191;
        utNpcAiBehaviorProbabilityParam["param192"] = &NpcAiBehaviorProbabilityParam::param192;
        utNpcAiBehaviorProbabilityParam["param193"] = &NpcAiBehaviorProbabilityParam::param193;
        utNpcAiBehaviorProbabilityParam["param194"] = &NpcAiBehaviorProbabilityParam::param194;
        utNpcAiBehaviorProbabilityParam["param195"] = &NpcAiBehaviorProbabilityParam::param195;
        utNpcAiBehaviorProbabilityParam["param196"] = &NpcAiBehaviorProbabilityParam::param196;
        utNpcAiBehaviorProbabilityParam["param197"] = &NpcAiBehaviorProbabilityParam::param197;
        utNpcAiBehaviorProbabilityParam["param198"] = &NpcAiBehaviorProbabilityParam::param198;
        utNpcAiBehaviorProbabilityParam["param199"] = &NpcAiBehaviorProbabilityParam::param199;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<NpcAiBehaviorProbabilityParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<NpcAiBehaviorProbabilityParam>>(nullptr);
        indexer->setFieldNames({
            {"param000", false},
            {"param001", false},
            {"param002", false},
            {"param003", false},
            {"param004", false},
            {"param005", false},
            {"param006", false},
            {"param007", false},
            {"param008", false},
            {"param009", false},
            {"param010", false},
            {"param011", false},
            {"param012", false},
            {"param013", false},
            {"param014", false},
            {"param015", false},
            {"param016", false},
            {"param017", false},
            {"param018", false},
            {"param019", false},
            {"param020", false},
            {"param021", false},
            {"param022", false},
            {"param023", false},
            {"param024", false},
            {"param025", false},
            {"param026", false},
            {"param027", false},
            {"param028", false},
            {"param029", false},
            {"param030", false},
            {"param031", false},
            {"param032", false},
            {"param033", false},
            {"param034", false},
            {"param035", false},
            {"param036", false},
            {"param037", false},
            {"param038", false},
            {"param039", false},
            {"param040", false},
            {"param041", false},
            {"param042", false},
            {"param043", false},
            {"param044", false},
            {"param045", false},
            {"param046", false},
            {"param047", false},
            {"param048", false},
            {"param049", false},
            {"param050", false},
            {"param051", false},
            {"param052", false},
            {"param053", false},
            {"param054", false},
            {"param055", false},
            {"param056", false},
            {"param057", false},
            {"param058", false},
            {"param059", false},
            {"param060", false},
            {"param061", false},
            {"param062", false},
            {"param063", false},
            {"param064", false},
            {"param065", false},
            {"param066", false},
            {"param067", false},
            {"param068", false},
            {"param069", false},
            {"param070", false},
            {"param071", false},
            {"param072", false},
            {"param073", false},
            {"param074", false},
            {"param075", false},
            {"param076", false},
            {"param077", false},
            {"param078", false},
            {"param079", false},
            {"param080", false},
            {"param081", false},
            {"param082", false},
            {"param083", false},
            {"param084", false},
            {"param085", false},
            {"param086", false},
            {"param087", false},
            {"param088", false},
            {"param089", false},
            {"param090", false},
            {"param091", false},
            {"param092", false},
            {"param093", false},
            {"param094", false},
            {"param095", false},
            {"param096", false},
            {"param097", false},
            {"param098", false},
            {"param099", false},
            {"param100", false},
            {"param101", false},
            {"param102", false},
            {"param103", false},
            {"param104", false},
            {"param105", false},
            {"param106", false},
            {"param107", false},
            {"param108", false},
            {"param109", false},
            {"param110", false},
            {"param111", false},
            {"param112", false},
            {"param113", false},
            {"param114", false},
            {"param115", false},
            {"param116", false},
            {"param117", false},
            {"param118", false},
            {"param119", false},
            {"param120", false},
            {"param121", false},
            {"param122", false},
            {"param123", false},
            {"param124", false},
            {"param125", false},
            {"param126", false},
            {"param127", false},
            {"param128", false},
            {"param129", false},
            {"param130", false},
            {"param131", false},
            {"param132", false},
            {"param133", false},
            {"param134", false},
            {"param135", false},
            {"param136", false},
            {"param137", false},
            {"param138", false},
            {"param139", false},
            {"param140", false},
            {"param141", false},
            {"param142", false},
            {"param143", false},
            {"param144", false},
            {"param145", false},
            {"param146", false},
            {"param147", false},
            {"param148", false},
            {"param149", false},
            {"param150", false},
            {"param151", false},
            {"param152", false},
            {"param153", false},
            {"param154", false},
            {"param155", false},
            {"param156", false},
            {"param157", false},
            {"param158", false},
            {"param159", false},
            {"param160", false},
            {"param161", false},
            {"param162", false},
            {"param163", false},
            {"param164", false},
            {"param165", false},
            {"param166", false},
            {"param167", false},
            {"param168", false},
            {"param169", false},
            {"param170", false},
            {"param171", false},
            {"param172", false},
            {"param173", false},
            {"param174", false},
            {"param175", false},
            {"param176", false},
            {"param177", false},
            {"param178", false},
            {"param179", false},
            {"param180", false},
            {"param181", false},
            {"param182", false},
            {"param183", false},
            {"param184", false},
            {"param185", false},
            {"param186", false},
            {"param187", false},
            {"param188", false},
            {"param189", false},
            {"param190", false},
            {"param191", false},
            {"param192", false},
            {"param193", false},
            {"param194", false},
            {"param195", false},
            {"param196", false},
            {"param197", false},
            {"param198", false},
            {"param199", false},
        });
        return indexer;
    };
    paramsTable["NpcAiBehaviorProbability"] = [tableLoader]() -> auto { return tableLoader(L"NpcAiBehaviorProbability"); };
}

template<> void ParamTableIndexer<NpcAiBehaviorProbabilityParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,param000,param001,param002,param003,param004,param005,param006,param007,param008,param009,param010,param011,param012,param013,param014");
    fwprintf(f, L",param015,param016,param017,param018,param019,param020,param021,param022,param023,param024,param025,param026,param027,param028,param029,param030");
    fwprintf(f, L",param031,param032,param033,param034,param035,param036,param037,param038,param039,param040,param041,param042,param043,param044,param045,param046");
    fwprintf(f, L",param047,param048,param049,param050,param051,param052,param053,param054,param055,param056,param057,param058,param059,param060,param061,param062");
    fwprintf(f, L",param063,param064,param065,param066,param067,param068,param069,param070,param071,param072,param073,param074,param075,param076,param077,param078");
    fwprintf(f, L",param079,param080,param081,param082,param083,param084,param085,param086,param087,param088,param089,param090,param091,param092,param093,param094");
    fwprintf(f, L",param095,param096,param097,param098,param099,param100,param101,param102,param103,param104,param105,param106,param107,param108,param109,param110");
    fwprintf(f, L",param111,param112,param113,param114,param115,param116,param117,param118,param119,param120,param121,param122,param123,param124,param125,param126");
    fwprintf(f, L",param127,param128,param129,param130,param131,param132,param133,param134,param135,param136,param137,param138,param139,param140,param141,param142");
    fwprintf(f, L",param143,param144,param145,param146,param147,param148,param149,param150,param151,param152,param153,param154,param155,param156,param157,param158");
    fwprintf(f, L",param159,param160,param161,param162,param163,param164,param165,param166,param167,param168,param169,param170,param171,param172,param173,param174");
    fwprintf(f, L",param175,param176,param177,param178,param179,param180,param181,param182,param183,param184,param185,param186,param187,param188,param189,param190");
    fwprintf(f, L",param191,param192,param193,param194,param195,param196,param197,param198,param199\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",
            this->paramId(i),
            param->param000,
            param->param001,
            param->param002,
            param->param003,
            param->param004,
            param->param005,
            param->param006,
            param->param007,
            param->param008,
            param->param009,
            param->param010,
            param->param011,
            param->param012,
            param->param013,
            param->param014,
            param->param015,
            param->param016,
            param->param017,
            param->param018,
            param->param019,
            param->param020,
            param->param021,
            param->param022,
            param->param023,
            param->param024,
            param->param025,
            param->param026,
            param->param027,
            param->param028,
            param->param029,
            param->param030,
            param->param031,
            param->param032,
            param->param033,
            param->param034,
            param->param035,
            param->param036,
            param->param037,
            param->param038,
            param->param039,
            param->param040,
            param->param041,
            param->param042,
            param->param043,
            param->param044,
            param->param045,
            param->param046,
            param->param047,
            param->param048,
            param->param049,
            param->param050,
            param->param051,
            param->param052,
            param->param053,
            param->param054,
            param->param055,
            param->param056,
            param->param057,
            param->param058,
            param->param059,
            param->param060,
            param->param061,
            param->param062,
            param->param063,
            param->param064,
            param->param065,
            param->param066,
            param->param067,
            param->param068,
            param->param069,
            param->param070,
            param->param071,
            param->param072,
            param->param073,
            param->param074,
            param->param075,
            param->param076,
            param->param077,
            param->param078,
            param->param079,
            param->param080,
            param->param081,
            param->param082,
            param->param083,
            param->param084,
            param->param085,
            param->param086,
            param->param087,
            param->param088,
            param->param089,
            param->param090,
            param->param091,
            param->param092,
            param->param093,
            param->param094,
            param->param095,
            param->param096,
            param->param097,
            param->param098,
            param->param099,
            param->param100,
            param->param101,
            param->param102,
            param->param103,
            param->param104,
            param->param105,
            param->param106,
            param->param107,
            param->param108,
            param->param109,
            param->param110,
            param->param111,
            param->param112,
            param->param113,
            param->param114,
            param->param115,
            param->param116,
            param->param117,
            param->param118,
            param->param119,
            param->param120,
            param->param121,
            param->param122,
            param->param123,
            param->param124,
            param->param125,
            param->param126,
            param->param127,
            param->param128,
            param->param129,
            param->param130,
            param->param131,
            param->param132,
            param->param133,
            param->param134,
            param->param135,
            param->param136,
            param->param137,
            param->param138,
            param->param139,
            param->param140,
            param->param141,
            param->param142,
            param->param143,
            param->param144,
            param->param145,
            param->param146,
            param->param147,
            param->param148,
            param->param149,
            param->param150,
            param->param151,
            param->param152,
            param->param153,
            param->param154,
            param->param155,
            param->param156,
            param->param157,
            param->param158,
            param->param159,
            param->param160,
            param->param161,
            param->param162,
            param->param163,
            param->param164,
            param->param165,
            param->param166,
            param->param167,
            param->param168,
            param->param169,
            param->param170,
            param->param171,
            param->param172,
            param->param173,
            param->param174,
            param->param175,
            param->param176,
            param->param177,
            param->param178,
            param->param179,
            param->param180,
            param->param181,
            param->param182,
            param->param183,
            param->param184,
            param->param185,
            param->param186,
            param->param187,
            param->param188,
            param->param189,
            param->param190,
            param->param191,
            param->param192,
            param->param193,
            param->param194,
            param->param195,
            param->param196,
            param->param197,
            param->param198,
            param->param199
        );
    }
    fclose(f);
}

}
