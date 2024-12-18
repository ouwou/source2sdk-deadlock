#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf58
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Trapper_SpiderJar : public client::C_CitadelBaseAbility
    {
    public:
        Vector m_vLaunchPosition; // 0xc98        
        QAngle m_qLaunchAngle; // 0xca4        
        bool m_bHasMadeSpiders; // 0xcb0        
        [[maybe_unused]] std::uint8_t pad_0xcb1[0x2a7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Trapper_SpiderJar because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Trapper_SpiderJar) == 0xf58);
};
