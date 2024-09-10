#pragma once
#include "source2sdk/animationsystem/ParticleAttachment_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x10
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct AmbientParticleSettings_t
    {
    public:
        int32_t m_nCP; // 0x0        
        animationsystem::ParticleAttachment_t m_eAttachmentType; // 0x4        
        CUtlString m_strAttachmentName; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AmbientParticleSettings_t, m_nCP) == 0x0);
    static_assert(offsetof(AmbientParticleSettings_t, m_eAttachmentType) == 0x4);
    static_assert(offsetof(AmbientParticleSettings_t, m_strAttachmentName) == 0x8);
    
    static_assert(sizeof(AmbientParticleSettings_t) == 0x10);
};
