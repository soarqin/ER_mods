#pragma once

#include <cstdint>

struct HitEffectSeParam {
    /* 鉄製：斬撃：小
     *   鉄製：斬撃：小
     * Iron - Slash - Small
     *   Iron - Slash - Small */
    int32_t Iron_Slash_S {};

    /* 鉄製：斬撃：大
     *   鉄製：斬撃：大
     * Iron - Slash - Large
     *   Iron - Slash - Large */
    int32_t Iron_Slash_L {};

    /* 鉄製：斬撃：特大
     *   鉄製：斬撃：特大
     * Iron - Slash - Giant
     *   Iron - Slash - Oversized */
    int32_t Iron_Slash_LL {};

    /* 鉄製：刺突：小
     *   鉄製：刺突：小
     * Iron - Thrust - Small
     *   Iron - piercing - small */
    int32_t Iron_Thrust_S {};

    /* 鉄製：刺突：大
     *   鉄製：刺突：大
     * Iron - Thrust - Large
     *   Made of iron - piercing - large */
    int32_t Iron_Thrust_L {};

    /* 鉄製：刺突：特大
     *   鉄製：刺突：特大
     * Iron - Thrust - Giant
     *   Iron - piercing - oversized */
    int32_t Iron_Thrust_LL {};

    /* 鉄製：打撃：小
     *   鉄製：打撃：小
     * Iron - Strike - Small
     *   Iron - Batter - Small */
    int32_t Iron_Blow_S {};

    /* 鉄製：打撃：大
     *   鉄製：打撃：大
     * Iron - Strike - Large
     *   Iron - Batter - Large */
    int32_t Iron_Blow_L {};

    /* 鉄製：打撃：特大
     *   鉄製：打撃：特大
     * Iron - Strike - Giant
     *   Iron - Batter - Oversized */
    int32_t Iron_Blow_LL {};

    /* 炎：斬撃：小
     *   炎：斬撃：小
     * Fire - Slash - Small
     *   Flame - Slash - Small */
    int32_t Fire_Slash_S {};

    /* 炎：斬撃：大
     *   炎：斬撃：大
     * Fire - Slash - Large
     *   Flame - Slash - Large */
    int32_t Fire_Slash_L {};

    /* 炎：斬撃：特大
     *   炎：斬撃：特大
     * Fire - Slash - Giant
     *   Flame - Slash - Oversized */
    int32_t Fire_Slash_LL {};

    /* 炎：刺突：小
     *   炎：刺突：小
     * Fire - Thrust - Small
     *   Flame - Piercing - Small */
    int32_t Fire_Thrust_S {};

    /* 炎：刺突：大
     *   炎：刺突：大
     * Fire - Thrust - Large
     *   Flame - Piercing - Large */
    int32_t Fire_Thrust_L {};

    /* 炎：刺突：特大
     *   炎：刺突：特大
     * Fire - Thrust - Giant
     *   Flame - Piercing - Oversized */
    int32_t Fire_Thrust_LL {};

    /* 炎：打撃：小
     *   炎：打撃：小
     * Fire - Strike - Small
     *   Flame - Batter - Small */
    int32_t Fire_Blow_S {};

    /* 炎：打撃：大
     *   炎：打撃：大
     * Fire - Strike - Large
     *   Flame - Batter - Large */
    int32_t Fire_Blow_L {};

    /* 炎：打撃：特大
     *   炎：打撃：特大
     * Fire - Strike - Giant
     *   Flame - Batter - Oversized */
    int32_t Fire_Blow_LL {};

    /* 木製：斬撃：小
     *   木製：斬撃：小
     * Wood - Slash - Small
     *   Wooden - Slash - Small */
    int32_t Wood_Slash_S {};

    /* 木製：斬撃：大
     *   木製：斬撃：大
     * Wood - Slash - Large
     *   Wooden - Slash - Large */
    int32_t Wood_Slash_L {};

