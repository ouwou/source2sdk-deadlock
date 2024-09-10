#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 39
    // Alignment: 4
    // Size: 0x4
    enum class CitadelPingWheelConcept_t : std::uint32_t
    {
        CITADEL_PING_CONCEPT_NONE = 0xffffffff,
        CITADEL_PING_LETS_GO_THIS_WAY = 0x0,
        CITADEL_PING_TEAMMATE = 0x1,
        CITADEL_PING_ENEMY_PLAYER = 0x2,
        CITADEL_PING_CAREFUL = 0x3,
        CITADEL_PING_MISSING = 0x4,
        CITADEL_PING_HELP = 0x5,
        CITADEL_PING_GOOD_JOB = 0x6,
        CITADEL_PING_THANK_YOU = 0x7,
        CITADEL_PING_GET_BACK = 0x8,
        CITADEL_PING_STUN = 0x9,
        CITADEL_PING_ATTACK_ENEMY = 0xa,
        CITADEL_PING_RETREAT = 0xb,
        CITADEL_PING_HEADING_TO_LANE = 0xc,
        CITADEL_PING_PUSH_LANE = 0xd,
        CITADEL_PING_DEFEND_LANE = 0xe,
        CITADEL_PING_IM_BACK = 0xf,
        CITADEL_PING_GOING_IN = 0x10,
        CITADEL_PING_STAY_TOGETHER = 0x11,
        CITADEL_PING_WAIT = 0x12,
        CITADEL_PING_PREGAME = 0x13,
        CITADEL_PING_IDOL = 0x14,
        CITADEL_PING_HEADED_TO_BASE = 0x15,
        CITADEL_PING_MID = 0x16,
        CITADEL_PING_ABILITY = 0x17,
        CITADEL_PING_NEED_HEAL = 0x18,
        CITADEL_PING_HAVE_HEAL = 0x19,
        CITADEL_PING_NEED_PLAN = 0x1a,
        CITADEL_PING_HELP_WITH_IDOL = 0x1b,
        CITADEL_PING_YOURE_WELCOME = 0x1c,
        CITADEL_PING_SORRY = 0x1d,
        CITADEL_PING_YES = 0x1e,
        CITADEL_PING_NO = 0x1f,
        CITADEL_PING_ON_MY_WAY = 0x20,
        CITADEL_PING_THANKS_ALLCHAT = 0x21,
        CITADEL_PING_GOODJOB_ALLCHAT = 0x22,
        CITADEL_PING_GOOD_GAME_ALLCHAT = 0x23,
        CITADEL_PING_WELL_PLAYED_ALLCHAT = 0x24,
        // MPropertySuppressEnumerator
        CITADEL_PING_CONCEPT_COUNT = 0x25,
    };
};
