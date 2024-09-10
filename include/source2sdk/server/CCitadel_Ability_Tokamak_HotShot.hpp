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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc98
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "QAngle m_angBeamAngles"
    #pragma pack(push, 1)
    class CCitadel_Ability_Tokamak_HotShot : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xad8[0x178]; // 0xad8
        float m_flDPS; // 0xc50        
        entity2::GameTime_t m_flNextDamageTick; // 0xc54        
        Vector m_vStart; // 0xc58        
        Vector m_vEnd; // 0xc64        
        // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecEntitiesHit;
        char m_vecEntitiesHit[0x18]; // 0xc70        
        // metadata: MNetworkEnable
        QAngle m_angBeamAngles; // 0xc88        
        [[maybe_unused]] std::uint8_t pad_0xc94[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tokamak_HotShot because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Tokamak_HotShot) == 0xc98);
};