#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CEntitySubclassVDataBase.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
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
		CEmbeddedSubclass<client::CCitadelModifier> m_RejuvModifier; // 0x38		
		CEmbeddedSubclass<client::CCitadelModifier> m_PunchPickupModifier; // 0x48		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsDroppingParticle; // 0x58		
	};
};
