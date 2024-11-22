#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
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
    // Size: 0x9b0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vExitOrigin"
    #pragma pack(push, 1)
    class C_CitadelTeleportTrigger : public client::C_BaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        Vector m_vExitOrigin; // 0x9a0        
        [[maybe_unused]] std::uint8_t pad_0x9ac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelTeleportTrigger because it is not a standard-layout class
    static_assert(sizeof(C_CitadelTeleportTrigger) == 0x9b0);
};
