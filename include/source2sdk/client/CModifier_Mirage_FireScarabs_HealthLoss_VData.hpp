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
    // Size: 0x6f8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifier_Mirage_FireScarabs_HealthLoss_VData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_SiphonParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SiphonParticle;
        char m_SiphonParticle[0xe0]; // 0x608        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_HealModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_HealModifier;
        char m_HealModifier[0x10]; // 0x6e8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_Mirage_FireScarabs_HealthLoss_VData because it is not a standard-layout class
    static_assert(sizeof(CModifier_Mirage_FireScarabs_HealthLoss_VData) == 0x6f8);
};
