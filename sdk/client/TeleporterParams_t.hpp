#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1f0
	// 
	// MGetKV3ClassDefaults
	struct TeleporterParams_t
	{
	public:
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StartEffect; // 0x0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EndEffect; // 0xe0		
		CSoundEventName m_strEnterSound; // 0x1c0		
		CSoundEventName m_strStartSound; // 0x1d0		
		CSoundEventName m_strTeleportedSound; // 0x1e0		
	};
};
