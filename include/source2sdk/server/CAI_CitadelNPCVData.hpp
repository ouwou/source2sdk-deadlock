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
    // Size: 0xf30
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
        char m_sAG2VariationName[0xe0]; // 0x220        
        // m_mapBoundAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EAbilitySlots_t,CSubclassName<4>> m_mapBoundAbilities;
        char m_mapBoundAbilities[0x28]; // 0x300        
        float m_flSightRangePlayers; // 0x328        
        float m_flSightRangeNPCs; // 0x32c        
        CGlobalSymbol m_MeleeAnimName; // 0x330        
        float m_flMeleeAttemptRange; // 0x338        
        float m_flMeleeHitRange; // 0x33c        
        // m_MeleeAttackPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_MeleeAttackPoints;
        char m_MeleeAttackPoints[0x18]; // 0x340        
        float m_flMaxHealthBarDrawDistance; // 0x358        
        // metadata: MPropertyStartGroup "Movement"
        float m_flWalkSpeed; // 0x35c        
        float m_flRunSpeed; // 0x360        
        float m_flTurnRate; // 0x364        
        float m_flAcceleration; // 0x368        
        float m_flStepHeight; // 0x36c        
        int8_t m_navHull; // 0x370        
        bool m_bFaceTargetEvenWhenMoving; // 0x371        
        [[maybe_unused]] std::uint8_t pad_0x372[0x6]; // 0x372
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_BeamStartSound; // 0x378        
        CSoundEventName m_BeamStopSound; // 0x388        
        CSoundEventName m_BeamPointStartLoopSound; // 0x398        
        CSoundEventName m_BeamPointEndLoopSound; // 0x3a8        
        CSoundEventName m_BeamPointClosestLoopSound; // 0x3b8        
        CSoundEventName m_strAmbientLoopSound; // 0x3c8        
        CSoundEventName m_DeathSound; // 0x3d8        
        CSoundEventName m_strLastHitSound; // 0x3e8        
        bool m_bPlayLastHitSound; // 0x3f8        
        [[maybe_unused]] std::uint8_t pad_0x3f9[0x7]; // 0x3f9
        CSoundEventName m_MeleeHitSound; // 0x400        
        CSoundEventName m_MeleeHitPlayerSound; // 0x410        
        // metadata: MPropertyStartGroup "Visuals"
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sDefaultMaterialGroupName; // 0x420        
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sEnemyMaterialGroupName; // 0x428        
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sTeam1MaterialGroupName; // 0x430        
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sTeam2MaterialGroupName; // 0x438        
        // m_MeleeSwingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeSwingParticle;
        char m_MeleeSwingParticle[0xe0]; // 0x440        
        // m_MeleeActivateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeActivateParticle;
        char m_MeleeActivateParticle[0xe0]; // 0x520        
        float m_flModelScale; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x604[0x4]; // 0x604
        // metadata: MPropertyDescription "Particle to play instead of doing a ragdoll"
        // m_DeathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathParticle;
        char m_DeathParticle[0xe0]; // 0x608        
        // metadata: MPropertyStartGroup "Health Bar"
        // m_HealthBarParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealthBarParticle;
        char m_HealthBarParticle[0xe0]; // 0x6e8        
        CUtlString m_sHealthBarAttachment; // 0x7c8        
        Color m_HealthBarColorFriend; // 0x7d0        
        Color m_HealthBarColorEnemy; // 0x7d4        
        Color m_HealthBarColorTeam1; // 0x7d8        
        Color m_HealthBarColorTeam2; // 0x7dc        
        Color m_HealthBarColorTeamNeutral; // 0x7e0        
        // metadata: MPropertyStartGroup "Misc"
        float m_flHealthBarOffset; // 0x7e4        
        // metadata: MPropertyStartGroup "Beam Weapon"
        float m_flBeamWeaponWidth; // 0x7e8        
        float m_flBeamTurnRate; // 0x7ec        
        // m_BeamWeaponParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamWeaponParticle;
        char m_BeamWeaponParticle[0xe0]; // 0x7f0        
        // metadata: MPropertyDescription "Modifier for physics impulses applied to this NPC (0 == unmoveable)"
        float m_flPhysicsImpulseMultiplier; // 0x8d0        
        [[maybe_unused]] std::uint8_t pad_0x8d4[0x4]; // 0x8d4
        client::CCitadelWeaponInfo m_WeaponInfo; // 0x8d8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_CitadelNPCVData because it is not a standard-layout class
    
    static_assert(sizeof(CAI_CitadelNPCVData) == 0xf30);
};
