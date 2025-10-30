from lxml import etree
from pathlib import Path
import json
import re
import os


pattern_def = re.compile(r'([\w]+)[\s]+([\w]+)(:[0-9]+|\[[0-9]+\])?([\s]+=[\s]+[\S]+)?')
except_param_tables = {
    "NetworkAreaParam",
    "NetworkMsgParam",
    "NetworkParam",
    "Gconfig_AAQuality",
    "Gconfig_AAQuality_ps4",
    "Gconfig_AAQuality_xboxone",
    "Gconfig_DecalQuality",
    "Gconfig_DOFQuality",
    "Gconfig_DOFQuality_ps4",
    "Gconfig_DOFQuality_xboxone",
    "Gconfig_EffectQuality",
    "Gconfig_EffectQuality_ps4",
    "Gconfig_EffectQuality_xboxone",
    "Gconfig_LightingQuality",
    "Gconfig_LightingQuality_ps4",
    "Gconfig_LightingQuality_ps5",
    "Gconfig_LightingQuality_scarlett",
    "Gconfig_LightingQuality_xboxone",
    "Gconfig_MotionBlurQuality",
    "Gconfig_MotionBlurQuality_ps4",
    "Gconfig_MotionBlurQuality_xboxone",
    "Gconfig_RaytracingQuality",
    "Gconfig_RaytracingQuality_ps5",
    "Gconfig_RaytracingQuality_scarlett",
    "Gconfig_ReflectionQuality",
    "Gconfig_ReflectionQuality_ps4",
    "Gconfig_ReflectionQuality_xboxone",
    "Gconfig_ShaderQuality",
    "Gconfig_ShaderQuality_ps4",
    "Gconfig_ShaderQuality_xboxone",
    "Gconfig_ShadowQuality",
    "Gconfig_ShadowQuality_ps4",
    "Gconfig_ShadowQuality_xboxone",
    "Gconfig_SSAOQuality",
    "Gconfig_SSAOQuality_ps4",
    "Gconfig_SSAOQuality_xboxone",
    "Gconfig_TextureFilterQuality",
    "Gconfig_TextureFilterQuality_ps4",
    "Gconfig_TextureFilterQuality_xboxone",
    "Gconfig_VolumetricEffectQuality",
    "Gconfig_VolumetricEffectQuality_ps4",
    "Gconfig_VolumetricEffectQuality_xboxone",
    "Gconfig_WaterQuality",
    "GraphicsCommonParam",
    "GraphicsConfig",
    "LoadBalancerDrawDistScaleParam",
    "LoadBalancerDrawDistScaleParam_ps4",
    "LoadBalancerDrawDistScaleParam_ps5",
    "LoadBalancerDrawDistScaleParam_xb1",
    "LoadBalancerDrawDistScaleParam_xb1x",
    "LoadBalancerDrawDistScaleParam_xss",
    "LoadBalancerDrawDistScaleParam_xsx",
    "LoadBalancerNewDrawDistScaleParam_ps4",
    "LoadBalancerNewDrawDistScaleParam_ps5",
    "LoadBalancerNewDrawDistScaleParam_win64",
    "LoadBalancerNewDrawDistScaleParam_xb1",
    "LoadBalancerNewDrawDistScaleParam_xb1x",
    "LoadBalancerNewDrawDistScaleParam_xss",
    "LoadBalancerNewDrawDistScaleParam_xsx",
    "LoadBalancerParam",
    "WwiseValueToStrParam_BgmBossChrIdConv",
    "WwiseValueToStrParam_EnvPlaceType",
    "WwiseValueToStrParam_Switch_AttackStrength",
    "WwiseValueToStrParam_Switch_AttackType",
    "WwiseValueToStrParam_Switch_DamageAmount",
    "WwiseValueToStrParam_Switch_DeffensiveMaterial",
    "WwiseValueToStrParam_Switch_GrassHitType",
    "WwiseValueToStrParam_Switch_HitStop",
    "WwiseValueToStrParam_Switch_OffensiveMaterial",
    "WwiseValueToStrParam_Switch_PlayerEquipmentBottoms",
    "WwiseValueToStrParam_Switch_PlayerEquipmentTops",
    "WwiseValueToStrParam_Switch_PlayerShoes",
    "WwiseValueToStrParam_Switch_PlayerVoiceType",
    "SoundAssetSoundObjEnableDistParam",
    "SoundAutoEnvSoundGroupParam",
    "SoundAutoReverbEvaluationDistParam",
    "SoundAutoReverbSelectParam",
    "SoundChrPhysicsSeParam",
    "SoundCommonIngameParam",
    "SoundCommonSystemParam",
    "SoundCutsceneParam",
    "AutoCreateEnvSoundParam",
    "AiSoundParam",
}


