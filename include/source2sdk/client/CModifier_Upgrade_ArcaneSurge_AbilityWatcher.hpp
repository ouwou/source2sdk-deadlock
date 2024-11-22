#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_CitadelBaseAbility;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1a8
    // Has VTable
    #pragma pack(push, 1)
    class CModifier_Upgrade_ArcaneSurge_AbilityWatcher : public client::CCitadelModifier
    {
    public:
        // m_hBuffedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CitadelBaseAbility> m_hBuffedAbility;
        char m_hBuffedAbility[0x4]; // 0xc0        
        bool m_bRecastingBuffedAbility; // 0xc4        
        [[maybe_unused]] std::uint8_t pad_0xc5[0xe3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_Upgrade_ArcaneSurge_AbilityWatcher because it is not a standard-layout class
    static_assert(sizeof(CModifier_Upgrade_ArcaneSurge_AbilityWatcher) == 0x1a8);
};
