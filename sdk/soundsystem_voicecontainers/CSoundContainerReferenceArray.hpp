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
	// Size: 0x38
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Sound Array "
	// MPropertyDescription "Reference to list of vsnd files or other containers."
	class CSoundContainerReferenceArray
	{
	public:
		// MPropertyFriendlyName "Use Vsnd File"
		bool m_bUseReference; // 0x0		
		// MPropertySuppressExpr "m_bUseReference == 0"
		// MPropertyFriendlyName "Vsnd File"
		CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase>> m_sounds; // 0x8		
		// MPropertySuppressExpr "m_bUseReference == 1"
		// MPropertyFriendlyName "Vsnd Container"
		CUtlVector<soundsystem_voicecontainers::CVoiceContainerBase*> m_pSounds; // 0x20		
	};
};
