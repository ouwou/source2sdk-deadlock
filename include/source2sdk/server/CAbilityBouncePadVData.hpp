#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x1588
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityBouncePadVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BounceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BounceModifier;
        char m_BounceModifier[0x10]; // 0x1548        
        // m_AllyBounceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_AllyBounceModifier;
        char m_AllyBounceModifier[0x10]; // 0x1558        
        // m_SpeedOnLandModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_SpeedOnLandModifier;
        char m_SpeedOnLandModifier[0x10]; // 0x1568        
        // m_NoBounceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_NoBounceModifier;
        char m_NoBounceModifier[0x10]; // 0x1578        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityBouncePadVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityBouncePadVData) == 0x1588);
};
