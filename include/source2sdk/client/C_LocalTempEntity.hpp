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
    // Size: 0xbf0
    // Has VTable
    #pragma pack(push, 1)
    class C_LocalTempEntity : public client::CBaseAnimGraph
    {
    public:
        int32_t flags; // 0xb48        
        entity2::GameTime_t die; // 0xb4c        
        float m_flFrameMax; // 0xb50        
        float x; // 0xb54        
        float y; // 0xb58        
        float fadeSpeed; // 0xb5c        
        float bounceFactor; // 0xb60        
        int32_t hitSound; // 0xb64        
        int32_t priority; // 0xb68        
        Vector tentOffset; // 0xb6c        
        QAngle m_vecTempEntAngVelocity; // 0xb78        
        int32_t tempent_renderamt; // 0xb84        
        Vector m_vecNormal; // 0xb88        
        float m_flSpriteScale; // 0xb94        
        int32_t m_nFlickerFrame; // 0xb98        
        float m_flFrameRate; // 0xb9c        
        float m_flFrame; // 0xba0        
        [[maybe_unused]] std::uint8_t pad_0xba4[0x4]; // 0xba4
        char* m_pszImpactEffect; // 0xba8        
        char* m_pszParticleEffect; // 0xbb0        
        bool m_bParticleCollision; // 0xbb8        
        [[maybe_unused]] std::uint8_t pad_0xbb9[0x3]; // 0xbb9
        int32_t m_iLastCollisionFrame; // 0xbbc        
        Vector m_vLastCollisionOrigin; // 0xbc0        
        Vector m_vecTempEntVelocity; // 0xbcc        
        Vector m_vecPrevAbsOrigin; // 0xbd8        
        Vector m_vecTempEntAcceleration; // 0xbe4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
    static_assert(sizeof(C_LocalTempEntity) == 0xbf0);
};
