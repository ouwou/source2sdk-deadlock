#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x228
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Chomp_Hobbled : public server::CCitadelModifier
    {
    public:
        entity2::GameTime_t m_LastUpdate; // 0xc8        
        float m_flDamageTime; // 0xcc        
        float m_flMovementTime; // 0xd0        
        // m_hGrappler has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hGrappler;
        char m_hGrappler[0x4]; // 0xd4        
        [[maybe_unused]] std::uint8_t pad_0xd8[0x150];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Chomp_Hobbled because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Chomp_Hobbled) == 0x228);
};
