#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
    // Size: 0x1a08
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityGuidedArrowVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraCancelledTransitionBacktoArcher; // 0x1528        
        client::CitadelCameraOperationsSequence_t m_cameraExplodedTransitionBackToArcher; // 0x15a8        
        float m_flCameraHoldAtExplosion; // 0x1628        
        float m_flFadeToBlackTime; // 0x162c        
        // metadata: MPropertyStartGroup "Visuals"
        // m_SpectatingProjectileParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SpectatingProjectileParticle;
        char m_SpectatingProjectileParticle[0xe0]; // 0x1630        
        // m_ExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplosionParticle;
        char m_ExplosionParticle[0xe0]; // 0x1710        
        // m_GuidedArrowChannelParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GuidedArrowChannelParticle;
        char m_GuidedArrowChannelParticle[0xe0]; // 0x17f0        
        // m_ProjectileModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_ProjectileModel;
        char m_ProjectileModel[0xe0]; // 0x18d0        
        float m_ArrowOffsetX; // 0x19b0        
        float m_ArrowCameraDistance; // 0x19b4        
        float m_ArrowCameraHeightOffset; // 0x19b8        
        float m_ArrowInitialPitch; // 0x19bc        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_GuidingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_GuidingModifier;
        char m_GuidingModifier[0x10]; // 0x19c0        
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x19d0        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_strExplodeSound; // 0x19e0        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flTrackAmount; // 0x19f0        
        float m_flSpeedAccel; // 0x19f4        
        float m_flSpeedDeccel; // 0x19f8        
        float m_flBaseProjectileSpeed; // 0x19fc        
        float m_flMaxProjectileSpeed; // 0x1a00        
        float m_flArrowModelTurnSpringStrength; // 0x1a04        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityGuidedArrowVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityGuidedArrowVData) == 0x1a08);
};
