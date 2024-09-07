#pragma once
#include "client/ChoreoLookAtMode_t.hpp"
#include "client/ChoreoLookAtSpeed_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CAI_InterestTarget__Type_t.hpp"
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
	// Size: 0x34
	// Has Trivial Destructor
	class CAI_InterestTarget
	{
	public:
		CHandle<server::CBaseEntity> m_hTarget; // 0x0		
		Vector m_vPosition; // 0x4		
		Vector m_vDirection; // 0x10		
		bool m_bDiscardOutsideViewcone; // 0x1c		
	private:
		[[maybe_unused]] uint8_t __pad001d[0x3]; // 0x1d
	public:
		client::ChoreoLookAtMode_t m_nLookAtMode; // 0x20		
		client::ChoreoLookAtSpeed_t m_nLookAtSpeed; // 0x24		
		server::CAI_InterestTarget__Type_t m_eType; // 0x28		
		WorldGroupId_t m_nWorldGroupId; // 0x2c		
		entity2::GameTime_t m_flEndTime; // 0x30		
	};
};
