#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadelModifierVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x7d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_ItemPickupPunchableVData : public client::CCitadelModifierVData
	{
	public:
		float m_flPhysicsRadius; // 0x5f8		
	private:
		[[maybe_unused]] uint8_t __pad05fc[0x4]; // 0x5fc
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsDroppingParticle; // 0x600		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsPunchableParticle; // 0x6e0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_NearRejuvAuraModifier; // 0x7c0		
	};
};
