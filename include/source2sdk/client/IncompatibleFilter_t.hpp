#pragma once
#include "source2sdk/client/EAbilityActivation_t.hpp"
#include "source2sdk/client/EAbilityBehavior_t.hpp"
#include "source2sdk/client/EAbilityType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct IncompatibleFilter_t
    {
    public:
        // m_AbilityBehaviorsBits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CBitVecEnum<client::EAbilityBehavior_t> m_AbilityBehaviorsBits;
        char m_AbilityBehaviorsBits[0x8]; // 0x0        
        client::EAbilityActivation_t m_eAbilityActivation; // 0x8        
        client::EAbilityType_t m_eIncompatibleAbilityType; // 0xc        
        [[maybe_unused]] std::uint8_t pad_0x0d[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(IncompatibleFilter_t, m_AbilityBehaviorsBits) == 0x0);
    static_assert(offsetof(IncompatibleFilter_t, m_eAbilityActivation) == 0x8);
    static_assert(offsetof(IncompatibleFilter_t, m_eIncompatibleAbilityType) == 0xc);
    
    static_assert(sizeof(IncompatibleFilter_t) == 0x10);
};
