#pragma once
#include "smartprops/CSmartPropAttributePathPositions.hpp"
#include "smartprops/CSmartPropSelectionCriteria.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x188
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MVDataComponentValidGrandParents
	// MPropertyFriendlyName "Valid Path Positions"
	// MPropertyDescription "Specifies the path positions at which this element may appear."
	class CSmartPropSelectionCriteria_PathPosition : public smartprops::CSmartPropSelectionCriteria
	{
	public:
		// MPropertyDescription "Specifies the method to use to determine which positions this element should be placed at along the path."
		smartprops::CSmartPropAttributePathPositions m_PlaceAtPositions; // 0x48		
		// MPropertySuppressExpr "( m_PlaceAtPositions == ALL ) || ( m_PlaceAtPositions == START_AND_END ) || ( m_PlaceAtPositions == CONTROL_POINTS )"
		// MPropertyDescription "Specifies the spacing between positions. For example, a value of 1 will place the element at very position, 2 every other position, 3 every third position"
		CSmartPropAttributeInt m_nPlaceEveryNthPosition; // 0x88		
		// MPropertySuppressExpr "( m_PlaceAtPositions == ALL ) || ( m_PlaceAtPositions == START_AND_END ) || ( m_PlaceAtPositions == CONTROL_POINTS )"
		// MPropertyDescription "Specifies an offset to use when determining the Nth position to place an element at. For example if placing at every third position with an offset of 0, an element will appear at positions 1, 4, 7, and so on. But if an offset of 2 is set instead of 0, then an element will appear at positions 3, 6, and 9 and so on."
		CSmartPropAttributeInt m_nNthPositionIndexOffset; // 0xc8		
		// MPropertyDescription "Should this element be placed at the first positions on the path"
		CSmartPropAttributeBool m_bAllowAtStart; // 0x108		
		// MPropertyDescription "Should this element be placed at the last positions on the path"
		CSmartPropAttributeBool m_bAllowAtEnd; // 0x148		
	};
};