def parse_field(s):
    m = pattern_def.match(s)
    if m is None:
        print(s)
    return m[1], m[2], m[3], m[4]


def param_type_is_str(s):
    if s == 'fixstr':
        return True
    if s == 'fixstrW':
        return True
    if s == 'dummy8':
        return True
    return False


def param_type_to_printf_format(s):
    if s == 's8':
        return '%d'
    if s == 'u8':
        return '%u'
    if s == 's16':
        return '%d'
    if s == 'u16':
        return '%u'
    if s == 's32':
        return '%d'
    if s == 'u32':
        return '%u'
    if s == 'b32':
        return '%d'
    if s == 'f32' or s == 'angle32':
        return '%g'
    if s == 'f64':
        return '%g'
    if s == 'fixstr':
        return '\\"%hs\\"'
    if s == 'fixstrW':
        return '\\"%ls\\"'
    if s == 'dummy8':
        return '\\"%hs\\"'


def param_type_to_c_type(s):
    if s == 's8':
        return 'int8_t'
    if s == 'u8':
        return 'uint8_t'
    if s == 's16':
        return 'int16_t'
    if s == 'u16':
        return 'uint16_t'
    if s == 's32':
        return 'int32_t'
    if s == 'u32':
        return 'uint32_t'
    if s == 'b32':
        return 'int'
    if s == 'f32' or s == 'angle32':
        return 'float'
    if s == 'f64':
        return 'double'
    if s == 'fixstr':
        return 'char'
    if s == 'fixstrW':
        return 'wchar_t'
    if s == 'dummy8':
        return 'char'


def param_type_to_lua_type(s):
    if s == 's8':
        return 'int8_t', 'int8_t', None
    if s == 'u8':
        return 'uint8_t', 'uint8_t', None
    if s == 's16':
        return 'int16_t', 'int16_t', None
    if s == 'u16':
        return 'uint16_t', 'uint16_t', None
    if s == 's32':
        return 'int32_t', 'int32_t', None
    if s == 'u32':
        return 'uint32_t', 'uint32_t', None
    if s == 'b32':
        return 'int', 'int', None
    if s == 'f32' or s == 'angle32':
        return 'float', 'float', None
    if s == 'f64':
        return 'double', 'double', None
    if s == 'fixstr':
        return 'const std::string&', 'std::string', 'cStrToFixedStr'
    if s == 'fixstrW':
        return 'const std::wstring&', 'std::wstring', 'cStrToFixedStrW'
    if s == 'dummy8':
        return None, None, None


pathlist = Path('ER/Defs').glob('*.xml')
typelist = []
os.makedirs('defs', exist_ok=True)
os.makedirs('bindings', exist_ok=True)
bnd = open('luabindings.cpp', 'w', encoding='utf-8')
bnd.write('#include "luabindings.h"\n')
bnd.write('\nnamespace paramadjuster::params {\n')

reverse_type_mapping = {}
with open('ER/Param Type Info.json', 'r', encoding='utf-8') as f:
    json_data = json.load(f)
    for key, value in json_data['Mapping'].items():
        if key in except_param_tables:
            continue
        list = reverse_type_mapping.get(value, None)
        if list is None:
            list = []
            reverse_type_mapping[value] = list
        list.append(key)

