#pragma once
#include "client/C_AI_CitadelNPC.hpp"
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
	// Size: 0x14d8
	// Has VTable
	// 
	// MNetworkVarNames "int m_iLane"
	// MNetworkVarNames "EHANDLE m_hTargetedEnemy"
	// MNetworkVarNames "float m_flHealingChargeParticlePct"
	class C_NPC_Trooper : public client::C_AI_CitadelNPC
	{
	public:
		// MNetworkEnable
		int32_t m_iLane; // 0x1490		
		// MNetworkEnable
		// MNetworkChangeCallback "OnTargetedEnemyChanged"
		CHandle<client::C_BaseEntity> m_hTargetedEnemy; // 0x1494		
		// MNetworkEnable
		// MNetworkChangeCallback "OnHealingChargeChanged"
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1.000000"
		float m_flHealingChargeParticlePct; // 0x1498		
	};
};
