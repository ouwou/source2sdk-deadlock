#pragma once
#include "source2sdk/client/CModifierLevelFloat.hpp"
#include "source2sdk/client/eAuraShapeType.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x640
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierVData_BaseAura : public server::CCitadelModifierVData
    {
    public:
        client::eAuraShapeType m_eAuraShapeType; // 0x608        
        // metadata: MPropertySuppressExpr "m_eAuraShapeType != k_eAuraShapeTypeSphere"
        client::CModifierLevelFloat m_flAuraRadius; // 0x60c        
        // metadata: MPropertySuppressExpr "m_eAuraShapeType != k_eAuraShapeTypeEntityBased"
        client::CModifierLevelFloat m_flAuraEntityBoundsScale; // 0x61c        
        int32_t m_nAmbientParticleRadiusControlPoint; // 0x62c        
        // metadata: MPropertyDescription "Aura - Modifier to Apply"
        // metadata: MPropertyFriendlyName "Modifier Provided By Aura"
        // m_modifierProvidedByAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_modifierProvidedByAura;
        char m_modifierProvidedByAura[0x10]; // 0x630        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierVData_BaseAura because it is not a standard-layout class
    static_assert(sizeof(CModifierVData_BaseAura) == 0x640);
};
