#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelItemVData.hpp"
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
    // Size: 0x1680
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Item_Savior_VData : public client::CitadelItemVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_SaviorModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SaviorModifier;
        char m_SaviorModifier[0x10]; // 0x1590        
        // metadata: MPropertyGroupName "Visuals"
        // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
        char m_CastParticle[0xe0]; // 0x15a0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item_Savior_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Item_Savior_VData) == 0x1680);
};
