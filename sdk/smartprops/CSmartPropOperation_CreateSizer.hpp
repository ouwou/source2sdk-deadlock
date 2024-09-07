#pragma once
#include "smartprops/CSmartPropTransformOperation.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x3c8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Create Sizer"
	// MPropertyDescription "Create a sizer that will be displayed at the current location, allowing the user to manipulate the specified set of size values."
	// MVDataClassGroup
	class CSmartPropOperation_CreateSizer : public smartprops::CSmartPropTransformOperation
	{
	public:
		// MPropertyFriendlyName "Name"
		// MPropertyDescription "Name used to identify the sizer. Must be unique within the paraent element."
		CUtlString m_Name; // 0x50		
		// MPropertyFriendlyName "Display Model"
		// MPropertyDescription "If enabled a model will be displayed at the position of the sizer that can be used to select the sizer in Hammer."
		CSmartPropAttributeBool m_bDisplayModel; // 0x58		
		// MPropertyGroupName "X-Axis Size"
		CSmartPropAttributeFloat m_flInitialMinX; // 0x98		
		// MPropertyGroupName "X-Axis Size"
		CSmartPropAttributeFloat m_flInitialMaxX; // 0xd8		
		// MPropertyGroupName "X-Axis Size"
		CSmartPropAttributeFloat m_flConstraintMinX; // 0x118		
		// MPropertyGroupName "X-Axis Size"
		CSmartPropAttributeFloat m_flConstraintMaxX; // 0x158		
		// MPropertyGroupName "X-Axis Size"
		// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
		CUtlString m_OutputVariableMinX; // 0x198		
		// MPropertyGroupName "X-Axis Size"
		// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
		CUtlString m_OutputVariableMaxX; // 0x1a0		
		// MPropertyGroupName "Y-Axis Size"
		CSmartPropAttributeFloat m_flInitialMinY; // 0x1a8		
		// MPropertyGroupName "Y-Axis Size"
		CSmartPropAttributeFloat m_flInitialMaxY; // 0x1e8		
		// MPropertyGroupName "Y-Axis Size"
		CSmartPropAttributeFloat m_flConstraintMinY; // 0x228		
		// MPropertyGroupName "Y-Axis Size"
		CSmartPropAttributeFloat m_flConstraintMaxY; // 0x268		
		// MPropertyGroupName "Y-Axis Size"
		// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
		CUtlString m_OutputVariableMinY; // 0x2a8		
		// MPropertyGroupName "Y-Axis Size"
		// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
		CUtlString m_OutputVariableMaxY; // 0x2b0		
		// MPropertyGroupName "Z-Axis Size"
		CSmartPropAttributeFloat m_flInitialMinZ; // 0x2b8		
		// MPropertyGroupName "Z-Axis Size"
		CSmartPropAttributeFloat m_flInitialMaxZ; // 0x2f8		
		// MPropertyGroupName "Z-Axis Size"
		CSmartPropAttributeFloat m_flConstraintMinZ; // 0x338		
		// MPropertyGroupName "Z-Axis Size"
		CSmartPropAttributeFloat m_flConstraintMaxZ; // 0x378		
		// MPropertyGroupName "Z-Axis Size"
		// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
		CUtlString m_OutputVariableMinZ; // 0x3b8		
		// MPropertyGroupName "Z-Axis Size"
		// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
		CUtlString m_OutputVariableMaxZ; // 0x3c0		
	};
};
