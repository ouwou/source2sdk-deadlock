#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_StatStealBaseVData.hpp"
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
    // Size: 0x638
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Mirage_FireScarabs_WatcherVData : public server::CCitadel_Modifier_StatStealBaseVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_HealModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_HealModifier;
        char m_HealModifier[0x10]; // 0x628        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Mirage_FireScarabs_WatcherVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Mirage_FireScarabs_WatcherVData) == 0x638);
};
