#pragma once
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x1650
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_MageWalkVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_BubbleModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_BubbleModifier;
        char m_BubbleModifier[0x10]; // 0x1550        
        // m_TurretModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_TurretModifier;
        char m_TurretModifier[0x10]; // 0x1560        
        // metadata: MPropertyStartGroup "Visuals"
        // m_strCastEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strCastEffect;
        char m_strCastEffect[0xe0]; // 0x1570        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_MageWalkVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_MageWalkVData) == 0x1650);
};
