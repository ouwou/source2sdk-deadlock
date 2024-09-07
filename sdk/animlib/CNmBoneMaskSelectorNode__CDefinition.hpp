#pragma once
#include "animlib/CNmBoneMaskValueNode__CDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x98
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmBoneMaskSelectorNode__CDefinition : public animlib::CNmBoneMaskValueNode__CDefinition
	{
	public:
		int16_t m_defaultMaskNodeIdx; // 0x10		
		int16_t m_parameterValueNodeIdx; // 0x12		
		bool m_switchDynamically; // 0x14		
	private:
		[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
	public:
		CUtlVectorFixedGrowable<int16_t,7> m_maskNodeIndices; // 0x18		
		CUtlVectorFixedGrowable<CGlobalSymbol,7> m_parameterValues; // 0x40		
		float m_flBlendTimeSeconds; // 0x90		
	};
};
