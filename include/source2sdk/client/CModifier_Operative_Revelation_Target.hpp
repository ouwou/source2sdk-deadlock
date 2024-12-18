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
    // Size: 0x1e0
    // Has VTable
    #pragma pack(push, 1)
    class CModifier_Operative_Revelation_Target : public client::CCitadelModifier
    {
    public:
        float m_flTotalTimeLookedAtCaster; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x11c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_Operative_Revelation_Target because it is not a standard-layout class
    static_assert(sizeof(CModifier_Operative_Revelation_Target) == 0x1e0);
};
