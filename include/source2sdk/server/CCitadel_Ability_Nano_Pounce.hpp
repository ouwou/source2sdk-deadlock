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
    // Size: 0xcf0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsFriendlyTarget"
    // static metadata: MNetworkVarNames "EHANDLE m_hTarget"
    // static metadata: MNetworkVarNames "Vector m_vAttackTarget"
    // static metadata: MNetworkVarNames "GameTime_t m_flPounceStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flToTargetStartTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Nano_Pounce : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xad8[0x1f8]; // 0xad8
        // metadata: MNetworkEnable
        bool m_bIsFriendlyTarget; // 0xcd0        
        [[maybe_unused]] std::uint8_t pad_0xcd1[0x3]; // 0xcd1
        // metadata: MNetworkEnable
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0xcd4        
        // metadata: MNetworkEnable
        Vector m_vAttackTarget; // 0xcd8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flPounceStartTime; // 0xce4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flToTargetStartTime; // 0xce8        
        [[maybe_unused]] std::uint8_t pad_0xcec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Nano_Pounce because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Nano_Pounce) == 0xcf0);
};
