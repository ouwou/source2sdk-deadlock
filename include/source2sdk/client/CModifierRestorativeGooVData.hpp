#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Size: 0x758
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierRestorativeGooVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_RestorativeGooEndParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RestorativeGooEndParticle;
        char m_RestorativeGooEndParticle[0xe0]; // 0x608        
        float m_flDistanceCameraOffsetLerpTime; // 0x6e8        
        float m_flDistanceCameraOffsetBias; // 0x6ec        
        float m_flDistanceCameraOffset; // 0x6f0        
        [[maybe_unused]] std::uint8_t pad_0x6f4[0x4]; // 0x6f4
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BreakoutProgressBarModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BreakoutProgressBarModifier;
        char m_BreakoutProgressBarModifier[0x10]; // 0x6f8        
        // m_PostCubeBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_PostCubeBuffModifier;
        char m_PostCubeBuffModifier[0x10]; // 0x708        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_NonTargetLoopingSound; // 0x718        
        CSoundEventName m_TargetLoopingSound; // 0x728        
        CSoundEventName m_LightMeleeImpact; // 0x738        
        CSoundEventName m_HeavyMeleeImpact; // 0x748        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierRestorativeGooVData because it is not a standard-layout class
    static_assert(sizeof(CModifierRestorativeGooVData) == 0x758);
};
