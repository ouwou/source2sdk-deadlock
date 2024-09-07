#pragma once
#include "server/CCitadel_Item.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xce8
	// Has VTable
	class CCitadel_Upgrade_StabilizingTripod : public server::CCitadel_Item
	{
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_vecDeployedSentries; // 0xaf8		
		Vector m_vDeployPosition; // 0xb10		
		QAngle m_vDeployAngles; // 0xb1c		
	};
};
