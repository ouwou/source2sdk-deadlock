#pragma once
#include "resourcesystem/InfoForResourceTypeCVoiceContainerBase.hpp"
#include <cstdint>
namespace source2sdk::soundsystem_voicecontainers
{
	struct CVoiceContainerBase;
};

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
	// Alignment: 8
	// Size: 0x18
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Sound"
	// MPropertyDescription "Reference to a vsnd file or another container."
	class CSoundContainerReference
	{
	public:
		// MPropertyFriendlyName "Use Vsnd File"
		bool m_bUseReference; // 0x0		
		// MPropertySuppressExpr "m_bUseReference == 0"
		// MPropertyFriendlyName "Vsnd File"
		CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase> m_sound; // 0x8		
		// MPropertySuppressExpr "m_bUseReference == 1"
		// MPropertyFriendlyName "Vsnd Container"
		soundsystem_voicecontainers::CVoiceContainerBase* m_pSound; // 0x10		
	};
};
