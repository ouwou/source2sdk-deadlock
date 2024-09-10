#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x80
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSmartPropMaterialReplacement
    {
    public:
        // metadata: MPropertyAttributeEditor "SmartPropAttributeEditor(MaterialInSmartProp)"
        // metadata: MPropertyFriendlyName "Original Material"
        // metadata: MPropertyDescription "Original material to replace. This is the material specified in the model, including any material group asignment within the model. Does not consider any existing material overrides specified within the smart prop."
        CSmartPropAttributeMaterialName m_OriginalMaterial; // 0x0        
        // metadata: MPropertyFriendlyName "New Material"
        // metadata: MPropertyDescription "New material to replace the original material with."
        CSmartPropAttributeMaterialName m_ReplacementMaterial; // 0x40        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSmartPropMaterialReplacement, m_OriginalMaterial) == 0x0);
    static_assert(offsetof(CSmartPropMaterialReplacement, m_ReplacementMaterial) == 0x40);
    
    static_assert(sizeof(CSmartPropMaterialReplacement) == 0x80);
};
