#pragma once
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
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
    // Size: 0xcb0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flDashEndTime"
    // static metadata: MNetworkVarNames "bool m_bIsSpeedBursting"
    #pragma pack(push, 1)
    class CCitadel_Ability_FlameDash : public server::CCitadelBaseAbility
    {
    public:
        // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHitEntities;
        char m_vecHitEntities[0x18]; // 0xae8        
        // metadata: MNetworkEnable
        server::CCitadelAutoScaledTime m_flDashEndTime; // 0xb00        
        // metadata: MNetworkEnable
        bool m_bIsSpeedBursting; // 0xb18        
        [[maybe_unused]] std::uint8_t pad_0xb19[0x197];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_FlameDash because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_FlameDash) == 0xcb0);
};
