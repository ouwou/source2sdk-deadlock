#pragma once
#include "modellib/CAnimFoot.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0xd0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAnimSkeleton
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		CUtlVector<CTransform> m_localSpaceTransforms; // 0x10		
		CUtlVector<CTransform> m_modelSpaceTransforms; // 0x28		
		CUtlVector<CUtlString> m_boneNames; // 0x40		
		CUtlVector<CUtlVector<int32_t>> m_children; // 0x58		
		CUtlVector<int32_t> m_parents; // 0x70		
		CUtlVector<modellib::CAnimFoot> m_feet; // 0x88		
		CUtlVector<CUtlString> m_morphNames; // 0xa0		
		CUtlVector<int32_t> m_lodBoneCounts; // 0xb8		
	};
};
