#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
	// Alignment: 8
	// Size: 0x68
	// 
	// MGetKV3ClassDefaults
	class CAudioMorphData
	{
	public:
		CUtlVector<float> m_times; // 0x0		
		CUtlVector<uint32_t> m_nameHashCodes; // 0x18		
		CUtlVector<CUtlString> m_nameStrings; // 0x30		
		CUtlVector<CUtlVector<float>> m_samples; // 0x48		
		float m_flEaseIn; // 0x60		
		float m_flEaseOut; // 0x64		
	};
};
