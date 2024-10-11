#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x2c
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ObjectivesParams_t
    {
    public:
        int32_t m_GoldPerOrb; // 0x0        
        int32_t m_nTier1GoldKill; // 0x4        
        int32_t m_nTier1GoldOrbs; // 0x8        
        int32_t m_nTier2GoldKill; // 0xc        
        int32_t m_nTier2GoldOrbs; // 0x10        
        int32_t m_nBaseGuardiansGoldKill; // 0x14        
        int32_t m_nBaseGuardiansGoldOrbs; // 0x18        
        int32_t m_nShrinesGoldKill; // 0x1c        
        int32_t m_nShrinesGoldOrbs; // 0x20        
        int32_t m_nPatronPhase1GoldKill; // 0x24        
        int32_t m_nPatronPhase1GoldOrbs; // 0x28        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ObjectivesParams_t, m_GoldPerOrb) == 0x0);
    static_assert(offsetof(ObjectivesParams_t, m_nTier1GoldKill) == 0x4);
    static_assert(offsetof(ObjectivesParams_t, m_nTier1GoldOrbs) == 0x8);
    static_assert(offsetof(ObjectivesParams_t, m_nTier2GoldKill) == 0xc);
    static_assert(offsetof(ObjectivesParams_t, m_nTier2GoldOrbs) == 0x10);
    static_assert(offsetof(ObjectivesParams_t, m_nBaseGuardiansGoldKill) == 0x14);
    static_assert(offsetof(ObjectivesParams_t, m_nBaseGuardiansGoldOrbs) == 0x18);
    static_assert(offsetof(ObjectivesParams_t, m_nShrinesGoldKill) == 0x1c);
    static_assert(offsetof(ObjectivesParams_t, m_nShrinesGoldOrbs) == 0x20);
    static_assert(offsetof(ObjectivesParams_t, m_nPatronPhase1GoldKill) == 0x24);
    static_assert(offsetof(ObjectivesParams_t, m_nPatronPhase1GoldOrbs) == 0x28);
    
    static_assert(sizeof(ObjectivesParams_t) == 0x2c);
};
