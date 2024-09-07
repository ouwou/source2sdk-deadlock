#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 4
	// Size: 0x44
	// Has Trivial Constructor
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct HitReactFixedSettings_t
	{
	public:
		int32_t m_nWeightListIndex; // 0x0		
		int32_t m_nEffectedBoneCount; // 0x4		
		float m_flMaxImpactForce; // 0x8		
		float m_flMinImpactForce; // 0xc		
		float m_flWhipImpactScale; // 0x10		
		float m_flCounterRotationScale; // 0x14		
		float m_flDistanceFadeScale; // 0x18		
		float m_flPropagationScale; // 0x1c		
		float m_flWhipDelay; // 0x20		
		float m_flSpringStrength; // 0x24		
		float m_flWhipSpringStrength; // 0x28		
		float m_flMaxAngleRadians; // 0x2c		
		int32_t m_nHipBoneIndex; // 0x30		
		float m_flHipBoneTranslationScale; // 0x34		
		float m_flHipDipSpringStrength; // 0x38		
		float m_flHipDipImpactScale; // 0x3c		
		float m_flHipDipDelay; // 0x40		
	};
};
