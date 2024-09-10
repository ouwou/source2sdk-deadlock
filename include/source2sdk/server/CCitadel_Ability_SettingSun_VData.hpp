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
    // Size: 0x16d0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_SettingSun_VData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_BeamTargetParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamTargetParticle;
        char m_BeamTargetParticle[0xe0]; // 0x14f0        
        // m_UnitTargetParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UnitTargetParticle;
        char m_UnitTargetParticle[0xe0]; // 0x15d0        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SettingSunThinkerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_SettingSunThinkerModifier;
        char m_SettingSunThinkerModifier[0x10]; // 0x16b0        
        float m_flSSCameraPreviewOffset; // 0x16c0        
        float m_flSSCameraPreviewSpeed; // 0x16c4        
        float m_flSSCameraPreviewDistance; // 0x16c8        
        [[maybe_unused]] std::uint8_t pad_0x16cc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_SettingSun_VData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_SettingSun_VData) == 0x16d0);
};
