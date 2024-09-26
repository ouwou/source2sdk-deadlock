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
    class C_CitadelBaseAbility;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc88
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbilityToTrigger"
    // static metadata: MNetworkVarNames "GameTime_t m_SwappedToTime"
    #pragma pack(push, 1)
    class CCitadelBaseTriggerAbility : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // m_hAbilityToTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CitadelBaseAbility> m_hAbilityToTrigger;
        char m_hAbilityToTrigger[0x4]; // 0xc78        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_SwappedToTime; // 0xc7c        
        [[maybe_unused]] std::uint8_t pad_0xc80[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelBaseTriggerAbility because it is not a standard-layout class
    static_assert(sizeof(CCitadelBaseTriggerAbility) == 0xc88);
};
