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
    // Size: 0xa88
    // Has VTable
    #pragma pack(push, 1)
    class CItem : public server::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x9b0[0x8]; // 0x9b0
        entity2::CEntityIOOutput m_OnPlayerTouch; // 0x9b8        
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0x9e0        
        bool m_bActivateWhenAtRest; // 0xa08        
        [[maybe_unused]] std::uint8_t pad_0xa09[0x7]; // 0xa09
        entity2::CEntityIOOutput m_OnCacheInteraction; // 0xa10        
        entity2::CEntityIOOutput m_OnGlovePulled; // 0xa38        
        Vector m_vOriginalSpawnOrigin; // 0xa60        
        QAngle m_vOriginalSpawnAngles; // 0xa6c        
        bool m_bPhysStartAsleep; // 0xa78        
        [[maybe_unused]] std::uint8_t pad_0xa79[0xf];
        
        // Datamap fields:
        // void CItemItemTouch; // 0x0
        // void CItemMaterialize; // 0x0
        // void CItemComeToRest; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItem because it is not a standard-layout class
    static_assert(sizeof(CItem) == 0xa88);
};
