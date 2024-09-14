#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x100
    // Has VTable
    #pragma pack(push, 1)
    class CModifier_FleetfootBoots_BonusClip : public client::CCitadelModifier
    {
    public:
        int32_t m_nBonusClip; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_FleetfootBoots_BonusClip because it is not a standard-layout class
    static_assert(sizeof(CModifier_FleetfootBoots_BonusClip) == 0x100);
};
