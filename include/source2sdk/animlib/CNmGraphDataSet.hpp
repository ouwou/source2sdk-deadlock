#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmSkeleton.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    class CNmGraphNode::CVariationData;
};

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x60
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmGraphDataSet
    {
    public:
        CGlobalSymbol m_variationID; // 0x0        
        // m_skeleton has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCNmSkeleton> m_skeleton;
        char m_skeleton[0x8]; // 0x8        
        // m_data has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animlib::CNmGraphNode__CVariationData*> m_data;
        char m_data[0x18]; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x28[0x20]; // 0x28
        // m_warnings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_warnings;
        char m_warnings[0x18]; // 0x48        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmGraphDataSet, m_variationID) == 0x0);
    static_assert(offsetof(CNmGraphDataSet, m_skeleton) == 0x8);
    static_assert(offsetof(CNmGraphDataSet, m_data) == 0x10);
    static_assert(offsetof(CNmGraphDataSet, m_warnings) == 0x48);
    
    static_assert(sizeof(CNmGraphDataSet) == 0x60);
};
