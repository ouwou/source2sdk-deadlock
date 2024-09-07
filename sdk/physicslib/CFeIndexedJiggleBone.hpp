#pragma once
#include "physicslib/CFeJiggleBone.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 4
	// Size: 0xa4
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CFeIndexedJiggleBone
	{
	public:
		uint32_t m_nNode; // 0x0		
		uint32_t m_nJiggleParent; // 0x4		
		physicslib::CFeJiggleBone m_jiggleBone; // 0x8		
	};
};
