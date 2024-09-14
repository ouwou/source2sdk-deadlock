#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/server/CCitadelYamatoBaseVData.hpp"
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
    // Size: 0x1a50
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityPowerSlashVData : public server::CCitadelYamatoBaseVData
    {
    public:
        float m_flAirDrag; // 0x1530        
        float m_flMaxPowerPadding; // 0x1534        
        float m_flEffectGroundTrace; // 0x1538        
        float m_flWhizbyMaxRange; // 0x153c        
        float m_flStartPosTestCapsuleLength; // 0x1540        
        // metadata: MPropertyDescription "Visual offset for the origin of the long-slash particle effect"
        Vector m_vecLongEffectOffset; // 0x1544        
        // metadata: MPropertyStartGroup "Visuals"
        // m_PowerSlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerSlashParticle;
        char m_PowerSlashParticle[0xe0]; // 0x1550        
        // m_PowerSlashFullParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerSlashFullParticle;
        char m_PowerSlashFullParticle[0xe0]; // 0x1630        
        // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
        char m_ImpactParticle[0xe0]; // 0x1710        
        // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
        char m_CastParticle[0xe0]; // 0x17f0        
        // m_PowerUpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerUpParticle;
        char m_PowerUpParticle[0xe0]; // 0x18d0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strStartSound; // 0x19b0        
        CSoundEventName m_strDamageImpactSound; // 0x19c0        
        CSoundEventName m_strDamageImpactVictimSound; // 0x19d0        
        CSoundEventName m_strPowerUp1Sounds; // 0x19e0        
        CSoundEventName m_strPowerUp2Sounds; // 0x19f0        
        CSoundEventName m_strPowerUp3Sounds; // 0x1a00        
        CSoundEventName m_strWhizbySound; // 0x1a10        
        CSoundEventName m_strSlashSound; // 0x1a20        
        CSoundEventName m_strSlashFullSound; // 0x1a30        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x1a40        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityPowerSlashVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityPowerSlashVData) == 0x1a50);
};
