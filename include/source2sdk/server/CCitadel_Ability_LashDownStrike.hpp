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
    // Size: 0xdc8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vStrikeVel"
    // static metadata: MNetworkVarNames "float m_flStartHeight"
    #pragma pack(push, 1)
    class CCitadel_Ability_LashDownStrike : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0xa8]; // 0xaf8
        entity2::GameTime_t m_ImpactTime; // 0xba0        
        Vector m_vDamagePos; // 0xba4        
        Vector m_vDamageDir; // 0xbb0        
        [[maybe_unused]] std::uint8_t pad_0xbbc[0x4]; // 0xbbc
        // m_vHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vHitEnemies;
        char m_vHitEnemies[0x18]; // 0xbc0        
        [[maybe_unused]] std::uint8_t pad_0xbd8[0x1c]; // 0xbd8
        client::ParticleIndex_t m_PreviewEffect; // 0xbf4        
        [[maybe_unused]] std::uint8_t pad_0xbf8[0x1c0]; // 0xbf8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vStrikeVel; // 0xdb8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flStartHeight; // 0xdc4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_LashDownStrike because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_LashDownStrike) == 0xdc8);
};