    /* 木製：斬撃：特大
     *   木製：斬撃：特大
     * Wood - Slash - Giant
     *   Wooden - Slash - Oversized */
    int32_t Wood_Slash_LL {};

    /* 木製：刺突：小
     *   木製：刺突：小
     * Wood - Thrust - Small
     *   Wooden - piercing - small */
    int32_t Wood_Thrust_S {};

    /* 木製：刺突：大
     *   木製：刺突：大
     * Wood - Thrust - Large
     *   Wooden - piercing - large */
    int32_t Wood_Thrust_L {};

    /* 木製：刺突：特大
     *   木製：刺突：特大
     * Wood - Thrust - Giant
     *   Wooden - piercing - oversized */
    int32_t Wood_Thrust_LL {};

    /* 木製：打撃：小
     *   木製：打撃：小
     * Wood - Strike - Small
     *   Wooden - Batter - Small */
    int32_t Wood_Blow_S {};

    /* 木製：打撃：大
     *   木製：打撃：大
     * Wood - Strike - Large
     *   Wooden - Batter - Large */
    int32_t Wood_Blow_L {};

    /* 木製：打撃：特大
     *   木製：打撃：特大
     * Wood - Strike - Giant
     *   Wooden - Batter - Oversized */
    int32_t Wood_Blow_LL {};

    /* 肉：斬撃：小
     *   肉：斬撃：小
     * Flesh - Slash - Small
     *   Meat - Slash - Small */
    int32_t Body_Slash_S {};

    /* 肉：斬撃：大
     *   肉：斬撃：大
     * Flesh - Slash - Large
     *   Meat - Slash - Large */
    int32_t Body_Slash_L {};

    /* 肉：斬撃：特大
     *   肉：斬撃：特大
     * Flesh - Slash - Giant
     *   Meat - Slash - Oversized */
    int32_t Body_Slash_LL {};

    /* 肉：刺突：小
     *   肉：刺突：小
     * Flesh - Thrust - Small
     *   Meat - Stab - Small */
    int32_t Body_Thrust_S {};

    /* 肉：刺突：大
     *   肉：刺突：大
     * Flesh - Thrust - Large
     *   Meat - Stab - Large */
    int32_t Body_Thrust_L {};

    /* 肉：刺突：特大
     *   肉：刺突：特大
     * Flesh - Thrust - Giant
     *   Meat - Stab - Oversized */
    int32_t Body_Thrust_LL {};

    /* 肉：打撃：小
     *   肉：打撃：小
     * Flesh - Strike - Small
     *   Meat - Batter - Small */
    int32_t Body_Blow_S {};

    /* 肉：打撃：大
     *   肉：打撃：大
     * Flesh - Strike - Large
     *   Meat - Batter - Large */
    int32_t Body_Blow_L {};

    /* 肉：打撃：特大
     *   肉：打撃：特大
     * Flesh - Strike - Giant
     *   Meat - Batter - Oversized */
    int32_t Body_Blow_LL {};

    /* 蝕：斬撃：小
     *   蝕：斬撃：小
     * Corrosion - Slash - Small
     *   Corrosion - Slash - Small */
    int32_t Eclipse_Slash_S {};

    /* 蝕：斬撃：大
     *   蝕：斬撃：大
     * Corrosion - Slash - Large
     *   Eating - Slashing - Large */
    int32_t Eclipse_Slash_L {};

    /* 蝕：斬撃：特大
     *   蝕：斬撃：特大
     * Corrosion - Slash - Giant
     *   Eating - Slashing - Oversized */
    int32_t Eclipse_Slash_LL {};

    /* 蝕：刺突：小
     *   蝕：刺突：小
     * Corrosion - Thrust - Small
     *   Corrosion - piercing - small */
    int32_t Eclipse_Thrust_S {};

    /* 蝕：刺突：大
     *   蝕：刺突：大
     * Corrosion - Thrust - Large
     *   Corrosion - Piercing - Large */
    int32_t Eclipse_Thrust_L {};

