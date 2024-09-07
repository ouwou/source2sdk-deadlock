#pragma once
#include "materialsystem2/MaterialParamBuffer_t.hpp"
#include "materialsystem2/MaterialParamFloat_t.hpp"
#include "materialsystem2/MaterialParamInt_t.hpp"
#include "materialsystem2/MaterialParamString_t.hpp"
#include "materialsystem2/MaterialParamTexture_t.hpp"
#include "materialsystem2/MaterialParamVector_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::materialsystem2
{
	// Alignment: 8
	// Size: 0x130
	// 
	// MGetKV3ClassDefaults
	struct MaterialResourceData_t
	{
	public:
		CUtlString m_materialName; // 0x0		
		CUtlString m_shaderName; // 0x8		
		CUtlVector<materialsystem2::MaterialParamInt_t> m_intParams; // 0x10		
		CUtlVector<materialsystem2::MaterialParamFloat_t> m_floatParams; // 0x28		
		CUtlVector<materialsystem2::MaterialParamVector_t> m_vectorParams; // 0x40		
		CUtlVector<materialsystem2::MaterialParamTexture_t> m_textureParams; // 0x58		
		CUtlVector<materialsystem2::MaterialParamBuffer_t> m_dynamicParams; // 0x70		
		CUtlVector<materialsystem2::MaterialParamBuffer_t> m_dynamicTextureParams; // 0x88		
		CUtlVector<materialsystem2::MaterialParamInt_t> m_intAttributes; // 0xa0		
		CUtlVector<materialsystem2::MaterialParamFloat_t> m_floatAttributes; // 0xb8		
		CUtlVector<materialsystem2::MaterialParamVector_t> m_vectorAttributes; // 0xd0		
		CUtlVector<materialsystem2::MaterialParamTexture_t> m_textureAttributes; // 0xe8		
		CUtlVector<materialsystem2::MaterialParamString_t> m_stringAttributes; // 0x100		
		CUtlVector<CUtlString> m_renderAttributesUsed; // 0x118		
	};
};
