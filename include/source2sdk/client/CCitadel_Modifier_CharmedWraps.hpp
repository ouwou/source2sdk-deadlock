#pragma once
#include "source2sdk/client/CCitadel_Modifier_BaseEventProc.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CCitadel_Modifier_CharmedWraps : public client::CCitadel_Modifier_BaseEventProc
    {
    public:
        entity2::GameTime_t m_fLastPrimingLightAttackTime; // 0x168        
        [[maybe_unused]] std::uint8_t pad_0x16c[0x74];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_CharmedWraps because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_CharmedWraps) == 0x1e0);
};
