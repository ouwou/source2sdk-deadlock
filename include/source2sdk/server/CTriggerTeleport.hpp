#pragma once
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
    // Size: 0x9a0
    // Has VTable
    #pragma pack(push, 1)
    class CTriggerTeleport : public server::CBaseTrigger
    {
    public:
        CUtlSymbolLarge m_iLandmark; // 0x990        
        bool m_bUseLandmarkAngles; // 0x998        
        bool m_bMirrorPlayer; // 0x999        
        bool m_bCheckDestIfClearForPlayer; // 0x99a        
        [[maybe_unused]] std::uint8_t pad_0x99b[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerTeleport because it is not a standard-layout class
    static_assert(sizeof(CTriggerTeleport) == 0x9a0);
};
