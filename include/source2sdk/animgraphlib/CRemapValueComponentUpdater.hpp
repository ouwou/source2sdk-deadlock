#pragma once
#include "source2sdk/animgraphlib/CAnimComponentUpdater.hpp"
#include "source2sdk/animgraphlib/CRemapValueUpdateItem.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x48
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CRemapValueComponentUpdater : public animgraphlib::CAnimComponentUpdater
    {
    public:
        // m_items has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::CRemapValueUpdateItem> m_items;
        char m_items[0x18]; // 0x30        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRemapValueComponentUpdater because it is not a standard-layout class
    static_assert(sizeof(CRemapValueComponentUpdater) == 0x48);
};
