#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x100
    // Has VTable
    #pragma pack(push, 1)
    class CModifier_Upgrade_KineticSashTriggered : public server::CCitadelModifier
    {
    public:
        int32_t m_nBonusClip; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_Upgrade_KineticSashTriggered because it is not a standard-layout class
    static_assert(sizeof(CModifier_Upgrade_KineticSashTriggered) == 0x100);
};
