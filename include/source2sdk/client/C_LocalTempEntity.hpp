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
    // Size: 0xbe8
    // Has VTable
    #pragma pack(push, 1)
    class C_LocalTempEntity : public client::CBaseAnimGraph
    {
    public:
        int32_t flags; // 0xb40        
        entity2::GameTime_t die; // 0xb44        
        float m_flFrameMax; // 0xb48        
        float x; // 0xb4c        
        float y; // 0xb50        
        float fadeSpeed; // 0xb54        
        float bounceFactor; // 0xb58        
        int32_t hitSound; // 0xb5c        
        int32_t priority; // 0xb60        
        Vector tentOffset; // 0xb64        
        QAngle m_vecTempEntAngVelocity; // 0xb70        
        int32_t tempent_renderamt; // 0xb7c        
        Vector m_vecNormal; // 0xb80        
        float m_flSpriteScale; // 0xb8c        
        int32_t m_nFlickerFrame; // 0xb90        
        float m_flFrameRate; // 0xb94        
        float m_flFrame; // 0xb98        
        [[maybe_unused]] std::uint8_t pad_0xb9c[0x4]; // 0xb9c
        char* m_pszImpactEffect; // 0xba0        
        char* m_pszParticleEffect; // 0xba8        
        bool m_bParticleCollision; // 0xbb0        
        [[maybe_unused]] std::uint8_t pad_0xbb1[0x3]; // 0xbb1
        int32_t m_iLastCollisionFrame; // 0xbb4        
        Vector m_vLastCollisionOrigin; // 0xbb8        
        Vector m_vecTempEntVelocity; // 0xbc4        
        Vector m_vecPrevAbsOrigin; // 0xbd0        
        Vector m_vecTempEntAcceleration; // 0xbdc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
    static_assert(sizeof(C_LocalTempEntity) == 0xbe8);
};
