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
	// Size: 0x410
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Transform: Trace To Point"
	// MPropertyDescription "Perform a trace between the specified origin and a specified target point."
	// MVDataClassGroup
	// MVDataExperimentalNodeSet
	class CSmartPropOperation_TraceToPoint : public smartprops::CSmartPropOperation_Trace
	{
	public:
		// MPropertyStartGroup "+Target Point"
		// MPropertyDescription "The target point to trace to from the origin."
		CSmartPropAttributeVector m_TargetPoint; // 0x310		
		// MPropertyDescription "Specifies the coordinate space the target point is specified in."
		smartprops::CSmartPropAttributeCoordinateSpace m_TargetPointSpace; // 0x350		
		// MPropertyStartGroup "+Trace Away"
		// MPropertyFriendlyName "Trace away from point"
		// MPropertyDescription "If enabled, instead of tracing from the origin to the target point, trace away from the target point for the specified distance starting at the origin."
		CSmartPropAttributeBool m_bTraceAway; // 0x390		
		// MPropertyReadonlyExpr
		// MPropertyDescription "Maximum length of the trace. Surfaces beyond this distance will not be hit."
		CSmartPropAttributeFloat m_flTraceLength; // 0x3d0		
	};
};
