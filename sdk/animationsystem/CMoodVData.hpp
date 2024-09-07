#pragma once
#include "animationsystem/MoodAnimationLayer_t.hpp"
#include "animationsystem/MoodType_t.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x100
	// 
	// MGetKV3ClassDefaults
	// MVDataRoot
	// MVDataOverlayType "1"
	class CMoodVData
	{
	public:
		// MPropertyDescription "Model to get the animation list from"
		// MPropertyAutoRebuildOnChange
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sModelName; // 0x0		
		// MPropertyDescription "Type of mood"
		animationsystem::MoodType_t m_nMoodType; // 0xe0		
	private:
		[[maybe_unused]] uint8_t __pad00e4[0x4]; // 0xe4
	public:
		// MPropertyDescription "Layers for this mood"
		CUtlVector<animationsystem::MoodAnimationLayer_t> m_animationLayers; // 0xe8		
	};
};
