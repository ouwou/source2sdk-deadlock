#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 78
    // Alignment: 4
    // Size: 0x4
    enum class CitadelConcept_t : std::uint32_t
    {
        // MPropertySuppressEnumerator
        CITADEL_CONCEPT_NONE = 0xffffffff,
        // MPropertyDescription
        TLK_CITADEL_CAST_EXECUTE = 0x0,
        // MPropertyDescription
        TLK_CITADEL_CAST_ULTIMATE = 0x1,
        // MPropertyDescription
        TLK_CITADEL_DEATH = 0x2,
        // MPropertyDescription
        TLK_CITADEL_KILL = 0x3,
        // MPropertyDescription
        TLK_CITADEL_KILL_ASSIST = 0x4,
        // MPropertyDescription
        TLK_CITADEL_KILL_STREAK = 0x5,
        // MPropertyDescription
        TLK_CITADEL_DENY = 0x6,
        // MPropertyDescription
        TLK_CITADEL_WAS_DENIED = 0x7,
        // MPropertyDescription
        TLK_CITADEL_DEFEAT = 0x8,
        // MPropertyDescription
        TLK_CITADEL_VICTORY = 0x9,
        // MPropertyDescription
        TLK_CITADEL_PAIN = 0xa,
        // MPropertyDescription
        TLK_CITADEL_CUSTOM = 0xb,
        // MPropertyDescription
        TLK_CITADEL_AP_GAINED = 0xc,
        // MPropertyDescription
        TLK_CITADEL_GOLD_GAINED = 0xd,
        // MPropertyDescription
        TLK_CITADEL_LEVEL_GAINED = 0xe,
        // MPropertyDescription "Damaged an enemy, who has been missing for a short while"
        TLK_CITADEL_HUNTING = 0xf,
        // MPropertyDescription "After being alone in enemy territory for a short while"
        TLK_CITADEL_BE_CAREFUL = 0x10,
        // MPropertyDescription "Leaving an ally alone"
        TLK_CITADEL_LEAVING_AREA = 0x11,
        // MPropertyDescription
        TLK_CITADEL_ZIPLINE = 0x12,
        // MPropertyDescription
        TLK_CITADEL_ENEMY_ESCAPED = 0x13,
        // MPropertyDescription "took {damage_percent} over the last N seconds, and have {healthfrac} now"
        TLK_CITADEL_SURVIVED = 0x14,
        // MPropertyDescription "observed someone who took {damage_percent} over the last N seconds, and have {target_healthfrac} now"
        TLK_CITADEL_OBSERVED_SURVIVAL = 0x15,
        // MPropertyDescription
        TLK_CITADEL_MATCH_START = 0x16,
        // MPropertyDescription
        TLK_CITADEL_CONVERSATION = 0x17,
        // MPropertyDescription
        TLK_CITADEL_IDOL = 0x18,
        // MPropertyDescription
        TLK_CITADEL_UPGRADE_ABILITY = 0x19,
        // MPropertyDescription
        TLK_CITADEL_BUY_UPGRADE = 0x1a,
        // MPropertyDescription
        TLK_CITADEL_SELL_UPGRADE = 0x1b,
        // MPropertyDescription
        TLK_CITADEL_ABILITY_SELECTED = 0x1c,
        // MPropertyDescription
        TLK_CITADEL_HERO_SELECTED = 0x1d,
        // MPropertyDescription
        TLK_CITADEL_PICKUP_ITEM = 0x1e,
        // MPropertyDescription
        TLK_CITADEL_INTERRUPT_ABILITY = 0x1f,
        // MPropertyDescription
        TLK_CITADEL_ABILITY_INTERRUPTED = 0x20,
        // MPropertyDescription
        TLK_CITADEL_OBSERVED_INTERRUPT = 0x21,
        // MPropertyDescription
        TLK_CITADEL_OPEN_SHOP = 0x22,
        // MPropertyDescription
        TLK_CITADEL_INTERACT_WITH_ABILITY = 0x23,
        // MPropertyDescription
        TLK_CITADEL_ULTIMATE_READY = 0x24,
        // MPropertyDescription
        TLK_CITADEL_NEUTRAL_IDLE = 0x25,
        // MPropertyDescription
        TLK_CITADEL_NEUTRAL_AGGRO = 0x26,
        // MPropertyDescription
        TLK_CITADEL_ALLY_KILLED = 0x27,
        // MPropertyDescription
        TLK_CITADEL_ENEMY_PICKED_UP_REJUVENATOR = 0x28,
        // MPropertyDescription
        TLK_CITADEL_PARRY = 0x29,
        // MPropertyDescription "played at the end of a channeled ability"
        TLK_CITADEL_CAST_FINISH = 0x2a,
        // MPropertyDescription "played for the victim of a targeted ability"
        TLK_CITADEL_CAST_TARGET_VICTIM = 0x2b,
        // MPropertyDescription "played for the victim of a channeled ability"
        TLK_CITADEL_CAST_FINISH_VICTIM = 0x2c,
        // MPropertyDescription "an ability projectile hit an enemy"
        TLK_CITADEL_PROJECTILE_HIT = 0x2d,
        // MPropertyDescription "the victim of the projectile"
        TLK_CITADEL_HIT_BY_PROJECTILE = 0x2e,
        // MPropertyDescription
        TLK_CITADEL_DROP_ITEM = 0x2f,
        // MPropertyDescription
        TLK_CITADEL_HEALED = 0x30,
        // MPropertyDescription "up to one player will play a line observing this"
        TLK_CITADEL_OBSERVE_CAST = 0x31,
        // MPropertyDescription "up to one player will play a line observing this"
        TLK_CITADEL_OBSERVE_CAST_FINISH = 0x32,
        // MPropertyDescription "up to one player will play a line observing this"
        TLK_CITADEL_OBSERVE_PROJECTILE_HIT = 0x33,
        // MPropertyDescription
        TLK_CITADEL_PING = 0x34,
        // MPropertyDescription
        TLK_CITADEL_MOVEMENT_EFFORT = 0x35,
        // MPropertyDescription
        TLK_CITADEL_ANN_BEGIN_REGEN = 0x36,
        // MPropertyDescription
        TLK_CITADEL_ANN_MIDBOSS_SPAWN = 0x37,
        // MPropertyDescription
        TLK_CITADEL_ANN_MIDBOSS_KILLED = 0x38,
        // MPropertyDescription
        TLK_CITADEL_ANN_ENEMY_DETECTED = 0x39,
        // MPropertyDescription
        TLK_CITADEL_ANN_REJUVINATOR = 0x3a,
        // MPropertyDescription
        TLK_CITADEL_ANN_DEFEAT = 0x3b,
        // MPropertyDescription
        TLK_CITADEL_ANN_VICTORY = 0x3c,
        // MPropertyDescription
        TLK_CITADEL_ANN_PICKUP_ITEM = 0x3d,
        // MPropertyDescription
        TLK_CITADEL_ANN_DROP_ITEM = 0x3e,
        // MPropertyDescription
        TLK_CITADEL_ANN_IDOL = 0x3f,
        // MPropertyDescription
        TLK_CITADEL_ANN_TEAM_LANE_BOSS_ATTACKED = 0x40,
        // MPropertyDescription
        TLK_CITADEL_ANN_TEAM_BASE_BOSS_ATTACKED = 0x41,
        // MPropertyDescription
        TLK_CITADEL_ANN_ENEMY_LANE_BOSS_ATTACKED = 0x42,
        // MPropertyDescription
        TLK_CITADEL_ANN_ENEMY_BASE_BOSS_ATTACKED = 0x43,
        // MPropertyDescription
        TLK_CITADEL_ANN_TEAM_LANE_BOSS_DESTROYED = 0x44,
        // MPropertyDescription
        TLK_CITADEL_ANN_TEAM_BASE_BOSS_DESTROYED = 0x45,
        // MPropertyDescription
        TLK_CITADEL_ANN_ENEMY_LANE_BOSS_DESTROYED = 0x46,
        // MPropertyDescription
        TLK_CITADEL_ANN_ENEMY_BASE_BOSS_DESTROYED = 0x47,
        // MPropertyDescription
        TLK_CITADEL_ANN_KILL = 0x48,
        // MPropertyDescription
        TLK_CITADEL_ANN_KILL_STREAK = 0x49,
        // MPropertyDescription
        TLK_CITADEL_ANN_COMMEND_HERO = 0x4a,
        // MPropertyDescription
        TLK_CITADEL_ANN_GUIDED_BOT_MATCH = 0x4b,
        // MPropertySuppressEnumerator
        CITADEL_CONCEPT_COUNT = 0x4c,
    };
};
