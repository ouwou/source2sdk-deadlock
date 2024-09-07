#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 16
	// Size: 0x70
	// 
	// MGetKV3ClassDefaults
	class CHitBox
	{
	public:
		CUtlString m_name; // 0x0		
		CUtlString m_sSurfaceProperty; // 0x8		
		CUtlString m_sBoneName; // 0x10		
		Vector m_vMinBounds; // 0x18		
		Vector m_vMaxBounds; // 0x24		
		float m_flShapeRadius; // 0x30		
		uint32_t m_nBoneNameHash; // 0x34		
		int32_t m_nGroupId; // 0x38		
		uint8_t m_nShapeType; // 0x3c		
		bool m_bTranslationOnly; // 0x3d		
	private:
		[[maybe_unused]] uint8_t __pad003e[0x2]; // 0x3e
	public:
		uint32_t m_CRC; // 0x40		
		Color m_cRenderColor; // 0x44		
		uint16_t m_nHitBoxIndex; // 0x48		
	};
};
