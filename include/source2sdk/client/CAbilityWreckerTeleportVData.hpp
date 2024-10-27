#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
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
    // Size: 0x1928
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityWreckerTeleportVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_SpectatingProjectileParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SpectatingProjectileParticle;
        char m_SpectatingProjectileParticle[0xe0]; // 0x1550        
        // m_ExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplosionParticle;
        char m_ExplosionParticle[0xe0]; // 0x1630        
        // m_ChannelParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChannelParticle;
        char m_ChannelParticle[0xe0]; // 0x1710        
        // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
        char m_CastParticle[0xe0]; // 0x17f0        
        float m_ArrowOffsetX; // 0x18d0        
        float m_ArrowCameraDistance; // 0x18d4        
        float m_ArrowCameraHeightOffset; // 0x18d8        
        float m_ArrowInitialPitch; // 0x18dc        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_GuidingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_GuidingModifier;
        char m_GuidingModifier[0x10]; // 0x18e0        
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x18f0        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_strExplodeSound; // 0x1900        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flTrackAmount; // 0x1910        
        float m_flSpeedAccel; // 0x1914        
        float m_flSpeedDeccel; // 0x1918        
        float m_flBaseProjectileSpeed; // 0x191c        
        float m_flMaxProjectileSpeed; // 0x1920        
        [[maybe_unused]] std::uint8_t pad_0x1924[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityWreckerTeleportVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityWreckerTeleportVData) == 0x1928);
};
