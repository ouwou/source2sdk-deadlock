#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    struct CCitadel_Modifier_TechCleave__DamageTaken_t
    {
    public:
        float m_flDamageAmount; // 0x0        
        entity2::GameTime_t m_flTimeToExpire; // 0x4        
        // m_ProcAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_ProcAbility;
        char m_ProcAbility[0x4]; // 0x8        
        // m_pTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_pTarget;
        char m_pTarget[0x4]; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCitadel_Modifier_TechCleave__DamageTaken_t, m_flDamageAmount) == 0x0);
    static_assert(offsetof(CCitadel_Modifier_TechCleave__DamageTaken_t, m_flTimeToExpire) == 0x4);
    static_assert(offsetof(CCitadel_Modifier_TechCleave__DamageTaken_t, m_ProcAbility) == 0x8);
    static_assert(offsetof(CCitadel_Modifier_TechCleave__DamageTaken_t, m_pTarget) == 0xc);
    
    static_assert(sizeof(CCitadel_Modifier_TechCleave__DamageTaken_t) == 0x10);
};
