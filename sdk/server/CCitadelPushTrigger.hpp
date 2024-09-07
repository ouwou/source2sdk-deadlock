#pragma once
#include "server/CTriggerModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x960
	// Has VTable
	class CCitadelPushTrigger : public server::CTriggerModifier
	{
	public:
		Vector m_vPush; // 0x948		
		QAngle m_angPushEntitySpace; // 0x954		
	};
};
