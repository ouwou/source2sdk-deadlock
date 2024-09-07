#pragma once
#include "resourcesystem/InfoForResourceTypeCVoiceContainerBase.hpp"
#include "soundsystem_voicecontainers/CVoiceContainerBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
	// Alignment: 8
	// Size: 0xd0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "TESTBED: Nested Voice Containers"
	// MPropertyDescription "Adds to voices to a tree span."
	class CTestBlendContainer : public soundsystem_voicecontainers::CVoiceContainerBase
	{
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase> m_firstSound; // 0xc0		
		CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase> m_secondSound; // 0xc8		
	};
};
