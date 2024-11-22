#pragma once
#include "source2sdk/client/CBaseLockonAbilityVData.hpp"
#include "source2sdk/client/CCitadel_Modifier_LashGrappleEnemy_Debuff.hpp"
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
    class CAbilityLashUltimateVData : public client::CBaseLockonAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_TargetPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetPreviewParticle;
        char m_TargetPreviewParticle[0xe0]; // 0x1580        
        // m_LaunchParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaunchParticle;
        char m_LaunchParticle[0xe0]; // 0x1660        
        // m_UltimateCastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UltimateCastParticle;
        char m_UltimateCastParticle[0xe0]; // 0x1740        
        // m_UltimateCastEnemyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UltimateCastEnemyParticle;
        char m_UltimateCastEnemyParticle[0xe0]; // 0x1820        
        // m_AllyIndicatorParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AllyIndicatorParticle;
        char m_AllyIndicatorParticle[0xe0]; // 0x1900        
        // metadata: MPropertyStartGroup "Animation"
        // metadata: MPropertyLeafSuggestionProviderFn
        CGlobalSymbol m_strThrowEnemyAnimGraphParam; // 0x19e0        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_GrappleEnemyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadel_Modifier_LashGrappleEnemy_Debuff> m_GrappleEnemyModifier;
        char m_GrappleEnemyModifier[0x10]; // 0x19e8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_GrabSound; // 0x19f8        
        CSoundEventName m_MissSound; // 0x1a08        
        CSoundEventName m_ThrowSound; // 0x1a18        
        // metadata: MPropertyStartGroup "+Ultimate Properties"
        float m_flAirSpeedMax; // 0x1a28        
        float m_flFallSpeedMax; // 0x1a2c        
        float m_flAirDrag; // 0x1a30        
        float m_flMaxPitchRangeScale; // 0x1a34        
        float m_flThrowAnimTossPoint; // 0x1a38        
        [[maybe_unused]] std::uint8_t pad_0x1a3c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityLashUltimateVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityLashUltimateVData) == 0x1a40);
};
