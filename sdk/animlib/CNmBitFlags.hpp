#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 4
	// Size: 0x4
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CNmBitFlags
	{
	public:
		uint32_t m_flags; // 0x0		
		
		// Static fields:
		static uint8_t &Get_MaxFlags(){return *reinterpret_cast<uint8_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNmBitFlags")->GetStaticFields()[0]->m_pInstance);};
	};
};
