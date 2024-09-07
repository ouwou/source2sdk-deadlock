#pragma once
#include "smartprops/CSmartPropMaterialReplacement.hpp"
#include "smartprops/CSmartPropOperation.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0xa8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Material Override"
	// MPropertyDescription "Specifies a table of material replacements to apply to all following models. Mapping goes from the material specified by the model (including material group selection) to the replacement material. Previous material overrides are not considered when determining the base material."
	// MVDataClassGroup
	class CSmartPropOperation_MaterialOverride : public smartprops::CSmartPropOperation
	{
	public:
		// MPropertyFriendlyName "Clear Active Overrides"
		// MPropertyDescription "If enabled, clear any previous material overrides, so that only the material replacements specified in this table will be active."
		CSmartPropAttributeBool m_bClearCurrentOverrides; // 0x50		
		// MPropertyAutoExpandSelf
		// MPropertyFriendlyName "Material Replacements"
		// MPropertyDescription "Table specifying pairs of existing materials and the material to replace them with."
		CUtlVector<smartprops::CSmartPropMaterialReplacement> m_MaterialReplacements; // 0x90		
	};
};
