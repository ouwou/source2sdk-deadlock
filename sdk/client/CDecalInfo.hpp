#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xc0
	class CDecalInfo
	{
	public:
		float m_flAnimationScale; // 0x0		
		float m_flAnimationLifeSpan; // 0x4		
		float m_flPlaceTime; // 0x8		
		float m_flFadeStartTime; // 0xc		
		float m_flFadeDuration; // 0x10		
		int32_t m_nVBSlot; // 0x14		
		int32_t m_nBoneIndex; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad001c[0xc]; // 0x1c
	public:
		client::CDecalInfo* m_pNext; // 0x28		
		client::CDecalInfo* m_pPrev; // 0x30		
	private:
		[[maybe_unused]] uint8_t __pad0038[0x80]; // 0x38
	public:
		int32_t m_nDecalMaterialIndex; // 0xb8		
		
		// Datamap fields:
		// void m_decalEvent; // 0x38
		// void m_hProjectedDecal; // 0x20
	};
};
