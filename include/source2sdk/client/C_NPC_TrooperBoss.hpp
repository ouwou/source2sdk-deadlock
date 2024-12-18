#pragma once
#include "source2sdk/client/CCitadelPlayerClipComponent.hpp"
#include "source2sdk/client/C_NPC_Trooper.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x14e0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelPlayerClipComponent::Storage_t m_CCitadelPlayerClipComponent"
    // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutStart"
    // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutEnd"
    #pragma pack(push, 1)
    class C_NPC_TrooperBoss : public client::C_NPC_Trooper
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelPlayerClipComponent"
        // metadata: MNetworkAlias "CCitadelPlayerClipComponent"
        // metadata: MNetworkTypeAlias "CCitadelPlayerClipComponent"
        client::CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent; // 0x14a8        
        [[maybe_unused]] std::uint8_t pad_0x14c8[0xc]; // 0x14c8
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flFadeOutStart; // 0x14d4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flFadeOutEnd; // 0x14d8        
        [[maybe_unused]] std::uint8_t pad_0x14dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_NPC_TrooperBoss because it is not a standard-layout class
    static_assert(sizeof(C_NPC_TrooperBoss) == 0x14e0);
};
