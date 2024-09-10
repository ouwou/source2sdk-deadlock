#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 17
    // Alignment: 4
    // Size: 0x4
    enum class ECitadelHintFeature : std::uint32_t
    {
        CITADEL_HINT_FEATURE_INVALID = 0x0,
        CITADEL_HINT_FEATURE_ZOOM_WEAPON = 0x1,
        CITADEL_HINT_FEATURE_ZIPLINE = 0x2,
        CITADEL_HINT_FEATURE_SPEND_MONEY = 0x3,
        CITADEL_HINT_FEATURE_SLIDE = 0x4,
        CITADEL_HINT_FEATURE_MANTLE = 0x5,
        CITADEL_HINT_FEATURE_MELEE = 0x6,
        CITADEL_HINT_FEATURE_LADDER = 0x7,
        CITADEL_HINT_FEATURE_LEARN_INITIAL_ABILITY = 0x8,
        CITADEL_HINT_FEATURE_LEARN_ABILITY = 0x9,
        CITADEL_HINT_FEATURE_UPGRADE_ABILITY = 0xa,
        CITADEL_HINT_FEATURE_HERO_TESTING_SHOP = 0xb,
        CITADEL_HINT_FEATURE_ACTIVATE_WALL = 0xc,
        CITADEL_HINT_FEATURE_FLAMEDASH_BOOST = 0xd,
        CITADEL_HINT_FEATURE_GUIDEDARROW_BOOST = 0xe,
        CITADEL_HINT_FEATURE_FLYING_STRIKE_EARLY_ACTIVATE = 0xf,
        CITADEL_HINT_FEATURE_LAST = 0x10,
    };
};
