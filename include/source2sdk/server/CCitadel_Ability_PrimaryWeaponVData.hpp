#pragma once
#include "source2sdk/client/DOFDesc_t.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
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
    // Size: 0x15b8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_PrimaryWeaponVData : public server::CitadelAbilityVData
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1568[0x8]; // 0x1568
        // metadata: MPropertyDescription "The DOF settings to apply while zoomed in."
        client::DOFDesc_t m_DOFWhileZoomed; // 0x1570        
        // metadata: MPropertyDescription "When true, the 'Far Crisp' and 'Far Blurry' are added on top of the gun's range.  When false, use the values directly."
        bool m_bDOFFarSettingsAreOffsetByGunRange; // 0x1580        
        [[maybe_unused]] std::uint8_t pad_0x1581[0x7]; // 0x1581
        // metadata: MPropertyStartGroup "Sounds"
        // metadata: MPropertyFriendlyName "Fire while disarmed sound"
        CSoundEventName m_sDisarmedSound; // 0x1588        
        float m_flMinDisarmedSoundInterval; // 0x1598        
        [[maybe_unused]] std::uint8_t pad_0x159c[0x4]; // 0x159c
        CSoundEventName m_sObstructedShotSound; // 0x15a0        
        // metadata: MPropertyStartGroup "Action Reload"
        // metadata: MPropertyAttributeRange "0 1"
        // metadata: MPropertyDescription "If we have action reloads, at what fraction of our reload progress does the timing window start.  The window is centered on this time."
        float m_flActionReloadTimingStart; // 0x15b0        
        // metadata: MPropertyDescription "If we have action reloads, how long is the window"
        float m_flActionReloadTimingDuration; // 0x15b4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeaponVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PrimaryWeaponVData) == 0x15b8);
};
