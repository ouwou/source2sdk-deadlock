#pragma once
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "resourcesystem/InfoForResourceTypeCRenderMesh.hpp"
#include "worldrenderer/ObjectTypeFlags_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
	// Alignment: 8
	// Size: 0x88
	// 
	// MGetKV3ClassDefaults
	struct SceneObject_t
	{
	public:
		uint32_t m_nObjectID; // 0x0		
		Vector4D m_vTransform[3]; // 0x4		
		float m_flFadeStartDistance; // 0x34		
		float m_flFadeEndDistance; // 0x38		
		Vector4D m_vTintColor; // 0x3c		
	private:
		[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
	public:
		CUtlString m_skin; // 0x50		
		worldrenderer::ObjectTypeFlags_t m_nObjectTypeFlags; // 0x58		
		Vector m_vLightingOrigin; // 0x5c		
		int16_t m_nOverlayRenderOrder; // 0x68		
		int16_t m_nLODOverride; // 0x6a		
		int32_t m_nCubeMapPrecomputedHandshake; // 0x6c		
		int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x70		
	private:
		[[maybe_unused]] uint8_t __pad0074[0x4]; // 0x74
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_renderableModel; // 0x78		
		CStrongHandle<resourcesystem::InfoForResourceTypeCRenderMesh> m_renderable; // 0x80		
	};
};
