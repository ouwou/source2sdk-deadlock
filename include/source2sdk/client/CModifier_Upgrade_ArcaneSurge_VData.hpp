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
    // Size: 0x628
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifier_Upgrade_ArcaneSurge_VData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_WeaponBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_WeaponBuffModifier;
        char m_WeaponBuffModifier[0x10]; // 0x608        
        // m_AbilityWatcherModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_AbilityWatcherModifier;
        char m_AbilityWatcherModifier[0x10]; // 0x618        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_Upgrade_ArcaneSurge_VData because it is not a standard-layout class
    static_assert(sizeof(CModifier_Upgrade_ArcaneSurge_VData) == 0x628);
};
