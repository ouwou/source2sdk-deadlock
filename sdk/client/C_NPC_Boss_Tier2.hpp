#pragma once
#include "client/C_AI_CitadelNPC.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x14c8
	// Has VTable
	// 
	// MNetworkVarNames "int m_iLane"
	// MNetworkVarNames "GameTime_t m_flFadeOutStart"
	// MNetworkVarNames "GameTime_t m_flFadeOutEnd"
	// MNetworkVarNames "EHANDLE m_hTargetedEnemy"
	// MNetworkVarNames "int m_nElectricBeamCasts"
	class C_NPC_Boss_Tier2 : public client::C_AI_CitadelNPC
	{
	private:
		[[maybe_unused]] uint8_t __pad1490[0x8]; // 0x1490
	public:
		// MNetworkEnable
		int32_t m_iLane; // 0x1498		
		// MNetworkEnable
		entity2::GameTime_t m_flFadeOutStart; // 0x149c		
		// MNetworkEnable
		entity2::GameTime_t m_flFadeOutEnd; // 0x14a0		
		// MNetworkEnable
		// MNetworkChangeCallback "OnBossTargetedEnemyChanged"
		CHandle<client::C_BaseEntity> m_hTargetedEnemy; // 0x14a4		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		// MNetworkChangeCallback "OnLookTargetChanged"
		Vector m_vecElectricBeamLookTarget; // 0x14a8		
	private:
		[[maybe_unused]] uint8_t __pad14b4[0xc]; // 0x14b4
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnElectricBeamCastsChanged"
		int32_t m_nElectricBeamCasts; // 0x14c0		
	};
};
