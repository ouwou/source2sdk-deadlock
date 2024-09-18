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
    // Size: 0x640
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_VeilWalkerWatcherVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_InvisModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_InvisModifier;
        char m_InvisModifier[0x10]; // 0x608        
        // m_VeilWalkerTriggeredModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_VeilWalkerTriggeredModifier;
        char m_VeilWalkerTriggeredModifier[0x10]; // 0x618        
        // m_VeilWalkerMovespeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_VeilWalkerMovespeed;
        char m_VeilWalkerMovespeed[0x10]; // 0x628        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flTraceLengthMin; // 0x638        
        [[maybe_unused]] std::uint8_t pad_0x63c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_VeilWalkerWatcherVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_VeilWalkerWatcherVData) == 0x640);
};
