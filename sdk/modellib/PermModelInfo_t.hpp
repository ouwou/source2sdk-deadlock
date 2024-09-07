#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x58
	// 
	// MGetKV3ClassDefaults
	struct PermModelInfo_t
	{
	public:
		uint32_t m_nFlags; // 0x0		
		Vector m_vHullMin; // 0x4		
		Vector m_vHullMax; // 0x10		
		Vector m_vViewMin; // 0x1c		
		Vector m_vViewMax; // 0x28		
		float m_flMass; // 0x34		
		Vector m_vEyePosition; // 0x38		
		float m_flMaxEyeDeflection; // 0x44		
		CUtlString m_sSurfaceProperty; // 0x48		
		CUtlString m_keyValueText; // 0x50		
	};
};
