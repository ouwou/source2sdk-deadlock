#pragma once
#include <cstdint>
namespace source2sdk::modellib
{
	struct CModelConfig;
};

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	class CModelConfigList
	{
	public:
		bool m_bHideMaterialGroupInTools; // 0x0		
		bool m_bHideRenderColorInTools; // 0x1		
	private:
		[[maybe_unused]] uint8_t __pad0002[0x6]; // 0x2
	public:
		CUtlVector<modellib::CModelConfig*> m_Configs; // 0x8		
	};
};
