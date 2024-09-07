#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1660
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityHookVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_SelfModifier; // 0x14f0		
		CEmbeddedSubclass<server::CCitadelModifier> m_TargetModifier; // 0x1500		
		CEmbeddedSubclass<server::CCitadelModifier> m_BulletAmpModifier; // 0x1510		
		CEmbeddedSubclass<server::CCitadelModifier> m_ShieldModifier; // 0x1520		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookOutParticle; // 0x1530		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strHookSuccessSound; // 0x1610		
		CSoundEventName m_strHookAllySound; // 0x1620		
		CSoundEventName m_strHookMissSound; // 0x1630		
		CSoundEventName m_strHookImpactGeoSound; // 0x1640		
		CSoundEventName m_SelfBuffCastSound; // 0x1650		
	};
};
