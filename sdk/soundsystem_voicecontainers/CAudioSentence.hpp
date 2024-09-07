#pragma once
#include "soundsystem_voicecontainers/CAudioEmphasisSample.hpp"
#include "soundsystem_voicecontainers/CAudioMorphData.hpp"
#include "soundsystem_voicecontainers/CAudioPhonemeTag.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
	// Alignment: 8
	// Size: 0xa0
	// 
	// MGetKV3ClassDefaults
	class CAudioSentence
	{
	public:
		bool m_bShouldVoiceDuck; // 0x0		
		CUtlVector<soundsystem_voicecontainers::CAudioPhonemeTag> m_RunTimePhonemes; // 0x8		
		CUtlVector<soundsystem_voicecontainers::CAudioEmphasisSample> m_EmphasisSamples; // 0x20		
		soundsystem_voicecontainers::CAudioMorphData m_morphData; // 0x38		
	};
};
