#pragma once
#include "client/MoveType_t.hpp"
#include "server/INavSmartGoal.hpp"
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
	// Size: 0x38
	// Has VTable
	class CSmartGoal_Door : public server::INavSmartGoal
	{
	public:
		CHandle<server::CBaseEntity> m_hDoor; // 0x10		
		CHandle<server::CBaseEntity> m_hPathCornerGoalPostDoor; // 0x14		
		Vector m_vGoalPostDoor; // 0x18		
		client::MoveType_t m_PrevMoveType; // 0x24		
	private:
		[[maybe_unused]] uint8_t __pad0025[0x3]; // 0x25
	public:
		float m_flDoorSpeed; // 0x28		
		bool m_bUseAnimatedInteraction; // 0x2c		
		bool m_bOpenAway; // 0x2d		
	private:
		[[maybe_unused]] uint8_t __pad002e[0x2]; // 0x2e
	public:
		int32_t m_nState; // 0x30		
	};
};
