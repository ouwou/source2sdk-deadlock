#pragma once
#include "client/CTakeDamageInfo.hpp"
#include "client/CTakeDamageResult.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x108
	struct SummaryTakeDamageInfo_t
	{
	public:
		int32_t nSummarisedCount; // 0x0		
		client::CTakeDamageInfo info; // 0x8		
		client::CTakeDamageResult result; // 0xe8		
		CHandle<client::C_BaseEntity> hTarget; // 0x100		
	};
};
