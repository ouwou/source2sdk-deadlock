#pragma once
#include "client/CModifierLevelFloat.hpp"
#include "client/EModifierScriptVariantType.hpp"
#include "client/EModifierValue.hpp"
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
	// Size: 0x1d8
	// 
	// MGetKV3ClassDefaults
	struct ModifierScriptValue_t
	{
	public:
		client::EModifierValue m_eModifierValue; // 0x0		
		client::EModifierScriptVariantType m_eType; // 0x4		
		// MPropertySuppressExpr "m_eType != MODIFIER_SCRIPT_VARIANT_MODIFIER_FLOAT"
		client::CModifierLevelFloat m_value; // 0x8		
		// MPropertySuppressExpr "m_eType != MODIFIER_SCRIPT_VARIANT_MODEL"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sModelValue; // 0x18		
		// MPropertySuppressExpr "m_eType != MODIFIER_SCRIPT_VARIANT_PARTICLE"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sParticleValue; // 0xf8		
	};
};
