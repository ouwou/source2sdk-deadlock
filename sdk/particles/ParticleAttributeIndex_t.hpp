#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x4
	// Has Trivial Destructor
	// 
	// MIsBoxedIntegerType
	struct ParticleAttributeIndex_t
	{
	public:
		int32_t m_Value; // 0x0		
		
		// Static fields:
		static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("ParticleAttributeIndex_t")->GetStaticFields()[0]->m_pInstance);};
	};
};
