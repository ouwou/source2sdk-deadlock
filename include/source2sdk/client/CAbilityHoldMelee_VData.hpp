#pragma once
#include "source2sdk/client/AttackData_t.hpp"
#include "source2sdk/client/CAbilityMeleeVData.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CRemapFloat.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/client/EMeleeHold_AttackType.hpp"
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
    // Size: 0x1980
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityHoldMelee_VData : public client::CAbilityMeleeVData
    {
    public:
        // m_mapAttacks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EMeleeHold_AttackType,client::AttackData_t> m_mapAttacks;
        char m_mapAttacks[0x28]; // 0x1558        
        float m_flNextAttackOnParry; // 0x1580        
        float m_flParryWindow; // 0x1584        
        float m_flParryStunTime; // 0x1588        
        float m_flParryCooldown; // 0x158c        
        client::CRemapFloat m_AirMeleeUpScale; // 0x1590        
        // metadata: MPropertyStartGroup "Visuals"
        // m_HoldBeginEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HoldBeginEffect;
        char m_HoldBeginEffect[0xe0]; // 0x15a0        
        // m_SuccessfulParryParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SuccessfulParryParticle;
        char m_SuccessfulParryParticle[0xe0]; // 0x1680        
        // m_ParryActivateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ParryActivateParticle;
        char m_ParryActivateParticle[0xe0]; // 0x1760        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceHoldStart; // 0x1840        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceHitImpact; // 0x18c8        
        // metadata: MPropertyStartGroup "Sounds"
        // metadata: MPropertyDescription "Sound to play when starting the hold"
        CSoundEventName m_strHoldBegin; // 0x1950        
        CSoundEventName m_strSuccessfulParrySound; // 0x1960        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ParryVictimModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ParryVictimModifier;
        char m_ParryVictimModifier[0x10]; // 0x1970        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityHoldMelee_VData because it is not a standard-layout class
    static_assert(sizeof(CAbilityHoldMelee_VData) == 0x1980);
};
