#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Size: 0x618
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierRiotCastDelayVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_UnstoppableModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_UnstoppableModifier;
        char m_UnstoppableModifier[0x10]; // 0x608        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierRiotCastDelayVData because it is not a standard-layout class
    static_assert(sizeof(CModifierRiotCastDelayVData) == 0x618);
};
