#pragma once
#include "particles/ParticleDetailLevel_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 16
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	struct ParticleChildrenInfo_t
	{
	public:
		// MPropertySuppressField
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_ChildRef; // 0x0		
		// MPropertyFriendlyName "delay"
		float m_flDelay; // 0x8		
		// MPropertyFriendlyName "end cap effect"
		bool m_bEndCap; // 0xc		
		// MPropertySuppressField
		bool m_bDisableChild; // 0xd		
	private:
		[[maybe_unused]] uint8_t __pad000e[0x2]; // 0xe
	public:
		// MPropertyFriendlyName "disable at detail levels below"
		particles::ParticleDetailLevel_t m_nDetailLevel; // 0x10		
	};
};
