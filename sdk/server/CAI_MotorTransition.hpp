#pragma once
#include "client/CAI_Component.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/AIMotorTransitionState_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x60
	// Has VTable
	class CAI_MotorTransition : public client::CAI_Component
	{
	private:
		[[maybe_unused]] uint8_t __pad0040[0x8]; // 0x40
	public:
		server::AIMotorTransitionState_t m_nTransitionState; // 0x48		
		Vector m_vNavLinkStartPos; // 0x4c		
		entity2::GameTime_t m_flNavLinkFaceStartTime; // 0x58		
		bool m_bTransitionAnimgraphHasTicked; // 0x5c		
	};
};
