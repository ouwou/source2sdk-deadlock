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
    // Size: 0xd30
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iBonusHealth"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
    #pragma pack(push, 1)
    class CCitadel_Ability_UltCombo : public client::C_CitadelBaseAbility
    {
    public:
        entity2::GameTime_t m_flLastAttackTime; // 0xc78        
        int32_t m_nAttackNum; // 0xc7c        
        [[maybe_unused]] std::uint8_t pad_0xc80[0xa8]; // 0xc80
        // metadata: MNetworkEnable
        int32_t m_iBonusHealth; // 0xd28        
        // metadata: MNetworkEnable
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0xd2c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_UltCombo because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_UltCombo) == 0xd30);
};
