#pragma once
#include "animgraphlib/CAnimComponentUpdater.hpp"
#include "animgraphlib/CAnimNodePath.hpp"
#include "animgraphlib/WeightList.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0xa8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CRagdollComponentUpdater : public animgraphlib::CAnimComponentUpdater
	{
	public:
		CUtlVector<animgraphlib::CAnimNodePath> m_ragdollNodePaths; // 0x30		
		CUtlVector<int32_t> m_boneIndices; // 0x48		
		CUtlVector<CUtlString> m_boneNames; // 0x60		
		CUtlVector<animgraphlib::WeightList> m_weightLists; // 0x78		
		float m_flSpringFrequencyMin; // 0x90		
		float m_flSpringFrequencyMax; // 0x94		
		float m_flMaxStretch; // 0x98		
		bool m_bSolidCollisionAtZeroWeight; // 0x9c		
	};
};
