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
    // Size: 0xb38
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flDashCastStartTime"
    // static metadata: MNetworkVarNames "Vector m_vDashCastDir"
    #pragma pack(push, 1)
    class CCitadelBaseDashCastAbility : public server::CCitadelBaseAbility
    {
    public:
        // m_hAbilityToTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hAbilityToTrigger;
        char m_hAbilityToTrigger[0x4]; // 0xae8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flDashCastStartTime; // 0xaec        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vDashCastDir; // 0xaf0        
        [[maybe_unused]] std::uint8_t pad_0xafc[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelBaseDashCastAbility because it is not a standard-layout class
    static_assert(sizeof(CCitadelBaseDashCastAbility) == 0xb38);
};
