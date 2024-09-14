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
    class CCitadelBaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xaf8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbilityToTrigger"
    // static metadata: MNetworkVarNames "GameTime_t m_SwappedToTime"
    #pragma pack(push, 1)
    class CCitadelBaseTriggerAbility : public server::CCitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // m_hAbilityToTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hAbilityToTrigger;
        char m_hAbilityToTrigger[0x4]; // 0xae8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_SwappedToTime; // 0xaec        
        [[maybe_unused]] std::uint8_t pad_0xaf0[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelBaseTriggerAbility because it is not a standard-layout class
    static_assert(sizeof(CCitadelBaseTriggerAbility) == 0xaf8);
};
