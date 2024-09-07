#pragma once
#include "client/CEntitySubclassVDataBase.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x3e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Bounce_PadVData : public client::CEntitySubclassVDataBase
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sModelName; // 0x28		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IdleParticle; // 0x108		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BounceParticle; // 0x1e8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DestroyParticle; // 0x2c8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strCasterBounceSound; // 0x3a8		
		CSoundEventName m_strOtherHeroBounceSound; // 0x3b8		
		CSoundEventName m_strBarrelBounceSound; // 0x3c8		
		CSoundEventName m_strExpiredSound; // 0x3d8		
	};
};
