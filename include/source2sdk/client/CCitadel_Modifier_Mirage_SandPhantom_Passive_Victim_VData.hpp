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
    // Size: 0xb88
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim_VData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x608        
        // metadata: MPropertyStartGroup "Visuals"
        // m_DebuffStatusPlayerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DebuffStatusPlayerParticle;
        char m_DebuffStatusPlayerParticle[0xe0]; // 0x618        
        // m_DebuffStatusVictimParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DebuffStatusVictimParticle;
        char m_DebuffStatusVictimParticle[0xe0]; // 0x6f8        
        // m_DebuffStatusNPCParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DebuffStatusNPCParticle;
        char m_DebuffStatusNPCParticle[0xe0]; // 0x7d8        
        // m_StackDamageParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StackDamageParticle;
        char m_StackDamageParticle[0xe0]; // 0x8b8        
        // m_StackReadyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StackReadyParticle;
        char m_StackReadyParticle[0xe0]; // 0x998        
        // m_StackAppliedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StackAppliedParticle;
        char m_StackAppliedParticle[0xe0]; // 0xa78        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_ConsumeMaxStacksSound; // 0xb58        
        CSoundEventName m_ConsumeMaxStacksNonHeroSound; // 0xb68        
        CSoundEventName m_ApplyStackSound; // 0xb78        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Mirage_SandPhantom_Passive_Victim_VData) == 0xb88);
};
