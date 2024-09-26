#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelItemVData.hpp"
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
    // Size: 0x15c0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_WeaponUpgrade_Headhunter_VData : public client::CitadelItemVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_HeadshotBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_HeadshotBuffModifier;
        char m_HeadshotBuffModifier[0x10]; // 0x1590        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_HeadShotVictimSound; // 0x15a0        
        CSoundEventName m_HeadShotConfirmationSound; // 0x15b0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_Headhunter_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_WeaponUpgrade_Headhunter_VData) == 0x15c0);
};
