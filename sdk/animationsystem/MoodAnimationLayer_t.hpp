#pragma once
#include "animationsystem/MoodAnimation_t.hpp"
#include "tier2/CRangeFloat.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x60
	// 
	// MGetKV3ClassDefaults
	// MPropertyArrayElementNameKey "m_sName"
	struct MoodAnimationLayer_t
	{
	public:
		// MPropertyFriendlyName "Name"
		// MPropertyDescription "Name of the layer"
		CUtlString m_sName; // 0x0		
		// MPropertyFriendlyName "Active When Listening"
		// MPropertyDescription "Sets the mood's animation buckets to be active when the character is listening"
		bool m_bActiveListening; // 0x8		
		// MPropertyFriendlyName "Active When Talking"
		// MPropertyDescription "Sets the mood's animation buckets to be active when the character is talking"
		bool m_bActiveTalking; // 0x9		
	private:
		[[maybe_unused]] uint8_t __pad000a[0x6]; // 0xa
	public:
		// MPropertyDescription "List of animations to choose from"
		CUtlVector<animationsystem::MoodAnimation_t> m_layerAnimations; // 0x10		
		// MPropertyDescription "Intensity of the animation"
		// MPropertyAttributeRange "0 1"
		tier2::CRangeFloat m_flIntensity; // 0x28		
		// MPropertyDescription "Multiplier of the animation duration"
		tier2::CRangeFloat m_flDurationScale; // 0x30		
		// MPropertyDescription "When scaling an animation, grab the scale value as in int. Used for gestures/postures to control number of looping sections"
		bool m_bScaleWithInts; // 0x38		
	private:
		[[maybe_unused]] uint8_t __pad0039[0x3]; // 0x39
	public:
		// MPropertyDescription "Time before the next animation can start"
		tier2::CRangeFloat m_flNextStart; // 0x3c		
		// MPropertyDescription "Time from the start of the mood before an animation can start"
		tier2::CRangeFloat m_flStartOffset; // 0x44		
		// MPropertyDescription "Time from the end of the mood when an animation cannot play"
		tier2::CRangeFloat m_flEndOffset; // 0x4c		
		// MPropertyDescription "Fade in time of the animation"
		float m_flFadeIn; // 0x54		
		// MPropertyDescription "Fade out time of the animation"
		float m_flFadeOut; // 0x58		
	};
};