    /* 蝕：刺突：特大
     *   蝕：刺突：特大
     * Corrosion - Thrust - Giant
     *   Corrosion - piercing - oversized */
    int32_t Eclipse_Thrust_LL {};

    /* 蝕：打撃：小
     *   蝕：打撃：小
     * Corrosion - Strike - Small
     *   Corrosion - Batter - Small */
    int32_t Eclipse_Blow_S {};

    /* 蝕：打撃：大
     *   蝕：打撃：大
     * Corrosion - Strike - Large
     *   Corrosion - Batter - Large */
    int32_t Eclipse_Blow_L {};

    /* 蝕：打撃：特大
     *   蝕：打撃：特大
     * Corrosion - Strike - Giant
     *   Corrosion - Batter - Oversized */
    int32_t Eclipse_Blow_LL {};

    /* エネルギー：斬撃：小
     *   エネルギー：斬撃：小
     * Energy - Slash - Small
     *   Energy - Slash - Small */
    int32_t Energy_Slash_S {};

    /* エネルギー：斬撃：大
     *   エネルギー：斬撃：大
     * Energy - Slash - Large
     *   Energy - Slash - Large */
    int32_t Energy_Slash_L {};

    /* エネルギー：斬撃：特大
     *   エネルギー：斬撃：特大
     * Energy - Slash - Giant
     *   Energy - Slash - Oversized */
    int32_t Energy_Slash_LL {};

    /* エネルギー：刺突：小
     *   エネルギー：刺突：小
     * Energy - Thrust - Small
     *   Energy - Puncture - Small */
    int32_t Energy_Thrust_S {};

    /* エネルギー：刺突：大
     *   エネルギー：刺突：大
     * Energy - Thrust - Large
     *   Energy - Puncture - Large */
    int32_t Energy_Thrust_L {};

    /* エネルギー：刺突：特大
     *   エネルギー：刺突：特大
     * Energy - Thrust - Giant
     *   Energy - Puncture - Oversized */
    int32_t Energy_Thrust_LL {};

    /* エネルギー：打撃：小
     *   エネルギー：打撃：小
     * Energy - Strike - Small
     *   Energy - Batter - Small */
    int32_t Energy_Blow_S {};

    /* エネルギー：打撃：大
     *   エネルギー：打撃：大
     * Energy - Strike - Large
     *   Energy - Batter - Large */
    int32_t Energy_Blow_L {};

    /* エネルギー：打撃：特大
     *   エネルギー：打撃：特大
     * Energy - Strike - Giant
     *   Energy - Batter - Oversized */
    int32_t Energy_Blow_LL {};

    /* なし：斬撃：小
     *   なし：斬撃：小
     * None - Slash - Small
     *   None - Slash - Small */
    int32_t None_Slash_S {};

    /* なし：斬撃：大
     *   なし：斬撃：大
     * None - Slash - Large
     *   None - Slash - Large */
    int32_t None_Slash_L {};

    /* なし：斬撃：特大
     *   なし：斬撃：特大
     * None - Slash - Giant
     *   None - Slash - Oversized */
    int32_t None_Slash_LL {};

    /* なし：刺突：小
     *   なし：刺突：小
     * None - Thrust - Small
     *   None - Piercing - Small */
    int32_t None_Thrust_S {};

    /* なし：刺突：大
     *   なし：刺突：大
     * None - Thrust - Large
     *   None - Piercing - Large */
    int32_t None_Thrust_L {};

    /* なし：刺突：特大
     *   なし：刺突：特大
     * None - Thrust - Giant
     *   None - Piercing - Oversized */
    int32_t None_Thrust_LL {};

    /* なし：打撃：小
     *   なし：打撃：小
     * None - Strike - Small
     *   None - Batter - Small */
    int32_t None_Blow_S {};

    /* なし：打撃：大
     *   なし：打撃：大
     * None - Strike - Large
     *   None - Batter - Large */
    int32_t None_Blow_L {};

