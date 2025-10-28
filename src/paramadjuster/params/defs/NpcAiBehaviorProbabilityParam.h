#pragma once

#include <cstdint>

struct NpcAiBehaviorProbabilityParam {
    /* 右手近接_R1コンボ
     *   右手近接行動
     * Right-hand - R1 Combo
     *   Right-handed proximity behavior */
    int16_t param000 {};

    /* 右手近接_R2コンボ
     *   右手近接行動
     * Right-hand - R2 Combo
     *   Right-handed proximity behavior */
    int16_t param001 {};

    /* 右手近接_ダッシュ攻撃
     *   右手近接行動
     * Right-hand - Dash Attack
     *   Right-handed proximity behavior */
    int16_t param002 {};

    /* 右手近接_前ローリング攻撃
     *   右手近接行動
     * Right-hand - Forward Roll Attack
     *   Right-handed proximity behavior */
    int16_t param003 {};

    /* 右手近接_左右ローリング攻撃
     *   右手近接行動
     * Right-hand - Side Roll Attack
     *   Right-handed proximity behavior */
    int16_t param004 {};

    /* 右手近接_後ローリング攻撃
     *   右手近接行動
     * Right-hand - Backward Roll Attack
     *   Right-handed proximity behavior */
    int16_t param005 {};

    /* 右手近接_バックステップ攻撃
     *   右手近接行動
     * Right-hand - Backstep Attack
     *   Right-handed proximity behavior */
    int16_t param006 {};

    /* 右手近接_ジャンプ攻撃
     *   右手近接行動
     * Right-hand - Jump Attack
     *   Right-handed proximity behavior */
    int16_t param007 {};

    /* 右手近接_ダッシュジャンプ攻撃
     *   右手近接行動
     * Right-hand - Dash Jump Attack
     *   Right-handed proximity behavior */
    int16_t param008 {};

    /* 未使用
     * Unused */
    int16_t param009 {};

    /* 右手遠距離_R1射撃
     *   右手遠距離武器行動
     * Right-hand - R1 Shoot (Bow)
     *   Right-handed long-range weapon action */
    int16_t param010 {};

    /* 右手遠距離_R2射撃
     *   右手遠距離武器行動
     * Right-hand - R2 Shoot (Bow)
     *   Right-handed long-range weapon action */
    int16_t param011 {};

    /* 未使用
     * Unused */
    int16_t param012 {};

    /* 右手魔法_遠距離魔法_前移動
     *   右手魔法行動
     * Right-hand - Forward Move (Magic)
     *   Right hand magic action */
    int16_t param013 {};

    /* 右手魔法_遠距離魔法_後ろ移動
     *   右手魔法行動
     * Right-hand - Backward Move (Magic)
     *   Right hand magic action */
    int16_t param014 {};

    /* 左右移動[CloseDrawBow]
     *   弓構え中に近づかれたインタラプト
     * Right-hand - Side Move (Bow)
     *   Interrupt approached while holding a bow */
    int16_t param015 {};

    /* 左右ローリング[CloseDrawBow]
     *   弓構え中に近づかれたインタラプト
     * Right-hand - Side Roll (Bow)
     *   Interrupt approached while holding a bow */
    int16_t param016 {};

    /* 割り込まない[CloseDrawBow]
     *   弓構え中に近づかれたインタラプト
     * Right-hand - No Interrupt (Bow)
     *   Interrupt approached while holding a bow */
    int16_t param017 {};

    /* 未使用
     * Unused */
    int16_t param018 {};

    /* 未使用
     * Unused */
    int16_t param019 {};

    /* 右手魔法_近接魔法_左右
     *   右手魔法行動
     * Right-hand - Side Move (Melee Magic)
     *   Right hand magic action */
    int16_t param020 {};

    /* 右手魔法_中距離魔法_左右
     *   右手魔法行動
     * Right-hand - Side Move (Medium Magic)
     *   Right hand magic action */
    int16_t param021 {};

