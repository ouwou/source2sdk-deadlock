#pragma once
#include "modellib/CRenderBufferBinding.hpp"
#include "modellib/MeshDrawPrimitiveFlags_t.hpp"
#include "worldrenderer/BaseSceneObjectOverride_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
	// Alignment: 8
	// Size: 0x30
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct ExtraVertexStreamOverride_t : public worldrenderer::BaseSceneObjectOverride_t
	{
	public:
		uint32_t m_nSubSceneObject; // 0x4		
		uint32_t m_nDrawCallIndex; // 0x8		
		modellib::MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // 0xc		
		modellib::CRenderBufferBinding m_extraBufferBinding; // 0x10		
	};
};
