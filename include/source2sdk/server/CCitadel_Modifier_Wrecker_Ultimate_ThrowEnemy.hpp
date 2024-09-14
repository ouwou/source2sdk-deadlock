#pragma once
#include "source2sdk/server/CCitadel_Modifier_Stunned.hpp"
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
    // Size: 0xd8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Wrecker_Ultimate_ThrowEnemy : public server::CCitadel_Modifier_Stunned
    {
    public:
        Vector m_vThrowVelocity; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xd4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Wrecker_Ultimate_ThrowEnemy because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Wrecker_Ultimate_ThrowEnemy) == 0xd8);
};
