#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelYamatoBaseVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
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
    // Size: 0x17b0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_InfinitySlashVData : public client::CCitadelYamatoBaseVData
    {
    public:
        float m_flRiseSpeed; // 0x1530        
        float m_flRiseDuration; // 0x1534        
        float m_flSpeedDecayScale; // 0x1538        
        float m_flExplodeHoldTime; // 0x153c        
        float m_flExplosionShakeAmplitude; // 0x1540        
        float m_flExplosionShakeFrequency; // 0x1544        
        float m_flExplosionShakeDuration; // 0x1548        
        [[maybe_unused]] std::uint8_t pad_0x154c[0x4]; // 0x154c
        // metadata: MPropertyStartGroup "Visuals"
        // m_AOERangeEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOERangeEffect;
        char m_AOERangeEffect[0xe0]; // 0x1550        
        // m_AnimCastEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AnimCastEffect;
        char m_AnimCastEffect[0xe0]; // 0x1630        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceExplosion; // 0x1710        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BuffModifier;
        char m_BuffModifier[0x10]; // 0x1790        
        // m_BuffTimerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BuffTimerModifier;
        char m_BuffTimerModifier[0x10]; // 0x17a0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_InfinitySlashVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_InfinitySlashVData) == 0x17b0);
};
