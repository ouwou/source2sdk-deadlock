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
    // Size: 0xb90
    // Has VTable
    #pragma pack(push, 1)
    class C_LocalTempEntity : public client::CBaseAnimGraph
    {
    public:
        int32_t flags; // 0xae8        
        entity2::GameTime_t die; // 0xaec        
        float m_flFrameMax; // 0xaf0        
        float x; // 0xaf4        
        float y; // 0xaf8        
        float fadeSpeed; // 0xafc        
        float bounceFactor; // 0xb00        
        int32_t hitSound; // 0xb04        
        int32_t priority; // 0xb08        
        Vector tentOffset; // 0xb0c        
        QAngle m_vecTempEntAngVelocity; // 0xb18        
        int32_t tempent_renderamt; // 0xb24        
        Vector m_vecNormal; // 0xb28        
        float m_flSpriteScale; // 0xb34        
        int32_t m_nFlickerFrame; // 0xb38        
        float m_flFrameRate; // 0xb3c        
        float m_flFrame; // 0xb40        
        [[maybe_unused]] std::uint8_t pad_0xb44[0x4]; // 0xb44
        char* m_pszImpactEffect; // 0xb48        
        char* m_pszParticleEffect; // 0xb50        
        bool m_bParticleCollision; // 0xb58        
        [[maybe_unused]] std::uint8_t pad_0xb59[0x3]; // 0xb59
        int32_t m_iLastCollisionFrame; // 0xb5c        
        Vector m_vLastCollisionOrigin; // 0xb60        
        Vector m_vecTempEntVelocity; // 0xb6c        
        Vector m_vecPrevAbsOrigin; // 0xb78        
        Vector m_vecTempEntAcceleration; // 0xb84        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
    static_assert(sizeof(C_LocalTempEntity) == 0xb90);
};
