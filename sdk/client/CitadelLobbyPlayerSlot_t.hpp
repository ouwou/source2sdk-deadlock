#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1
	// Has Trivial Destructor
	// 
	// MIsBoxedIntegerType
	struct CitadelLobbyPlayerSlot_t
	{
	public:
		uint8_t m_Value; // 0x0		
		
		// Static fields:
		static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CitadelLobbyPlayerSlot_t")->GetStaticFields()[0]->m_pInstance);};
	};
};
