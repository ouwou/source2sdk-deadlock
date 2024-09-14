#pragma once
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe20
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flDashEndTime"
    // static metadata: MNetworkVarNames "bool m_bIsSpeedBursting"
    #pragma pack(push, 1)
    class CCitadel_Ability_FlameDash : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flDashEndTime; // 0xc70        
        // metadata: MNetworkEnable
        bool m_bIsSpeedBursting; // 0xc88        
        [[maybe_unused]] std::uint8_t pad_0xc89[0x197];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_FlameDash because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_FlameDash) == 0xe20);
};
