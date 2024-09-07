#pragma once
#include "client/CCitadelModifier.hpp"
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
	// Size: 0x1900
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityImmobilizeTrapVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x14f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PreviewRingParticle; // 0x15d0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TrapHighlightParticle; // 0x16b0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ArmedParticle; // 0x1790		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strTripSound; // 0x1870		
		CSoundEventName m_strExplodeSound; // 0x1880		
		CSoundEventName m_strExpiredSound; // 0x1890		
		CSoundEventName m_strImmobilizeTargetSound; // 0x18a0		
		CSoundEventName m_strArmingSound; // 0x18b0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_TrapModifier; // 0x18c0		
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x18d0		
		CEmbeddedSubclass<client::CCitadelModifier> m_DotModifier; // 0x18e0		
		CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier; // 0x18f0		
	};
};
