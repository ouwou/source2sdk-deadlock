#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct CCitadel_Ability_CardToss__Card_t
    {
    public:
        int32_t m_nCardNum; // 0x0        
        client::ParticleIndex_t m_nFxIdx; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCitadel_Ability_CardToss__Card_t, m_nCardNum) == 0x0);
    static_assert(offsetof(CCitadel_Ability_CardToss__Card_t, m_nFxIdx) == 0x4);
    
    static_assert(sizeof(CCitadel_Ability_CardToss__Card_t) == 0x8);
};
