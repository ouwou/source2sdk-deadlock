#pragma once
#include "animgraphlib/JiggleBoneSimSpace.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 4
	// Size: 0x2c
	// Has Trivial Constructor
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct JiggleBoneSettings_t
	{
	public:
		int32_t m_nBoneIndex; // 0x0		
		float m_flSpringStrength; // 0x4		
		float m_flMaxTimeStep; // 0x8		
		float m_flDamping; // 0xc		
		Vector m_vBoundsMaxLS; // 0x10		
		Vector m_vBoundsMinLS; // 0x1c		
		animgraphlib::JiggleBoneSimSpace m_eSimSpace; // 0x28		
	};
};
