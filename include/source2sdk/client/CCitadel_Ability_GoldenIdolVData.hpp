#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_Ability_BaseHeldItemVData.hpp"
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
    // Size: 0x16c0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_GoldenIdolVData : public client::CCitadel_Ability_BaseHeldItemVData
    {
    public:
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sIdolDropOffSound; // 0x1630        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DropoffTimerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DropoffTimerModifier;
        char m_DropoffTimerModifier[0x10]; // 0x1640        
        // m_HoldingIdolModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_HoldingIdolModifier;
        char m_HoldingIdolModifier[0x10]; // 0x1650        
        // m_RevealedHoldingIdolModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_RevealedHoldingIdolModifier;
        char m_RevealedHoldingIdolModifier[0x10]; // 0x1660        
        // m_Bonus01 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_Bonus01;
        char m_Bonus01[0x10]; // 0x1670        
        // m_Bonus02 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_Bonus02;
        char m_Bonus02[0x10]; // 0x1680        
        // m_NoPickupModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_NoPickupModifier;
        char m_NoPickupModifier[0x10]; // 0x1690        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flInstantGoldPercentage; // 0x16a0        
        int32_t m_iComebackBounty; // 0x16a4        
        float m_flCasterBonusPercent; // 0x16a8        
        float m_flRevealTime; // 0x16ac        
        float m_flDamageTickRate; // 0x16b0        
        float m_flMaxHealthDamage; // 0x16b4        
        float m_flTimeToDamage; // 0x16b8        
        float m_flNoPickupTime; // 0x16bc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_GoldenIdolVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_GoldenIdolVData) == 0x16c0);
};
