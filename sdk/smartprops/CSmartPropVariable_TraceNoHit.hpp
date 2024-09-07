#pragma once
#include "smartprops/CSmartPropVariable.hpp"
#include "smartprops/TraceNoHitResult_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x30
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Trace Miss Behavior"
	// MPropertyDescription "Specified what to do when a trace does not hit a surface."
	// MVDataClassGroup
	class CSmartPropVariable_TraceNoHit : public smartprops::CSmartPropVariable
	{
	public:
		smartprops::TraceNoHitResult_t m_DefaultValue; // 0x28		
	};
};