    /* なし：打撃：特大
     *   なし：打撃：特大
     * None - Strike - Giant
     *   None - Batter - Oversized */
    int32_t None_Blow_LL {};

    /* Dmy1：斬撃：小
     *   Dmy1：斬撃：小
     * Dummy 1 - Slash - Small
     *   Dmy1 - Slash - Small */
    int32_t Dmy1_Slash_S {};

    /* Dmy1：斬撃：大
     *   Dmy1：斬撃：大
     * Dummy 1 - Slash - Large
     *   Dmy1 - Slash - Large */
    int32_t Dmy1_Slash_L {};

    /* Dmy1：斬撃：特大
     *   Dmy1：斬撃：特大
     * Dummy 1 - Slash - Giant
     *   Dmy1 - Slash - Oversized */
    int32_t Dmy1_Slash_LL {};

    /* Dmy1：刺突：小
     *   Dmy1：刺突：小
     * Dummy 1 - Thrust - Small
     *   Dmy1 - Stab - Small */
    int32_t Dmy1_Thrust_S {};

    /* Dmy1：刺突：大
     *   Dmy1：刺突：大
     * Dummy 1 - Thrust - Large
     *   Dmy1 - Stab - Large */
    int32_t Dmy1_Thrust_L {};

    /* Dmy1：刺突：特大
     *   Dmy1：刺突：特大
     * Dummy 1 - Thrust - Giant
     *   Dmy1 - Stab - Oversized */
    int32_t Dmy1_Thrust_LL {};

    /* Dmy1：打撃：小
     *   Dmy1：打撃：小
     * Dummy 1 - Strike - Small
     *   Dmy1 - Batter - Small */
    int32_t Dmy1_Blow_S {};

    /* Dmy1：打撃：大
     *   Dmy1：打撃：大
     * Dummy 1 - Strike - Large
     *   Dmy1 - Batter - Large */
    int32_t Dmy1_Blow_L {};

    /* Dmy1：打撃：特大
     *   Dmy1：打撃：特大
     * Dummy 1 - Strike - Giant
     *   Dmy1 - Batter - Oversized */
    int32_t Dmy1_Blow_LL {};

    /* Dmy2：斬撃：小
     *   Dmy2：斬撃：小
     * Dummy 2 - Slash - Small
     *   Dmy2 - Slash - Small */
    int32_t Dmy2_Slash_S {};

    /* Dmy2：斬撃：大
     *   Dmy2：斬撃：大
     * Dummy 2 - Slash - Large
     *   Dmy2 - Slash - Large */
    int32_t Dmy2_Slash_L {};

    /* Dmy2：斬撃：特大
     *   Dmy2：斬撃：特大
     * Dummy 2 - Slash - Giant
     *   Dmy2 - Slash - Oversized */
    int32_t Dmy2_Slash_LL {};

    /* Dmy2：刺突：小
     *   Dmy2：刺突：小
     * Dummy 2 - Thrust - Small
     *   Dmy2 - Piercing - Small */
    int32_t Dmy2_Thrust_S {};

    /* Dmy2：刺突：大
     *   Dmy2：刺突：大
     * Dummy 2 - Thrust - Large
     *   Dmy2 - Piercing - Large */
    int32_t Dmy2_Thrust_L {};

    /* Dmy2：刺突：特大
     *   Dmy2：刺突：特大
     * Dummy 2 - Thrust - Giant
     *   Dmy2 - Piercing - Oversized */
    int32_t Dmy2_Thrust_LL {};

    /* Dmy2：打撃：小
     *   Dmy2：打撃：小
     * Dummy 2 - Strike - Small
     *   Dmy2 - Batter - Small */
    int32_t Dmy2_Blow_S {};

    /* Dmy2：打撃：大
     *   Dmy2：打撃：大
     * Dummy 2 - Strike - Large
     *   Dmy2 - Batter - Large */
    int32_t Dmy2_Blow_L {};

