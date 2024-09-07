#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
	// Alignment: 8
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	class CDSPMixgroupModifier
	{
	public:
		// MPropertyDescription "Name of the mixgroup. TODO: needs to be autopopulated with mixgroups."
		// MPropertyFriendlyName "Mixgroup Name"
		CUtlString m_mixgroup; // 0x0		
		// MPropertyDescription "The amount to multiply the volume of the non-spatialized reverb/dsp by when at the max reverb blend distance. 1.0 leaves the volume unchanged."
		// MPropertyFriendlyName "Max reverb gain amount for listener DSP."
		float m_flModifier; // 0x8		
		// MPropertyDescription "The amount to multiply the volume of the non-spatialized reverb/dsp by when at the min reverb blend distance. 1.0 leaves the volume unchanged."
		// MPropertyFriendlyName "Min reverb gain amount amount for listener DSP."
		float m_flModifierMin; // 0xc		
		// MPropertyDescription "If set to >= 0, we will use this mix modifier for source-specific DSP effects. Otherwise we will use the listener DSP value."
		// MPropertyFriendlyName "Max reverb gain amount for source-specific DSP."
		float m_flSourceModifier; // 0x10		
		// MPropertyDescription "If set to >= 0, we will use this mix modifier for source-specific DSP effects. Otherwise we will use the listener DSP value."
		// MPropertyFriendlyName "Min reverb gain amount for source-specific DSP."
		float m_flSourceModifierMin; // 0x14		
		// MPropertyDescription "When a source has source-specific DSP, this can be used as an additional mix stage for the listener reverb amount."
		// MPropertyFriendlyName "Modification amount for listener DSP when source DSP is used."
		float m_flListenerReverbModifierWhenSourceReverbIsActive; // 0x18		
	};
};
