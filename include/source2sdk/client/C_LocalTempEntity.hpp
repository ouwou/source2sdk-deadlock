#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xba0
    // Has VTable
    #pragma pack(push, 1)
    class C_LocalTempEntity : public client::CBaseAnimGraph
    {
    public:
        int32_t flags; // 0xaf8        
        entity2::GameTime_t die; // 0xafc        
        float m_flFrameMax; // 0xb00        
        float x; // 0xb04        
        float y; // 0xb08        
        float fadeSpeed; // 0xb0c        
        float bounceFactor; // 0xb10        
        int32_t hitSound; // 0xb14        
        int32_t priority; // 0xb18        
        Vector tentOffset; // 0xb1c        
        QAngle m_vecTempEntAngVelocity; // 0xb28        
        int32_t tempent_renderamt; // 0xb34        
        Vector m_vecNormal; // 0xb38        
        float m_flSpriteScale; // 0xb44        
        int32_t m_nFlickerFrame; // 0xb48        
        float m_flFrameRate; // 0xb4c        
        float m_flFrame; // 0xb50        
        [[maybe_unused]] std::uint8_t pad_0xb54[0x4]; // 0xb54
        char* m_pszImpactEffect; // 0xb58        
        char* m_pszParticleEffect; // 0xb60        
        bool m_bParticleCollision; // 0xb68        
        [[maybe_unused]] std::uint8_t pad_0xb69[0x3]; // 0xb69
        int32_t m_iLastCollisionFrame; // 0xb6c        
        Vector m_vLastCollisionOrigin; // 0xb70        
        Vector m_vecTempEntVelocity; // 0xb7c        
        Vector m_vecPrevAbsOrigin; // 0xb88        
        Vector m_vecTempEntAcceleration; // 0xb94        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
    static_assert(sizeof(C_LocalTempEntity) == 0xba0);
};
