#pragma once
#include "modellib/ModelBoneFlexDriverControl_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x28
	// 
	// MGetKV3ClassDefaults
	struct ModelBoneFlexDriver_t
	{
	public:
		CUtlString m_boneName; // 0x0		
		uint32_t m_boneNameToken; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
	public:
		CUtlVector<modellib::ModelBoneFlexDriverControl_t> m_controls; // 0x10		
	};
};
