#pragma once
#include "server/CServerOnlyPointEntity.hpp"
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
	// Size: 0x4e8
	// Has VTable
	class CInfoTeamSpawn : public server::CServerOnlyPointEntity
	{
	public:
		bool m_bIntroSpawn; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
	public:
		int32_t m_iLaneNum; // 0x4dc		
		CHandle<server::CBaseEntity> m_hAssignedPlayer; // 0x4e0		
	};
};
