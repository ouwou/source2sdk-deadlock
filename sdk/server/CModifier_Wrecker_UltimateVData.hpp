#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x678
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifier_Wrecker_UltimateVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_EnemyGrabModifier; // 0x5f8		
		CEmbeddedSubclass<server::CCitadelModifier> m_EnemyThrowModifier; // 0x608		
		CEmbeddedSubclass<server::CCitadelModifier> m_EnemyDamageModifier; // 0x618		
		CEmbeddedSubclass<server::CCitadelModifier> m_InvincibleModifier; // 0x628		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_StartSound; // 0x638		
		CSoundEventName m_AmbientLoopingSound; // 0x648		
		CSoundEventName m_GrabSound; // 0x658		
		CSoundEventName m_ThrowSound; // 0x668		
	};
};
