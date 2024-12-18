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
    // Size: 0x1a78
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
        char m_TargetPreviewParticle[0xe0]; // 0x1568        
        // metadata: MPropertyLeafSuggestionProviderFn
        CGlobalSymbol m_strGroundCastAnimGraphParam; // 0x1648        
        // metadata: MPropertyLeafSuggestionProviderFn
        CGlobalSymbol m_strAirCastAnimGraphParam; // 0x1650        
        // m_StompParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompParticle;
        char m_StompParticle[0xe0]; // 0x1658        
        // m_StompLineParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompLineParticle;
        char m_StompLineParticle[0xe0]; // 0x1738        
        // m_StompLineObstructedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompLineObstructedParticle;
        char m_StompLineObstructedParticle[0xe0]; // 0x1818        
        // m_StompImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompImpactParticle;
        char m_StompImpactParticle[0xe0]; // 0x18f8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_StompExplosionSound; // 0x19d8        
        CSoundEventName m_StompEnemyImpactSound; // 0x19e8        
        CSoundEventName m_strFallCollideImpactSound; // 0x19f8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DownStrikeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_DownStrikeModifier;
        char m_DownStrikeModifier[0x10]; // 0x1a08        
        // m_ImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_ImpactModifier;
        char m_ImpactModifier[0x10]; // 0x1a18        
        // m_DragModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_DragModifier;
        char m_DragModifier[0x10]; // 0x1a28        
        // metadata: MPropertyStartGroup "+Down Strike Params"
        float m_flHeightUILingerTime; // 0x1a38        
        float m_flDamageFrustumHalfWidth; // 0x1a3c        
        float m_flDamageFrustumAngle; // 0x1a40        
        float m_flDamageWaveSpeed; // 0x1a44        
        float m_flDamageTraceProbeDamageRadius; // 0x1a48        
        float m_flDamageTraceProbeWorldRadius; // 0x1a4c        
        float m_flDamageTraceProbeStepUpHeight; // 0x1a50        
        float m_flDamageTraceProbeStepDownHeight; // 0x1a54        
        float m_flDamageTraceProbeDropDownRate; // 0x1a58        
        float m_flInitialDamageRadiusInMeters; // 0x1a5c        
        int32_t m_nGroundCrackGap; // 0x1a60        
        float m_flGroupLengthTolerance; // 0x1a64        
        float m_flDamageEffectScaleMin; // 0x1a68        
        float m_flDamageEffectScaleMax; // 0x1a6c        
        float m_flTrackAmount; // 0x1a70        
        float m_flCollideRadius; // 0x1a74        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityLashDownStrikeVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityLashDownStrikeVData) == 0x1a78);
};
