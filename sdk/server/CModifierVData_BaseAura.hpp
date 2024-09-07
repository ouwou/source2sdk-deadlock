#pragma once
#include "client/CModifierLevelFloat.hpp"
#include "client/eAuraShapeType.hpp"
#include "server/CBaseModifier.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x630
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierVData_BaseAura : public server::CCitadelModifierVData
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
		CEmbeddedSubclass<server::CBaseModifier> m_modifierProvidedByAura; // 0x620		
	};
};