for path in pathlist:
    et = etree.parse(str(path))
    root = et.getroot()
    type_name = Path(path.name).stem
    hard_type_name = root.find('ParamType').text
    if hard_type_name in reverse_type_mapping:
        mapping_list = reverse_type_mapping[hard_type_name]
        reverse_type_mapping.pop(hard_type_name)
        reverse_type_mapping[type_name] = mapping_list
    else:
        continue

    et2 = etree.parse('ER/Meta/' + path.name)
    root2 = et2.getroot()
    fields2 = root2.find('Field')
    print('Generating', type_name, '...')
    is_first = True
    sfields = ''
    field_names = []

    inc = open('bindings/' + type_name + '.cpp', 'w', encoding='utf-8')
    inc.write('#include "../luabindings.h"\n')
    inc.write('#include "../defs/' + type_name + '.h"\n')
    inc.write(f'\nnamespace paramadjuster::params {{\n')
    inc.write(f'\ntemplate<> void ParamTableIndexer<{type_name}>::exportToCsvImpl(const std::wstring &csvPath);\n')
    inc.write(f'\nvoid register{type_name}(sol::state *state, sol::table &paramsTable) {{\n')
    inc.write('    auto delayInit = [state, &paramsTable]() {\n')
    inc.write(f'        if (sol::optional<sol::table> usertype = (*state)["{type_name}"]; usertype) return;\n')
    inc.write(f'        auto indexer{type_name} = state->new_usertype<ParamTableIndexer<{type_name}>>("{type_name}TableIndexer");\n')
    inc.write(f'        indexer{type_name}["count"] = sol::property(&ParamTableIndexer<{type_name}>::count);\n')
    inc.write(f'        indexer{type_name}["__index"] = &ParamTableIndexer<{type_name}>::at;\n')
    inc.write(f'        indexer{type_name}["id"] = &ParamTableIndexer<{type_name}>::paramId;\n')
    inc.write(f'        indexer{type_name}["get"] = &ParamTableIndexer<{type_name}>::get;\n')
    inc.write(f'        indexer{type_name}["exportToCsv"] = &ParamTableIndexer<{type_name}>::exportToCsv;\n')
    inc.write(f'        indexer{type_name}["importFromCsv"] = &ParamTableIndexer<{type_name}>::importFromCsv;\n')
    inc.write(f'        auto ut{type_name} = state->new_usertype<{type_name}>("{type_name}");\n')
    for elem in root.find('Fields'):
        if elem.get('RemovedVersion') != None:
            continue
        if is_first:
            is_first = False
        else:
            sfields = sfields + '\n'
        disp_name = elem.find('DisplayName')
        comment = ''
        if disp_name is not None:
            comment = '\n     * ' + disp_name.text
            desc = elem.find('Description')
            if desc is not None:
                comment = comment + '\n     *   ' + desc.text

        r = parse_field(elem.get('Def'))
        eng = fields2.find(r[1])
        if eng is not None:
            alt_name = eng.get('AltName')
            wiki = eng.get('Wiki')
            if alt_name == '':
                alt_name = None
            if wiki == '':
                wiki = None
        else:
            alt_name = None
            wiki = None
        if alt_name is not None:
            comment = comment + '\n     * ' + alt_name
        if wiki is not None:
            comment = comment + '\n     *   ' + wiki
        if r[3] is not None:
            comment = comment + '\n     * Default Value ' + r[3]
        if comment != '':
            comment = '    /' + comment[6:]
            comment = comment + ' */\n'
            sfields = sfields + comment
        tp = param_type_to_c_type(r[0])
        def_line = '    ' + tp + ' ' + r[1]
        if r[2] is not None:
            def_line = def_line + r[2]
        if r[3] is not None:
            def_line = def_line + r[3]
        else:
            def_line = def_line + ' {}';
        def_line = def_line + ';\n'
        sfields = sfields + def_line
        itp, rtp, to_func = param_type_to_lua_type(r[0])
        if itp is not None:
            field_names.append((r[1], r[0]))
            if to_func is None:
                if r[2] is None:
                    inc.write(f'        ut{type_name}["{r[1]}"] = &{type_name}::{r[1]};\n')
                else:
                    inc.write(f'        ut{type_name}["{r[1]}"] = sol::property([]({type_name} &param) -> {rtp} {{ return param.{r[1]}; }}, []({type_name} &param, {itp} value) {{ param.{r[1]} = value; }});\n')
            else:
                inc.write(f'        ut{type_name}["{r[1]}"] = sol::property([]({type_name} &param) -> {rtp} {{ return param.{r[1]}; }}, []({type_name} &param, {itp} value) {{ {to_func}(param.{r[1]}, value); }});\n')
    inc.write('    };\n')
    inc.write(f'    auto tableLoader = [delayInit = std::move(delayInit), state](const wchar_t *tableName) -> auto {{\n')
    inc.write(f'        delayInit();\n')
    inc.write(f'        auto indexer = std::make_unique<ParamTableIndexer<{type_name}>>(state, tableName);\n')
    inc.write(f'        if (!indexer->isValid()) return std::unique_ptr<ParamTableIndexer<{type_name}>>(nullptr);\n')
    inc.write(f'        indexer->setFieldNames({{\n')
    for fname, ftype in field_names:
        inc.write(f'            {{"{fname}", {str(param_type_is_str(ftype)).lower()}}},\n')
    inc.write(f'        }});\n')
    inc.write(f'        return indexer;\n')
    inc.write(f'    }};\n')
    for mapping_name in mapping_list:
        inc.write(f'    paramsTable["{mapping_name}"] = [tableLoader]() -> auto {{ return tableLoader(L"{mapping_name}"); }};\n')
    inc.write('}\n')
    inc.write(f'\ntemplate<> void ParamTableIndexer<{type_name}>::exportToCsvImpl(const std::wstring &csvPath) {{\n')
    inc.write('    FILE *f = _wfopen(csvPath.c_str(), L"wt");\n')
    inc.write(f'    fwprintf(f, L"ID')
    field_cnt = 0
    for fname, ftype in field_names:
        if field_cnt % 16 == 15:
            inc.write('");\n    fwprintf(f, L"')
        inc.write(f',{fname}')
        field_cnt += 1
    inc.write('\\n");\n')
    inc.write('    auto cnt = this->count();\n')
    inc.write('    for (int i = 0; i < cnt; i++) {\n')
    inc.write('        auto *param = this->at(i);\n')
    inc.write('        fwprintf(f, L"%llu');
    for fname, ftype in field_names:
        inc.write(f',{param_type_to_printf_format(ftype)}')
    inc.write('\\n",\n            this->paramId(i)')
    for fname, ftype in field_names:
        inc.write(f',\n            param->{fname}')
    inc.write('\n        );\n')
    inc.write('    }\n')
    inc.write('    fclose(f);\n')
    inc.write('}\n')
    inc.write('\n}\n')
    inc.close()

    slf = root2.find('Self')
    if slf is not None:
        wk = slf.get('Wiki')
        if wk is not None:
            slf = '/* ' + wk.replace('\\n', '\n * ') + ' */\n'
        else:
            slf = ''
    else:
        slf = ''
    struct_content = slf + 'struct ' + type_name + ' {\n' + sfields + '};\n'
    with open('defs/' + type_name + '.h', 'w', encoding='utf-8') as f:
        f.write('#pragma once\n\n#include <cstdint>\n\n')
        f.write(struct_content)
    typelist.append(type_name)

bnd.write('\n')
for type_name in typelist:
    bnd.write(f'extern void register{type_name}(sol::state *state, sol::table &paramsTable);\n');
bnd.write('\nvoid registerAll(sol::state *state, sol::table &paramsTable) {\n')
for type_name in typelist:
    bnd.write(f'    register{type_name}(state, paramsTable);\n')
bnd.write('}\n\n}\n')

with open('paramdefs.h', 'w', encoding='utf-8') as f:
    f.write('#pragma once\n\n')
    for type_name in typelist:
        f.write(f'#include "defs/{type_name}.h"\n')
