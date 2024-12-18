#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"
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
    // Size: 0x780
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierRestorativeGooVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_RestorativeGooEndParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RestorativeGooEndParticle;
        char m_RestorativeGooEndParticle[0xe0]; // 0x630        
        float m_flDistanceCameraOffsetLerpTime; // 0x710        
        float m_flDistanceCameraOffsetBias; // 0x714        
        float m_flDistanceCameraOffset; // 0x718        
        [[maybe_unused]] std::uint8_t pad_0x71c[0x4]; // 0x71c
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BreakoutProgressBarModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BreakoutProgressBarModifier;
        char m_BreakoutProgressBarModifier[0x10]; // 0x720        
        // m_PostCubeBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_PostCubeBuffModifier;
        char m_PostCubeBuffModifier[0x10]; // 0x730        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_NonTargetLoopingSound; // 0x740        
        CSoundEventName m_TargetLoopingSound; // 0x750        
        CSoundEventName m_LightMeleeImpact; // 0x760        
        CSoundEventName m_HeavyMeleeImpact; // 0x770        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierRestorativeGooVData because it is not a standard-layout class
    static_assert(sizeof(CModifierRestorativeGooVData) == 0x780);
};
