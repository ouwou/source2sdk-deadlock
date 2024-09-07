#pragma once
#include "animationsystem/CAnimBoneDifference.hpp"
#include "animationsystem/CAnimMorphDifference.hpp"
#include "animationsystem/CAnimUserDifference.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0xa8
	// 
	// MGetKV3ClassDefaults
	class CAnimEncodeDifference
	{
	public:
		CUtlVector<animationsystem::CAnimBoneDifference> m_boneArray; // 0x0		
		CUtlVector<animationsystem::CAnimMorphDifference> m_morphArray; // 0x18		
		CUtlVector<animationsystem::CAnimUserDifference> m_userArray; // 0x30		
		CUtlVector<uint8_t> m_bHasRotationBitArray; // 0x48		
		CUtlVector<uint8_t> m_bHasMovementBitArray; // 0x60		
		CUtlVector<uint8_t> m_bHasMorphBitArray; // 0x78		
		CUtlVector<uint8_t> m_bHasUserBitArray; // 0x90		
	};
};
