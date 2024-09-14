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
    // Size: 0x1188
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vBeamAimPos"
    // static metadata: MNetworkVarNames "QAngle m_angBeamAngles"
    #pragma pack(push, 1)
    class CCitadel_Ability_IceBeam : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae8[0x618]; // 0xae8
        entity2::GameTime_t m_flNextDamageTick; // 0x1100        
        Vector m_vStart; // 0x1104        
        Vector m_vEnd; // 0x1110        
        [[maybe_unused]] std::uint8_t pad_0x111c[0x3c]; // 0x111c
        // m_vecEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecEntitiesHit;
        char m_vecEntitiesHit[0x18]; // 0x1158        
        // metadata: MNetworkEnable
        Vector m_vBeamAimPos; // 0x1170        
        // metadata: MNetworkEnable
        QAngle m_angBeamAngles; // 0x117c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_IceBeam because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_IceBeam) == 0x1188);
};
