#pragma once
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
    // Size: 0x18c0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Tokamak_CrimsonCannonVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_LaserShot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserShot;
        char m_LaserShot[0xe0]; // 0x14f0        
        // m_ChargeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeParticle;
        char m_ChargeParticle[0xe0]; // 0x15d0        
        // m_CasterOnlyTargetParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CasterOnlyTargetParticle;
        char m_CasterOnlyTargetParticle[0xe0]; // 0x16b0        
        // m_EnemyTargetedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyTargetedParticle;
        char m_EnemyTargetedParticle[0xe0]; // 0x1790        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strEnemyBeenTargetedSound; // 0x1870        
        CSoundEventName m_strCasterTargetSelectedSound; // 0x1880        
        CSoundEventName m_strFireSound; // 0x1890        
        CSoundEventName m_strImpactSound; // 0x18a0        
        CSoundEventName m_strBlockedSound; // 0x18b0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tokamak_CrimsonCannonVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Tokamak_CrimsonCannonVData) == 0x18c0);
};
