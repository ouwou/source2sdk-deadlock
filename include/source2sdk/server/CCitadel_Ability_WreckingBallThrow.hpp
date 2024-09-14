#pragma once
#include "source2sdk/server/CCitadelBaseTriggerAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCitadel_Ability_WreckingBall;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb00
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_WreckingBallThrow : public server::CCitadelBaseTriggerAbility
    {
    public:
        // m_hWreckingBallAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadel_Ability_WreckingBall> m_hWreckingBallAbility;
        char m_hWreckingBallAbility[0x4]; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xafc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_WreckingBallThrow because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_WreckingBallThrow) == 0xb00);
};
