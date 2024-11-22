#pragma once
#include "source2sdk/client/CCitadelWeaponInfo.hpp"
#include "source2sdk/client/EAbilitySlots_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphVariation.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CAI_BaseNPCVData.hpp"
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
    // Size: 0x10d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertySuppressBaseClassField
    // static metadata: MPropertySuppressBaseClassField
    // static metadata: MPropertySuppressBaseClassField
    // static metadata: MPropertySuppressBaseClassField
    // static metadata: MPropertySuppressBaseClassField
    // static metadata: MPropertySuppressBaseClassField
    #pragma pack(push, 1)
    class CAI_CitadelNPCVData : public server::CAI_BaseNPCVData
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_sAG2VariationName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCNmGraphVariation>> m_sAG2VariationName;
        char m_sAG2VariationName[0xe0]; // 0x398        
        // m_mapBoundAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EAbilitySlots_t,CSubclassName<4>> m_mapBoundAbilities;
        char m_mapBoundAbilities[0x28]; // 0x478        
        float m_flSightRangePlayers; // 0x4a0        
        float m_flSightRangeNPCs; // 0x4a4        
        CGlobalSymbol m_MeleeAnimName; // 0x4a8        
        float m_flMeleeAttemptRange; // 0x4b0        
        float m_flMeleeHitRange; // 0x4b4        
        // m_MeleeAttackPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_MeleeAttackPoints;
        char m_MeleeAttackPoints[0x18]; // 0x4b8        
        float m_flMaxHealthBarDrawDistance; // 0x4d0        
        // metadata: MPropertyStartGroup "Movement"
        float m_flWalkSpeed; // 0x4d4        
        float m_flRunSpeed; // 0x4d8        
        float m_flTurnRate; // 0x4dc        
        float m_flAcceleration; // 0x4e0        
        float m_flStepHeight; // 0x4e4        
        int8_t m_navHull; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4e9[0x7]; // 0x4e9
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_BeamStartSound; // 0x4f0        
        CSoundEventName m_BeamStopSound; // 0x500        
        CSoundEventName m_BeamPointStartLoopSound; // 0x510        
        CSoundEventName m_BeamPointEndLoopSound; // 0x520        
        CSoundEventName m_BeamPointClosestLoopSound; // 0x530        
        CSoundEventName m_strAmbientLoopSound; // 0x540        
        CSoundEventName m_DeathSound; // 0x550        
        CSoundEventName m_strLastHitSound; // 0x560        
        bool m_bPlayLastHitSound; // 0x570        
        [[maybe_unused]] std::uint8_t pad_0x571[0x7]; // 0x571
        CSoundEventName m_MeleeHitSound; // 0x578        
        CSoundEventName m_MeleeHitPlayerSound; // 0x588        
        // metadata: MPropertyStartGroup "Visuals"
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sDefaultMaterialGroupName; // 0x598        
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sEnemyMaterialGroupName; // 0x5a0        
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sTeam1MaterialGroupName; // 0x5a8        
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sTeam2MaterialGroupName; // 0x5b0        
        // m_MeleeSwingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeSwingParticle;
        char m_MeleeSwingParticle[0xe0]; // 0x5b8        
        // m_MeleeActivateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeActivateParticle;
        char m_MeleeActivateParticle[0xe0]; // 0x698        
        float m_flModelScale; // 0x778        
        [[maybe_unused]] std::uint8_t pad_0x77c[0x4]; // 0x77c
        // metadata: MPropertyDescription "Particle to play instead of doing a ragdoll"
        // m_DeathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathParticle;
        char m_DeathParticle[0xe0]; // 0x780        
        // metadata: MPropertyStartGroup "Health Bar"
        // m_HealthBarParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealthBarParticle;
        char m_HealthBarParticle[0xe0]; // 0x860        
        CUtlString m_sHealthBarAttachment; // 0x940        
        Color m_HealthBarColorFriend; // 0x948        
        Color m_HealthBarColorEnemy; // 0x94c        
        Color m_HealthBarColorTeam1; // 0x950        
        Color m_HealthBarColorTeam2; // 0x954        
        Color m_HealthBarColorTeamNeutral; // 0x958        
        // metadata: MPropertyStartGroup "Misc"
        float m_flHealthBarOffset; // 0x95c        
        // metadata: MPropertyDescription "When true, spawns breakables defined in the model"
        bool m_bSpawnBreakablesOnDeath; // 0x960        
        [[maybe_unused]] std::uint8_t pad_0x961[0x3]; // 0x961
        // metadata: MPropertySuppressExpr "m_bSpawnBreakablesOnDeath == false"
        float m_flBreakableForceScale; // 0x964        
        // metadata: MPropertyDescription "Modifier for physics impulses applied to this NPC (0 == unmoveable)"
        float m_flPhysicsImpulseMultiplier; // 0x968        
        // metadata: MPropertyStartGroup "Beam Weapon"
        float m_flBeamWeaponWidth; // 0x96c        
        float m_flBeamTurnRate; // 0x970        
        [[maybe_unused]] std::uint8_t pad_0x974[0x4]; // 0x974
        // m_BeamWeaponParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamWeaponParticle;
        char m_BeamWeaponParticle[0xe0]; // 0x978        
        client::CCitadelWeaponInfo m_WeaponInfo; // 0xa58        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_CitadelNPCVData because it is not a standard-layout class
    static_assert(sizeof(CAI_CitadelNPCVData) == 0x10d8);
};
