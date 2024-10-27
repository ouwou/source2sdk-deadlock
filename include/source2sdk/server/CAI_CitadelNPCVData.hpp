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
    // Size: 0xf78
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
        char m_sAG2VariationName[0xe0]; // 0x240        
        // m_mapBoundAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EAbilitySlots_t,CSubclassName<4>> m_mapBoundAbilities;
        char m_mapBoundAbilities[0x28]; // 0x320        
        float m_flSightRangePlayers; // 0x348        
        float m_flSightRangeNPCs; // 0x34c        
        CGlobalSymbol m_MeleeAnimName; // 0x350        
        float m_flMeleeAttemptRange; // 0x358        
        float m_flMeleeHitRange; // 0x35c        
        // m_MeleeAttackPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_MeleeAttackPoints;
        char m_MeleeAttackPoints[0x18]; // 0x360        
        float m_flMaxHealthBarDrawDistance; // 0x378        
        // metadata: MPropertyStartGroup "Movement"
        float m_flWalkSpeed; // 0x37c        
        float m_flRunSpeed; // 0x380        
        float m_flTurnRate; // 0x384        
        float m_flAcceleration; // 0x388        
        float m_flStepHeight; // 0x38c        
        int8_t m_navHull; // 0x390        
        [[maybe_unused]] std::uint8_t pad_0x391[0x7]; // 0x391
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_BeamStartSound; // 0x398        
        CSoundEventName m_BeamStopSound; // 0x3a8        
        CSoundEventName m_BeamPointStartLoopSound; // 0x3b8        
        CSoundEventName m_BeamPointEndLoopSound; // 0x3c8        
        CSoundEventName m_BeamPointClosestLoopSound; // 0x3d8        
        CSoundEventName m_strAmbientLoopSound; // 0x3e8        
        CSoundEventName m_DeathSound; // 0x3f8        
        CSoundEventName m_strLastHitSound; // 0x408        
        bool m_bPlayLastHitSound; // 0x418        
        [[maybe_unused]] std::uint8_t pad_0x419[0x7]; // 0x419
        CSoundEventName m_MeleeHitSound; // 0x420        
        CSoundEventName m_MeleeHitPlayerSound; // 0x430        
        // metadata: MPropertyStartGroup "Visuals"
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sDefaultMaterialGroupName; // 0x440        
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sEnemyMaterialGroupName; // 0x448        
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sTeam1MaterialGroupName; // 0x450        
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
        CUtlString m_sTeam2MaterialGroupName; // 0x458        
        // m_MeleeSwingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeSwingParticle;
        char m_MeleeSwingParticle[0xe0]; // 0x460        
        // m_MeleeActivateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeActivateParticle;
        char m_MeleeActivateParticle[0xe0]; // 0x540        
        float m_flModelScale; // 0x620        
        [[maybe_unused]] std::uint8_t pad_0x624[0x4]; // 0x624
        // metadata: MPropertyDescription "Particle to play instead of doing a ragdoll"
        // m_DeathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathParticle;
        char m_DeathParticle[0xe0]; // 0x628        
        // metadata: MPropertyStartGroup "Health Bar"
        // m_HealthBarParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealthBarParticle;
        char m_HealthBarParticle[0xe0]; // 0x708        
        CUtlString m_sHealthBarAttachment; // 0x7e8        
        Color m_HealthBarColorFriend; // 0x7f0        
        Color m_HealthBarColorEnemy; // 0x7f4        
        Color m_HealthBarColorTeam1; // 0x7f8        
        Color m_HealthBarColorTeam2; // 0x7fc        
        Color m_HealthBarColorTeamNeutral; // 0x800        
        // metadata: MPropertyStartGroup "Misc"
        float m_flHealthBarOffset; // 0x804        
        // metadata: MPropertyStartGroup "Beam Weapon"
        float m_flBeamWeaponWidth; // 0x808        
        float m_flBeamTurnRate; // 0x80c        
        // m_BeamWeaponParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamWeaponParticle;
        char m_BeamWeaponParticle[0xe0]; // 0x810        
        // metadata: MPropertyDescription "Modifier for physics impulses applied to this NPC (0 == unmoveable)"
        float m_flPhysicsImpulseMultiplier; // 0x8f0        
        [[maybe_unused]] std::uint8_t pad_0x8f4[0x4]; // 0x8f4
        client::CCitadelWeaponInfo m_WeaponInfo; // 0x8f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_CitadelNPCVData because it is not a standard-layout class
    static_assert(sizeof(CAI_CitadelNPCVData) == 0xf78);
};
