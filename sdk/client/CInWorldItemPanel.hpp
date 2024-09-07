#pragma once
#include "client/C_PointClientUIWorldPanel.hpp"
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
	// Alignment: 16
	// Size: 0xaa0
	// Has VTable
	class CInWorldItemPanel : public client::C_PointClientUIWorldPanel
	{
	public:
		CHandle<client::C_BaseEntity> m_hTrackedEntity; // 0xa90		
		int32_t m_nTrackedEntity; // 0xa94		
	};
};
