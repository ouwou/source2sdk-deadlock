#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::entity2
{
	// Alignment: 8
	// Size: 0x4
	// Has Trivial Destructor
	// 
	// MIsBoxedFloatType
	struct GameTime_t
	{
	public:
		float m_Value; // 0x0		
		
		// Static fields:
		static bool &Get_IS_TYPESAFE_FLOAT(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("GameTime_t")->GetStaticFields()[0]->m_pInstance);};
		static entity2::GameTime_t &Get_Zero(){return *reinterpret_cast<entity2::GameTime_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("GameTime_t")->GetStaticFields()[1]->m_pInstance);};
	};
};
