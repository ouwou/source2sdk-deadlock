#pragma once
#include "resourcesystem/InfoForResourceTypeCVoiceContainerBase.hpp"
#include "soundsystem_voicecontainers/CVoiceContainerBase.hpp"
#include <cstdint>
namespace source2sdk::soundsystem_voicecontainers
{
	struct CVoiceContainerAnalysisBase;
};

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
	// Alignment: 8
	// Size: 0xd0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Envelope VSND"
	// MPropertyDescription "Plays sound with envelope."
	class CVoiceContainerEnvelope : public soundsystem_voicecontainers::CVoiceContainerBase
	{
	public:
		// MPropertyFriendlyName "Vsnd File"
		CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase> m_sound; // 0xc0		
		// MPropertyFriendlyName "Container Analyzers"
		soundsystem_voicecontainers::CVoiceContainerAnalysisBase* m_analysisContainer; // 0xc8		
	};
};
