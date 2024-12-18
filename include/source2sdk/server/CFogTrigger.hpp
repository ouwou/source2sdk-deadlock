#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/fogparams_t.hpp"
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
    // Size: 0x9e0
    // Has VTable
    #pragma pack(push, 1)
    class CFogTrigger : public server::CBaseTrigger
    {
    public:
        server::fogparams_t m_fog; // 0x978        
        
        // Datamap fields:
        // Color m_fog.colorPrimary; // 0x98c
        // Color m_fog.colorSecondary; // 0x990
        // Vector m_fog.dirPrimary; // 0x980
        // bool m_fog.enable; // 0x9dc
        // bool m_fog.blend; // 0x9dd
        // float m_fog.start; // 0x99c
        // float m_fog.end; // 0x9a0
        // float m_fog.farz; // 0x9a4
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFogTrigger because it is not a standard-layout class
    static_assert(sizeof(CFogTrigger) == 0x9e0);
};
