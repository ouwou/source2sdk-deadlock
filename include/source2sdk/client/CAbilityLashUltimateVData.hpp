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
    // Size: 0x1928
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
        char m_TargetPreviewParticle[0xe0]; // 0x1548        
        // m_LaunchParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaunchParticle;
        char m_LaunchParticle[0xe0]; // 0x1628        
        // m_UltimateCastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UltimateCastParticle;
        char m_UltimateCastParticle[0xe0]; // 0x1708        
        // m_UltimateCastEnemyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UltimateCastEnemyParticle;
        char m_UltimateCastEnemyParticle[0xe0]; // 0x17e8        
        // metadata: MPropertyStartGroup "Animation"
        // metadata: MPropertyLeafSuggestionProviderFn
        CGlobalSymbol m_strThrowEnemyAnimGraphParam; // 0x18c8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_GrappleEnemyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadel_Modifier_LashGrappleEnemy_Debuff> m_GrappleEnemyModifier;
        char m_GrappleEnemyModifier[0x10]; // 0x18d0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_GrabSound; // 0x18e0        
        CSoundEventName m_MissSound; // 0x18f0        
        CSoundEventName m_ThrowSound; // 0x1900        
        // metadata: MPropertyStartGroup "+Ultimate Properties"
        float m_flAirSpeedMax; // 0x1910        
        float m_flFallSpeedMax; // 0x1914        
        float m_flAirDrag; // 0x1918        
        float m_flMaxPitchRangeScale; // 0x191c        
        float m_flThrowAnimTossPoint; // 0x1920        
        [[maybe_unused]] std::uint8_t pad_0x1924[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityLashUltimateVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityLashUltimateVData) == 0x1928);
};
