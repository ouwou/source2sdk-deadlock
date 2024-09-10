#pragma once
#include "source2sdk/client/CModifierLevelFloat.hpp"
#include "source2sdk/client/EModifierScriptVariantType.hpp"
#include "source2sdk/client/EModifierValue.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x1d8
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ModifierScriptValue_t
    {
    public:
        client::EModifierValue m_eModifierValue; // 0x0        
        client::EModifierScriptVariantType m_eType; // 0x4        
        // metadata: MPropertySuppressExpr "m_eType != MODIFIER_SCRIPT_VARIANT_MODIFIER_FLOAT"
        client::CModifierLevelFloat m_value; // 0x8        
        // metadata: MPropertySuppressExpr "m_eType != MODIFIER_SCRIPT_VARIANT_MODEL"
        // m_sModelValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sModelValue;
        char m_sModelValue[0xe0]; // 0x18        
        // metadata: MPropertySuppressExpr "m_eType != MODIFIER_SCRIPT_VARIANT_PARTICLE"
        // m_sParticleValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sParticleValue;
        char m_sParticleValue[0xe0]; // 0xf8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ModifierScriptValue_t, m_eModifierValue) == 0x0);
    static_assert(offsetof(ModifierScriptValue_t, m_eType) == 0x4);
    static_assert(offsetof(ModifierScriptValue_t, m_value) == 0x8);
    static_assert(offsetof(ModifierScriptValue_t, m_sModelValue) == 0x18);
    static_assert(offsetof(ModifierScriptValue_t, m_sParticleValue) == 0xf8);
    
    static_assert(sizeof(ModifierScriptValue_t) == 0x1d8);
};
