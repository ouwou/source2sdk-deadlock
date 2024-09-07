#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: mathlib_extended
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::mathlib_extended
{
	// Alignment: 8
	// Size: 0x2
	// Has Trivial Destructor
	// 
	// MIsBoxedIntegerType
	struct FuseVariableIndex_t
	{
	public:
		uint16_t m_Value; // 0x0		
		
		// Static fields:
		static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("FuseVariableIndex_t")->GetStaticFields()[0]->m_pInstance);};
	};
};
