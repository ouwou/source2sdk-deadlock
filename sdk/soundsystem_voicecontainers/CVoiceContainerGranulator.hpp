#pragma once
#include "resourcesystem/InfoForResourceTypeCVoiceContainerBase.hpp"
#include "soundsystem_voicecontainers/CVoiceContainerBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
	// Alignment: 8
	// Size: 0x190
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Granulator Container"
	class CVoiceContainerGranulator : public soundsystem_voicecontainers::CVoiceContainerBase
	{
	public:
		float m_flGrainLength; // 0xc0		
		float m_flGrainCrossfadeAmount; // 0xc4		
		float m_flStartJitter; // 0xc8		
		float m_flPlaybackJitter; // 0xcc		
		CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase> m_sourceAudio; // 0xd0		
	};
};
