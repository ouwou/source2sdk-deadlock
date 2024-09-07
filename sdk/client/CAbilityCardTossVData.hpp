#pragma once
#include "client/CitadelAbilityVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x16e0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityCardTossVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x14f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SummonedCard; // 0x15d0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strCardTossSound; // 0x16b0		
		CSoundEventName m_strCardSummonSound; // 0x16c0		
		// MPropertyStartGroup "+Card Toss Properties"
		float m_flSummonedCardStartSideOffset; // 0x16d0		
		float m_flSummonedCardSideOffsetStep; // 0x16d4		
		float m_flSummonedCardForwardOffset; // 0x16d8		
		float m_flSummonedCardVerticalOffset; // 0x16dc		
	};
};
