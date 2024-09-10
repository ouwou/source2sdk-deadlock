#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xda8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vStrikeVel"
    // static metadata: MNetworkVarNames "float m_flStartHeight"
    #pragma pack(push, 1)
    class CCitadel_Ability_LashDownStrike : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xad8[0xa8]; // 0xad8
        entity2::GameTime_t m_ImpactTime; // 0xb80        
        Vector m_vDamagePos; // 0xb84        
        Vector m_vDamageDir; // 0xb90        
        [[maybe_unused]] std::uint8_t pad_0xb9c[0x4]; // 0xb9c
        // m_vHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vHitEnemies;
        char m_vHitEnemies[0x18]; // 0xba0        
        [[maybe_unused]] std::uint8_t pad_0xbb8[0x1c]; // 0xbb8
        client::ParticleIndex_t m_PreviewEffect; // 0xbd4        
        [[maybe_unused]] std::uint8_t pad_0xbd8[0x1c0]; // 0xbd8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vStrikeVel; // 0xd98        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flStartHeight; // 0xda4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_LashDownStrike because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_LashDownStrike) == 0xda8);
};
