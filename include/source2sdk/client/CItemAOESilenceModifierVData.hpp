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
    class CItemAOESilenceModifierVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_strSilenceTargetSound; // 0x5f8        
        // metadata: MPropertyGroupName "Modifiers"
        // m_SilenceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SilenceModifier;
        char m_SilenceModifier[0x10]; // 0x608        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemAOESilenceModifierVData because it is not a standard-layout class
    
    static_assert(sizeof(CItemAOESilenceModifierVData) == 0x618);
};