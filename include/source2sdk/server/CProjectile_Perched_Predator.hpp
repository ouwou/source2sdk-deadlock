#pragma once
#include "source2sdk/server/CCitadelProjectile.hpp"
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
    // Size: 0x988
    // Has VTable
    #pragma pack(push, 1)
    class CProjectile_Perched_Predator : public server::CCitadelProjectile
    {
    public:
        // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHitEntities;
        char m_vecHitEntities[0x18]; // 0x820        
        [[maybe_unused]] std::uint8_t pad_0x838[0x150];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CProjectile_Perched_Predator because it is not a standard-layout class
    static_assert(sizeof(CProjectile_Perched_Predator) == 0x988);
};
