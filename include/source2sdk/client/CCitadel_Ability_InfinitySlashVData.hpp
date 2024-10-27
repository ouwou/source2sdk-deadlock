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
    // Size: 0x17e0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_InfinitySlashVData : public client::CCitadelYamatoBaseVData
    {
    public:
        float m_flRiseSpeed; // 0x1558        
        float m_flRiseDuration; // 0x155c        
        float m_flSpeedDecayScale; // 0x1560        
        float m_flExplodeHoldTime; // 0x1564        
        float m_flExplosionShakeAmplitude; // 0x1568        
        float m_flExplosionShakeFrequency; // 0x156c        
        float m_flExplosionShakeDuration; // 0x1570        
        [[maybe_unused]] std::uint8_t pad_0x1574[0x4]; // 0x1574
        // metadata: MPropertyStartGroup "Visuals"
        // m_AOERangeEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOERangeEffect;
        char m_AOERangeEffect[0xe0]; // 0x1578        
        // m_AnimCastEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AnimCastEffect;
        char m_AnimCastEffect[0xe0]; // 0x1658        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceExplosion; // 0x1738        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BuffModifier;
        char m_BuffModifier[0x10]; // 0x17c0        
        // m_BuffTimerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BuffTimerModifier;
        char m_BuffTimerModifier[0x10]; // 0x17d0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_InfinitySlashVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_InfinitySlashVData) == 0x17e0);
};
