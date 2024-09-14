#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelProjectile.hpp"
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
    // Size: 0x848
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelTrackedProjectile : public server::CCitadelProjectile
    {
    public:
        entity2::GameTime_t m_flTrackingStartTime; // 0x820        
        float m_flTrackingDampingCoefficient; // 0x824        
        float m_flTrackingSpeed; // 0x828        
        float m_flTrackingDuration; // 0x82c        
        entity2::GameTime_t m_flTrackingWindowStart; // 0x830        
        entity2::GameTime_t m_flTrackingWindowEnd; // 0x834        
        float m_flTrackingStopDuration; // 0x838        
        Vector m_vLastValidPosition; // 0x83c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelTrackedProjectile because it is not a standard-layout class
    static_assert(sizeof(CCitadelTrackedProjectile) == 0x848);
};
