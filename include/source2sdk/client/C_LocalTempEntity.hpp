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
    // Size: 0xbb0
    // Has VTable
    #pragma pack(push, 1)
    class C_LocalTempEntity : public client::CBaseAnimGraph
    {
    public:
        int32_t flags; // 0xb08        
        entity2::GameTime_t die; // 0xb0c        
        float m_flFrameMax; // 0xb10        
        float x; // 0xb14        
        float y; // 0xb18        
        float fadeSpeed; // 0xb1c        
        float bounceFactor; // 0xb20        
        int32_t hitSound; // 0xb24        
        int32_t priority; // 0xb28        
        Vector tentOffset; // 0xb2c        
        QAngle m_vecTempEntAngVelocity; // 0xb38        
        int32_t tempent_renderamt; // 0xb44        
        Vector m_vecNormal; // 0xb48        
        float m_flSpriteScale; // 0xb54        
        int32_t m_nFlickerFrame; // 0xb58        
        float m_flFrameRate; // 0xb5c        
        float m_flFrame; // 0xb60        
        [[maybe_unused]] std::uint8_t pad_0xb64[0x4]; // 0xb64
        char* m_pszImpactEffect; // 0xb68        
        char* m_pszParticleEffect; // 0xb70        
        bool m_bParticleCollision; // 0xb78        
        [[maybe_unused]] std::uint8_t pad_0xb79[0x3]; // 0xb79
        int32_t m_iLastCollisionFrame; // 0xb7c        
        Vector m_vLastCollisionOrigin; // 0xb80        
        Vector m_vecTempEntVelocity; // 0xb8c        
        Vector m_vecPrevAbsOrigin; // 0xb98        
        Vector m_vecTempEntAcceleration; // 0xba4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
    static_assert(sizeof(C_LocalTempEntity) == 0xbb0);
};
