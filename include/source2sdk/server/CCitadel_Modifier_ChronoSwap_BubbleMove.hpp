#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x258
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ChronoSwap_BubbleMove : public server::CCitadelModifier
    {
    public:
        bool m_bOtherIsInFrontAtStart; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc1[0x3]; // 0xc1
        Vector m_vOtherToDest; // 0xc4        
        Vector m_vStart; // 0xd0        
        Vector m_vDest; // 0xdc        
        // m_hOther has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOther;
        char m_hOther[0x4]; // 0xe8        
        Vector m_vLastSafePos; // 0xec        
        int32_t m_nNumTicks; // 0xf8        
        int32_t m_nTicksLeft; // 0xfc        
        client::ParticleIndex_t m_nBeamIndex; // 0x100        
        [[maybe_unused]] std::uint8_t pad_0x104[0x154];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ChronoSwap_BubbleMove because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ChronoSwap_BubbleMove) == 0x258);
};
