#pragma once
#include "source2sdk/client/AttackData_t.hpp"
#include "source2sdk/client/CRemapFloat.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/client/EMeleeHold_AttackType.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CAbilityMeleeVData.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x19b8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityHoldMelee_VData : public server::CAbilityMeleeVData
    {
    public:
        // m_mapAttacks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EMeleeHold_AttackType,client::AttackData_t> m_mapAttacks;
        char m_mapAttacks[0x28]; // 0x1590        
        float m_flNextAttackOnParry; // 0x15b8        
        float m_flParryWindow; // 0x15bc        
        float m_flParryStunTime; // 0x15c0        
        float m_flParryCooldown; // 0x15c4        
        client::CRemapFloat m_AirMeleeUpScale; // 0x15c8        
        // metadata: MPropertyStartGroup "Visuals"
        // m_HoldBeginEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HoldBeginEffect;
        char m_HoldBeginEffect[0xe0]; // 0x15d8        
        // m_SuccessfulParryParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SuccessfulParryParticle;
        char m_SuccessfulParryParticle[0xe0]; // 0x16b8        
        // m_ParryActivateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ParryActivateParticle;
        char m_ParryActivateParticle[0xe0]; // 0x1798        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceHoldStart; // 0x1878        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceHitImpact; // 0x1900        
        // metadata: MPropertyStartGroup "Sounds"
        // metadata: MPropertyDescription "Sound to play when starting the hold"
        CSoundEventName m_strHoldBegin; // 0x1988        
        CSoundEventName m_strSuccessfulParrySound; // 0x1998        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ParryVictimModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ParryVictimModifier;
        char m_ParryVictimModifier[0x10]; // 0x19a8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityHoldMelee_VData because it is not a standard-layout class
    static_assert(sizeof(CAbilityHoldMelee_VData) == 0x19b8);
};
