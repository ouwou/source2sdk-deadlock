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
    // Size: 0x5f8
    // Has VTable
    #pragma pack(push, 1)
    class CNPCMaker : public server::CBaseNPCMaker
    {
    public:
        CUtlSymbolLarge m_iszNPCSubClass; // 0x5d0        
        CUtlSymbolLarge m_iszSquadName; // 0x5d8        
        CUtlSymbolLarge m_iszHintGroup; // 0x5e0        
        CUtlSymbolLarge m_RelationshipString; // 0x5e8        
        CUtlSymbolLarge m_ChildTargetName; // 0x5f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPCMaker because it is not a standard-layout class
    static_assert(sizeof(CNPCMaker) == 0x5f8);
};
