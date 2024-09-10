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
    // Size: 0x1bf8
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
        char m_TransformStartFx[0xe0]; // 0x14f0        
        // m_ExplodeFX has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeFX;
        char m_ExplodeFX[0xe0]; // 0x15d0        
        // m_WallImpactFx has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallImpactFx;
        char m_WallImpactFx[0xe0]; // 0x16b0        
        // m_BallTrailFx has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BallTrailFx;
        char m_BallTrailFx[0xe0]; // 0x1790        
        // m_GroundImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundImpactParticle;
        char m_GroundImpactParticle[0xe0]; // 0x1870        
        // m_JumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_JumpParticle;
        char m_JumpParticle[0xe0]; // 0x1950        
        // m_DirectionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DirectionParticle;
        char m_DirectionParticle[0xe0]; // 0x1a30        
        float m_flVerticalCameraOffsetLerpTime; // 0x1b10        
        float m_flVerticalCameraOffsetBias; // 0x1b14        
        float m_flVerticalCameraOffset; // 0x1b18        
        float m_flDistanceCameraOffsetLerpTime; // 0x1b1c        
        float m_flDistanceCameraOffsetBias; // 0x1b20        
        float m_flDistanceCameraOffset; // 0x1b24        
        // metadata: MPropertyLeafSuggestionProviderFn
        CGlobalSymbol m_strPopGraphParamter; // 0x1b28        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_BallJumpSound; // 0x1b30        
        CSoundEventName m_EnterBallSound; // 0x1b40        
        CSoundEventName m_BallLoopSound; // 0x1b50        
        CSoundEventName m_ExitBallSound; // 0x1b60        
        CSoundEventName m_WallImpactSound; // 0x1b70        
        CSoundEventName m_PlayerImpactSound; // 0x1b80        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ImpactModifier;
        char m_ImpactModifier[0x10]; // 0x1b90        
        // m_DamagePreventionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DamagePreventionModifier;
        char m_DamagePreventionModifier[0x10]; // 0x1ba0        
        // m_RollingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_RollingModifier;
        char m_RollingModifier[0x10]; // 0x1bb0        
        // metadata: MPropertyStartGroup "+Ball Parameters"
        float m_flTransformToBallTime; // 0x1bc0        
        float m_flTransformFromBallTime; // 0x1bc4        
        float m_flAirTurnRatio; // 0x1bc8        
        float m_flWallTurnRatioMax; // 0x1bcc        
        float m_flWallTurnRatioMin; // 0x1bd0        
        float m_flTurnRatio; // 0x1bd4        
        float m_flDefaultBallSpeed; // 0x1bd8        
        float m_flFastBallSpeed; // 0x1bdc        
        float m_flSpeedAccel; // 0x1be0        
        float m_flSpeedDeccel; // 0x1be4        
        float m_flElasticity; // 0x1be8        
        float m_flWallCheckGroundOffset; // 0x1bec        
        float m_flWallPauseTime; // 0x1bf0        
        float m_flWallAngleMin; // 0x1bf4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityViscousBowlingVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityViscousBowlingVData) == 0x1bf8);
};
