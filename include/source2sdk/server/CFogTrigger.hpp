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
    // Size: 0x9a0
    // Has VTable
    #pragma pack(push, 1)
    class CFogTrigger : public server::CBaseTrigger
    {
    public:
        server::fogparams_t m_fog; // 0x938        
        
        // Datamap fields:
        // Color m_fog.colorPrimary; // 0x94c
        // Color m_fog.colorSecondary; // 0x950
        // Vector m_fog.dirPrimary; // 0x940
        // bool m_fog.enable; // 0x99c
        // bool m_fog.blend; // 0x99d
        // float m_fog.start; // 0x95c
        // float m_fog.end; // 0x960
        // float m_fog.farz; // 0x964
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFogTrigger because it is not a standard-layout class
    static_assert(sizeof(CFogTrigger) == 0x9a0);
};
