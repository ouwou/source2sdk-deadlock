#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Size: 0x710
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierUppercuttedVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_StunParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StunParticle;
        char m_StunParticle[0xe0]; // 0x608        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_strStunSound; // 0x6e8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_NoExplodeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_NoExplodeModifier;
        char m_NoExplodeModifier[0x10]; // 0x6f8        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flEnemyNoAirDashDuration; // 0x708        
        [[maybe_unused]] std::uint8_t pad_0x70c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierUppercuttedVData because it is not a standard-layout class
    static_assert(sizeof(CModifierUppercuttedVData) == 0x710);
};