    /* 右手魔法_遠距離魔法_左右
     *   右手魔法行動
     * Right-hand - Side Move (Long Magic)
     *   Right hand magic action */
    int16_t param022 {};

    /* 右手魔法_HP回復魔法
     *   右手魔法行動
     * Right-hand - HP Recovery (Magic)
     *   Right hand magic action */
    int16_t param023 {};

    /* 右手魔法_バフ魔法
     *   右手魔法行動
     * Right-hand - Buff (Magic)
     *   Right hand magic action */
    int16_t param024 {};

    /* 右手魔法_近接魔法_前移動
     *   右手魔法行動
     * Right-hand - Forward Move (Melee Magic)
     *   Right hand magic action */
    int16_t param025 {};

    /* 右手魔法_近接魔法_後ろ移動
     *   右手魔法行動
     * Right-hand - Backward Move (Melee Magic)
     *   Right hand magic action */
    int16_t param026 {};

    /* 右手魔法_中距離魔法_前移動
     *   右手魔法行動
     * Right-hand - Forward Move (Medium Magic)
     *   Right hand magic action */
    int16_t param027 {};

    /* 右手魔法_中距離魔法_後ろ移動
     *   右手魔法行動
     * Right-hand - Backward Move (Medium Magic)
     *   Right hand magic action */
    int16_t param028 {};

    /* 未使用
     * Unused */
    int16_t param029 {};

    /* 右手盾_R1攻撃
     *   右手盾行動
     * Right-hand - R1 Attack (Shield)
     *   Right hand shield action */
    int16_t param030 {};

    /* 右手盾_R2攻撃
     *   右手盾行動
     * Right-hand - R2 Attack (Shield)
     *   Right hand shield action */
    int16_t param031 {};

    /* 未使用
     * Unused */
    int16_t param032 {};

    /* 未使用
     * Unused */
    int16_t param033 {};

    /* 未使用
     * Unused */
    int16_t param034 {};

    /* バックステップ[SuccessGuard]
     *   ガード成功インタラプト
     * Right-hand - Backstep (Guard Succcess)
     *   Guard success interrupt */
    int16_t param035 {};

    /* 割り込まない[SuccessGuard]
     *   ガード成功インタラプト
     * Right-hand - No Interrupt (Guard Succcess)
     *   Guard success interrupt */
    int16_t param036 {};

    /* ガードカウンター攻撃[SuccessGuard]
     *   ガード成功インタラプト
     * Right-hand - Guard Counter (Guard Succcess)
     *   Guard success interrupt */
    int16_t param037 {};

    /* 未使用
     * Unused */
    int16_t param038 {};

    /* 未使用
     * Unused */
    int16_t param039 {};

    /* 左手近接_R1コンボ(両手持ちのみ)
     *   左手近接行動
     * Left-hand - R1 Combo (2H Only)
     *   Left hand proximity behavior */
    int16_t param040 {};

    /* 左手近接_R2コンボ(両手持ちのみ)
     *   左手近接行動
     * Left-hand - R2 Combo (2H Only)
     *   Left hand proximity behavior */
    int16_t param041 {};

    /* 左手近接_L1コンボ(片手持ちのみ)
     *   左手近接行動
     * Left-hand - L1 Combo (1H Only)
     *   Left hand proximity behavior */
    int16_t param042 {};

    /* 左手近接_ダッシュ攻撃(両手持ちのみ)
     *   左手近接行動
     * Left-hand - Dash Attack (2H Only)
     *   Left hand proximity behavior */
    int16_t param043 {};

    /* 左手近接_前ローリング攻撃(両手持ちのみ)
     *   左手近接行動
     * Left-hand - Forward Roll (2H Only)
     *   Left hand proximity behavior */
    int16_t param044 {};

    /* 左手近接_左右ローリング攻撃(両手持ちのみ)
     *   左手近接行動
     * Left-hand - Side Roll (2H Only)
     *   Left hand proximity behavior */
    int16_t param045 {};

