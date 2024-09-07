#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 16
	// Size: 0x60
	// Has Trivial Constructor
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class FourCovMatrices3
	{
	public:
		FourVectors m_vDiag; // 0x0		
		fltx4 m_flXY; // 0x30		
		fltx4 m_flXZ; // 0x40		
		fltx4 m_flYZ; // 0x50		
	};
};
