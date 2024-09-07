#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CLogicalEntity.hpp"
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
	// Size: 0x4f0
	// Has VTable
	class CPhysicsEntitySolver : public server::CLogicalEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
	public:
		CHandle<server::CBaseEntity> m_hMovingEntity; // 0x4e0		
		CHandle<server::CBaseEntity> m_hPhysicsBlocker; // 0x4e4		
		float m_separationDuration; // 0x4e8		
		entity2::GameTime_t m_cancelTime; // 0x4ec		
	};
};
