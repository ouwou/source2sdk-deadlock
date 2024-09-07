#pragma once
#include "client/CBaseModifier.hpp"
#include "client/CCitadelModifierVData.hpp"
#include "client/CModifierLevelFloat.hpp"
#include "client/eAuraShapeType.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x630
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierVData_BaseAura : public client::CCitadelModifierVData
	{
	public:
		client::eAuraShapeType m_eAuraShapeType; // 0x5f8		
		// MPropertySuppressExpr "m_eAuraShapeType != k_eAuraShapeTypeSphere"
		client::CModifierLevelFloat m_flAuraRadius; // 0x5fc		
		// MPropertySuppressExpr "m_eAuraShapeType != k_eAuraShapeTypeEntityBased"
		client::CModifierLevelFloat m_flAuraEntityBoundsScale; // 0x60c		
		int32_t m_nAmbientParticleRadiusControlPoint; // 0x61c		
		// MPropertyDescription "Aura - Modifier to Apply"
		// MPropertyFriendlyName "Modifier Provided By Aura"
		CEmbeddedSubclass<client::CBaseModifier> m_modifierProvidedByAura; // 0x620		
	};
};
