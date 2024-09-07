#pragma once
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
	// Alignment: 8
	// Size: 0x70
	// 
	// MGetKV3ClassDefaults
	struct InfoOverlayData_t
	{
	public:
		matrix3x4_t m_transform; // 0x0		
		float m_flWidth; // 0x30		
		float m_flHeight; // 0x34		
		float m_flDepth; // 0x38		
		Vector2D m_vUVStart; // 0x3c		
		Vector2D m_vUVEnd; // 0x44		
	private:
		[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_pMaterial; // 0x50		
		int32_t m_nRenderOrder; // 0x58		
		Vector4D m_vTintColor; // 0x5c		
		int32_t m_nSequenceOverride; // 0x6c		
	};
};
