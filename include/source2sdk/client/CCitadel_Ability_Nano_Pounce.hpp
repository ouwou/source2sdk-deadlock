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
    // Size: 0xe78
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsFriendlyTarget"
    // static metadata: MNetworkVarNames "EHANDLE m_hTarget"
    // static metadata: MNetworkVarNames "Vector m_vAttackTarget"
    // static metadata: MNetworkVarNames "GameTime_t m_flPounceStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flToTargetStartTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Nano_Pounce : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc60[0x1f8]; // 0xc60
        // metadata: MNetworkEnable
        bool m_bIsFriendlyTarget; // 0xe58        
        [[maybe_unused]] std::uint8_t pad_0xe59[0x3]; // 0xe59
        // metadata: MNetworkEnable
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0xe5c        
        // metadata: MNetworkEnable
        Vector m_vAttackTarget; // 0xe60        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flPounceStartTime; // 0xe6c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flToTargetStartTime; // 0xe70        
        [[maybe_unused]] std::uint8_t pad_0xe74[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Nano_Pounce because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Nano_Pounce) == 0xe78);
};
