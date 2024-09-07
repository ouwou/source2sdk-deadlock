#pragma once
#include "client/TakeDamageFlags_t.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1508
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityMeleeVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyDescription "How long we'll buffer input to trigger another melee if we're already performing a melee"
		float m_flMeleeInputBufferTime; // 0x14f0		
		// MPropertyDescription "If we detect an enemy within this distance, forward attack movement will be suppressed so we don't move through them"
		float m_flCollisionDistance; // 0x14f4		
		// MPropertyDescription "A heavy attack will trigger after being charged up for this long"
		float m_flHeavyAttackRequiredHoldTime; // 0x14f8		
		// MPropertyDescription "A light attack will trigger if the melee button is pressed and released within this time.  After this time, a heavy melee will charge up"
		float m_flLightAttackMaxHoldTime; // 0x14fc		
		client::TakeDamageFlags_t m_MeleeDamageFlags; // 0x1500		
	};
};
