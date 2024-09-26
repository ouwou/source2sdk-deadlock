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
    // Size: 0xbf8
    // Has VTable
    #pragma pack(push, 1)
    class C_LocalTempEntity : public client::CBaseAnimGraph
    {
    public:
        int32_t flags; // 0xb50        
        entity2::GameTime_t die; // 0xb54        
        float m_flFrameMax; // 0xb58        
        float x; // 0xb5c        
        float y; // 0xb60        
        float fadeSpeed; // 0xb64        
        float bounceFactor; // 0xb68        
        int32_t hitSound; // 0xb6c        
        int32_t priority; // 0xb70        
        Vector tentOffset; // 0xb74        
        QAngle m_vecTempEntAngVelocity; // 0xb80        
        int32_t tempent_renderamt; // 0xb8c        
        Vector m_vecNormal; // 0xb90        
        float m_flSpriteScale; // 0xb9c        
        int32_t m_nFlickerFrame; // 0xba0        
        float m_flFrameRate; // 0xba4        
        float m_flFrame; // 0xba8        
        [[maybe_unused]] std::uint8_t pad_0xbac[0x4]; // 0xbac
        char* m_pszImpactEffect; // 0xbb0        
        char* m_pszParticleEffect; // 0xbb8        
        bool m_bParticleCollision; // 0xbc0        
        [[maybe_unused]] std::uint8_t pad_0xbc1[0x3]; // 0xbc1
        int32_t m_iLastCollisionFrame; // 0xbc4        
        Vector m_vLastCollisionOrigin; // 0xbc8        
        Vector m_vecTempEntVelocity; // 0xbd4        
        Vector m_vecPrevAbsOrigin; // 0xbe0        
        Vector m_vecTempEntAcceleration; // 0xbec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
    static_assert(sizeof(C_LocalTempEntity) == 0xbf8);
};
