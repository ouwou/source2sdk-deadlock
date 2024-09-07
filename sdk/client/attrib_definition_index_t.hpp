#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x2
	// Has Trivial Destructor
	// 
	// MIsBoxedIntegerType
	struct attrib_definition_index_t
	{
	public:
		uint16_t m_Value; // 0x0		
		
		// Static fields:
		static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("attrib_definition_index_t")->GetStaticFields()[0]->m_pInstance);};
	};
};