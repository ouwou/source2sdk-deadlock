#pragma once
#include "smartprops/CSmartPropAttributeCoordinateSpace.hpp"
#include "smartprops/CSmartPropOperation_Trace.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x3d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Transform: Trace In Direction"
	// MPropertyDescription "Perform a trace in a direction from a specified origin and stop when a surface is hit."
	// MVDataClassGroup
	class CSmartPropOperation_TraceInDirection : public smartprops::CSmartPropOperation_Trace
	{
	public:
		// MPropertyStartGroup "+Trace Direction"
		CSmartPropAttributeVector m_vTraceDirection; // 0x310		
		// MPropertyDescription "Specifies the coordinate space the trace direction vector is specified in."
		smartprops::CSmartPropAttributeCoordinateSpace m_DirectionSpace; // 0x350		
		// MPropertyDescription "Maximum length of the trace. Surfaces beyond this distance will not be hit."
		CSmartPropAttributeFloat m_flTraceLength; // 0x390		
	};
};
