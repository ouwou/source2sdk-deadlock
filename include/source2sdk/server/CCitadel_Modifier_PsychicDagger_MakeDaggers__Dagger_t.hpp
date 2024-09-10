#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct CCitadel_Modifier_PsychicDagger_MakeDaggers__Dagger_t
    {
    public:
        int32_t m_nDaggerNum; // 0x0        
        // m_Target has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_Target;
        char m_Target[0x4]; // 0x4        
        client::ParticleIndex_t m_Dagger; // 0x8        
        client::ParticleIndex_t m_TargetPreview; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCitadel_Modifier_PsychicDagger_MakeDaggers__Dagger_t, m_nDaggerNum) == 0x0);
    static_assert(offsetof(CCitadel_Modifier_PsychicDagger_MakeDaggers__Dagger_t, m_Target) == 0x4);
    static_assert(offsetof(CCitadel_Modifier_PsychicDagger_MakeDaggers__Dagger_t, m_Dagger) == 0x8);
    static_assert(offsetof(CCitadel_Modifier_PsychicDagger_MakeDaggers__Dagger_t, m_TargetPreview) == 0xc);
    
    static_assert(sizeof(CCitadel_Modifier_PsychicDagger_MakeDaggers__Dagger_t) == 0x10);
};
