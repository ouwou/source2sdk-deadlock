#pragma once
#include "source2sdk/server/CCitadelModifierAura.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
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
    // Size: 0x1550
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityCadenceCrescendoVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_CrescendoAOEModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifierAura> m_CrescendoAOEModifier;
        char m_CrescendoAOEModifier[0x10]; // 0x1540        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityCadenceCrescendoVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityCadenceCrescendoVData) == 0x1550);
};
