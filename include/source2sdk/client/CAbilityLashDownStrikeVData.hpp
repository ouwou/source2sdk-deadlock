#pragma once
#include "source2sdk/client/CBaseModifier.hpp"
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
    // Size: 0x1a40
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityLashDownStrikeVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_TargetPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetPreviewParticle;
        char m_TargetPreviewParticle[0xe0]; // 0x1550        
        // metadata: MPropertyLeafSuggestionProviderFn
        CGlobalSymbol m_strGroundCastAnimGraphParam; // 0x1630        
        // metadata: MPropertyLeafSuggestionProviderFn
        CGlobalSymbol m_strAirCastAnimGraphParam; // 0x1638        
        // m_StompParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompParticle;
        char m_StompParticle[0xe0]; // 0x1640        
        // m_StompLineParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompLineParticle;
        char m_StompLineParticle[0xe0]; // 0x1720        
        // m_StompLineObstructedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompLineObstructedParticle;
        char m_StompLineObstructedParticle[0xe0]; // 0x1800        
        // m_StompImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompImpactParticle;
        char m_StompImpactParticle[0xe0]; // 0x18e0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_StompExplosionSound; // 0x19c0        
        CSoundEventName m_StompEnemyImpactSound; // 0x19d0        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DownStrikeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_DownStrikeModifier;
        char m_DownStrikeModifier[0x10]; // 0x19e0        
        // m_ImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_ImpactModifier;
        char m_ImpactModifier[0x10]; // 0x19f0        
        // metadata: MPropertyStartGroup "+Down Strike Params"
        float m_flHeightUILingerTime; // 0x1a00        
        float m_flDamageFrustumHalfWidth; // 0x1a04        
        float m_flDamageFrustumAngle; // 0x1a08        
        float m_flDamageWaveSpeed; // 0x1a0c        
        float m_flDamageTraceProbeDamageRadius; // 0x1a10        
        float m_flDamageTraceProbeWorldRadius; // 0x1a14        
        float m_flDamageTraceProbeStepUpHeight; // 0x1a18        
        float m_flDamageTraceProbeStepDownHeight; // 0x1a1c        
        float m_flDamageTraceProbeDropDownRate; // 0x1a20        
        float m_flInitialDamageRadiusInMeters; // 0x1a24        
        int32_t m_nGroundCrackGap; // 0x1a28        
        float m_flGroupLengthTolerance; // 0x1a2c        
        float m_flDamageEffectScaleMin; // 0x1a30        
        float m_flDamageEffectScaleMax; // 0x1a34        
        float m_flTrackAmount; // 0x1a38        
        [[maybe_unused]] std::uint8_t pad_0x1a3c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityLashDownStrikeVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityLashDownStrikeVData) == 0x1a40);
};
