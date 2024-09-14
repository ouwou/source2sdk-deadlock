#pragma once
#include "source2sdk/client/ECitadelPingLocation_t.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
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
    // Size: 0x940
    // Has VTable
    #pragma pack(push, 1)
    class CTriggerPingLocation : public server::CBaseTrigger
    {
    public:
        client::ECitadelPingLocation_t m_ePingLocation; // 0x938        
        [[maybe_unused]] std::uint8_t pad_0x93c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerPingLocation because it is not a standard-layout class
    static_assert(sizeof(CTriggerPingLocation) == 0x940);
};
