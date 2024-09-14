#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xd0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Core_PushTarget : public server::CCitadelModifier
    {
    public:
        float m_flImpulseAmount; // 0xc0        
        entity2::GameTime_t m_flTossTime; // 0xc4        
        bool m_bShouldToss; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xc9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Core_PushTarget because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Core_PushTarget) == 0xd0);
};
