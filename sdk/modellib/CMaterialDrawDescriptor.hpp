#pragma once
#include "modellib/CRenderBufferBinding.hpp"
#include "rendersystemdx11/RenderPrimitiveType_t.hpp"
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0xd0
	// 
	// MGetKV3ClassDefaults
	class CMaterialDrawDescriptor
	{
	public:
		float m_flUvDensity; // 0x0		
		Vector m_vTintColor; // 0x4		
		float m_flAlpha; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0014[0x8]; // 0x14
	public:
		uint32_t m_nFirstMeshlet; // 0x1c		
		uint16_t m_nNumMeshlets; // 0x20		
	private:
		[[maybe_unused]] uint8_t __pad0022[0x2]; // 0x22
	public:
		rendersystemdx11::RenderPrimitiveType_t m_nPrimitiveType; // 0x24		
		int32_t m_nBaseVertex; // 0x28		
		int32_t m_nVertexCount; // 0x2c		
		int32_t m_nStartIndex; // 0x30		
		int32_t m_nIndexCount; // 0x34		
	private:
		[[maybe_unused]] uint8_t __pad0038[0x60]; // 0x38
	public:
		modellib::CRenderBufferBinding m_indexBuffer; // 0x98		
	private:
		[[maybe_unused]] uint8_t __pad00b8[0x8]; // 0xb8
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_material; // 0xc0		
	};
};
