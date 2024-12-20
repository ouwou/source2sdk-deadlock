#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
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
    // Size: 0x1938
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityTokamakHotShotVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_LaserModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_LaserModifier;
        char m_LaserModifier[0x10]; // 0x1568        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strLaserStartSound; // 0x1578        
        CSoundEventName m_strLaserEndSound; // 0x1588        
        CSoundEventName m_strLaserLoopSound; // 0x1598        
        CSoundEventName m_strLaserHitSound; // 0x15a8        
        // metadata: MPropertyStartGroup "Visuals"
        // m_ChargeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeParticle;
        char m_ChargeParticle[0xe0]; // 0x15b8        
        // m_BeamParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticle;
        char m_BeamParticle[0xe0]; // 0x1698        
        // m_HitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HitParticle;
        char m_HitParticle[0xe0]; // 0x1778        
        // m_GroundParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundParticle;
        char m_GroundParticle[0xe0]; // 0x1858        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityTokamakHotShotVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityTokamakHotShotVData) == 0x1938);
};
