#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: scenesystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::scenesystem
{
	// Alignment: 8
	// Size: 0x30
	// 
	// MGetKV3ClassDefaults
	class CSSDSMsg_ViewTarget
	{
	public:
		CUtlString m_Name; // 0x0		
		uint64_t m_TextureId; // 0x8		
		int32_t m_nWidth; // 0x10		
		int32_t m_nHeight; // 0x14		
		int32_t m_nRequestedWidth; // 0x18		
		int32_t m_nRequestedHeight; // 0x1c		
		int32_t m_nNumMipLevels; // 0x20		
		int32_t m_nDepth; // 0x24		
		int32_t m_nMultisampleNumSamples; // 0x28		
		int32_t m_nFormat; // 0x2c		
	};
};
