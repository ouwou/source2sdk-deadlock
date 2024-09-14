#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"
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
    // Size: 0x9c0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierLastBreathVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_ShieldParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldParticle;
        char m_ShieldParticle[0xe0]; // 0x5f8        
        // m_BulletShieldHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BulletShieldHitParticle;
        char m_BulletShieldHitParticle[0xe0]; // 0x6d8        
        // m_TechShieldHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TechShieldHitParticle;
        char m_TechShieldHitParticle[0xe0]; // 0x7b8        
        // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
        char m_ExplodeParticle[0xe0]; // 0x898        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strStartSound; // 0x978        
        CSoundEventName m_ExplodeSound; // 0x988        
        float m_flShieldImpactEffectDuration; // 0x998        
        [[maybe_unused]] std::uint8_t pad_0x99c[0x4]; // 0x99c
        // metadata: MPropertyGroupName "Modifiers"
        // m_BulletShieldImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BulletShieldImpactModifier;
        char m_BulletShieldImpactModifier[0x10]; // 0x9a0        
        // m_TechShieldImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_TechShieldImpactModifier;
        char m_TechShieldImpactModifier[0x10]; // 0x9b0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierLastBreathVData because it is not a standard-layout class
    static_assert(sizeof(CModifierLastBreathVData) == 0x9c0);
};
