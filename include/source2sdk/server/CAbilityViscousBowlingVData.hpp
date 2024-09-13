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
    // Size: 0x1c30
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityViscousBowlingVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_TransformStartFx has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TransformStartFx;
        char m_TransformStartFx[0xe0]; // 0x1528        
        // m_ExplodeFX has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeFX;
        char m_ExplodeFX[0xe0]; // 0x1608        
        // m_WallImpactFx has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallImpactFx;
        char m_WallImpactFx[0xe0]; // 0x16e8        
        // m_BallTrailFx has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BallTrailFx;
        char m_BallTrailFx[0xe0]; // 0x17c8        
        // m_GroundImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundImpactParticle;
        char m_GroundImpactParticle[0xe0]; // 0x18a8        
        // m_JumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_JumpParticle;
        char m_JumpParticle[0xe0]; // 0x1988        
        // m_DirectionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DirectionParticle;
        char m_DirectionParticle[0xe0]; // 0x1a68        
        float m_flVerticalCameraOffsetLerpTime; // 0x1b48        
        float m_flVerticalCameraOffsetBias; // 0x1b4c        
        float m_flVerticalCameraOffset; // 0x1b50        
        float m_flDistanceCameraOffsetLerpTime; // 0x1b54        
        float m_flDistanceCameraOffsetBias; // 0x1b58        
        float m_flDistanceCameraOffset; // 0x1b5c        
        // metadata: MPropertyLeafSuggestionProviderFn
        CGlobalSymbol m_strPopGraphParamter; // 0x1b60        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_BallJumpSound; // 0x1b68        
        CSoundEventName m_EnterBallSound; // 0x1b78        
        CSoundEventName m_BallLoopSound; // 0x1b88        
        CSoundEventName m_ExitBallSound; // 0x1b98        
        CSoundEventName m_WallImpactSound; // 0x1ba8        
        CSoundEventName m_PlayerImpactSound; // 0x1bb8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ImpactModifier;
        char m_ImpactModifier[0x10]; // 0x1bc8        
        // m_DamagePreventionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_DamagePreventionModifier;
        char m_DamagePreventionModifier[0x10]; // 0x1bd8        
        // m_RollingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_RollingModifier;
        char m_RollingModifier[0x10]; // 0x1be8        
        // metadata: MPropertyStartGroup "+Ball Parameters"
        float m_flTransformToBallTime; // 0x1bf8        
        float m_flTransformFromBallTime; // 0x1bfc        
        float m_flAirTurnRatio; // 0x1c00        
        float m_flWallTurnRatioMax; // 0x1c04        
        float m_flWallTurnRatioMin; // 0x1c08        
        float m_flTurnRatio; // 0x1c0c        
        float m_flDefaultBallSpeed; // 0x1c10        
        float m_flFastBallSpeed; // 0x1c14        
        float m_flSpeedAccel; // 0x1c18        
        float m_flSpeedDeccel; // 0x1c1c        
        float m_flElasticity; // 0x1c20        
        float m_flWallCheckGroundOffset; // 0x1c24        
        float m_flWallPauseTime; // 0x1c28        
        float m_flWallAngleMin; // 0x1c2c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityViscousBowlingVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityViscousBowlingVData) == 0x1c30);
};
