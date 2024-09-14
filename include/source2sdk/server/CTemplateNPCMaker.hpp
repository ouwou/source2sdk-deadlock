#pragma once
#include "source2sdk/server/CBaseNPCMaker.hpp"
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
    // Size: 0x5e0
    // Has VTable
    #pragma pack(push, 1)
    class CTemplateNPCMaker : public server::CBaseNPCMaker
    {
    public:
        CUtlSymbolLarge m_iszWorldName; // 0x5d0        
        CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x5d8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTemplateNPCMaker because it is not a standard-layout class
    static_assert(sizeof(CTemplateNPCMaker) == 0x5e0);
};