    /* 左手近接_後ローリング攻撃(両手持ちのみ)
     *   左手近接行動
     * Left-hand - Backward Roll (2H Only)
     *   Left hand proximity behavior */
    int16_t param046 {};

    /* 左手近接_バックステップ攻撃(両手持ちのみ)
     *   左手近接行動
     * Left-hand - Backstep Attack (2H Only)
     *   Left hand proximity behavior */
    int16_t param047 {};

    /* 左手近接_ジャンプ攻撃(両手持ちのみ)
     *   左手近接行動
     * Left-hand - Jump Attack (2H Only)
     *   Left hand proximity behavior */
    int16_t param048 {};

    /* 左手近接_ダッシュジャンプ攻撃(両手持ちのみ)
     *   左手近接行動
     * Left-hand - Dash Jump Attack (2H Only)
     *   Left hand proximity behavior */
    int16_t param049 {};

    /* 左手遠距離_R1射撃
     *   左手遠距離武器行動
     * Left-hand - R1 Shoot (Bow)
     *   Left-handed long-range weapon action */
    int16_t param050 {};

    /* 左手遠距離_R2射撃
     *   左手遠距離武器行動
     * Left-hand - R2 Shoot (Bow)
     *   Left-handed long-range weapon action */
    int16_t param051 {};

    /* 未使用
     * Unused */
    int16_t param052 {};

    /* 左手魔法_遠距離魔法_前移動
     *   左手魔法行動
     * Left-hand - Forward Move (Long Magic)
     *   Left hand magic action */
    int16_t param053 {};

    /* 左手魔法_遠距離魔法_後ろ移動
     *   左手魔法行動
     * Left-hand - Backward Move (Long Magic)
     *   Left hand magic action */
    int16_t param054 {};

    /* 致命攻撃[SuccessParry]
     *   パリィ成功インタラプト
     * Left-hand - Parry Attack (Parry Success)
     *   Parry Success Interrupt */
    int16_t param055 {};

    /* 割り込まない[SuccessParry]
     *   パリィ成功インタラプト
     * Left-hand - No Interrupt (Parry Success)
     *   Parry Success Interrupt */
    int16_t param056 {};

    /* 未使用
     * Unused */
    int16_t param057 {};

    /* 未使用
     * Unused */
    int16_t param058 {};

    /* 未使用
     * Unused */
    int16_t param059 {};

    /* 左手魔法_近接魔法_左右
     *   左手魔法行動
     * Left-hand - Side Move (Melee Magic)
     *   Left hand magic action */
    int16_t param060 {};

    /* 左手魔法_中距離魔法_左右
     *   左手魔法行動
     * Left-hand - Side Move (Medium Magic)
     *   Left hand magic action */
    int16_t param061 {};

    /* 左手魔法_遠距離魔法_左右
     *   左手魔法行動
     * Left-hand - Side Move (Long Magic)
     *   Left hand magic action */
    int16_t param062 {};

    /* 左手魔法_HP回復魔法
     *   左手魔法行動
     * Left-hand - HP Recovery (Magic)
     *   Left hand magic action */
    int16_t param063 {};

    /* 左手魔法_バフ魔法
     *   左手魔法行動
     * Left-hand - Buff (Magic)
     *   Left hand magic action */
    int16_t param064 {};

    /* 左手魔法_近接魔法_前移動
     *   左手魔法行動
     * Left-hand - Forward Move (Melee Magic)
     *   Left hand magic action */
    int16_t param065 {};

    /* 左手魔法_近接魔法_後ろ移動
     *   左手魔法行動
     * Left-hand - Backward Move (Melee Magic)
     *   Left hand magic action */
    int16_t param066 {};

    /* 左手魔法_中距離魔法_前移動
     *   左手魔法行動
     * Left-hand - Forward Move (Medium Magic)
     *   Left hand magic action */
    int16_t param067 {};

    /* 左手魔法_中距離魔法_後ろ移動
     *   左手魔法行動
     * Left-hand - Backward Move (Medium Magic)
     *   Left hand magic action */
    int16_t param068 {};

