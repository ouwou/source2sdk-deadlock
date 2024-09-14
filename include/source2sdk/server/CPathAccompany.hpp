#pragma once
#include "source2sdk/client/PathAccompanyNode_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x4f8
    // Has VTable
    #pragma pack(push, 1)
    class CPathAccompany : public server::CBaseEntity
    {
    public:
        // m_vecNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::PathAccompanyNode_t> m_vecNodes;
        char m_vecNodes[0x18]; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4f0[0x8];
        
        // Datamap fields:
        // CUtlSymbolLarge pathNodes; // 0x7fffffff
        // CUtlSymbolLarge pathNodeRadiusScales; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPathAccompany because it is not a standard-layout class
    static_assert(sizeof(CPathAccompany) == 0x4f8);
};
