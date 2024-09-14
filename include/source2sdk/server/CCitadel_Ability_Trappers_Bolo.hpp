#pragma once
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc60
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Trappers_Bolo : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae8[0x38]; // 0xae8
        // m_hProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hProjectile;
        char m_hProjectile[0x4]; // 0xb20        
        // m_hNextTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hNextTarget;
        char m_hNextTarget[0x4]; // 0xb24        
        // m_hHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitTargets;
        char m_hHitTargets[0x18]; // 0xb28        
        int32_t m_iBounces; // 0xb40        
        bool m_bReturning; // 0xb44        
        [[maybe_unused]] std::uint8_t pad_0xb45[0x11b];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Trappers_Bolo because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Trappers_Bolo) == 0xc60);
};
