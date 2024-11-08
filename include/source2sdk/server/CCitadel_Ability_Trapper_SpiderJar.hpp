#pragma once
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xdc0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Trapper_SpiderJar : public server::CCitadelBaseAbility
    {
    public:
        Vector m_vLaunchPosition; // 0xb00        
        QAngle m_qLaunchAngle; // 0xb0c        
        bool m_bHasMadeSpiders; // 0xb18        
        [[maybe_unused]] std::uint8_t pad_0xb19[0x2a7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Trapper_SpiderJar because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Trapper_SpiderJar) == 0xdc0);
};
