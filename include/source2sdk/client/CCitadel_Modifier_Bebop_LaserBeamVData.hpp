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
    // Size: 0x920
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Bebop_LaserBeamVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x630        
        // metadata: MPropertyStartGroup "Visuals"
        // m_BeamParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticle;
        char m_BeamParticle[0xe0]; // 0x640        
        // m_BeamParticleLocal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticleLocal;
        char m_BeamParticleLocal[0xe0]; // 0x720        
        // m_BeamHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamHitParticle;
        char m_BeamHitParticle[0xe0]; // 0x800        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strLaserStartSound; // 0x8e0        
        CSoundEventName m_strLaserEndSound; // 0x8f0        
        CSoundEventName m_strLaserLoopSound; // 0x900        
        CSoundEventName m_strLaserHitSound; // 0x910        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Bebop_LaserBeamVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Bebop_LaserBeamVData) == 0x920);
};
