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
	// Size: 0x688
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_TangoTether_TetherVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_TetherSound; // 0x5f8		
		CSoundEventName m_HealSound; // 0x608		
		CSoundEventName m_HitIndicator; // 0x618		
		CSoundEventName m_GrappleHitSound; // 0x628		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_BuffModifier; // 0x638		
		CEmbeddedSubclass<server::CCitadelModifier> m_DisconnectingModifier; // 0x648		
		CEmbeddedSubclass<server::CCitadelModifier> m_DisconnectedModifier; // 0x658		
		CEmbeddedSubclass<server::CCitadelModifier> m_LockedTargetModifier; // 0x668		
		// MPropertyStartGroup "Gameplay"
		float m_flMinConnectTime; // 0x678		
		float m_flDisconnectDistanceBuffer; // 0x67c		
		float m_flCandidateCloserDistance; // 0x680		
		float m_flTargetAwayDistance; // 0x684		
	};
};
