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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x10
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct NPCAttachmentSpawnKV_t
    {
    public:
        CUtlString m_sKey; // 0x0        
        CUtlString m_sValue; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(NPCAttachmentSpawnKV_t, m_sKey) == 0x0);
    static_assert(offsetof(NPCAttachmentSpawnKV_t, m_sValue) == 0x8);
    
    static_assert(sizeof(NPCAttachmentSpawnKV_t) == 0x10);
};
