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
	// Size: 0x490
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Transform: Trace To Line"
	// MPropertyDescription "Perform a trace from a specified origin point to a the closest point on a line."
	// MVDataClassGroup
	// MVDataExperimentalNodeSet
	class CSmartPropOperation_TraceToLine : public smartprops::CSmartPropOperation_Trace
	{
	public:
		// MPropertyStartGroup "+Line End Point A"
		// MPropertyDescription "End point of the line to trace to."
		CSmartPropAttributeVector m_EndPointA; // 0x310		
		// MPropertyDescription "Coordinate space the end point is specified in."
		smartprops::CSmartPropAttributeCoordinateSpace m_EndPointSpaceA; // 0x350		
		// MPropertyStartGroup "+Line End Point B"
		// MPropertyDescription "End point of the line to trace to."
		CSmartPropAttributeVector m_EndPointB; // 0x390		
		// MPropertyDescription "Coordinate space the end point is specified in."
		smartprops::CSmartPropAttributeCoordinateSpace m_EndPointSpaceB; // 0x3d0		
		// MPropertyStartGroup "+Trace Away"
		// MPropertyFriendlyName "Trace away from line"
		// MPropertyDescription "If enabled, instead of tracing from the origin to the line, trace away from the line for the specified distance starting at the origin."
		CSmartPropAttributeBool m_bTraceAway; // 0x410		
		// MPropertyReadonlyExpr
		// MPropertyDescription "Maximum length of the trace. Surfaces beyond this distance will not be hit."
		CSmartPropAttributeFloat m_flTraceLength; // 0x450		
	};
};
