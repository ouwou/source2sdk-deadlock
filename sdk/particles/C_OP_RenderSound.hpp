#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x340
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderSound : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "duration scale"
		float m_flDurationScale; // 0x210		
		// MPropertyFriendlyName "decibel level scale"
		float m_flSndLvlScale; // 0x214		
		// MPropertyFriendlyName "pitch scale"
		float m_flPitchScale; // 0x218		
		// MPropertyFriendlyName "volume scale"
		float m_flVolumeScale; // 0x21c		
		// MPropertyFriendlyName "decibel level field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nSndLvlField; // 0x220		
		// MPropertyFriendlyName "duration field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nDurationField; // 0x224		
		// MPropertyFriendlyName "pitch field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nPitchField; // 0x228		
		// MPropertyFriendlyName "volume field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nVolumeField; // 0x22c		
		// MPropertyFriendlyName "sound channel"
		// MPropertyAttributeChoiceName "sound_channel"
		int32_t m_nChannel; // 0x230		
		// MPropertyFriendlyName "sound control point number"
		int32_t m_nCPReference; // 0x234		
		// MPropertyFriendlyName "sound"
		// MPropertyAttributeEditor "SoundPicker()"
		char m_pszSoundName[256]; // 0x238		
		// MPropertyFriendlyName "suppress stop event"
		bool m_bSuppressStopSoundEvent; // 0x338		
	};
};
