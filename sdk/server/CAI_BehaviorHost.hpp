#pragma once
#include <cstdint>
namespace source2sdk::server
{
	struct CAI_BaseNPC;
};
namespace source2sdk::server
{
	struct CAI_Behavior;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x30
	class CAI_BehaviorHost
	{
	public:
		server::CAI_Behavior* m_pActiveBehavior; // 0x0		
		server::CAI_BaseNPC* m_pOuter; // 0x8		
		CUtlVector<server::CAI_Behavior*> m_Behaviors; // 0x10		
		bool m_bCalledBehaviorSelectSchedule; // 0x28		
	};
};
