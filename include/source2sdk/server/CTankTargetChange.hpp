#pragma once
#include "source2sdk/entity2/CVariantDefaultAllocator.hpp"
#include "source2sdk/server/CPointEntity.hpp"
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
    // Size: 0x4f0
    // Has VTable
    #pragma pack(push, 1)
    class CTankTargetChange : public server::CPointEntity
    {
    public:
        // m_newTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CVariantBase<entity2::CVariantDefaultAllocator> m_newTarget;
        char m_newTarget[0x10]; // 0x4d8        
        CUtlSymbolLarge m_newTargetName; // 0x4e8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTankTargetChange because it is not a standard-layout class
    static_assert(sizeof(CTankTargetChange) == 0x4f0);
};
