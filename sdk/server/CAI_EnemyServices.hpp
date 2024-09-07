#pragma once
#include "client/CAI_Component.hpp"
#include "entity2/GameTime_t.hpp"
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
	// Size: 0x68
	// Has VTable
	class CAI_EnemyServices : public client::CAI_Component
	{
	public:
		CHandle<server::CBaseEntity> m_hEnemy; // 0x40		
		CHandle<server::CBaseEntity> m_hLastEnemy; // 0x44		
		entity2::GameTime_t m_flTimeEnemyAcquired; // 0x48		
		bool m_bHasEnemyAcquired; // 0x4c		
	private:
		[[maybe_unused]] uint8_t __pad004d[0x3]; // 0x4d
	public:
		entity2::GameTime_t m_flTimeLastHadEnemy; // 0x50		
		bool m_bHasLastHadEnemy; // 0x54		
	private:
		[[maybe_unused]] uint8_t __pad0055[0x3]; // 0x55
	public:
		int32_t m_nEnemiesSerialNumber; // 0x58		
		CHandle<server::CBaseEntity> m_hEnemyOccluder; // 0x5c		
		
		// Datamap fields:
		// void m_pEnemies; // 0x60
	};
};
