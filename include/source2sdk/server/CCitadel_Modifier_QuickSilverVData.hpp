#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_BaseEventProcVData.hpp"
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
    // Size: 0x750
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_QuickSilverVData : public server::CCitadel_Modifier_BaseEventProcVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BuffModifier;
        char m_BuffModifier[0x10]; // 0x660        
        // metadata: MPropertyGroupName "Visuals"
        // m_ProcParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ProcParticle;
        char m_ProcParticle[0xe0]; // 0x670        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_QuickSilverVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_QuickSilverVData) == 0x750);
};
