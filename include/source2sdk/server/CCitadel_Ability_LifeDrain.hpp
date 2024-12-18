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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb18
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_tDrainLifeStopTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_LifeDrain : public server::CCitadelBaseAbility
    {
    public:
        // m_vecModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CModifierHandleTyped<server::CCitadelModifier>> m_vecModifiers;
        char m_vecModifiers[0x18]; // 0xaf8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_tDrainLifeStopTime; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xb14[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_LifeDrain because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_LifeDrain) == 0xb18);
};
