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
    // Size: 0x9f8
    // Has VTable
    #pragma pack(push, 1)
    class CFogTrigger : public server::CBaseTrigger
    {
    public:
        server::fogparams_t m_fog; // 0x990        
        
        // Datamap fields:
        // Color m_fog.colorPrimary; // 0x9a4
        // Color m_fog.colorSecondary; // 0x9a8
        // Vector m_fog.dirPrimary; // 0x998
        // bool m_fog.enable; // 0x9f4
        // bool m_fog.blend; // 0x9f5
        // float m_fog.start; // 0x9b4
        // float m_fog.end; // 0x9b8
        // float m_fog.farz; // 0x9bc
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFogTrigger because it is not a standard-layout class
    static_assert(sizeof(CFogTrigger) == 0x9f8);
};