    /* 未使用
     * Unused */
    int16_t param069 {};

    /* バックステップ
     *   共通行動
     * Backstep
     *   Common behavior */
    int16_t param070 {};

    /* 前ローリング
     *   共通行動
     * Forward Roll
     *   Common behavior */
    int16_t param071 {};

    /* 左右ローリング
     *   共通行動
     * Side Roll
     *   Common behavior */
    int16_t param072 {};

    /* 後ろローリング
     *   共通行動
     * Backward Roll
     *   Common behavior */
    int16_t param073 {};

    /* 左右移動
     *   共通行動
     * Side Move
     *   Common behavior */
    int16_t param074 {};

    /* 後退
     *   共通行動
     * Common - Back
     *   Common behavior */
    int16_t param075 {};

    /* ダッシュ接近
     *   共通行動
     * Common - Backstep
     *   Common behavior */
    int16_t param076 {};

    /* 待機
     *   共通行動
     * Common - Standby
     *   Common behavior */
    int16_t param077 {};

    /* 右手両手持ちに持ち替え
     *   共通行動
     * Common - 2H Right Switch
     *   Common behavior */
    int16_t param078 {};

    /* 左手両手持ちに持ち替え
     *   共通行動
     * Common - 2H Left Switch
     *   Common behavior */
    int16_t param079 {};

    /* 片手持ちに持ち替え
     *   共通行動
     * Common - 1H Switch
     *   Common behavior */
    int16_t param080 {};

    /* 戦闘距離までアプローチ
     *   共通行動
     * Common - Approach Battle Distance
     *   Common behavior */
    int16_t param081 {};

    /* 未使用
     * Unused */
    int16_t param082 {};

    /* 未使用
     * Unused */
    int16_t param083 {};

    /* 未使用
     * Unused */
    int16_t param084 {};

    /* 致命攻撃[GuardBreak]
     *   ガードブレイクインタラプト
     * Guard Break - Deadly Attack
     *   Guard break interrupt */
    int16_t param085 {};

    /* ダッシュ攻撃[GuardBreak]
     *   ガードブレイクインタラプト
     * Guard Break - Dash Attack
     *   Guard break interrupt */
    int16_t param086 {};

    /* 魔法_近接魔法[GuardBreak]
     *   ガードブレイクインタラプト
     * Guard Break - Melee Magic
     *   Guard break interrupt */
    int16_t param087 {};

    /* 割り込まない[GuardBreak]
     *   ガードブレイクインタラプト
     * Guard Break - No Interrupt
     *   Guard break interrupt */
    int16_t param088 {};

    /* 未使用
     * Unused */
    int16_t param089 {};

    /* 盾チク
     *   特殊行動
     * Special - Shield Bash
     *   Special behavior */
    int16_t param090 {};

    /* 未使用
     * Unused */
    int16_t param091 {};

    /* 未使用
     * Unused */
    int16_t param092 {};

    /* 未使用
     * Unused */
    int16_t param093 {};

    /* 未使用
     * Unused */
    int16_t param094 {};

    /* ダッシュ攻撃[Estus]
     *   エストを飲んだインタラプト
     * Flask Interrupt - Dash Attack
     *   Interrupt who drank Est */
    int16_t param095 {};

    /* 投擲アイテム[Estus]
     *   エストを飲んだインタラプト
     * Flask Interrupt - Throwable Item
     *   Interrupt who drank Est */
    int16_t param096 {};

    /* 割り込まない[Estus]
     *   エストを飲んだインタラプト
     * Flask Interrupt - No Interrupt
     *   Interrupt who drank Est */
    int16_t param097 {};

    /* 未使用
     * Unused */
    int16_t param098 {};

    /* 未使用
     * Unused */
    int16_t param099 {};

    /* パリィ[Parrytime]
     *   パリィタイミングインタラプト
     * Parry Interrupt - Parry
     *   Parry Timing Interrupt */
    int16_t param100 {};

