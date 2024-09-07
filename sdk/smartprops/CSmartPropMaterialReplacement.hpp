#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x80
	// 
	// MGetKV3ClassDefaults
	class CSmartPropMaterialReplacement
	{
	public:
		// MPropertyAttributeEditor "SmartPropAttributeEditor(MaterialInSmartProp)"
		// MPropertyFriendlyName "Original Material"
		// MPropertyDescription "Original material to replace. This is the material specified in the model, including any material group asignment within the model. Does not consider any existing material overrides specified within the smart prop."
		CSmartPropAttributeMaterialName m_OriginalMaterial; // 0x0		
		// MPropertyFriendlyName "New Material"
		// MPropertyDescription "New material to replace the original material with."
		CSmartPropAttributeMaterialName m_ReplacementMaterial; // 0x40		
	};
};
