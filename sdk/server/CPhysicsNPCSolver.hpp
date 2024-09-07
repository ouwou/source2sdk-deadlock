#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CLogicalEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CAI_BaseNPC;
};
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
	// Size: 0x508
	// Has VTable
	class CPhysicsNPCSolver : public server::CLogicalEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
	public:
		server::CPhysicsNPCSolver* m_pNext; // 0x4e0		
		CHandle<server::CAI_BaseNPC> m_hNPC; // 0x4e8		
		CHandle<server::CBaseEntity> m_hEntity; // 0x4ec		
	private:
		[[maybe_unused]] uint8_t __pad04f0[0x8]; // 0x4f0
	public:
		float m_separationDuration; // 0x4f8		
		entity2::GameTime_t m_cancelTime; // 0x4fc		
		bool m_allowIntersection; // 0x500		
		
		// Datamap fields:
		// void m_pController; // 0x4f0
	};
};
