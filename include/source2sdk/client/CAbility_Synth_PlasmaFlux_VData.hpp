#pragma once
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
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
    // Size: 0x1770
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbility_Synth_PlasmaFlux_VData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_WeaponDamageBonusModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_WeaponDamageBonusModifier;
        char m_WeaponDamageBonusModifier[0x10]; // 0x14f0        
        // metadata: MPropertyStartGroup "Visuals"
        // m_TeleportTrailParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportTrailParticle;
        char m_TeleportTrailParticle[0xe0]; // 0x1500        
        // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
        char m_ImpactParticle[0xe0]; // 0x15e0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strCasterLoopingSound; // 0x16c0        
        CSoundEventName m_strProjectileExpireSound; // 0x16d0        
        CSoundEventName m_strImpactSound; // 0x16e0        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // 0x16f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Synth_PlasmaFlux_VData because it is not a standard-layout class
    
    static_assert(sizeof(CAbility_Synth_PlasmaFlux_VData) == 0x1770);
};