    /* Dmy2：打撃：特大
     *   Dmy2：打撃：特大
     * Dummy 2 - Strike - Giant
     *   Dmy2 - Batter - Oversized */
    int32_t Dmy2_Blow_LL {};

    /* Dmy3：斬撃：小
     *   Dmy3：斬撃：小
     * Dummy 3 - Slash - Small
     *   Dmy3 - Slash - Small */
    int32_t Dmy3_Slash_S {};

    /* Dmy3：斬撃：大
     *   Dmy3：斬撃：大
     * Dummy 3 - Slash - Large
     *   Dmy3 - Slash - Large */
    int32_t Dmy3_Slash_L {};

    /* Dmy3：斬撃：特大
     *   Dmy3：斬撃：特大
     * Dummy 3 - Slash - Giant
     *   Dmy3 - Slash - Oversized */
    int32_t Dmy3_Slash_LL {};

    /* Dmy3：刺突：小
     *   Dmy3：刺突：小
     * Dummy 3 - Thrust - Small
     *   Dmy3 - Piercing - Small */
    int32_t Dmy3_Thrust_S {};

    /* Dmy3：刺突：大
     *   Dmy3：刺突：大
     * Dummy 3 - Thrust - Large
     *   Dmy3 - Piercing - Large */
    int32_t Dmy3_Thrust_L {};

    /* Dmy3：刺突：特大
     *   Dmy3：刺突：特大
     * Dummy 3 - Thrust - Giant
     *   Dmy3 - Piercing - Oversized */
    int32_t Dmy3_Thrust_LL {};

    /* Dmy3：打撃：小
     *   Dmy3：打撃：小
     * Dummy 3 - Strike - Small
     *   Dmy3 - Batter - Small */
    int32_t Dmy3_Blow_S {};

    /* Dmy3：打撃：大
     *   Dmy3：打撃：大
     * Dummy 3 - Strike - Large
     *   Dmy3 - Batter - Large */
    int32_t Dmy3_Blow_L {};

    /* Dmy3：打撃：特大
     *   Dmy3：打撃：特大
     * Dummy 3 - Strike - Giant
     *   Dmy3 - Batter - Oversized */
    int32_t Dmy3_Blow_LL {};

    /* うじ：斬撃：小
     *   うじ：斬撃：小
     * Maggot - Slash - Small
     *   Uji - Slash - Small */
    int32_t Maggot_Slash_S {};

    /* うじ：斬撃：大
     *   うじ：斬撃：大
     * Maggot - Slash - Large
     *   Uji - Slash - Large */
    int32_t Maggot_Slash_L {};

    /* うじ：斬撃：特大
     *   うじ：斬撃：特大
     * Maggot - Slash - Giant
     *   Uji - Slash - Oversized */
    int32_t Maggot_Slash_LL {};

    /* うじ：刺突：小
     *   うじ：刺突：小
     * Maggot - Thrust - Small
     *   Uji - Stab - Small */
    int32_t Maggot_Thrust_S {};

    /* うじ：刺突：大
     *   うじ：刺突：大
     * Maggot - Thrust - Large
     *   Uji - Stab - Large */
    int32_t Maggot_Thrust_L {};

    /* うじ：刺突：特大
     *   うじ：刺突：特大
     * Maggot - Thrust - Giant
     *   Uji - Stab - Oversized */
    int32_t Maggot_Thrust_LL {};

    /* うじ：打撃：小
     *   うじ：打撃：小
     * Maggot - Strike - Small
     *   Uji - Batter - Small */
    int32_t Maggot_Blow_S {};

    /* うじ：打撃：大
     *   うじ：打撃：大
     * Maggot - Strike - Large
     *   Uji - Batter - Large */
    int32_t Maggot_Blow_L {};

    /* うじ：打撃：特大
     *   うじ：打撃：特大
     * Maggot - Strike - Giant
     *   Uji - Batter - Oversized */
    int32_t Maggot_Blow_LL {};

