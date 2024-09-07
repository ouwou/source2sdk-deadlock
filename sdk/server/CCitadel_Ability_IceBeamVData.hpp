#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Modifier_Base_Buildup.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1730
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_IceBeamVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticle; // 0x14f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HitParticle; // 0x15d0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_SlowModifier; // 0x16b0		
		CEmbeddedSubclass<server::CCitadel_Modifier_Base_Buildup> m_BuildupModifier; // 0x16c0		
		CEmbeddedSubclass<server::CCitadelModifier> m_BuildupProcModifier; // 0x16d0		
		// MPropertyStartGroup "Sound"
		CSoundEventName m_BeamStartSound; // 0x16e0		
		CSoundEventName m_BeamStopSound; // 0x16f0		
		CSoundEventName m_BeamPointStartLoopSound; // 0x1700		
		CSoundEventName m_BeamPointEndLoopSound; // 0x1710		
		CSoundEventName m_BeamPointClosestLoopSound; // 0x1720		
	};
};
