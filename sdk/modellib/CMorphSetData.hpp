#pragma once
#include "modellib/CFlexController.hpp"
#include "modellib/CFlexDesc.hpp"
#include "modellib/CFlexRule.hpp"
#include "modellib/CMorphData.hpp"
#include "modellib/MorphBundleType_t.hpp"
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x98
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CMorphSetData
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		int32_t m_nWidth; // 0x10		
		int32_t m_nHeight; // 0x14		
		CUtlVector<modellib::MorphBundleType_t> m_bundleTypes; // 0x18		
		CUtlVector<modellib::CMorphData> m_morphDatas; // 0x30		
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureAtlas; // 0x48		
		CUtlVector<modellib::CFlexDesc> m_FlexDesc; // 0x50		
		CUtlVector<modellib::CFlexController> m_FlexControllers; // 0x68		
		CUtlVector<modellib::CFlexRule> m_FlexRules; // 0x80		
	};
};
