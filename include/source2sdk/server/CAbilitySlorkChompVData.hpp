#pragma once
#include "source2sdk/server/CBaseModifier.hpp"
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
    // Size: 0x1568
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilitySlorkChompVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ChompHobbled has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_ChompHobbled;
        char m_ChompHobbled[0x10]; // 0x1548        
        // m_ChompGrapple has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_ChompGrapple;
        char m_ChompGrapple[0x10]; // 0x1558        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilitySlorkChompVData because it is not a standard-layout class
    static_assert(sizeof(CAbilitySlorkChompVData) == 0x1568);
};
