#pragma once
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "smartprops/CSmartPropVariable.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x108
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Material"
	// MPropertyDescription "Material Asset Variable"
	class CSmartPropVariable_Material : public smartprops::CSmartPropVariable
	{
	public:
		// MPropertyFriendlyName "Default Material"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIMaterial2>> m_DefaultValue; // 0x28		
	};
};
