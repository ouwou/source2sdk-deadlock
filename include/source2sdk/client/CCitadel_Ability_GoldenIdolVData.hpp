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
    // Size: 0x1688
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_GoldenIdolVData : public client::CCitadel_Ability_BaseHeldItemVData
    {
    public:
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sIdolDropOffSound; // 0x1628        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DropoffTimerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DropoffTimerModifier;
        char m_DropoffTimerModifier[0x10]; // 0x1638        
        // m_HoldingIdolModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_HoldingIdolModifier;
        char m_HoldingIdolModifier[0x10]; // 0x1648        
        // m_Bonus01 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_Bonus01;
        char m_Bonus01[0x10]; // 0x1658        
        // m_Bonus02 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_Bonus02;
        char m_Bonus02[0x10]; // 0x1668        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flInstantGoldPercentage; // 0x1678        
        int32_t m_iComebackBounty; // 0x167c        
        int32_t m_iComebackGoldThreshold; // 0x1680        
        float m_flCasterBonusPercent; // 0x1684        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_GoldenIdolVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_GoldenIdolVData) == 0x1688);
};
