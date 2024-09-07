#pragma once
#include "mathlib_extended/PackedAABB_t.hpp"
#include "modellib/CDrawCullingData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 4
	// Size: 0x18
	// Has Trivial Constructor
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CMeshletDescriptor
	{
	public:
		mathlib_extended::PackedAABB_t m_PackedAABB; // 0x0		
		modellib::CDrawCullingData m_CullingData; // 0x8		
	};
};
