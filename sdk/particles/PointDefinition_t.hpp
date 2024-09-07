#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 4
	// Size: 0x14
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct PointDefinition_t
	{
	public:
		// MPropertyFriendlyName "Control point"
		int32_t m_nControlPoint; // 0x0		
		// MPropertyFriendlyName "Use local coordinates for offset"
		bool m_bLocalCoords; // 0x4		
	private:
		[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
	public:
		// MPropertyFriendlyName "Offset from control point"
		Vector m_vOffset; // 0x8		
	};
};
