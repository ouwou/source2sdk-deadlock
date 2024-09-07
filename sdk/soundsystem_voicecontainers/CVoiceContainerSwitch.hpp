#pragma once
#include "soundsystem_voicecontainers/CSoundContainerReference.hpp"
#include "soundsystem_voicecontainers/CVoiceContainerBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
	// Alignment: 8
	// Size: 0xd8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Container Switch"
	// MPropertyDescription "An array of containers"
	class CVoiceContainerSwitch : public soundsystem_voicecontainers::CVoiceContainerBase
	{
	public:
		// MPropertyFriendlyName "Container List"
		CUtlVector<soundsystem_voicecontainers::CSoundContainerReference> m_soundsToPlay; // 0xc0		
	};
};
