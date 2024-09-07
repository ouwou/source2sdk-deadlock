#pragma once
#include "physicslib/CFeJiggleBone.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 16
	// Size: 0xd0
	// 
	// MGetKV3ClassDefaults
	class CFeNamedJiggleBone
	{
	public:
		CUtlString m_strParentBone; // 0x0		
		CTransform m_transform; // 0x10		
		uint32_t m_nJiggleParent; // 0x30		
		physicslib::CFeJiggleBone m_jiggleBone; // 0x34		
	};
};
