#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 16
	// Size: 0x40
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CPathParameters
	{
	public:
		// MPropertyFriendlyName "start control point number"
		int32_t m_nStartControlPointNumber; // 0x0		
		// MPropertyFriendlyName "end control point number"
		int32_t m_nEndControlPointNumber; // 0x4		
		// MPropertyFriendlyName "bulge control 0=random 1=orientation of start pnt 2=orientation of end point"
		int32_t m_nBulgeControl; // 0x8		
		// MPropertyFriendlyName "random bulge"
		float m_flBulge; // 0xc		
		// MPropertyFriendlyName "mid point position"
		float m_flMidPoint; // 0x10		
		// MPropertyFriendlyName "Offset from curve start point for path start"
		// MVectorIsCoordinate
		Vector m_vStartPointOffset; // 0x14		
		// MPropertyFriendlyName "Offset from curve midpoint for curve center"
		// MVectorIsCoordinate
		Vector m_vMidPointOffset; // 0x20		
		// MPropertyFriendlyName "Offset from control point for path end"
		// MVectorIsCoordinate
		Vector m_vEndOffset; // 0x2c		
	};
};
