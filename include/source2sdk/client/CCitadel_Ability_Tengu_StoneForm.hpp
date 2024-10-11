#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xe58
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flLandedTime"
    // static metadata: MNetworkVarNames "bool m_bLanded"
    // static metadata: MNetworkVarNames "bool m_bFalling"
    // static metadata: MNetworkVarNames "bool m_bInStoneForm"
    // static metadata: MNetworkVarNames "float m_flStartHeight"
    #pragma pack(push, 1)
    class CCitadel_Ability_Tengu_StoneForm : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc80[0x1c0]; // 0xc80
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flStartTime; // 0xe40        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flLandedTime; // 0xe44        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bLanded; // 0xe48        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bFalling; // 0xe49        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bInStoneForm; // 0xe4a        
        [[maybe_unused]] std::uint8_t pad_0xe4b[0x1]; // 0xe4b
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flStartHeight; // 0xe4c        
        client::ParticleIndex_t m_nStoneFormEffect; // 0xe50        
        [[maybe_unused]] std::uint8_t pad_0xe54[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tengu_StoneForm because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tengu_StoneForm) == 0xe58);
};
