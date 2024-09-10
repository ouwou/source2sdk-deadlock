#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0xba8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iBonusHealth"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
    #pragma pack(push, 1)
    class CCitadel_Ability_UltCombo : public server::CCitadelBaseAbility
    {
    public:
        // m_hTargetComboModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifier> m_hTargetComboModifier;
        char m_hTargetComboModifier[0x18]; // 0xad8        
        entity2::GameTime_t m_flLastAttackTime; // 0xaf0        
        int32_t m_nAttackNum; // 0xaf4        
        [[maybe_unused]] std::uint8_t pad_0xaf8[0xa8]; // 0xaf8
        // metadata: MNetworkEnable
        int32_t m_iBonusHealth; // 0xba0        
        // metadata: MNetworkEnable
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0xba4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_UltCombo because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_UltCombo) == 0xba8);
};
