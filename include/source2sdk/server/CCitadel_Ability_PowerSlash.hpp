#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseYamatoAbility.hpp"
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
    // Size: 0xd98
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_nPowerLevel"
    #pragma pack(push, 1)
    class CCitadel_Ability_PowerSlash : public server::CCitadelBaseYamatoAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae0[0xc]; // 0xae0
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nPowerLevel; // 0xaec        
        client::ParticleIndex_t m_nCastParticle; // 0xaf0        
        [[maybe_unused]] std::uint8_t pad_0xaf4[0x2a4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PowerSlash because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_PowerSlash) == 0xd98);
};