    /* 蝋：斬撃：小
     *   蝋：斬撃：小
     * Wax - Slash - Small
     *   Wax - Slash - Small */
    int32_t Wax_Slash_S {};

    /* 蝋：斬撃：大
     *   蝋：斬撃：大
     * Wax - Slash - Large
     *   Wax - Slash - Large */
    int32_t Wax_Slash_L {};

    /* 蝋：斬撃：特大
     *   蝋：斬撃：特大
     * Wax - Slash - Giant
     *   Wax - Slash - Oversized */
    int32_t Wax_Slash_LL {};

    /* 蝋：刺突：小
     *   蝋：刺突：小
     * Wax - Thrust - Small
     *   Wax - piercing - small */
    int32_t Wax_Thrust_S {};

    /* 蝋：刺突：大
     *   蝋：刺突：大
     * Wax - Thrust - Large
     *   Wax - piercing - large */
    int32_t Wax_Thrust_L {};

    /* 蝋：刺突：特大
     *   蝋：刺突：特大
     * Wax - Thrust - Giant
     *   Wax - piercing - oversized */
    int32_t Wax_Thrust_LL {};

    /* 蝋：打撃：小
     *   蝋：打撃：小
     * Wax - Strike - Small
     *   Wax - Batter - Small */
    int32_t Wax_Blow_S {};

    /* 蝋：打撃：大
     *   蝋：打撃：大
     * Wax - Strike - Large
     *   Wax - Batter - Large */
    int32_t Wax_Blow_L {};

    /* 蝋：打撃：特大
     *   蝋：打撃：特大
     * Wax - Strike - Giant
     *   Wax - Batter - Oversized */
    int32_t Wax_Blow_LL {};

    /* 炎上：斬撃：小
     *   炎上：斬撃：小
     * Burning - Slash - Small
     *   Burning - Slashing - Small */
    int32_t FireFlame_Slash_S {};

    /* 炎上：斬撃：大
     *   炎上：斬撃：大
     * Burning - Slash - Large
     *   Burning - Slashing - Large */
    int32_t FireFlame_Slash_L {};

    /* 炎上：斬撃：特大
     *   炎上：斬撃：特大
     * Burning - Slash - Giant
     *   Burning - Slashing - Oversized */
    int32_t FireFlame_Slash_LL {};

    /* 炎上：刺突：小
     *   炎上：刺突：小
     * Burning - Thrust - Small
     *   Burning - Piercing - Small */
    int32_t FireFlame_Thrust_S {};

    /* 炎上：刺突：大
     *   炎上：刺突：大
     * Burning - Thrust - Large
     *   Burning - Piercing - Large */
    int32_t FireFlame_Thrust_L {};

    /* 炎上：刺突：特大
     *   炎上：刺突：特大
     * Burning - Thrust - Giant
     *   Burning - Piercing - Oversized */
    int32_t FireFlame_Thrust_LL {};

    /* 炎上：打撃：小
     *   炎上：打撃：小
     * Burning - Strike - Small
     *   On fire - Batter - Small */
    int32_t FireFlame_Blow_S {};

    /* 炎上：打撃：大
     *   炎上：打撃：大
     * Burning - Strike - Large
     *   On fire - Batter - Large */
    int32_t FireFlame_Blow_L {};

    /* 炎上：打撃：特大
     *   炎上：打撃：特大
     * Burning - Strike - Giant
     *   On fire - Batter - Oversized */
    int32_t FireFlame_Blow_LL {};

    /* 蝕：気体：斬撃：小
     *   蝕：気体：斬撃：小
     * Corrosion Gas - Slash - Small
     *   Corrosion - Gas - Slash - Small */
    int32_t EclipseGas_Slash_S {};

    /* 蝕：気体：斬撃：大
     *   蝕：気体：斬撃：大
     * Corrosion Gas - Slash - Large
     *   Corrosion - Gas - Slash - Large */
    int32_t EclipseGas_Slash_L {};