    /* 前ローリング[Parrytime]
     *   パリィタイミングインタラプト
     * Parry Interrupt - Forward Roll
     *   Parry Timing Interrupt */
    int16_t param101 {};

    /* 左右ローリング[Parrytime]
     *   パリィタイミングインタラプト
     * Parry Interrupt - Side Roll
     *   Parry Timing Interrupt */
    int16_t param102 {};

    /* 後ろローリング[Parrytime]
     *   パリィタイミングインタラプト
     * Parry Interrupt - Backward Roll
     *   Parry Timing Interrupt */
    int16_t param103 {};

    /* バックステップ攻撃[Parrytime]
     *   パリィタイミングインタラプト
     * Parry Interrupt - Backstep Attack
     *   Parry Timing Interrupt */
    int16_t param104 {};

    /* その場ガード[Parrytime]
     *   パリィタイミングインタラプト
     * Parry Interrupt - Stationary Guard
     *   Parry Timing Interrupt */
    int16_t param105 {};

    /* 割り込まない[Parrytime]
     *   パリィタイミングインタラプト
     * Parry Interrupt - No Interrupt
     *   Parry Timing Interrupt */
    int16_t param106 {};

    /* 未使用
     * Unused */
    int16_t param107 {};

    /* 未使用
     * Unused */
    int16_t param108 {};

    /* 未使用
     * Unused */
    int16_t param109 {};

    /* 後ろローリング[Damaged]
     *   被ダメージインタラプト
     * Damaged Interrupt - Backward Roll
     *   Damaged interrupt */
    int16_t param110 {};

    /* 左右ローリング[Damaged]
     *   被ダメージインタラプト
     * Damaged Interrupt - Side Roll
     *   Damaged interrupt */
    int16_t param111 {};

    /* 後ろガード移動[Damaged]
     *   被ダメージインタラプト
     * Damaged Interrupt - Backward Guard Move
     *   Damaged interrupt */
    int16_t param112 {};

    /* 左右ガード移動[Damaged]
     *   被ダメージインタラプト
     * Damaged Interrupt - Side Move
     *   Damaged interrupt */
    int16_t param113 {};

    /* 割り込まない[Damaged]
     *   被ダメージインタラプト
     * Damaged Interrupt - No Interrupt
     *   Damaged interrupt */
    int16_t param114 {};

    /* R1コンボ[Damaged]
     *   被ダメージインタラプト
     * Damaged Interrupt - R1 Combo
     *   Damaged interrupt */
    int16_t param115 {};

    /* 前ローリング[Damaged]
     *   被ダメージインタラプト
     * Damaged Interrupt - Forward Roll
     *   Damaged interrupt */
    int16_t param116 {};

    /* バックステップ[Damaged]
     *   被ダメージインタラプト
     * Damaged Interrupt - Backstep
     *   Damaged interrupt */
    int16_t param117 {};

    /* 前ガード移動[Damaged]
     *   被ダメージインタラプト
     * Damaged Interrupt - Forward Guard Move
     *   Damaged interrupt */
    int16_t param118 {};

    /* 未使用
     * Unused */
    int16_t param119 {};

    /* 前ローリング[Shoot]
     *   飛び道具発見インタラプト
     * Bullet Interrupt - Forward Roll
     *   Projectile discovery interrupt */
    int16_t param120 {};

    /* 左右ローリング[Shoot]
     *   飛び道具発見インタラプト
     * Bullet Interrupt - Side Roll
     *   Projectile discovery interrupt */
    int16_t param121 {};

    /* 前ガード移動[Shoot]
     *   飛び道具発見インタラプト
     * Bullet Interrupt - Forward Guard Move
     *   Projectile discovery interrupt */
    int16_t param122 {};

    /* 左右ガード移動[Shoot]
     *   飛び道具発見インタラプト
     * Bullet Interrupt - Side Move
     *   Projectile discovery interrupt */
    int16_t param123 {};

    /* 割り込まない[Shoot]
     *   飛び道具発見インタラプト
     * Bullet Interrupt - No Interrupt
     *   Projectile discovery interrupt */
    int16_t param124 {};

