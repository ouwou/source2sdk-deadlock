#pragma once
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CCitadelYamatoBaseVData.hpp"
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
    // Size: 0x1a78
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityPowerSlashVData : public client::CCitadelYamatoBaseVData
    {
    public:
        float m_flAirDrag; // 0x1558        
        float m_flMaxPowerPadding; // 0x155c        
        float m_flEffectGroundTrace; // 0x1560        
        float m_flWhizbyMaxRange; // 0x1564        
        float m_flStartPosTestCapsuleLength; // 0x1568        
        // metadata: MPropertyDescription "Visual offset for the origin of the long-slash particle effect"
        Vector m_vecLongEffectOffset; // 0x156c        
        // metadata: MPropertyStartGroup "Visuals"
        // m_PowerSlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerSlashParticle;
        char m_PowerSlashParticle[0xe0]; // 0x1578        
        // m_PowerSlashFullParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerSlashFullParticle;
        char m_PowerSlashFullParticle[0xe0]; // 0x1658        
        // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
        char m_ImpactParticle[0xe0]; // 0x1738        
        // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
        char m_CastParticle[0xe0]; // 0x1818        
        // m_PowerUpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerUpParticle;
        char m_PowerUpParticle[0xe0]; // 0x18f8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strStartSound; // 0x19d8        
        CSoundEventName m_strDamageImpactSound; // 0x19e8        
        CSoundEventName m_strDamageImpactVictimSound; // 0x19f8        
        CSoundEventName m_strPowerUp1Sounds; // 0x1a08        
        CSoundEventName m_strPowerUp2Sounds; // 0x1a18        
        CSoundEventName m_strPowerUp3Sounds; // 0x1a28        
        CSoundEventName m_strWhizbySound; // 0x1a38        
        CSoundEventName m_strSlashSound; // 0x1a48        
        CSoundEventName m_strSlashFullSound; // 0x1a58        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x1a68        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityPowerSlashVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityPowerSlashVData) == 0x1a78);
};
