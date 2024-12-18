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
    // Size: 0x1c70
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityViscousBowlingVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_TransformStartFx has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TransformStartFx;
        char m_TransformStartFx[0xe0]; // 0x1568        
        // m_ExplodeFX has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeFX;
        char m_ExplodeFX[0xe0]; // 0x1648        
        // m_WallImpactFx has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallImpactFx;
        char m_WallImpactFx[0xe0]; // 0x1728        
        // m_BallTrailFx has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BallTrailFx;
        char m_BallTrailFx[0xe0]; // 0x1808        
        // m_GroundImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundImpactParticle;
        char m_GroundImpactParticle[0xe0]; // 0x18e8        
        // m_JumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_JumpParticle;
        char m_JumpParticle[0xe0]; // 0x19c8        
        // m_DirectionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DirectionParticle;
        char m_DirectionParticle[0xe0]; // 0x1aa8        
        float m_flVerticalCameraOffsetLerpTime; // 0x1b88        
        float m_flVerticalCameraOffsetBias; // 0x1b8c        
        float m_flVerticalCameraOffset; // 0x1b90        
        float m_flDistanceCameraOffsetLerpTime; // 0x1b94        
        float m_flDistanceCameraOffsetBias; // 0x1b98        
        float m_flDistanceCameraOffset; // 0x1b9c        
        // metadata: MPropertyLeafSuggestionProviderFn
        CGlobalSymbol m_strPopGraphParamter; // 0x1ba0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_BallJumpSound; // 0x1ba8        
        CSoundEventName m_EnterBallSound; // 0x1bb8        
        CSoundEventName m_BallLoopSound; // 0x1bc8        
        CSoundEventName m_ExitBallSound; // 0x1bd8        
        CSoundEventName m_WallImpactSound; // 0x1be8        
        CSoundEventName m_PlayerImpactSound; // 0x1bf8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ImpactModifier;
        char m_ImpactModifier[0x10]; // 0x1c08        
        // m_DamagePreventionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DamagePreventionModifier;
        char m_DamagePreventionModifier[0x10]; // 0x1c18        
        // m_RollingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_RollingModifier;
        char m_RollingModifier[0x10]; // 0x1c28        
        // metadata: MPropertyStartGroup "+Ball Parameters"
        float m_flTransformToBallTime; // 0x1c38        
        float m_flTransformFromBallTime; // 0x1c3c        
        float m_flAirTurnRatio; // 0x1c40        
        float m_flWallTurnRatioMax; // 0x1c44        
        float m_flWallTurnRatioMin; // 0x1c48        
        float m_flTurnRatio; // 0x1c4c        
        float m_flDefaultBallSpeed; // 0x1c50        
        float m_flFastBallSpeed; // 0x1c54        
        float m_flSpeedAccel; // 0x1c58        
        float m_flSpeedDeccel; // 0x1c5c        
        float m_flElasticity; // 0x1c60        
        float m_flWallCheckGroundOffset; // 0x1c64        
        float m_flWallPauseTime; // 0x1c68        
        float m_flWallAngleMin; // 0x1c6c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityViscousBowlingVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityViscousBowlingVData) == 0x1c70);
};
