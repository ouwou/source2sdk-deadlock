#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
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
    // Size: 0xb20
    // Has VTable
    #pragma pack(push, 1)
    class CItem : public server::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xa48[0x8]; // 0xa48
        entity2::CEntityIOOutput m_OnPlayerTouch; // 0xa50        
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0xa78        
        bool m_bActivateWhenAtRest; // 0xaa0        
        [[maybe_unused]] std::uint8_t pad_0xaa1[0x7]; // 0xaa1
        entity2::CEntityIOOutput m_OnCacheInteraction; // 0xaa8        
        entity2::CEntityIOOutput m_OnGlovePulled; // 0xad0        
        Vector m_vOriginalSpawnOrigin; // 0xaf8        
        QAngle m_vOriginalSpawnAngles; // 0xb04        
        bool m_bPhysStartAsleep; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xb11[0xf];
        
        // Datamap fields:
        // void CItemItemTouch; // 0x0
        // void CItemMaterialize; // 0x0
        // void CItemComeToRest; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItem because it is not a standard-layout class
    static_assert(sizeof(CItem) == 0xb20);
};
