#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0xa0
	// 
	// MGetKV3ClassDefaults
	struct VPhysXCollisionAttributes_t
	{
	public:
		uint32_t m_CollisionGroup; // 0x0		
		CUtlVector<uint32_t> m_InteractAs; // 0x8		
		CUtlVector<uint32_t> m_InteractWith; // 0x20		
		CUtlVector<uint32_t> m_InteractExclude; // 0x38		
		CUtlString m_CollisionGroupString; // 0x50		
		CUtlVector<CUtlString> m_InteractAsStrings; // 0x58		
		CUtlVector<CUtlString> m_InteractWithStrings; // 0x70		
		CUtlVector<CUtlString> m_InteractExcludeStrings; // 0x88		
	};
};
