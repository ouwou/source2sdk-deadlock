#pragma once
#include "smartprops/CSmartPropAttributeGridOriginMode.hpp"
#include "smartprops/CSmartPropAttributeGridPlacementMode.hpp"
#include "smartprops/CSmartPropElement_Group.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x3a0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Layout Grid"
	// MPropertyDescription "Generates set of child instances arranged in a regular grid layout."
	class CSmartPropElement_Layout2DGrid : public smartprops::CSmartPropElement_Group
	{
	public:
		// MPropertyDescription "Overall grid dimension along X axis."
		// MPropertyAttributeRange "biased 0 4096"
		CSmartPropAttributeFloat m_flWidth; // 0xa0		
		// MPropertyDescription "Overall grid dimension along Y axis."
		// MPropertyAttributeRange "biased 0 4096"
		CSmartPropAttributeFloat m_flLength; // 0xe0		
		// MPropertyDescription "Layout length vertically (Along Z axis instead of Y)."
		CSmartPropAttributeBool m_bVerticalLength; // 0x120		
		// MPropertyDescription "ARRAY: Grid is a specific number of grid divisions. FILL: The boundary is filled with as many as will fit at the specified cell spacing."
		smartprops::CSmartPropAttributeGridPlacementMode m_GridArrangement; // 0x160		
		// MPropertyDescription "Specifies the overall grid origin location. Corner origin grids default to quadrant I, but may be expressed in others using negative values for Width and/or Length."
		smartprops::CSmartPropAttributeGridOriginMode m_GridOriginMode; // 0x1a0		
		// MPropertyDescription "Grid segments along width axis."
		// MPropertyAttributeRange "1 64"
		// MPropertySuppressExpr "m_GridArrangement == FILL"
		CSmartPropAttributeInt m_nCountW; // 0x1e0		
		// MPropertyDescription "Grid segments along Length axis."
		// MPropertyAttributeRange "1 64"
		// MPropertySuppressExpr "m_GridArrangement == FILL"
		CSmartPropAttributeInt m_nCountL; // 0x220		
		// MPropertyDescription "Minimum Width of filled grid cells."
		// MPropertyAttributeRange "biased 0 1024"
		// MPropertySuppressExpr "m_GridArrangement == SEGMENT"
		CSmartPropAttributeFloat m_flSpacingWidth; // 0x260		
		// MPropertyDescription "Minimum Length of filled grid cells."
		// MPropertyAttributeRange "biased 0 1024"
		// MPropertySuppressExpr "m_GridArrangement == SEGMENT"
		CSmartPropAttributeFloat m_flSpacingLength; // 0x2a0		
		// MPropertyDescription "Shifts every other cell row and/or column."
		// MPropertySuppressExpr "m_GridArrangement == FILL"
		CSmartPropAttributeBool m_bAlternateShift; // 0x2e0		
		// MPropertyDescription "Vary cell shift in X."
		// MPropertyAttributeRange "biased 0 1024"
		// MPropertySuppressExpr "m_GridArrangement == FILL || m_bAlternateShift == false"
		CSmartPropAttributeFloat m_flAlternateShiftWidth; // 0x320		
		// MPropertyDescription "Vary cell shift in Y."
		// MPropertyAttributeRange "biased 0 1024"
		// MPropertySuppressExpr "m_GridArrangement == FILL || m_bAlternateShift == false"
		CSmartPropAttributeFloat m_flAlternateShiftLength; // 0x360		
	};
};
