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
    // Size: 0xf10
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vStrikeVel"
    // static metadata: MNetworkVarNames "float m_flStartHeight"
    #pragma pack(push, 1)
    class CCitadel_Ability_LashDownStrike : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc80[0xa8]; // 0xc80
        entity2::GameTime_t m_ImpactTime; // 0xd28        
        Vector m_vDamagePos; // 0xd2c        
        [[maybe_unused]] std::uint8_t pad_0xd38[0x4]; // 0xd38
        client::ParticleIndex_t m_PreviewEffect; // 0xd3c        
        [[maybe_unused]] std::uint8_t pad_0xd40[0x1c0]; // 0xd40
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vStrikeVel; // 0xf00        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flStartHeight; // 0xf0c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_LashDownStrike because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_LashDownStrike) == 0xf10);
};
