#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0xa8
	// 
	// MGetKV3ClassDefaults
	struct ModelSkeletonData_t
	{
	public:
		CUtlVector<CUtlString> m_boneName; // 0x0		
		CUtlVector<int16_t> m_nParent; // 0x18		
		CUtlVector<float> m_boneSphere; // 0x30		
		CUtlVector<uint32_t> m_nFlag; // 0x48		
		CUtlVector<Vector> m_bonePosParent; // 0x60		
		CUtlVector<QuaternionStorage> m_boneRotParent; // 0x78		
		CUtlVector<float> m_boneScaleParent; // 0x90		
	};
};
