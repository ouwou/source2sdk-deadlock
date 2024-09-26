#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe48
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Tokamak_HotShot : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc78[0x178]; // 0xc78
        float m_flDPS; // 0xdf0        
        entity2::GameTime_t m_flNextDamageTick; // 0xdf4        
        Vector m_vStart; // 0xdf8        
        Vector m_vEnd; // 0xe04        
        // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecEntitiesHit;
        char m_vecEntitiesHit[0x18]; // 0xe10        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkChangeCallback "OnFlameAnglesChanged"
        QAngle m_angBeamAngles; // 0xe28        
        [[maybe_unused]] std::uint8_t pad_0xe34[0xc]; // 0xe34
        bool m_bNeedsBeamReset; // 0xe40        
        [[maybe_unused]] std::uint8_t pad_0xe41[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tokamak_HotShot because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tokamak_HotShot) == 0xe48);
};
