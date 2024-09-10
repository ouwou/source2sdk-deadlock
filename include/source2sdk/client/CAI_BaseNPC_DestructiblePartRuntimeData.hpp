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
    // Size: 0x20
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAI_BaseNPC_DestructiblePartRuntimeData
    {
    public:
        // m_nHitboxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_nHitboxes;
        char m_nHitboxes[0x18]; // 0x0        
        int32_t m_nHealthRemaining; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAI_BaseNPC_DestructiblePartRuntimeData, m_nHitboxes) == 0x0);
    static_assert(offsetof(CAI_BaseNPC_DestructiblePartRuntimeData, m_nHealthRemaining) == 0x18);
    
    static_assert(sizeof(CAI_BaseNPC_DestructiblePartRuntimeData) == 0x20);
};
