#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class OrientationWarpTargetOffsetMode_t : std::uint32_t
    {
        // MPropertyFriendlyName "Literal Value"
        eLiteralValue = 0x0,
        // MPropertyFriendlyName "Parameter"
        eParameter = 0x1,
        // MPropertyFriendlyName "Animation Movement Heading"
        eAnimationMovementHeading = 0x2,
        // MPropertyFriendlyName "Animation Movement Heading At End"
        eAnimationMovementHeadingAtEnd = 0x3,
    };
};
