#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifierAura.hpp"
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
    // Size: 0x288
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_VacuumAura : public server::CCitadelModifierAura
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xe0[0x188]; // 0xe0
        // m_hEnemyHeroInVacuum has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hEnemyHeroInVacuum;
        char m_hEnemyHeroInVacuum[0x18]; // 0x268        
        int32_t m_nNumPlayersKilled; // 0x280        
        entity2::GameTime_t m_tLastDamageTime; // 0x284        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_VacuumAura because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_VacuumAura) == 0x288);
};
