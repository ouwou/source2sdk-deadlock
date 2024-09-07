#pragma once
#include "soundsystem_voicecontainers/CVoiceContainerAnalysisBase.hpp"
#include "soundsystem_voicecontainers/EMode_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
	// Alignment: 8
	// Size: 0x60
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Envelope Analyzer"
	// MPropertyDescription "Generates an Envelope Curve on compile"
	class CVoiceContainerEnvelopeAnalyzer : public soundsystem_voicecontainers::CVoiceContainerAnalysisBase
	{
	public:
		// MPropertyFriendlyName "Envelope Mode"
		soundsystem_voicecontainers::EMode_t m_mode; // 0x50		
		// MPropertyFriendlyName "Number of sections"
		int32_t m_nSamples; // 0x54		
		// MPropertyFriendlyName "Threshold"
		float m_flThreshold; // 0x58		
	};
};
