#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 62
    // Alignment: 8
    // Size: 0x8
    enum class EAbilityBehavior_t : std::uint64_t
    {
        CITADEL_ABILITY_BEHAVIOR_NONE = 0x0,
        CITADEL_ABILITY_BEHAVIOR_HIDDEN = 0x1,
        CITADEL_ABILITY_BEHAVIOR_DONT_BREAK_INVISIBILITY = 0x4,
        CITADEL_ABILITY_BEHAVIOR_IS_PRIMARY_WEAPON = 0x8,
        CITADEL_ABILITY_BEHAVIOR_SILENT_CAST_FAILURE_FEEDBACK = 0x10,
        CITADEL_ABILITY_BEHAVIOR_DONT_INTERRUPT_SPRINT = 0x20,
        CITADEL_ABILITY_BEHAVIOR_CAST_EVEN_IF_BUSY_AND_EXCLUSIVE = 0x40,
        CITADEL_ABILITY_BEHAVIOR_CHANNELLED = 0x80,
        CITADEL_ABILITY_BEHAVIOR_EXCLUSIVE_USE = 0x100,
        CITADEL_ABILITY_BEHAVIOR_PROJECTILE = 0x200,
        CITADEL_ABILITY_BEHAVIOR_WEAPON_TOGGLE = 0x400,
        CITADEL_ABILITY_BEHAVIOR_INPUT_DIRECTIONAL_2D = 0x800,
        CITADEL_ABILITY_BEHAVIOR_INPUT_DIRECTIONAL_3D = 0x1000,
        CITADEL_ABILITY_BEHAVIOR_ALWAYS_PREVIEW_RADIUS = 0x2000,
        CITADEL_ABILITY_BEHAVIOR_DONT_SWITCH_AWAY_ON_CAST = 0x4000,
        CITADEL_ABILITY_BEHAVIOR_CASTABLE_WHILE_BUSY = 0x8000,
        CITADEL_ABILITY_BEHAVIOR_START_COOLDOWN_ON_TOGGLE_OFF = 0x10000,
        CITADEL_ABILITY_BEHAVIOR_DISARMABLE = 0x20000,
        CITADEL_ABILITY_BEHAVIOR_NOT_SILENCABLE = 0x40000,
        CITADEL_ABILITY_BEHAVIOR_DEPLOY_OBJECT = 0x80000,
        CITADEL_ABILITY_BEHAVIOR_NO_TARGET = 0x100000,
        CITADEL_ABILITY_BEHAVIOR_DAMAGE_DOESNT_WAKE_FROM_SLEEP = 0x200000,
        CITADEL_ABILITY_BEHAVIOR_UNSELLABLE = 0x400000,
        CITADEL_ABILITY_BEHAVIOR_PURCHASABLE_MULTIPLE_TIMES = 0x800000,
        CITADEL_ABILITY_BEHAVIOR_DONT_TRIGGER_SPELL_BLOCK = 0x1000000,
        CITADEL_ABILITY_BEHAVIOR_CANCEL_ON_ATTACK = 0x2000000,
        CITADEL_ABILITY_BEHAVIOR_CASTABLE_WHILE_CMD_RESTRICTED = 0x4000000,
        CITADEL_ABILITY_BEHAVIOR_DISPLAYS_DAMAGE_IMPACT = 0x8000000,
        CITADEL_ABILITY_BEHAVIOR_PROJECTILE_PASS_THROUGH_WORLD = 0x20000000,
        CITADEL_ABILITY_BEHAVIOR_NON_COMBAT = 0x40000000,
        CITADEL_ABILITY_BEHAVIOR_EQUAL_UNIT_TARGET_PRIORITY = 0x80000000,
        CITADEL_ABILITY_BEHAVIOR_DONT_AIM_FACING_ENEMY = 0x100000000,
        CITADEL_ABILITY_BEHAVIOR_TARGET_THROUGH_WALLS = 0x200000000,
        CITADEL_ABILITY_BEHAVIOR_CASTABLE_WHILE_HIDDEN = 0x400000000,
        CITADEL_ABILITY_BEHAVIOR_ALLOW_SELF_CAST = 0x1000000000,
        CITADEL_ABILITY_BEHAVIOR_CLEAVE_DISABLED = 0x2000000000,
        CITADEL_ABILITY_BEHAVIOR_DISPLAYS_DAMAGE_SOURCE_IMPACT = 0x4000000000,
        CITADEL_ABILITY_BEHAVIOR_PREVENT_BOT_USAGE = 0x8000000000,
        CITADEL_ABILITY_BEHAVIOR_REQUIRE_PREDICTION = 0x10000000000,
        CITADEL_ABILITY_BEHAVIOR_COOLDOWN_PERSISTS_ACROSS_REBUY = 0x20000000000,
        CITADEL_ABILITY_BEHAVIOR_MUST_BE_CAST_ON_GROUND = 0x40000000000,
        CITADEL_ABILITY_BEHAVIOR_COOLDOWN_REFILLS_ALL_CHARGES = 0x80000000000,
        CITADEL_ABILITY_BEHAVIOR_SHOW_CAST_RANGE_AS_SAT_SPHERE_WHILE_CASTING = 0x100000000000,
        CITADEL_ABILITY_BEHAVIOR_IGNORE_SELECTION_MASH_PROTECTION = 0x200000000000,
        CITADEL_ABILITY_BEHAVIOR_PREVENT_TRAINING_BOT_USAGE = 0x400000000000,
        CITADEL_ABILITY_BEHAVIOR_CAN_CANCEL_DURING_CAST_DELAY = 0x800000000000,
        CITADEL_ABILITY_BEHAVIOR_CANNOT_CANCEL_DURING_CHANNEL = 0x1000000000000,
        CITADEL_ABILITY_BEHAVIOR_CAN_CAST_ON_ZIPLINE = 0x2000000000000,
        CITADEL_ABILITY_BEHAVIOR_STARTS_ON_COOLDOWN = 0x4000000000000,
        CITADEL_ABILITY_BEHAVIOR_CAN_HEAL_PLAYERS = 0x8000000000000,
        CITADEL_ABILITY_BEHAVIOR_SWITCH_AWAY_ON_FAILED_CAST = 0x10000000000000,
        CITADEL_ABILITY_BEHAVIOR_CASTABLE_WHILE_DODGING = 0x20000000000000,
        CITADEL_ABILITY_BEHAVIOR_TRIGGER = 0x40000000000000,
        CITADEL_ABILITY_BEHAVIOR_IS_ALTERNATIVE_WEAPON = 0x80000000000000,
        CITADEL_ABILITY_BEHAVIOR_PROJECTILE_FIRED_AS_BULLET = 0x100000000000000,
        CITADEL_ABILITY_BEHAVIOR_COOLDOWN_ON_CHANNEL_END = 0x200000000000000,
        CITADEL_ABILITY_BEHAVIOR_DONT_CONSUME_ABILITY_RESOURCE_ON_CAST = 0x400000000000000,
        CITADEL_ABILITY_BEHAVIOR_ALLOW_ALT_CAST = 0x800000000000000,
        CITADEL_ABILITY_BEHAVIOR_DONT_TRIGGER_POST_CAST_ON_CAST_COMPLETE = 0x1000000000000000,
        CITADEL_ABILITY_BEHAVIOR_USE_INSTANT_CAST_UNIT_TARGET_UI = 0x2000000000000000,
        CITADEL_ABILITY_BEHAVIOR_MOVEMENT = 0x4000000000000000,
        CITADEL_ABILITY_BEHAVIOR_TRIGGER_CANCEL_MASH_PROTECTION_ON_CAST = 0x8000000000000000,
    };
};
