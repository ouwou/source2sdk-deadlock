#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 16
    // Alignment: 4
    // Size: 0x4
    enum class StatusEffectProperty_t : std::uint32_t
    {
        // MPropertyFriendlyName "Don't show a status effect in the Important Box"
        EStatusEffect_None = 0x0,
        // MPropertyFriendlyName "Shows EMP Status Effect in the Important Box"
        EStatusEffect_EMP = 0x1,
        // MPropertyFriendlyName "Shows Stun Status Effect in the Important Box"
        EStatusEffect_Stun = 0x2,
        // MPropertyFriendlyName "Shows Freeze Status Effect in the Important Box"
        EStatusEffect_Freeze = 0x3,
        // MPropertyFriendlyName "Shows Burn Status Effect in the Important Box"
        EStatusEffect_Burn = 0x4,
        // MPropertyFriendlyName "Shows Bleed Status Effect in the Important Box"
        EStatusEffect_Bleed = 0x5,
        // MPropertyFriendlyName "Shows Sleep Status Effect in the Important Box"
        EStatusEffect_Sleep = 0x6,
        // MPropertyFriendlyName "Shows Tethered Status Effect in the Important Box"
        EStatusEffect_Tethered = 0x7,
        // MPropertyFriendlyName "Shows Immobilized Status Effect in the Important Box"
        EStatusEffect_Immobilized = 0x8,
        // MPropertyFriendlyName "Shows Disarmed Status Effect in the Important Box"
        EStatusEffect_Disarmed = 0x9,
        // MPropertyFriendlyName "Shows Invisible Status Effect in the Important Box"
        EStatusEffect_Invisible = 0xa,
        // MPropertyFriendlyName "Shows Stacks Status Effect in the Important Box"
        EStatusEffect_Stacks = 0xb,
        // MPropertyFriendlyName "Shows Infinite Clip Status Effect in the Important Box"
        EStatusEffect_InfiniteClip = 0xc,
        // MPropertyFriendlyName "Shows Bullet Debuff Status Effect in the Important Box"
        EStatusEffect_BulletDebuff = 0xd,
        // MPropertyFriendlyName "Shows Buff Status Effect in the Important Box"
        EStatusEffect_Buff = 0xe,
        // MPropertySuppressEnumerator
        EStatusEffect_Count = 0xf,
    };
};
