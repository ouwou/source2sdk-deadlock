#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 8
	// Size: 0x90
	// 
	// MGetKV3ClassDefaults
	struct FeMorphLayerDepr_t
	{
	public:
		CUtlString m_Name; // 0x0		
		uint32_t m_nNameHash; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
	public:
		CUtlVector<uint16_t> m_Nodes; // 0x10		
		CUtlVector<Vector> m_InitPos; // 0x28		
		CUtlVector<float> m_Gravity; // 0x40		
		CUtlVector<float> m_GoalStrength; // 0x58		
		CUtlVector<float> m_GoalDamping; // 0x70		
		uint32_t m_nFlags; // 0x88		
	};
};
