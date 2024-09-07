#pragma once
#include "client/SummaryTakeDamageInfo_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct SummaryTakeDamageInfo_t;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x20
	// Has VTable
	class CTakeDamageSummaryScopeGuard
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		CUtlVector<client::SummaryTakeDamageInfo_t*> m_vecSummaries; // 0x8		
		
		// Static fields:
		static client::SummaryTakeDamageInfo_t &Get_EmptySummary(){return *reinterpret_cast<client::SummaryTakeDamageInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CTakeDamageSummaryScopeGuard")->GetStaticFields()[0]->m_pInstance);};
	};
};
