#pragma once
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
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
    // Size: 0xa90
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_XPOrbVData : public client::CEntitySubclassVDataBase
    {
    public:
        bool m_bIsObjective; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x29[0x7]; // 0x29
        // metadata: MPropertyStartGroup "Sounds"
        // metadata: MPropertyDescription "Played to the player who claimed the orb."
        CSoundEventName m_strOrbClaimed; // 0x30        
        // metadata: MPropertyDescription "Played to the teammates of the player who claimed the orb."
        CSoundEventName m_strOrbClaimedTeammate; // 0x40        
        // metadata: MPropertyDescription "Played to the player when they denied an enemy orb."
        CSoundEventName m_strOrbDenied; // 0x50        
        // metadata: MPropertyDescription "Played to assigned earners when an enemy denied their orb."
        CSoundEventName m_strOrbDeniedPlayer; // 0x60        
        // metadata: MPropertyDescription "Played when we predict a hit on the orb but don't fully claim it."
        CSoundEventName m_strOrbHitConfirm; // 0x70        
        // metadata: MPropertyStartGroup "Visuals"
        // m_sOrbModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sOrbModel;
        char m_sOrbModel[0xe0]; // 0x80        
        // m_sPredictedHitLimboGlowParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sPredictedHitLimboGlowParticle;
        char m_sPredictedHitLimboGlowParticle[0xe0]; // 0x160        
        // m_sFriendlyHitConfirmParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sFriendlyHitConfirmParticle;
        char m_sFriendlyHitConfirmParticle[0xe0]; // 0x240        
        // m_sEnemyHitConfirmParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sEnemyHitConfirmParticle;
        char m_sEnemyHitConfirmParticle[0xe0]; // 0x320        
        // m_sFriendlyGlowParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sFriendlyGlowParticle;
        char m_sFriendlyGlowParticle[0xe0]; // 0x400        
        // m_sEnemyGlowParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sEnemyGlowParticle;
        char m_sEnemyGlowParticle[0xe0]; // 0x4e0        
        // m_sGoldReceivedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sGoldReceivedParticle;
        char m_sGoldReceivedParticle[0xe0]; // 0x5c0        
        // m_sFriendlyOrbDeniedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sFriendlyOrbDeniedParticle;
        char m_sFriendlyOrbDeniedParticle[0xe0]; // 0x6a0        
        // m_sEnemyOrbDeniedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sEnemyOrbDeniedParticle;
        char m_sEnemyOrbDeniedParticle[0xe0]; // 0x780        
        // m_sFriendlyOrbEarnedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sFriendlyOrbEarnedParticle;
        char m_sFriendlyOrbEarnedParticle[0xe0]; // 0x860        
        // m_sEnemyOrbEarnedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sEnemyOrbEarnedParticle;
        char m_sEnemyOrbEarnedParticle[0xe0]; // 0x940        
        // metadata: MPropertyStartGroup "Behavior"
        float m_flOrbSpawnDelayMin; // 0xa20        
        float m_flOrbSpawnDelayMax; // 0xa24        
        float m_flOrbSpawnOffsetZ; // 0xa28        
        float m_flOrbSpawnOffsetRandomXYZ; // 0xa2c        
        float m_flGravityScale; // 0xa30        
        float m_flLateralSpeedMin; // 0xa34        
        float m_flLateralSpeedMax; // 0xa38        
        float m_flLateralMoveDuration; // 0xa3c        
        float m_flUpSpeedMin; // 0xa40        
        float m_flUpSpeedMax; // 0xa44        
        float m_flBurstSpeedMultiplier; // 0xa48        
        float m_flBurstSpeedDuration; // 0xa4c        
        float m_flOscillateFrequency; // 0xa50        
        float m_flLifeTime; // 0xa54        
        float m_flRadius; // 0xa58        
        float m_flCollisionRadius; // 0xa5c        
        float m_flInvulDuration; // 0xa60        
        bool m_bUseKillerPlaneOffsets; // 0xa64        
        [[maybe_unused]] std::uint8_t pad_0xa65[0x3]; // 0xa65
        float m_flKillerPlaneOffset; // 0xa68        
        float m_flKillerPlaneHorizontalDecayRate; // 0xa6c        
        float m_flKillerPlaneHorizontalSpeedX; // 0xa70        
        float m_flKillerPlaneHorizontalSpeedY; // 0xa74        
        float m_flKillerPlaneVerticalSpeed; // 0xa78        
        float m_flKillerPlaneSpeedNoise; // 0xa7c        
        float m_flKillerPlaneLaunchOffset; // 0xa80        
        float m_flKillerPlaneLaunchDelay; // 0xa84        
        float m_flOrbClaimWindow; // 0xa88        
        [[maybe_unused]] std::uint8_t pad_0xa8c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_XPOrbVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_XPOrbVData) == 0xa90);
};
