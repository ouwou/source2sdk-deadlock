#pragma once
#include "smartprops/CSmartPropElement.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x140
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Model"
	// MPropertyDescription "Places a model as the child of an element."
	// MVDataOutlinerAssetNameExpr
	class CSmartPropElement_Model : public smartprops::CSmartPropElement
	{
	public:
		// MPropertyDescription "Name of the model resource (.vmdl) to place."
		// MPropertyAutoRebuildOnChange
		CSmartPropAttributeModelName m_sModelName; // 0x80		
		// MPropertyAttributeEditor "SmartPropAttributeEditor( MaterialGroup:m_sModelName )"
		// MPropertyFriendlyName "Material Group"
		// MPropertyDescription "Specifies the name of the material group (skin) to use when displaying the specified model."
		CSmartPropAttributeMaterialGroup m_MaterialGroupName; // 0xc0		
		// MPropertyDescription "Scale factor (may be non-uniform) to be applied directly to the model (in the model's local space)."
		CSmartPropAttributeVector m_vModelScale; // 0x100		
	};
};
