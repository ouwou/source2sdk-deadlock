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
    // Size: 0x1190
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vBeamAimPos"
    // static metadata: MNetworkVarNames "QAngle m_angBeamAngles"
    #pragma pack(push, 1)
    class CCitadel_Ability_IceBeam : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf0[0x618]; // 0xaf0
        entity2::GameTime_t m_flNextDamageTick; // 0x1108        
        Vector m_vStart; // 0x110c        
        Vector m_vEnd; // 0x1118        
        [[maybe_unused]] std::uint8_t pad_0x1124[0x3c]; // 0x1124
        // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecEntitiesHit;
        char m_vecEntitiesHit[0x18]; // 0x1160        
        // metadata: MNetworkEnable
        Vector m_vBeamAimPos; // 0x1178        
        // metadata: MNetworkEnable
        QAngle m_angBeamAngles; // 0x1184        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_IceBeam because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_IceBeam) == 0x1190);
};
