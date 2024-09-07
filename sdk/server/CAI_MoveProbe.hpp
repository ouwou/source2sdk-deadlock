#pragma once
#include "client/CAI_Component.hpp"
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
	// Size: 0x48
	// Has VTable
	class CAI_MoveProbe : public client::CAI_Component
	{
	public:
		CHandle<server::CBaseEntity> m_hLastBlockingEnt; // 0x40		
	};
};
