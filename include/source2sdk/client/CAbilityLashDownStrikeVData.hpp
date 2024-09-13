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
    // Size: 0x1a18
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
        char m_TargetPreviewParticle[0xe0]; // 0x1528        
        // metadata: MPropertyLeafSuggestionProviderFn
        CGlobalSymbol m_strGroundCastAnimGraphParam; // 0x1608        
        // metadata: MPropertyLeafSuggestionProviderFn
        CGlobalSymbol m_strAirCastAnimGraphParam; // 0x1610        
        // m_StompParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompParticle;
        char m_StompParticle[0xe0]; // 0x1618        
        // m_StompLineParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompLineParticle;
        char m_StompLineParticle[0xe0]; // 0x16f8        
        // m_StompLineObstructedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompLineObstructedParticle;
        char m_StompLineObstructedParticle[0xe0]; // 0x17d8        
        // m_StompImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompImpactParticle;
        char m_StompImpactParticle[0xe0]; // 0x18b8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_StompExplosionSound; // 0x1998        
        CSoundEventName m_StompEnemyImpactSound; // 0x19a8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DownStrikeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_DownStrikeModifier;
        char m_DownStrikeModifier[0x10]; // 0x19b8        
        // m_ImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_ImpactModifier;
        char m_ImpactModifier[0x10]; // 0x19c8        
        // metadata: MPropertyStartGroup "+Down Strike Params"
        float m_flHeightUILingerTime; // 0x19d8        
        float m_flDamageFrustumHalfWidth; // 0x19dc        
        float m_flDamageFrustumAngle; // 0x19e0        
        float m_flDamageWaveSpeed; // 0x19e4        
        float m_flDamageTraceProbeDamageRadius; // 0x19e8        
        float m_flDamageTraceProbeWorldRadius; // 0x19ec        
        float m_flDamageTraceProbeStepUpHeight; // 0x19f0        
        float m_flDamageTraceProbeStepDownHeight; // 0x19f4        
        float m_flDamageTraceProbeDropDownRate; // 0x19f8        
        float m_flInitialDamageRadiusInMeters; // 0x19fc        
        int32_t m_nGroundCrackGap; // 0x1a00        
        float m_flGroupLengthTolerance; // 0x1a04        
        float m_flDamageEffectScaleMin; // 0x1a08        
        float m_flDamageEffectScaleMax; // 0x1a0c        
        float m_flTrackAmount; // 0x1a10        
        [[maybe_unused]] std::uint8_t pad_0x1a14[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityLashDownStrikeVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityLashDownStrikeVData) == 0x1a18);
};
