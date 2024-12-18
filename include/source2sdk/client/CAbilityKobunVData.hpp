#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
    // Standard-layout class: false
    // Size: 0x1588
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityKobunVData : public client::CitadelAbilityVData
    {
    public:
        Vector m_vSummonFollowOffset; // 0x1568        
        [[maybe_unused]] std::uint8_t pad_0x1574[0x4]; // 0x1574
        // metadata: MPropertyStartGroup "Modifiers"
        // m_CloneModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_CloneModifier;
        char m_CloneModifier[0x10]; // 0x1578        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityKobunVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityKobunVData) == 0x1588);
};
