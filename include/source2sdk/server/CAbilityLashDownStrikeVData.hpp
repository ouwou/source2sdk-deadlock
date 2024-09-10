#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
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
    // Size: 0x19d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityLashDownStrikeVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_TargetPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetPreviewParticle;
        char m_TargetPreviewParticle[0xe0]; // 0x14f0        
        // metadata: MPropertyLeafSuggestionProviderFn
        CGlobalSymbol m_strGroundCastAnimGraphParam; // 0x15d0        
        // metadata: MPropertyLeafSuggestionProviderFn
        CGlobalSymbol m_strAirCastAnimGraphParam; // 0x15d8        
        // m_StompParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompParticle;
        char m_StompParticle[0xe0]; // 0x15e0        
        // m_StompLineParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompLineParticle;
        char m_StompLineParticle[0xe0]; // 0x16c0        
        // m_StompLineObstructedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompLineObstructedParticle;
        char m_StompLineObstructedParticle[0xe0]; // 0x17a0        
        // m_StompImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompImpactParticle;
        char m_StompImpactParticle[0xe0]; // 0x1880        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_StompExplosionSound; // 0x1960        
        CSoundEventName m_StompEnemyImpactSound; // 0x1970        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DownStrikeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_DownStrikeModifier;
        char m_DownStrikeModifier[0x10]; // 0x1980        
        // m_ImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_ImpactModifier;
        char m_ImpactModifier[0x10]; // 0x1990        
        // metadata: MPropertyStartGroup "+Down Strike Params"
        float m_flHeightUILingerTime; // 0x19a0        
        float m_flDamageFrustumHalfWidth; // 0x19a4        
        float m_flDamageFrustumAngle; // 0x19a8        
        float m_flDamageWaveSpeed; // 0x19ac        
        float m_flDamageTraceProbeDamageRadius; // 0x19b0        
        float m_flDamageTraceProbeWorldRadius; // 0x19b4        
        float m_flDamageTraceProbeStepUpHeight; // 0x19b8        
        float m_flDamageTraceProbeStepDownHeight; // 0x19bc        
        float m_flDamageTraceProbeDropDownRate; // 0x19c0        
        float m_flInitialDamageRadiusInMeters; // 0x19c4        
        int32_t m_nGroundCrackGap; // 0x19c8        
        float m_flGroupLengthTolerance; // 0x19cc        
        float m_flDamageEffectScaleMin; // 0x19d0        
        float m_flDamageEffectScaleMax; // 0x19d4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityLashDownStrikeVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityLashDownStrikeVData) == 0x19d8);
};
