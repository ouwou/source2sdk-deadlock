#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CitadelItemVData.hpp"
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
	class CItem_WarpStone_VData : public server::CitadelItemVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_CasterModifier; // 0x1538		
		CEmbeddedSubclass<server::CCitadelModifier> m_CasterDebuffModifier; // 0x1548		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strExplodeSound; // 0x1558		
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastDelayParticle; // 0x1568		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportTrailParticle; // 0x1648		
		// MPropertyGroupName "Gameplay"
		float m_flTeleportDistance; // 0x1728		
	};
};
