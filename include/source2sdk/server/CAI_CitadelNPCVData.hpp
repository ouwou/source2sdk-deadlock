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
    // Size: 0xf60
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
        char m_sAG2VariationName[0xe0]; // 0x230        
        // m_mapBoundAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EAbilitySlots_t,CSubclassName<4>> m_mapBoundAbilities;
        char m_mapBoundAbilities[0x28]; // 0x310        
        float m_flSightRangePlayers; // 0x338        
        float m_flSightRangeNPCs; // 0x33c        
        CGlobalSymbol m_MeleeAnimName; // 0x340        
        float m_flMeleeAttemptRange; // 0x348        
        float m_flMeleeHitRange; // 0x34c        
        // m_MeleeAttackPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_MeleeAttackPoints;
        char m_MeleeAttackPoints[0x18]; // 0x350        
        float m_flMaxHealthBarDrawDistance; // 0x368        
        // metadata: MPropertyStartGroup "Movement"
        float m_flWalkSpeed; // 0x36c        
        float m_flRunSpeed; // 0x370        
        float m_flTurnRate; // 0x374        
        float m_flAcceleration; // 0x378        
        float m_flStepHeight; // 0x37c        
        int8_t m_navHull; // 0x380        
        bool m_bFaceTargetEvenWhenMoving; // 0x381        
        [[maybe_unused]] std::uint8_t pad_0x382[0x6]; // 0x382
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_BeamStartSound; // 0x388        
        CSoundEventName m_BeamStopSound; // 0x398        
        CSoundEventName m_BeamPointStartLoopSound; // 0x3a8        
        CSoundEventName m_BeamPointEndLoopSound; // 0x3b8        
        CSoundEventName m_BeamPointClosestLoopSound; // 0x3c8        
        CSoundEventName m_strAmbientLoopSound; // 0x3d8        
        CSoundEventName m_DeathSound; // 0x3e8        
        CSoundEventName m_strLastHitSound; // 0x3f8        
        bool m_bPlayLastHitSound; // 0x408        
        [[maybe_unused]] std::uint8_t pad_0x409[0x7]; // 0x409
        CSoundEventName m_MeleeHitSound; // 0x410        
        CSoundEventName m_MeleeHitPlayerSound; // 0x420        
        // metadata: MPropertyStartGroup "Visuals"
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sDefaultMaterialGroupName; // 0x430        
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sEnemyMaterialGroupName; // 0x438        
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sTeam1MaterialGroupName; // 0x440        
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sTeam2MaterialGroupName; // 0x448        
        // m_MeleeSwingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeSwingParticle;
        char m_MeleeSwingParticle[0xe0]; // 0x450        
        // m_MeleeActivateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeActivateParticle;
        char m_MeleeActivateParticle[0xe0]; // 0x530        
        float m_flModelScale; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4]; // 0x614
        // metadata: MPropertyDescription "Particle to play instead of doing a ragdoll"
        // m_DeathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathParticle;
        char m_DeathParticle[0xe0]; // 0x618        
        // metadata: MPropertyStartGroup "Health Bar"
        // m_HealthBarParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealthBarParticle;
        char m_HealthBarParticle[0xe0]; // 0x6f8        
        CUtlString m_sHealthBarAttachment; // 0x7d8        
        Color m_HealthBarColorFriend; // 0x7e0        
        Color m_HealthBarColorEnemy; // 0x7e4        
        Color m_HealthBarColorTeam1; // 0x7e8        
        Color m_HealthBarColorTeam2; // 0x7ec        
        Color m_HealthBarColorTeamNeutral; // 0x7f0        
        // metadata: MPropertyStartGroup "Misc"
        float m_flHealthBarOffset; // 0x7f4        
        // metadata: MPropertyStartGroup "Beam Weapon"
        float m_flBeamWeaponWidth; // 0x7f8        
        float m_flBeamTurnRate; // 0x7fc        
        // m_BeamWeaponParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamWeaponParticle;
        char m_BeamWeaponParticle[0xe0]; // 0x800        
        // metadata: MPropertyDescription "Modifier for physics impulses applied to this NPC (0 == unmoveable)"
        float m_flPhysicsImpulseMultiplier; // 0x8e0        
        [[maybe_unused]] std::uint8_t pad_0x8e4[0x4]; // 0x8e4
        client::CCitadelWeaponInfo m_WeaponInfo; // 0x8e8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_CitadelNPCVData because it is not a standard-layout class
    static_assert(sizeof(CAI_CitadelNPCVData) == 0xf60);
};
