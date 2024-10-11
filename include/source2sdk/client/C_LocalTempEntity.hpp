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
    // Size: 0xc08
    // Has VTable
    #pragma pack(push, 1)
    class C_LocalTempEntity : public client::CBaseAnimGraph
    {
    public:
        int32_t flags; // 0xb60        
        entity2::GameTime_t die; // 0xb64        
        float m_flFrameMax; // 0xb68        
        float x; // 0xb6c        
        float y; // 0xb70        
        float fadeSpeed; // 0xb74        
        float bounceFactor; // 0xb78        
        int32_t hitSound; // 0xb7c        
        int32_t priority; // 0xb80        
        Vector tentOffset; // 0xb84        
        QAngle m_vecTempEntAngVelocity; // 0xb90        
        int32_t tempent_renderamt; // 0xb9c        
        Vector m_vecNormal; // 0xba0        
        float m_flSpriteScale; // 0xbac        
        int32_t m_nFlickerFrame; // 0xbb0        
        float m_flFrameRate; // 0xbb4        
        float m_flFrame; // 0xbb8        
        [[maybe_unused]] std::uint8_t pad_0xbbc[0x4]; // 0xbbc
        char* m_pszImpactEffect; // 0xbc0        
        char* m_pszParticleEffect; // 0xbc8        
        bool m_bParticleCollision; // 0xbd0        
        [[maybe_unused]] std::uint8_t pad_0xbd1[0x3]; // 0xbd1
        int32_t m_iLastCollisionFrame; // 0xbd4        
        Vector m_vLastCollisionOrigin; // 0xbd8        
        Vector m_vecTempEntVelocity; // 0xbe4        
        Vector m_vecPrevAbsOrigin; // 0xbf0        
        Vector m_vecTempEntAcceleration; // 0xbfc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
    static_assert(sizeof(C_LocalTempEntity) == 0xc08);
};