    /* 蝕：気体：斬撃：特大
     *   蝕：気体：斬撃：特大
     * Corrosion Gas - Slash - Giant
     *   Corrosion - Gas - Slash - Oversized */
    int32_t EclipseGas_Slash_LL {};

    /* 蝕：気体：刺突：小
     *   蝕：気体：刺突：小
     * Corrosion Gas - Thrust - Small
     *   Corrosion - Gas - Piercing - Small */
    int32_t EclipseGas_Thrust_S {};

    /* 蝕：気体：刺突：大
     *   蝕：気体：刺突：大
     * Corrosion Gas - Thrust - Large
     *   Corrosion - Gas - Piercing - Large */
    int32_t EclipseGas_Thrust_L {};

    /* 蝕：気体：刺突：特大
     *   蝕：気体：刺突：特大
     * Corrosion Gas - Thrust - Giant
     *   Corrosion - Gas - Piercing - Oversized */
    int32_t EclipseGas_Thrust_LL {};

    /* 蝕：気体：打撃：小
     *   蝕：気体：打撃：小
     * Corrosion Gas - Strike - Small
     *   Corrosion - Gas - Batter - Small */
    int32_t EclipseGas_Blow_S {};

    /* 蝕：気体：打撃：大
     *   蝕：気体：打撃：大
     * Corrosion Gas - Strike - Large
     *   Corrosion - Gas - Batter - Large */
    int32_t EclipseGas_Blow_L {};

    /* 蝕：気体：打撃：特大
     *   蝕：気体：打撃：特大
     * Corrosion Gas - Strike - Giant
     *   Corrosion - Gas - Batter - Oversized */
    int32_t EclipseGas_Blow_LL {};

    /* エネルギー（強）：斬撃：小
     *   エネルギー（強）：斬撃：小
     * Strong Energy - Slash - Small
     *   Energy (strong) - Slash - Small */
    int32_t EnergyStrong_Slash_S {};

    /* エネルギー（強）：斬撃：大
     *   エネルギー（強）：斬撃：大
     * Strong Energy - Slash - Large
     *   Energy (strong) - Slash - Large */
    int32_t EnergyStrong_Slash_L {};

    /* エネルギー（強）：斬撃：特大
     *   エネルギー（強）：斬撃：特大
     * Strong Energy - Slash - Giant
     *   Energy (strong) - Slash - Oversized */
    int32_t EnergyStrong_Slash_LL {};

    /* エネルギー（強）：刺突：小
     *   エネルギー（強）：刺突：小
     * Strong Energy - Thrust - Small
     *   Energy (strong) - piercing - small */
    int32_t EnergyStrong_Thrust_S {};

    /* エネルギー（強）：刺突：大
     *   エネルギー（強）：刺突：大
     * Strong Energy - Thrust - Large
     *   Energy (strong) - piercing - large */
    int32_t EnergyStrong_Thrust_L {};

    /* エネルギー（強）：刺突：特大
     *   エネルギー（強）：刺突：特大
     * Strong Energy - Thrust - Giant
     *   Energy (strong) - piercing - oversized */
    int32_t EnergyStrong_Thrust_LL {};

    /* エネルギー（強）：打撃：小
     *   エネルギー（強）：打撃：小
     * Strong Energy - Strike - Small
     *   Energy (strong) - Batter - Small */
    int32_t EnergyStrong_Blow_S {};

    /* エネルギー（強）：打撃：大
     *   エネルギー（強）：打撃：大
     * Strong Energy - Strike - Large
     *   Energy (strong) - Batter - Large */
    int32_t EnergyStrong_Blow_L {};

    /* エネルギー（強）：打撃：特大
     *   エネルギー（強）：打撃：特大
     * Strong Energy - Strike - Giant
     *   Energy (strong) - Batter - Oversized */
    int32_t EnergyStrong_Blow_LL {};

    /* 予約領域
     *   予約領域 */
    char reserve[100] {};
};
