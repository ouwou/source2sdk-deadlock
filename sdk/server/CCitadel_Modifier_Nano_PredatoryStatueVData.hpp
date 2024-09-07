#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
	// Size: 0x908
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Nano_PredatoryStatueVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle; // 0x5f8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnabledParticle; // 0x6d8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DrainParticle; // 0x7b8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strEnabledSound; // 0x898		
		CSoundEventName m_strEnabledLoopSound; // 0x8a8		
		CSoundEventName m_strDisabledSound; // 0x8b8		
		CSoundEventName m_strLaserHitSound; // 0x8c8		
		CSoundEventName m_strLaserStartSound; // 0x8d8		
		CSoundEventName m_strLaserLoopSound; // 0x8e8		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_TargetModifier; // 0x8f8		
	};
};
