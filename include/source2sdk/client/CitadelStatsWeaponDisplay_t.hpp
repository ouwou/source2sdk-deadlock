#pragma once
#include "source2sdk/client/ECitadelWeaponAttributes.hpp"
#include "source2sdk/client/EStatsType.hpp"
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
    // Size: 0x60
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CitadelStatsWeaponDisplay_t
    {
    public:
        // metadata: MPropertyDescription "The loc string of the heroes weapon name"
        CUtlString m_strWeaponNameLocString; // 0x0        
        // metadata: MPropertyDescription "The loc string of the heroes weapon description"
        CUtlString m_strWeaponDescLocString; // 0x8        
        // metadata: MPropertyDescription "The location of the weapon image"
        CPanoramaImageName m_strWeaponImage; // 0x10        
        // metadata: MPropertyDescription "The loc string of the heroes secondary weapon description (optional)"
        CUtlString m_strSecondaryWeaponDescLocString; // 0x20        
        // metadata: MPropertyDescription "The type of attributes does this weapon have?"
        client::ECitadelWeaponAttributes m_eWeaponAttributes; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2a[0x6]; // 0x2a
        // metadata: MPropertyDescription "What stats do we want to show in the top section?"
        // m_vecDisplayStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::EStatsType> m_vecDisplayStats;
        char m_vecDisplayStats[0x18]; // 0x30        
        // metadata: MPropertyDescription "What stats do we want to show in the other stats section?"
        // m_vecOtherDisplayStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::EStatsType> m_vecOtherDisplayStats;
        char m_vecOtherDisplayStats[0x18]; // 0x48        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelStatsWeaponDisplay_t, m_strWeaponNameLocString) == 0x0);
    static_assert(offsetof(CitadelStatsWeaponDisplay_t, m_strWeaponDescLocString) == 0x8);
    static_assert(offsetof(CitadelStatsWeaponDisplay_t, m_strWeaponImage) == 0x10);
    static_assert(offsetof(CitadelStatsWeaponDisplay_t, m_strSecondaryWeaponDescLocString) == 0x20);
    static_assert(offsetof(CitadelStatsWeaponDisplay_t, m_eWeaponAttributes) == 0x28);
    static_assert(offsetof(CitadelStatsWeaponDisplay_t, m_vecDisplayStats) == 0x30);
    static_assert(offsetof(CitadelStatsWeaponDisplay_t, m_vecOtherDisplayStats) == 0x48);
    
    static_assert(sizeof(CitadelStatsWeaponDisplay_t) == 0x60);
};
