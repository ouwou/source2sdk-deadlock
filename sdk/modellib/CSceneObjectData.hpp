#pragma once
#include "mathlib_extended/AABB_t.hpp"
#include "modellib/CMaterialDrawDescriptor.hpp"
#include "modellib/CMeshletDescriptor.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x60
	// 
	// MGetKV3ClassDefaults
	class CSceneObjectData
	{
	public:
		Vector m_vMinBounds; // 0x0		
		Vector m_vMaxBounds; // 0xc		
		CUtlLeanVector<modellib::CMaterialDrawDescriptor> m_drawCalls; // 0x18		
		CUtlLeanVector<mathlib_extended::AABB_t> m_drawBounds; // 0x28		
		CUtlLeanVector<modellib::CMeshletDescriptor> m_meshlets; // 0x38		
		Vector4D m_vTintColor; // 0x48		
	};
};
