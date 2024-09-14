#pragma once
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x7d8
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
        // metadata: MPropertyStartGroup "Visuals"
        // m_sOrbModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sOrbModel;
        char m_sOrbModel[0xe0]; // 0x70        
        // m_sFriendlyGlowParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sFriendlyGlowParticle;
        char m_sFriendlyGlowParticle[0xe0]; // 0x150        
        // m_sEnemyGlowParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sEnemyGlowParticle;
        char m_sEnemyGlowParticle[0xe0]; // 0x230        
        // m_sGoldReceivedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sGoldReceivedParticle;
        char m_sGoldReceivedParticle[0xe0]; // 0x310        
        // m_sFriendlyOrbDeniedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sFriendlyOrbDeniedParticle;
        char m_sFriendlyOrbDeniedParticle[0xe0]; // 0x3f0        
        // m_sEnemyOrbDeniedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sEnemyOrbDeniedParticle;
        char m_sEnemyOrbDeniedParticle[0xe0]; // 0x4d0        
        // m_sFriendlyOrbEarnedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sFriendlyOrbEarnedParticle;
        char m_sFriendlyOrbEarnedParticle[0xe0]; // 0x5b0        
        // m_sEnemyOrbEarnedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sEnemyOrbEarnedParticle;
        char m_sEnemyOrbEarnedParticle[0xe0]; // 0x690        
        // metadata: MPropertyStartGroup "Behavior"
        float m_flOrbSpawnDelayMin; // 0x770        
        float m_flOrbSpawnDelayMax; // 0x774        
        float m_flOrbSpawnOffsetZ; // 0x778        
        float m_flOrbSpawnOffsetRandomXYZ; // 0x77c        
        float m_flGravityScale; // 0x780        
        float m_flLateralSpeedMin; // 0x784        
        float m_flLateralSpeedMax; // 0x788        
        float m_flLateralMoveDuration; // 0x78c        
        float m_flUpSpeedMin; // 0x790        
        float m_flUpSpeedMax; // 0x794        
        float m_flBurstSpeedMultiplier; // 0x798        
        float m_flBurstSpeedDuration; // 0x79c        
        float m_flOscillateFrequency; // 0x7a0        
        float m_flLifeTime; // 0x7a4        
        float m_flCollisionRadius; // 0x7a8        
        float m_flInvulDuration; // 0x7ac        
        bool m_bUseKillerPlaneOffsets; // 0x7b0        
        [[maybe_unused]] std::uint8_t pad_0x7b1[0x3]; // 0x7b1
        float m_flKillerPlaneOffset; // 0x7b4        
        float m_flKillerPlaneHorizontalDecayRate; // 0x7b8        
        float m_flKillerPlaneHorizontalSpeedX; // 0x7bc        
        float m_flKillerPlaneHorizontalSpeedY; // 0x7c0        
        float m_flKillerPlaneVerticalSpeed; // 0x7c4        
        float m_flKillerPlaneSpeedNoise; // 0x7c8        
        float m_flKillerPlaneLaunchOffset; // 0x7cc        
        float m_flKillerPlaneLaunchDelay; // 0x7d0        
        float m_flOrbClaimWindow; // 0x7d4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_XPOrbVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_XPOrbVData) == 0x7d8);
};
