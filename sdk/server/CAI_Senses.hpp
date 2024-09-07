#pragma once
#include "client/CAI_Component.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CSound.hpp"
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
	// Size: 0x138
	// Has VTable
	class CAI_Senses : public client::CAI_Component
	{
	public:
		float m_flLookDist; // 0x40		
		float m_flLookDistIdle; // 0x44		
		float m_flLastLookDist; // 0x48		
		entity2::GameTime_t m_TimeLastLook; // 0x4c		
		int32_t m_iAudibleList; // 0x50		
	private:
		[[maybe_unused]] uint8_t __pad0054[0x4]; // 0x54
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_SeenHighPriority; // 0x58		
		CUtlVector<CHandle<server::CBaseEntity>> m_SeenNPCs; // 0x70		
		CUtlVector<CHandle<server::CBaseEntity>> m_SeenMisc; // 0x88		
		CUtlVector<CHandle<server::CBaseEntity>> m_GatheredEntities; // 0xa0		
		CUtlVector<CHandle<server::CBaseEntity>> m_GatheredProxyEntities; // 0xb8		
		CUtlVector<CHandle<server::CBaseEntity>>* m_SeenArrays[3]; // 0xd0		
		entity2::GameTime_t m_TimeLastLookHighPriority; // 0xe8		
		entity2::GameTime_t m_TimeLastLookNPCs; // 0xec		
		entity2::GameTime_t m_TimeLastLookMisc; // 0xf0		
		int32_t m_iSensingFlags; // 0xf4		
		server::CSound m_CachedTaskSound; // 0xf8		
		float m_flHearingSensitivity; // 0x12c		
		int32_t m_nSoundInterests; // 0x130		
		
		// Datamap fields:
		// void m_SeenArrays; // 0xd0
	};
};