    /* 後ローリング[Shoot]
     *   飛び道具発見インタラプト
     * Bullet Interrupt - After Roll
     *   Projectile discovery interrupt */
    int16_t param125 {};

    /* ダッシュ接近[Shoot]
     *   飛び道具発見インタラプト
     * Bullet Interrupt - Dash Approach
     *   Projectile discovery interrupt */
    int16_t param126 {};

    /* 未使用
     * Unused */
    int16_t param127 {};

    /* 未使用
     * Unused */
    int16_t param128 {};

    /* 未使用
     * Unused */
    int16_t param129 {};

    /* バックステップ[FindAttack]
     *   攻撃発見インタラプト
     * Attack Interrupt - Backstep
     *   Attack detection interrupt */
    int16_t param130 {};

    /* 前ローリング[FindAttack]
     *   攻撃発見インタラプト
     * Attack Interrupt - Forward Roll
     *   Attack detection interrupt */
    int16_t param131 {};

    /* 左右ローリング[FindAttack]
     *   攻撃発見インタラプト
     * Attack Interrupt - Side Roll
     *   Attack detection interrupt */
    int16_t param132 {};

    /* 後ローリング[FindAttack]
     *   攻撃発見インタラプト
     * Attack Interrupt - After Roll
     *   Attack detection interrupt */
    int16_t param133 {};

    /* 前ガード移動[FindAttack]
     *   攻撃発見インタラプト
     * Attack Interrupt - Forward Guard Move
     *   Attack detection interrupt */
    int16_t param134 {};

    /* 左右ガード移動[FindAttack]
     *   攻撃発見インタラプト
     * Attack Interrupt - Side Guard Move
     *   Attack detection interrupt */
    int16_t param135 {};

    /* その場ガード[FindAttack]
     *   攻撃発見インタラプト
     * Attack Interrupt - Stationary Guard
     *   Attack detection interrupt */
    int16_t param136 {};

    /* 盾チク[FindAttack]
     *   攻撃発見インタラプト
     * Attack Interrupt - Shield Bash
     *   Attack detection interrupt */
    int16_t param137 {};

    /* 割り込まない[FindAttack]
     *   攻撃発見インタラプト
     * Attack Interrupt - No Interrupt
     *   Attack detection interrupt */
    int16_t param138 {};

    /* その場回避アーツ[FindAttack]
     *   攻撃発見インタラプト
     * Attack Interrupt - Avoidance Weapon Art
     *   Attack detection interrupt */
    int16_t param139 {};

    /* R1コンボ時両手持ち確率
     *   その他の確率補正
     * Misc - 2H R1 Combo
     *   Other probability corrections */
    int16_t param140 {};

    /* R2コンボ時両手持ち確率
     *   その他の確率補正
     * Misc - 2H R2 Combo
     *   Other probability corrections */
    int16_t param141 {};

    /* プランニング行動時の移動時ガード確率
     *   その他の確率補正
     * Misc - Guard during Move
     *   Other probability corrections */
    int16_t param142 {};

    /* R1攻撃を二刀攻撃に置き換える確率
     *   その他の確率補正
     * Misc - Dual-wield R1 Attack
     *   Other probability corrections */
    int16_t param143 {};

    /* 回避を特殊ローリングアーツに置き換える確率
     *   その他の確率補正
     * Misc - Replace Roll with Movement Art
     *   Other probability corrections */
    int16_t param144 {};

    /* 投擲系アイテムの使用
     *   アイテム使用系
     * Misc - Use Throwable Item
     *   Item usage system */
    int16_t param145 {};

    /* HP回復アイテムの使用
     *   アイテム使用系
     * Misc - Use HP Recovery Item
     *   Item usage system */
    int16_t param146 {};

    /* バフアイテムの使用
     *   アイテム使用系
     * Misc - Use Buff Item
     *   Item usage system */
    int16_t param147 {};

