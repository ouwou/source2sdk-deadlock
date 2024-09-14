#pragma once
#include "source2sdk/server/CCitadel_Modifier_Out_Of_Combat_Health_Regen.hpp"
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
    // Size: 0x178
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Apex_Watcher : public server::CCitadel_Modifier_Out_Of_Combat_Health_Regen
    {
    public:
        bool m_bShouldEnableBuff; // 0x138        
        [[maybe_unused]] std::uint8_t pad_0x139[0x3f];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Apex_Watcher because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Apex_Watcher) == 0x178);
};
