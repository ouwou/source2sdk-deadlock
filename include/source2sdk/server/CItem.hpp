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
    // Size: 0xb00
    // Has VTable
    #pragma pack(push, 1)
    class CItem : public server::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xa28[0x8]; // 0xa28
        entity2::CEntityIOOutput m_OnPlayerTouch; // 0xa30        
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0xa58        
        bool m_bActivateWhenAtRest; // 0xa80        
        [[maybe_unused]] std::uint8_t pad_0xa81[0x7]; // 0xa81
        entity2::CEntityIOOutput m_OnCacheInteraction; // 0xa88        
        entity2::CEntityIOOutput m_OnGlovePulled; // 0xab0        
        Vector m_vOriginalSpawnOrigin; // 0xad8        
        QAngle m_vOriginalSpawnAngles; // 0xae4        
        bool m_bPhysStartAsleep; // 0xaf0        
        [[maybe_unused]] std::uint8_t pad_0xaf1[0xf];
        
        // Datamap fields:
        // void CItemItemTouch; // 0x0
        // void CItemMaterialize; // 0x0
        // void CItemComeToRest; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItem because it is not a standard-layout class
    static_assert(sizeof(CItem) == 0xb00);
};
