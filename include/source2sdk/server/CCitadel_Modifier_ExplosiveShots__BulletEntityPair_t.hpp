#pragma once
#include "source2sdk/client/ShotID_t.hpp"
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
    // Size: 0x8
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct CCitadel_Modifier_ExplosiveShots__BulletEntityPair_t
    {
    public:
        // m_hEntHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEntHit;
        char m_hEntHit[0x4]; // 0x0        
        client::ShotID_t m_ShotHit; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCitadel_Modifier_ExplosiveShots__BulletEntityPair_t, m_hEntHit) == 0x0);
    static_assert(offsetof(CCitadel_Modifier_ExplosiveShots__BulletEntityPair_t, m_ShotHit) == 0x4);
    
    static_assert(sizeof(CCitadel_Modifier_ExplosiveShots__BulletEntityPair_t) == 0x8);
};
