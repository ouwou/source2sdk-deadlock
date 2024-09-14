#pragma once
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
    class CTriggerTrooperDetector;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Objective_Bullet_Resist : public server::CCitadelModifier
    {
    public:
        // m_hTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CTriggerTrooperDetector> m_hTrigger;
        char m_hTrigger[0x4]; // 0xc0        
        int32_t m_iEnemyHeroCount; // 0xc4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Objective_Bullet_Resist because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Objective_Bullet_Resist) == 0xc8);
};