    /* 薬包コンボ攻撃
     *   アイテム使用系
     * Misc - Use Buff Combo Attack
     *   Item usage system */
    int16_t param148 {};

    /* 未使用
     * Unused */
    int16_t param149 {};

    /* アーツ_近距離攻撃
     *   アーツ行動系
     * Weapon Art - Short Range Attack
     *   Arts behavior system */
    int16_t param150 {};

    /* アーツ_中距離攻撃
     *   アーツ行動系
     * Weapon Art - Medium Range Attack
     *   Arts behavior system */
    int16_t param151 {};

    /* アーツ_遠距離攻撃
     *   アーツ行動系
     * Weapon Art - Ranged Attack
     *   Arts behavior system */
    int16_t param152 {};

    /* アーツ_回復
     *   アーツ行動系
     * Weapon Art - Recovery
     *   Arts behavior system */
    int16_t param153 {};

    /* アーツ_バフ
     *   アーツ行動系
     * Weapon Art - Buff
     *   Arts behavior system */
    int16_t param154 {};

    /* 未使用
     *   アーツ行動系
     * Unused
     *   Arts behavior system */
    int16_t param155 {};

    /* 未使用
     * Unused */
    int16_t param156 {};

    /* 未使用
     * Unused */
    int16_t param157 {};

    /* 未使用
     * Unused */
    int16_t param158 {};

    /* 未使用
     * Unused */
    int16_t param159 {};

    /* 未使用
     * Unused */
    int16_t param160 {};

    /* 未使用
     * Unused */
    int16_t param161 {};

    /* 未使用
     * Unused */
    int16_t param162 {};

    /* 未使用
     * Unused */
    int16_t param163 {};

    /* 未使用
     * Unused */
    int16_t param164 {};

    /* 未使用
     * Unused */
    int16_t param165 {};

    /* 未使用
     * Unused */
    int16_t param166 {};

    /* 未使用
     * Unused */
    int16_t param167 {};

    /* 未使用
     * Unused */
    int16_t param168 {};

    /* 未使用
     * Unused */
    int16_t param169 {};

    /* 未使用
     * Unused */
    int16_t param170 {};

    /* 未使用
     * Unused */
    int16_t param171 {};

    /* 未使用
     * Unused */
    int16_t param172 {};

    /* 未使用
     * Unused */
    int16_t param173 {};

    /* 未使用
     * Unused */
    int16_t param174 {};

    /* 未使用
     * Unused */
    int16_t param175 {};

    /* 未使用
     * Unused */
    int16_t param176 {};

    /* 未使用
     * Unused */
    int16_t param177 {};

    /* 未使用
     * Unused */
    int16_t param178 {};

    /* 未使用
     * Unused */
    int16_t param179 {};

    /* 未使用
     * Unused */
    int16_t param180 {};

    /* 未使用
     * Unused */
    int16_t param181 {};

    /* 未使用
     * Unused */
    int16_t param182 {};

    /* 未使用
     * Unused */
    int16_t param183 {};

    /* 未使用
     * Unused */
    int16_t param184 {};

    /* 未使用
     * Unused */
    int16_t param185 {};

    /* 未使用
     * Unused */
    int16_t param186 {};

    /* 未使用
     * Unused */
    int16_t param187 {};

    /* 未使用
     * Unused */
    int16_t param188 {};

    /* 未使用
     * Unused */
    int16_t param189 {};

    /* 未使用
     * Unused */
    int16_t param190 {};

    /* 未使用
     * Unused */
    int16_t param191 {};

    /* 未使用
     * Unused */
    int16_t param192 {};

    /* 未使用
     * Unused */
    int16_t param193 {};

    /* 未使用
     * Unused */
    int16_t param194 {};

    /* 未使用
     * Unused */
    int16_t param195 {};

    /* 未使用
     * Unused */
    int16_t param196 {};

    /* 未使用
     * Unused */
    int16_t param197 {};

    /* 未使用
     * Unused */
    int16_t param198 {};

    /* 未使用
     * Unused */
    int16_t param199 {};
};
