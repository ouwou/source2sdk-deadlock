#pragma once
#include "client/CBaseAnimGraph.hpp"
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
	// Size: 0xac0
	// Has VTable
	class C_PhysMagnet : public client::CBaseAnimGraph
	{
	public:
		CUtlVector<int32_t> m_aAttachedObjectsFromServer; // 0xa90		
		CUtlVector<CHandle<client::C_BaseEntity>> m_aAttachedObjects; // 0xaa8		
	};
};
