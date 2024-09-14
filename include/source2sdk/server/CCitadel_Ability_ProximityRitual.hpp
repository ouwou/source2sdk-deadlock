#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CCitadel_Nano_Predatory_Statue;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xca0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_ProximityRitual : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae8[0x4]; // 0xae8
        // m_hStatue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadel_Nano_Predatory_Statue> m_hStatue;
        char m_hStatue[0x4]; // 0xaec        
        entity2::GameTime_t m_tCatRecallTime; // 0xaf0        
        int32_t m_iCatRecallHealth; // 0xaf4        
        Vector m_vLaunchPosition; // 0xaf8        
        QAngle m_qLaunchAngle; // 0xb04        
        [[maybe_unused]] std::uint8_t pad_0xb10[0x190];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ProximityRitual because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ProximityRitual) == 0xca0);
};
