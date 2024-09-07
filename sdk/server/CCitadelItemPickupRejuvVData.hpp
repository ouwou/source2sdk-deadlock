#pragma once
#include "client/CEntitySubclassVDataBase.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x138
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelItemPickupRejuvVData : public client::CEntitySubclassVDataBase
	{
	public:
		CSubclassName<4> m_AbilityProjectile; // 0x28		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_RejuvModifier; // 0x38		
		CEmbeddedSubclass<server::CCitadelModifier> m_PunchPickupModifier; // 0x48		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsDroppingParticle; // 0x58		
	};
};
