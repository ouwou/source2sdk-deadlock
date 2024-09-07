#pragma once
#include "animationsystem/HSequence.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x40
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCachedPose
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		CUtlVector<CTransform> m_transforms; // 0x8		
		CUtlVector<float> m_morphWeights; // 0x20		
		animationsystem::HSequence m_hSequence; // 0x38		
		float m_flCycle; // 0x3c		
	};
};
