#pragma once
#include "source2sdk/server/CTriggerNeutralShield.hpp"
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
    // Size: 0x9a8
    // Has VTable
    #pragma pack(push, 1)
    class CTriggerNeutralIdles : public server::CTriggerNeutralShield
    {
    public:
        // Datamap fields:
        // void m_vecPlayers; // 0x978
        // void m_vecNeutrals; // 0x990
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CTriggerNeutralIdles) == 0x9a8);
};
