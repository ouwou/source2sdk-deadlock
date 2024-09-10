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
    // Size: 0x1a18
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityPowerSlashVData : public server::CCitadelYamatoBaseVData
    {
    public:
        float m_flAirDrag; // 0x14f8        
        float m_flMaxPowerPadding; // 0x14fc        
        float m_flEffectGroundTrace; // 0x1500        
        float m_flWhizbyMaxRange; // 0x1504        
        float m_flStartPosTestCapsuleLength; // 0x1508        
        // metadata: MPropertyDescription "Visual offset for the origin of the long-slash particle effect"
        Vector m_vecLongEffectOffset; // 0x150c        
        // metadata: MPropertyStartGroup "Visuals"
        // m_PowerSlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerSlashParticle;
        char m_PowerSlashParticle[0xe0]; // 0x1518        
        // m_PowerSlashFullParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerSlashFullParticle;
        char m_PowerSlashFullParticle[0xe0]; // 0x15f8        
        // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
        char m_ImpactParticle[0xe0]; // 0x16d8        
        // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
        char m_CastParticle[0xe0]; // 0x17b8        
        // m_PowerUpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerUpParticle;
        char m_PowerUpParticle[0xe0]; // 0x1898        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strStartSound; // 0x1978        
        CSoundEventName m_strDamageImpactSound; // 0x1988        
        CSoundEventName m_strDamageImpactVictimSound; // 0x1998        
        CSoundEventName m_strPowerUp1Sounds; // 0x19a8        
        CSoundEventName m_strPowerUp2Sounds; // 0x19b8        
        CSoundEventName m_strPowerUp3Sounds; // 0x19c8        
        CSoundEventName m_strWhizbySound; // 0x19d8        
        CSoundEventName m_strSlashSound; // 0x19e8        
        CSoundEventName m_strSlashFullSound; // 0x19f8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x1a08        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityPowerSlashVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityPowerSlashVData) == 0x1a18);
};
