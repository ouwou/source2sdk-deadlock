#pragma once
#include "source2sdk/server/CServerOnlyPointEntity.hpp"
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
    // Size: 0x4f8
    // Has VTable
    #pragma pack(push, 1)
    class CPointTeleport : public server::CServerOnlyPointEntity
    {
    public:
        Vector m_vSaveOrigin; // 0x4d8        
        QAngle m_vSaveAngles; // 0x4e4        
        bool m_bTeleportParentedEntities; // 0x4f0        
        bool m_bTeleportUseCurrentAngle; // 0x4f1        
        [[maybe_unused]] std::uint8_t pad_0x4f2[0x6];
        
        // Datamap fields:
        // void InputTeleport; // 0x0
        // CUtlSymbolLarge InputTeleportEntity; // 0x0
        // void InputTeleportToCurrentPos; // 0x0
        // CUtlSymbolLarge InputTeleportEntityToCurrentPos; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointTeleport because it is not a standard-layout class
    static_assert(sizeof(CPointTeleport) == 0x4f8);
};
