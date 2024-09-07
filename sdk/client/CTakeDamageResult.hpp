#pragma once
#include <cstdint>
namespace source2sdk::client
{
	struct CTakeDamageInfo;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x18
	// Has Trivial Destructor
	class CTakeDamageResult
	{
	public:
		client::CTakeDamageInfo* m_pOriginatingInfo; // 0x0		
		int32_t m_nHealthLost; // 0x8		
		int32_t m_nDamageTaken; // 0xc		
		int32_t m_nTotalledHealthLost; // 0x10		
		int32_t m_nTotalledDamageTaken; // 0x14		
		
		// Static fields:
		static client::CTakeDamageResult &Get_EmptyResult(){return *reinterpret_cast<client::CTakeDamageResult*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CTakeDamageResult")->GetStaticFields()[0]->m_pInstance);};
	};
};
