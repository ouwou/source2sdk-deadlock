#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x180
	// 
	// MGetKV3ClassDefaults
	struct GoldChangeSounds_t
	{
	public:
		// MPropertyStartGroup "Sounds"
		// MPropertyDescription "When you sell an item."
		CSoundEventName m_strItemSale; // 0x0		
		// MPropertyDescription "When you get gold from a treasure (probably idol?)."
		CSoundEventName m_strTreasureChest; // 0x10		
		// MPropertyDescription "When you get gold from a player kill."
		CSoundEventName m_strPlayerKill; // 0x20		
		// MPropertyDescription "When you get gold from a player kill assist."
		CSoundEventName m_strPlayerKillAssist; // 0x30		
		// MPropertyDescription "When you get gold from a boss kill."
		CSoundEventName m_strBossKill; // 0x40		
		// MPropertyDescription "When you get gold from a lane trooper kill."
		CSoundEventName m_strLaneTrooperKill; // 0x50		
		// MPropertyDescription "When you get gold from a neutral trooper kill."
		CSoundEventName m_strNeutralTrooperKill; // 0x60		
		// MPropertyDescription "When you get gold from a base sentry kill."
		CSoundEventName m_strBaseSentryKill; // 0x70		
		// MPropertyDescription "When you get gold from a player orb."
		CSoundEventName m_strPlayerOrb; // 0x80		
		// MPropertyDescription "When you get gold from denying an orb."
		CSoundEventName m_strOrbDeny; // 0x90		
		// MPropertyDescription "When you get gold from a lane trooper orb."
		CSoundEventName m_strLaneTrooperOrb; // 0xa0		
		// MPropertyDescription "When you get gold from a neutral trooper orb."
		CSoundEventName m_strNeutralTrooperOrb; // 0xb0		
		// MPropertyDescription "When you get gold from a tier1 boss orb."
		CSoundEventName m_strTier1BossOrb; // 0xc0		
		// MPropertyDescription "When you get gold from a tier2 boss orb."
		CSoundEventName m_strTier2BossOrb; // 0xd0		
		// MPropertyDescription "When you get gold from a tier3 boss orb."
		CSoundEventName m_strTier3BossOrb; // 0xe0		
		// MPropertyDescription "When you get gold from a base sentry orb."
		CSoundEventName m_strBaseSentryOrb; // 0xf0		
		// MPropertyDescription "When you get gold from a orb from a deployable."
		CSoundEventName m_strOrbDeployable; // 0x100		
		// MPropertyDescription "When you get gold from a neutral boss kill."
		CSoundEventName m_strNeutralBossKill; // 0x110		
		// MPropertyDescription "When you get gold from a trophy kill orb."
		CSoundEventName m_strTrophyKillOrb; // 0x120		
		// MPropertyDescription "When you get gold from neutral world pickup."
		CSoundEventName m_strNeutralWorldPickup; // 0x130		
		// MPropertyDescription "When you spend gold from item purchase."
		CSoundEventName m_strItemPurchase; // 0x140		
		// MPropertyDescription "When you spend gold from item upgrade."
		CSoundEventName m_strItemUpgrade; // 0x150		
		// MPropertyDescription "When you get gold from starting amount."
		CSoundEventName m_strStartingAmount; // 0x160		
		// MPropertyDescription "When you get gold from cheats."
		CSoundEventName m_strCheats; // 0x170		
	};
};
