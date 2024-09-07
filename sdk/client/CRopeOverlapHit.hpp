#pragma once
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
	// Size: 0x20
	class CRopeOverlapHit
	{
	public:
		CHandle<client::C_BaseEntity> m_hEntity; // 0x0		
		CUtlVector<int32_t> m_vecOverlappingLinks; // 0x8		
	};
};
