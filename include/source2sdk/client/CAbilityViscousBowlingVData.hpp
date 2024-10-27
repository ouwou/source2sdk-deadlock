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
    // Size: 0x1c58
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
        char m_TransformStartFx[0xe0]; // 0x1550        
        // m_ExplodeFX has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeFX;
        char m_ExplodeFX[0xe0]; // 0x1630        
        // m_WallImpactFx has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallImpactFx;
        char m_WallImpactFx[0xe0]; // 0x1710        
        // m_BallTrailFx has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BallTrailFx;
        char m_BallTrailFx[0xe0]; // 0x17f0        
        // m_GroundImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundImpactParticle;
        char m_GroundImpactParticle[0xe0]; // 0x18d0        
        // m_JumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_JumpParticle;
        char m_JumpParticle[0xe0]; // 0x19b0        
        // m_DirectionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DirectionParticle;
        char m_DirectionParticle[0xe0]; // 0x1a90        
        float m_flVerticalCameraOffsetLerpTime; // 0x1b70        
        float m_flVerticalCameraOffsetBias; // 0x1b74        
        float m_flVerticalCameraOffset; // 0x1b78        
        float m_flDistanceCameraOffsetLerpTime; // 0x1b7c        
        float m_flDistanceCameraOffsetBias; // 0x1b80        
        float m_flDistanceCameraOffset; // 0x1b84        
        // metadata: MPropertyLeafSuggestionProviderFn
        CGlobalSymbol m_strPopGraphParamter; // 0x1b88        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_BallJumpSound; // 0x1b90        
        CSoundEventName m_EnterBallSound; // 0x1ba0        
        CSoundEventName m_BallLoopSound; // 0x1bb0        
        CSoundEventName m_ExitBallSound; // 0x1bc0        
        CSoundEventName m_WallImpactSound; // 0x1bd0        
        CSoundEventName m_PlayerImpactSound; // 0x1be0        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ImpactModifier;
        char m_ImpactModifier[0x10]; // 0x1bf0        
        // m_DamagePreventionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DamagePreventionModifier;
        char m_DamagePreventionModifier[0x10]; // 0x1c00        
        // m_RollingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_RollingModifier;
        char m_RollingModifier[0x10]; // 0x1c10        
        // metadata: MPropertyStartGroup "+Ball Parameters"
        float m_flTransformToBallTime; // 0x1c20        
        float m_flTransformFromBallTime; // 0x1c24        
        float m_flAirTurnRatio; // 0x1c28        
        float m_flWallTurnRatioMax; // 0x1c2c        
        float m_flWallTurnRatioMin; // 0x1c30        
        float m_flTurnRatio; // 0x1c34        
        float m_flDefaultBallSpeed; // 0x1c38        
        float m_flFastBallSpeed; // 0x1c3c        
        float m_flSpeedAccel; // 0x1c40        
        float m_flSpeedDeccel; // 0x1c44        
        float m_flElasticity; // 0x1c48        
        float m_flWallCheckGroundOffset; // 0x1c4c        
        float m_flWallPauseTime; // 0x1c50        
        float m_flWallAngleMin; // 0x1c54        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityViscousBowlingVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityViscousBowlingVData) == 0x1c58);
};
