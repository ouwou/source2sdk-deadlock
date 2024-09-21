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
    // Size: 0xa80
    // Has VTable
    #pragma pack(push, 1)
    class CItem : public server::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x9a8[0x8]; // 0x9a8
        entity2::CEntityIOOutput m_OnPlayerTouch; // 0x9b0        
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0x9d8        
        bool m_bActivateWhenAtRest; // 0xa00        
        [[maybe_unused]] std::uint8_t pad_0xa01[0x7]; // 0xa01
        entity2::CEntityIOOutput m_OnCacheInteraction; // 0xa08        
        entity2::CEntityIOOutput m_OnGlovePulled; // 0xa30        
        Vector m_vOriginalSpawnOrigin; // 0xa58        
        QAngle m_vOriginalSpawnAngles; // 0xa64        
        bool m_bPhysStartAsleep; // 0xa70        
        [[maybe_unused]] std::uint8_t pad_0xa71[0xf];
        
        // Datamap fields:
        // void CItemItemTouch; // 0x0
        // void CItemMaterialize; // 0x0
        // void CItemComeToRest; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItem because it is not a standard-layout class
    static_assert(sizeof(CItem) == 0xa80);
};
