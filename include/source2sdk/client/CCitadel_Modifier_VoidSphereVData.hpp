#pragma once
#include "source2sdk/client/CBaseModifier.hpp"
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
    // Size: 0x9d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_VoidSphereVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_TeleportStartParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportStartParticle;
        char m_TeleportStartParticle[0xe0]; // 0x630        
        // m_TeleportEndParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportEndParticle;
        char m_TeleportEndParticle[0xe0]; // 0x710        
        // m_TeleportTrailParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportTrailParticle;
        char m_TeleportTrailParticle[0xe0]; // 0x7f0        
        // m_TeleportModelParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportModelParticle;
        char m_TeleportModelParticle[0xe0]; // 0x8d0        
        // metadata: MPropertyGroupName "Modifiers"
        // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_BuffModifier;
        char m_BuffModifier[0x10]; // 0x9b0        
        // metadata: MPropertyGroupName "Misc"
        float m_flPreTeleportDuration; // 0x9c0        
        [[maybe_unused]] std::uint8_t pad_0x9c4[0x4]; // 0x9c4
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_strAmbientLoopingLocalPlayerSound; // 0x9c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_VoidSphereVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_VoidSphereVData) == 0x9d8);
};
