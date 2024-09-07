#pragma once
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
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
	// MPropertyFriendlyName "Model"
	// MPropertyDescription "Model Asset Variable"
	class CSmartPropVariable_Model : public smartprops::CSmartPropVariable
	{
	public:
		// MPropertyFriendlyName "Default Model"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_DefaultValue; // 0x28		
	};
};
