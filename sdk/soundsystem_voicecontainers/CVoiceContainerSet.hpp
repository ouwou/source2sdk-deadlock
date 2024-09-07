#pragma once
#include "soundsystem_voicecontainers/CVoiceContainerBase.hpp"
#include "soundsystem_voicecontainers/CVoiceContainerSetElement.hpp"
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
	// MPropertyFriendlyName "Container Set"
	// MPropertyDescription "An array of containers that are played all at once."
	class CVoiceContainerSet : public soundsystem_voicecontainers::CVoiceContainerBase
	{
	public:
		// MPropertyFriendlyName "Container List"
		CUtlVector<soundsystem_voicecontainers::CVoiceContainerSetElement> m_soundsToPlay; // 0xc0		
	};
};
