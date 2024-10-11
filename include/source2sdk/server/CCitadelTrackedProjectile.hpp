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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8a8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelTrackedProjectile : public server::CCitadelProjectile
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x878        
        entity2::GameTime_t m_flTrackingStartTime; // 0x87c        
        float m_flTrackingDampingCoefficient; // 0x880        
        float m_flTrackingSpeed; // 0x884        
        float m_flTrackingDuration; // 0x888        
        entity2::GameTime_t m_flTrackingWindowStart; // 0x88c        
        entity2::GameTime_t m_flTrackingWindowEnd; // 0x890        
        float m_flTrackingStopDuration; // 0x894        
        Vector m_vLastValidPosition; // 0x898        
        [[maybe_unused]] std::uint8_t pad_0x8a4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelTrackedProjectile because it is not a standard-layout class
    static_assert(sizeof(CCitadelTrackedProjectile) == 0x8a8);
};
