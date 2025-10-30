#include "../luabindings.h"
#include "../defs/FootSfxParam.h"

namespace paramadjuster::params {

template<> void ParamTableIndexer<FootSfxParam>::exportToCsvImpl(const std::wstring &csvPath);

void registerFootSfxParam(sol::state *state, sol::table &paramsTable) {
    auto delayInit = [state, &paramsTable]() {
        if (sol::optional<sol::table> usertype = (*state)["FootSfxParam"]; usertype) return;
        auto indexerFootSfxParam = state->new_usertype<ParamTableIndexer<FootSfxParam>>("FootSfxParamTableIndexer");
        indexerFootSfxParam["count"] = sol::property(&ParamTableIndexer<FootSfxParam>::count);
        indexerFootSfxParam["__index"] = &ParamTableIndexer<FootSfxParam>::at;
        indexerFootSfxParam["id"] = &ParamTableIndexer<FootSfxParam>::paramId;
        indexerFootSfxParam["get"] = &ParamTableIndexer<FootSfxParam>::get;
        indexerFootSfxParam["exportToCsv"] = &ParamTableIndexer<FootSfxParam>::exportToCsv;
        indexerFootSfxParam["importFromCsv"] = &ParamTableIndexer<FootSfxParam>::importFromCsv;
        auto utFootSfxParam = state->new_usertype<FootSfxParam>("FootSfxParam");
        utFootSfxParam["sfxId_00"] = &FootSfxParam::sfxId_00;
        utFootSfxParam["sfxId_01"] = &FootSfxParam::sfxId_01;
        utFootSfxParam["sfxId_02"] = &FootSfxParam::sfxId_02;
        utFootSfxParam["sfxId_03"] = &FootSfxParam::sfxId_03;
        utFootSfxParam["sfxId_04"] = &FootSfxParam::sfxId_04;
        utFootSfxParam["sfxId_05"] = &FootSfxParam::sfxId_05;
        utFootSfxParam["sfxId_06"] = &FootSfxParam::sfxId_06;
        utFootSfxParam["sfxId_07"] = &FootSfxParam::sfxId_07;
        utFootSfxParam["sfxId_08"] = &FootSfxParam::sfxId_08;
        utFootSfxParam["sfxId_09"] = &FootSfxParam::sfxId_09;
        utFootSfxParam["sfxId_10"] = &FootSfxParam::sfxId_10;
        utFootSfxParam["sfxId_11"] = &FootSfxParam::sfxId_11;
        utFootSfxParam["sfxId_12"] = &FootSfxParam::sfxId_12;
        utFootSfxParam["sfxId_13"] = &FootSfxParam::sfxId_13;
        utFootSfxParam["sfxId_14"] = &FootSfxParam::sfxId_14;
        utFootSfxParam["sfxId_15"] = &FootSfxParam::sfxId_15;
        utFootSfxParam["sfxId_16"] = &FootSfxParam::sfxId_16;
        utFootSfxParam["sfxId_17"] = &FootSfxParam::sfxId_17;
        utFootSfxParam["sfxId_18"] = &FootSfxParam::sfxId_18;
        utFootSfxParam["sfxId_19"] = &FootSfxParam::sfxId_19;
        utFootSfxParam["sfxId_20"] = &FootSfxParam::sfxId_20;
        utFootSfxParam["sfxId_21"] = &FootSfxParam::sfxId_21;
        utFootSfxParam["sfxId_22"] = &FootSfxParam::sfxId_22;
        utFootSfxParam["sfxId_23"] = &FootSfxParam::sfxId_23;
        utFootSfxParam["sfxId_24"] = &FootSfxParam::sfxId_24;
        utFootSfxParam["sfxId_25"] = &FootSfxParam::sfxId_25;
        utFootSfxParam["sfxId_26"] = &FootSfxParam::sfxId_26;
        utFootSfxParam["sfxId_27"] = &FootSfxParam::sfxId_27;
        utFootSfxParam["sfxId_28"] = &FootSfxParam::sfxId_28;
        utFootSfxParam["sfxId_29"] = &FootSfxParam::sfxId_29;
        utFootSfxParam["sfxId_30"] = &FootSfxParam::sfxId_30;
        utFootSfxParam["sfxId_31"] = &FootSfxParam::sfxId_31;
        utFootSfxParam["sfxId_32"] = &FootSfxParam::sfxId_32;
        utFootSfxParam["sfxId_33"] = &FootSfxParam::sfxId_33;
        utFootSfxParam["sfxId_34"] = &FootSfxParam::sfxId_34;
        utFootSfxParam["sfxId_35"] = &FootSfxParam::sfxId_35;
        utFootSfxParam["sfxId_36"] = &FootSfxParam::sfxId_36;
        utFootSfxParam["sfxId_37"] = &FootSfxParam::sfxId_37;
        utFootSfxParam["sfxId_38"] = &FootSfxParam::sfxId_38;
        utFootSfxParam["sfxId_39"] = &FootSfxParam::sfxId_39;
        utFootSfxParam["sfxId_40"] = &FootSfxParam::sfxId_40;
        utFootSfxParam["sfxId_41"] = &FootSfxParam::sfxId_41;
        utFootSfxParam["sfxId_42"] = &FootSfxParam::sfxId_42;
        utFootSfxParam["sfxId_43"] = &FootSfxParam::sfxId_43;
        utFootSfxParam["sfxId_44"] = &FootSfxParam::sfxId_44;
        utFootSfxParam["sfxId_45"] = &FootSfxParam::sfxId_45;
        utFootSfxParam["sfxId_46"] = &FootSfxParam::sfxId_46;
        utFootSfxParam["sfxId_47"] = &FootSfxParam::sfxId_47;
        utFootSfxParam["sfxId_48"] = &FootSfxParam::sfxId_48;
        utFootSfxParam["sfxId_49"] = &FootSfxParam::sfxId_49;
        utFootSfxParam["sfxId_50"] = &FootSfxParam::sfxId_50;
        utFootSfxParam["sfxId_51"] = &FootSfxParam::sfxId_51;
        utFootSfxParam["sfxId_52"] = &FootSfxParam::sfxId_52;
        utFootSfxParam["sfxId_53"] = &FootSfxParam::sfxId_53;
        utFootSfxParam["sfxId_54"] = &FootSfxParam::sfxId_54;
        utFootSfxParam["sfxId_55"] = &FootSfxParam::sfxId_55;
        utFootSfxParam["sfxId_56"] = &FootSfxParam::sfxId_56;
        utFootSfxParam["sfxId_57"] = &FootSfxParam::sfxId_57;
        utFootSfxParam["sfxId_58"] = &FootSfxParam::sfxId_58;
        utFootSfxParam["sfxId_59"] = &FootSfxParam::sfxId_59;
        utFootSfxParam["sfxId_60"] = &FootSfxParam::sfxId_60;
        utFootSfxParam["sfxId_61"] = &FootSfxParam::sfxId_61;
        utFootSfxParam["sfxId_62"] = &FootSfxParam::sfxId_62;
        utFootSfxParam["sfxId_63"] = &FootSfxParam::sfxId_63;
        utFootSfxParam["sfxId_64"] = &FootSfxParam::sfxId_64;
        utFootSfxParam["sfxId_65"] = &FootSfxParam::sfxId_65;
        utFootSfxParam["sfxId_66"] = &FootSfxParam::sfxId_66;
        utFootSfxParam["sfxId_67"] = &FootSfxParam::sfxId_67;
        utFootSfxParam["sfxId_68"] = &FootSfxParam::sfxId_68;
        utFootSfxParam["sfxId_69"] = &FootSfxParam::sfxId_69;
        utFootSfxParam["sfxId_70"] = &FootSfxParam::sfxId_70;
        utFootSfxParam["sfxId_71"] = &FootSfxParam::sfxId_71;
        utFootSfxParam["sfxId_72"] = &FootSfxParam::sfxId_72;
        utFootSfxParam["sfxId_73"] = &FootSfxParam::sfxId_73;
        utFootSfxParam["sfxId_74"] = &FootSfxParam::sfxId_74;
        utFootSfxParam["sfxId_75"] = &FootSfxParam::sfxId_75;
        utFootSfxParam["sfxId_76"] = &FootSfxParam::sfxId_76;
        utFootSfxParam["sfxId_77"] = &FootSfxParam::sfxId_77;
        utFootSfxParam["sfxId_78"] = &FootSfxParam::sfxId_78;
        utFootSfxParam["sfxId_79"] = &FootSfxParam::sfxId_79;
        utFootSfxParam["sfxId_80"] = &FootSfxParam::sfxId_80;
        utFootSfxParam["sfxId_81"] = &FootSfxParam::sfxId_81;
        utFootSfxParam["sfxId_82"] = &FootSfxParam::sfxId_82;
        utFootSfxParam["sfxId_83"] = &FootSfxParam::sfxId_83;
        utFootSfxParam["sfxId_84"] = &FootSfxParam::sfxId_84;
        utFootSfxParam["sfxId_85"] = &FootSfxParam::sfxId_85;
        utFootSfxParam["sfxId_86"] = &FootSfxParam::sfxId_86;
        utFootSfxParam["sfxId_87"] = &FootSfxParam::sfxId_87;
        utFootSfxParam["sfxId_88"] = &FootSfxParam::sfxId_88;
        utFootSfxParam["sfxId_89"] = &FootSfxParam::sfxId_89;
        utFootSfxParam["sfxId_90"] = &FootSfxParam::sfxId_90;
        utFootSfxParam["sfxId_91"] = &FootSfxParam::sfxId_91;
        utFootSfxParam["sfxId_92"] = &FootSfxParam::sfxId_92;
        utFootSfxParam["sfxId_93"] = &FootSfxParam::sfxId_93;
        utFootSfxParam["sfxId_94"] = &FootSfxParam::sfxId_94;
        utFootSfxParam["sfxId_95"] = &FootSfxParam::sfxId_95;
        utFootSfxParam["sfxId_96"] = &FootSfxParam::sfxId_96;
        utFootSfxParam["sfxId_97"] = &FootSfxParam::sfxId_97;
        utFootSfxParam["sfxId_98"] = &FootSfxParam::sfxId_98;
        utFootSfxParam["sfxId_99"] = &FootSfxParam::sfxId_99;
        utFootSfxParam["sfxId_100"] = &FootSfxParam::sfxId_100;
        utFootSfxParam["sfxId_101"] = &FootSfxParam::sfxId_101;
        utFootSfxParam["sfxId_102"] = &FootSfxParam::sfxId_102;
        utFootSfxParam["sfxId_103"] = &FootSfxParam::sfxId_103;
        utFootSfxParam["sfxId_104"] = &FootSfxParam::sfxId_104;
        utFootSfxParam["sfxId_105"] = &FootSfxParam::sfxId_105;
        utFootSfxParam["sfxId_106"] = &FootSfxParam::sfxId_106;
        utFootSfxParam["sfxId_107"] = &FootSfxParam::sfxId_107;
        utFootSfxParam["sfxId_108"] = &FootSfxParam::sfxId_108;
        utFootSfxParam["sfxId_109"] = &FootSfxParam::sfxId_109;
        utFootSfxParam["sfxId_110"] = &FootSfxParam::sfxId_110;
        utFootSfxParam["sfxId_111"] = &FootSfxParam::sfxId_111;
        utFootSfxParam["sfxId_112"] = &FootSfxParam::sfxId_112;
        utFootSfxParam["sfxId_113"] = &FootSfxParam::sfxId_113;
        utFootSfxParam["sfxId_114"] = &FootSfxParam::sfxId_114;
        utFootSfxParam["sfxId_115"] = &FootSfxParam::sfxId_115;
        utFootSfxParam["sfxId_116"] = &FootSfxParam::sfxId_116;
        utFootSfxParam["sfxId_117"] = &FootSfxParam::sfxId_117;
        utFootSfxParam["sfxId_118"] = &FootSfxParam::sfxId_118;
        utFootSfxParam["sfxId_119"] = &FootSfxParam::sfxId_119;
        utFootSfxParam["sfxId_120"] = &FootSfxParam::sfxId_120;
        utFootSfxParam["sfxId_121"] = &FootSfxParam::sfxId_121;
        utFootSfxParam["sfxId_122"] = &FootSfxParam::sfxId_122;
        utFootSfxParam["sfxId_123"] = &FootSfxParam::sfxId_123;
        utFootSfxParam["sfxId_124"] = &FootSfxParam::sfxId_124;
        utFootSfxParam["sfxId_125"] = &FootSfxParam::sfxId_125;
        utFootSfxParam["sfxId_126"] = &FootSfxParam::sfxId_126;
        utFootSfxParam["sfxId_127"] = &FootSfxParam::sfxId_127;
        utFootSfxParam["sfxId_128"] = &FootSfxParam::sfxId_128;
        utFootSfxParam["sfxId_129"] = &FootSfxParam::sfxId_129;
        utFootSfxParam["sfxId_130"] = &FootSfxParam::sfxId_130;
        utFootSfxParam["sfxId_131"] = &FootSfxParam::sfxId_131;
        utFootSfxParam["sfxId_132"] = &FootSfxParam::sfxId_132;
        utFootSfxParam["sfxId_133"] = &FootSfxParam::sfxId_133;
        utFootSfxParam["sfxId_134"] = &FootSfxParam::sfxId_134;
        utFootSfxParam["sfxId_135"] = &FootSfxParam::sfxId_135;
        utFootSfxParam["sfxId_136"] = &FootSfxParam::sfxId_136;
        utFootSfxParam["sfxId_137"] = &FootSfxParam::sfxId_137;
        utFootSfxParam["sfxId_138"] = &FootSfxParam::sfxId_138;
        utFootSfxParam["sfxId_139"] = &FootSfxParam::sfxId_139;
        utFootSfxParam["sfxId_140"] = &FootSfxParam::sfxId_140;
        utFootSfxParam["sfxId_141"] = &FootSfxParam::sfxId_141;
        utFootSfxParam["sfxId_142"] = &FootSfxParam::sfxId_142;
        utFootSfxParam["sfxId_143"] = &FootSfxParam::sfxId_143;
        utFootSfxParam["sfxId_144"] = &FootSfxParam::sfxId_144;
        utFootSfxParam["sfxId_145"] = &FootSfxParam::sfxId_145;
        utFootSfxParam["sfxId_146"] = &FootSfxParam::sfxId_146;
        utFootSfxParam["sfxId_147"] = &FootSfxParam::sfxId_147;
        utFootSfxParam["sfxId_148"] = &FootSfxParam::sfxId_148;
        utFootSfxParam["sfxId_149"] = &FootSfxParam::sfxId_149;
        utFootSfxParam["sfxId_150"] = &FootSfxParam::sfxId_150;
        utFootSfxParam["sfxId_151"] = &FootSfxParam::sfxId_151;
        utFootSfxParam["sfxId_152"] = &FootSfxParam::sfxId_152;
        utFootSfxParam["sfxId_153"] = &FootSfxParam::sfxId_153;
        utFootSfxParam["sfxId_154"] = &FootSfxParam::sfxId_154;
        utFootSfxParam["sfxId_155"] = &FootSfxParam::sfxId_155;
        utFootSfxParam["sfxId_156"] = &FootSfxParam::sfxId_156;
        utFootSfxParam["sfxId_157"] = &FootSfxParam::sfxId_157;
        utFootSfxParam["sfxId_158"] = &FootSfxParam::sfxId_158;
        utFootSfxParam["sfxId_159"] = &FootSfxParam::sfxId_159;
        utFootSfxParam["sfxId_160"] = &FootSfxParam::sfxId_160;
        utFootSfxParam["sfxId_161"] = &FootSfxParam::sfxId_161;
        utFootSfxParam["sfxId_162"] = &FootSfxParam::sfxId_162;
        utFootSfxParam["sfxId_163"] = &FootSfxParam::sfxId_163;
        utFootSfxParam["sfxId_164"] = &FootSfxParam::sfxId_164;
        utFootSfxParam["sfxId_165"] = &FootSfxParam::sfxId_165;
        utFootSfxParam["sfxId_166"] = &FootSfxParam::sfxId_166;
        utFootSfxParam["sfxId_167"] = &FootSfxParam::sfxId_167;
        utFootSfxParam["sfxId_168"] = &FootSfxParam::sfxId_168;
        utFootSfxParam["sfxId_169"] = &FootSfxParam::sfxId_169;
        utFootSfxParam["sfxId_170"] = &FootSfxParam::sfxId_170;
        utFootSfxParam["sfxId_171"] = &FootSfxParam::sfxId_171;
        utFootSfxParam["sfxId_172"] = &FootSfxParam::sfxId_172;
        utFootSfxParam["sfxId_173"] = &FootSfxParam::sfxId_173;
        utFootSfxParam["sfxId_174"] = &FootSfxParam::sfxId_174;
        utFootSfxParam["sfxId_175"] = &FootSfxParam::sfxId_175;
        utFootSfxParam["sfxId_176"] = &FootSfxParam::sfxId_176;
        utFootSfxParam["sfxId_177"] = &FootSfxParam::sfxId_177;
        utFootSfxParam["sfxId_178"] = &FootSfxParam::sfxId_178;
        utFootSfxParam["sfxId_179"] = &FootSfxParam::sfxId_179;
        utFootSfxParam["sfxId_180"] = &FootSfxParam::sfxId_180;
        utFootSfxParam["sfxId_181"] = &FootSfxParam::sfxId_181;
        utFootSfxParam["sfxId_182"] = &FootSfxParam::sfxId_182;
        utFootSfxParam["sfxId_183"] = &FootSfxParam::sfxId_183;
        utFootSfxParam["sfxId_184"] = &FootSfxParam::sfxId_184;
        utFootSfxParam["sfxId_185"] = &FootSfxParam::sfxId_185;
        utFootSfxParam["sfxId_186"] = &FootSfxParam::sfxId_186;
        utFootSfxParam["sfxId_187"] = &FootSfxParam::sfxId_187;
        utFootSfxParam["sfxId_188"] = &FootSfxParam::sfxId_188;
        utFootSfxParam["sfxId_189"] = &FootSfxParam::sfxId_189;
        utFootSfxParam["sfxId_190"] = &FootSfxParam::sfxId_190;
        utFootSfxParam["sfxId_191"] = &FootSfxParam::sfxId_191;
        utFootSfxParam["sfxId_192"] = &FootSfxParam::sfxId_192;
        utFootSfxParam["sfxId_193"] = &FootSfxParam::sfxId_193;
        utFootSfxParam["sfxId_194"] = &FootSfxParam::sfxId_194;
        utFootSfxParam["sfxId_195"] = &FootSfxParam::sfxId_195;
        utFootSfxParam["sfxId_196"] = &FootSfxParam::sfxId_196;
        utFootSfxParam["sfxId_197"] = &FootSfxParam::sfxId_197;
        utFootSfxParam["sfxId_198"] = &FootSfxParam::sfxId_198;
        utFootSfxParam["sfxId_199"] = &FootSfxParam::sfxId_199;
    };
    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {
        delayInit();
        auto indexer = std::make_unique<ParamTableIndexer<FootSfxParam>>(state, tableName);
        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<FootSfxParam>>(nullptr);
        indexer->setFieldNames({
            {"sfxId_00", false},
            {"sfxId_01", false},
            {"sfxId_02", false},
            {"sfxId_03", false},
            {"sfxId_04", false},
            {"sfxId_05", false},
            {"sfxId_06", false},
            {"sfxId_07", false},
            {"sfxId_08", false},
            {"sfxId_09", false},
            {"sfxId_10", false},
            {"sfxId_11", false},
            {"sfxId_12", false},
            {"sfxId_13", false},
            {"sfxId_14", false},
            {"sfxId_15", false},
            {"sfxId_16", false},
            {"sfxId_17", false},
            {"sfxId_18", false},
            {"sfxId_19", false},
            {"sfxId_20", false},
            {"sfxId_21", false},
            {"sfxId_22", false},
            {"sfxId_23", false},
            {"sfxId_24", false},
            {"sfxId_25", false},
            {"sfxId_26", false},
            {"sfxId_27", false},
            {"sfxId_28", false},
            {"sfxId_29", false},
            {"sfxId_30", false},
            {"sfxId_31", false},
            {"sfxId_32", false},
            {"sfxId_33", false},
            {"sfxId_34", false},
            {"sfxId_35", false},
            {"sfxId_36", false},
            {"sfxId_37", false},
            {"sfxId_38", false},
            {"sfxId_39", false},
            {"sfxId_40", false},
            {"sfxId_41", false},
            {"sfxId_42", false},
            {"sfxId_43", false},
            {"sfxId_44", false},
            {"sfxId_45", false},
            {"sfxId_46", false},
            {"sfxId_47", false},
            {"sfxId_48", false},
            {"sfxId_49", false},
            {"sfxId_50", false},
            {"sfxId_51", false},
            {"sfxId_52", false},
            {"sfxId_53", false},
            {"sfxId_54", false},
            {"sfxId_55", false},
            {"sfxId_56", false},
            {"sfxId_57", false},
            {"sfxId_58", false},
            {"sfxId_59", false},
            {"sfxId_60", false},
            {"sfxId_61", false},
            {"sfxId_62", false},
            {"sfxId_63", false},
            {"sfxId_64", false},
            {"sfxId_65", false},
            {"sfxId_66", false},
            {"sfxId_67", false},
            {"sfxId_68", false},
            {"sfxId_69", false},
            {"sfxId_70", false},
            {"sfxId_71", false},
            {"sfxId_72", false},
            {"sfxId_73", false},
            {"sfxId_74", false},
            {"sfxId_75", false},
            {"sfxId_76", false},
            {"sfxId_77", false},
            {"sfxId_78", false},
            {"sfxId_79", false},
            {"sfxId_80", false},
            {"sfxId_81", false},
            {"sfxId_82", false},
            {"sfxId_83", false},
            {"sfxId_84", false},
            {"sfxId_85", false},
            {"sfxId_86", false},
            {"sfxId_87", false},
            {"sfxId_88", false},
            {"sfxId_89", false},
            {"sfxId_90", false},
            {"sfxId_91", false},
            {"sfxId_92", false},
            {"sfxId_93", false},
            {"sfxId_94", false},
            {"sfxId_95", false},
            {"sfxId_96", false},
            {"sfxId_97", false},
            {"sfxId_98", false},
            {"sfxId_99", false},
            {"sfxId_100", false},
            {"sfxId_101", false},
            {"sfxId_102", false},
            {"sfxId_103", false},
            {"sfxId_104", false},
            {"sfxId_105", false},
            {"sfxId_106", false},
            {"sfxId_107", false},
            {"sfxId_108", false},
            {"sfxId_109", false},
            {"sfxId_110", false},
            {"sfxId_111", false},
            {"sfxId_112", false},
            {"sfxId_113", false},
            {"sfxId_114", false},
            {"sfxId_115", false},
            {"sfxId_116", false},
            {"sfxId_117", false},
            {"sfxId_118", false},
            {"sfxId_119", false},
            {"sfxId_120", false},
            {"sfxId_121", false},
            {"sfxId_122", false},
            {"sfxId_123", false},
            {"sfxId_124", false},
            {"sfxId_125", false},
            {"sfxId_126", false},
            {"sfxId_127", false},
            {"sfxId_128", false},
            {"sfxId_129", false},
            {"sfxId_130", false},
            {"sfxId_131", false},
            {"sfxId_132", false},
            {"sfxId_133", false},
            {"sfxId_134", false},
            {"sfxId_135", false},
            {"sfxId_136", false},
            {"sfxId_137", false},
            {"sfxId_138", false},
            {"sfxId_139", false},
            {"sfxId_140", false},
            {"sfxId_141", false},
            {"sfxId_142", false},
            {"sfxId_143", false},
            {"sfxId_144", false},
            {"sfxId_145", false},
            {"sfxId_146", false},
            {"sfxId_147", false},
            {"sfxId_148", false},
            {"sfxId_149", false},
            {"sfxId_150", false},
            {"sfxId_151", false},
            {"sfxId_152", false},
            {"sfxId_153", false},
            {"sfxId_154", false},
            {"sfxId_155", false},
            {"sfxId_156", false},
            {"sfxId_157", false},
            {"sfxId_158", false},
            {"sfxId_159", false},
            {"sfxId_160", false},
            {"sfxId_161", false},
            {"sfxId_162", false},
            {"sfxId_163", false},
            {"sfxId_164", false},
            {"sfxId_165", false},
            {"sfxId_166", false},
            {"sfxId_167", false},
            {"sfxId_168", false},
            {"sfxId_169", false},
            {"sfxId_170", false},
            {"sfxId_171", false},
            {"sfxId_172", false},
            {"sfxId_173", false},
            {"sfxId_174", false},
            {"sfxId_175", false},
            {"sfxId_176", false},
            {"sfxId_177", false},
            {"sfxId_178", false},
            {"sfxId_179", false},
            {"sfxId_180", false},
            {"sfxId_181", false},
            {"sfxId_182", false},
            {"sfxId_183", false},
            {"sfxId_184", false},
            {"sfxId_185", false},
            {"sfxId_186", false},
            {"sfxId_187", false},
            {"sfxId_188", false},
            {"sfxId_189", false},
            {"sfxId_190", false},
            {"sfxId_191", false},
            {"sfxId_192", false},
            {"sfxId_193", false},
            {"sfxId_194", false},
            {"sfxId_195", false},
            {"sfxId_196", false},
            {"sfxId_197", false},
            {"sfxId_198", false},
            {"sfxId_199", false},
        });
        return indexer;
    };
    paramsTable["FootSfxParam"] = [tableLoader]() -> auto { return tableLoader(L"FootSfxParam"); };
}

template<> void ParamTableIndexer<FootSfxParam>::exportToCsvImpl(const std::wstring &csvPath) {
    FILE *f = _wfopen(csvPath.c_str(), L"wt");
    fwprintf(f, L"ID,sfxId_00,sfxId_01,sfxId_02,sfxId_03,sfxId_04,sfxId_05,sfxId_06,sfxId_07,sfxId_08,sfxId_09,sfxId_10,sfxId_11,sfxId_12,sfxId_13,sfxId_14");
    fwprintf(f, L",sfxId_15,sfxId_16,sfxId_17,sfxId_18,sfxId_19,sfxId_20,sfxId_21,sfxId_22,sfxId_23,sfxId_24,sfxId_25,sfxId_26,sfxId_27,sfxId_28,sfxId_29,sfxId_30");
    fwprintf(f, L",sfxId_31,sfxId_32,sfxId_33,sfxId_34,sfxId_35,sfxId_36,sfxId_37,sfxId_38,sfxId_39,sfxId_40,sfxId_41,sfxId_42,sfxId_43,sfxId_44,sfxId_45,sfxId_46");
    fwprintf(f, L",sfxId_47,sfxId_48,sfxId_49,sfxId_50,sfxId_51,sfxId_52,sfxId_53,sfxId_54,sfxId_55,sfxId_56,sfxId_57,sfxId_58,sfxId_59,sfxId_60,sfxId_61,sfxId_62");
    fwprintf(f, L",sfxId_63,sfxId_64,sfxId_65,sfxId_66,sfxId_67,sfxId_68,sfxId_69,sfxId_70,sfxId_71,sfxId_72,sfxId_73,sfxId_74,sfxId_75,sfxId_76,sfxId_77,sfxId_78");
    fwprintf(f, L",sfxId_79,sfxId_80,sfxId_81,sfxId_82,sfxId_83,sfxId_84,sfxId_85,sfxId_86,sfxId_87,sfxId_88,sfxId_89,sfxId_90,sfxId_91,sfxId_92,sfxId_93,sfxId_94");
    fwprintf(f, L",sfxId_95,sfxId_96,sfxId_97,sfxId_98,sfxId_99,sfxId_100,sfxId_101,sfxId_102,sfxId_103,sfxId_104,sfxId_105,sfxId_106,sfxId_107,sfxId_108,sfxId_109,sfxId_110");
    fwprintf(f, L",sfxId_111,sfxId_112,sfxId_113,sfxId_114,sfxId_115,sfxId_116,sfxId_117,sfxId_118,sfxId_119,sfxId_120,sfxId_121,sfxId_122,sfxId_123,sfxId_124,sfxId_125,sfxId_126");
    fwprintf(f, L",sfxId_127,sfxId_128,sfxId_129,sfxId_130,sfxId_131,sfxId_132,sfxId_133,sfxId_134,sfxId_135,sfxId_136,sfxId_137,sfxId_138,sfxId_139,sfxId_140,sfxId_141,sfxId_142");
    fwprintf(f, L",sfxId_143,sfxId_144,sfxId_145,sfxId_146,sfxId_147,sfxId_148,sfxId_149,sfxId_150,sfxId_151,sfxId_152,sfxId_153,sfxId_154,sfxId_155,sfxId_156,sfxId_157,sfxId_158");
    fwprintf(f, L",sfxId_159,sfxId_160,sfxId_161,sfxId_162,sfxId_163,sfxId_164,sfxId_165,sfxId_166,sfxId_167,sfxId_168,sfxId_169,sfxId_170,sfxId_171,sfxId_172,sfxId_173,sfxId_174");
    fwprintf(f, L",sfxId_175,sfxId_176,sfxId_177,sfxId_178,sfxId_179,sfxId_180,sfxId_181,sfxId_182,sfxId_183,sfxId_184,sfxId_185,sfxId_186,sfxId_187,sfxId_188,sfxId_189,sfxId_190");
    fwprintf(f, L",sfxId_191,sfxId_192,sfxId_193,sfxId_194,sfxId_195,sfxId_196,sfxId_197,sfxId_198,sfxId_199\n");
    auto cnt = this->count();
    for (int i = 0; i < cnt; i++) {
        auto *param = this->at(i);
        fwprintf(f, L"%llu,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u\n",
            this->paramId(i),
            param->sfxId_00,
            param->sfxId_01,
            param->sfxId_02,
            param->sfxId_03,
            param->sfxId_04,
            param->sfxId_05,
            param->sfxId_06,
            param->sfxId_07,
            param->sfxId_08,
            param->sfxId_09,
            param->sfxId_10,
            param->sfxId_11,
            param->sfxId_12,
            param->sfxId_13,
            param->sfxId_14,
            param->sfxId_15,
            param->sfxId_16,
            param->sfxId_17,
            param->sfxId_18,
            param->sfxId_19,
            param->sfxId_20,
            param->sfxId_21,
            param->sfxId_22,
            param->sfxId_23,
            param->sfxId_24,
            param->sfxId_25,
            param->sfxId_26,
            param->sfxId_27,
            param->sfxId_28,
            param->sfxId_29,
            param->sfxId_30,
            param->sfxId_31,
            param->sfxId_32,
            param->sfxId_33,
            param->sfxId_34,
            param->sfxId_35,
            param->sfxId_36,
            param->sfxId_37,
            param->sfxId_38,
            param->sfxId_39,
            param->sfxId_40,
            param->sfxId_41,
            param->sfxId_42,
            param->sfxId_43,
            param->sfxId_44,
            param->sfxId_45,
            param->sfxId_46,
            param->sfxId_47,
            param->sfxId_48,
            param->sfxId_49,
            param->sfxId_50,
            param->sfxId_51,
            param->sfxId_52,
            param->sfxId_53,
            param->sfxId_54,
            param->sfxId_55,
            param->sfxId_56,
            param->sfxId_57,
            param->sfxId_58,
            param->sfxId_59,
            param->sfxId_60,
            param->sfxId_61,
            param->sfxId_62,
            param->sfxId_63,
            param->sfxId_64,
            param->sfxId_65,
            param->sfxId_66,
            param->sfxId_67,
            param->sfxId_68,
            param->sfxId_69,
            param->sfxId_70,
            param->sfxId_71,
            param->sfxId_72,
            param->sfxId_73,
            param->sfxId_74,
            param->sfxId_75,
            param->sfxId_76,
            param->sfxId_77,
            param->sfxId_78,
            param->sfxId_79,
            param->sfxId_80,
            param->sfxId_81,
            param->sfxId_82,
            param->sfxId_83,
            param->sfxId_84,
            param->sfxId_85,
            param->sfxId_86,
            param->sfxId_87,
            param->sfxId_88,
            param->sfxId_89,
            param->sfxId_90,
            param->sfxId_91,
            param->sfxId_92,
            param->sfxId_93,
            param->sfxId_94,
            param->sfxId_95,
            param->sfxId_96,
            param->sfxId_97,
            param->sfxId_98,
            param->sfxId_99,
            param->sfxId_100,
            param->sfxId_101,
            param->sfxId_102,
            param->sfxId_103,
            param->sfxId_104,
            param->sfxId_105,
            param->sfxId_106,
            param->sfxId_107,
            param->sfxId_108,
            param->sfxId_109,
            param->sfxId_110,
            param->sfxId_111,
            param->sfxId_112,
            param->sfxId_113,
            param->sfxId_114,
            param->sfxId_115,
            param->sfxId_116,
            param->sfxId_117,
            param->sfxId_118,
            param->sfxId_119,
            param->sfxId_120,
            param->sfxId_121,
            param->sfxId_122,
            param->sfxId_123,
            param->sfxId_124,
            param->sfxId_125,
            param->sfxId_126,
            param->sfxId_127,
            param->sfxId_128,
            param->sfxId_129,
            param->sfxId_130,
            param->sfxId_131,
            param->sfxId_132,
            param->sfxId_133,
            param->sfxId_134,
            param->sfxId_135,
            param->sfxId_136,
            param->sfxId_137,
            param->sfxId_138,
            param->sfxId_139,
            param->sfxId_140,
            param->sfxId_141,
            param->sfxId_142,
            param->sfxId_143,
            param->sfxId_144,
            param->sfxId_145,
            param->sfxId_146,
            param->sfxId_147,
            param->sfxId_148,
            param->sfxId_149,
            param->sfxId_150,
            param->sfxId_151,
            param->sfxId_152,
            param->sfxId_153,
            param->sfxId_154,
            param->sfxId_155,
            param->sfxId_156,
            param->sfxId_157,
            param->sfxId_158,
            param->sfxId_159,
            param->sfxId_160,
            param->sfxId_161,
            param->sfxId_162,
            param->sfxId_163,
            param->sfxId_164,
            param->sfxId_165,
            param->sfxId_166,
            param->sfxId_167,
            param->sfxId_168,
            param->sfxId_169,
            param->sfxId_170,
            param->sfxId_171,
            param->sfxId_172,
            param->sfxId_173,
            param->sfxId_174,
            param->sfxId_175,
            param->sfxId_176,
            param->sfxId_177,
            param->sfxId_178,
            param->sfxId_179,
            param->sfxId_180,
            param->sfxId_181,
            param->sfxId_182,
            param->sfxId_183,
            param->sfxId_184,
            param->sfxId_185,
            param->sfxId_186,
            param->sfxId_187,
            param->sfxId_188,
            param->sfxId_189,
            param->sfxId_190,
            param->sfxId_191,
            param->sfxId_192,
            param->sfxId_193,
            param->sfxId_194,
            param->sfxId_195,
            param->sfxId_196,
            param->sfxId_197,
            param->sfxId_198,
            param->sfxId_199
        );
    }
    fclose(f);
}

}
