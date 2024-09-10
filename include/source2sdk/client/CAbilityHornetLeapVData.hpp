#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
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
    // Size: 0x17b0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityHornetLeapVData : public client::CitadelAbilityVData
    {
    public:
        float m_flChannelingAirDrag; // 0x14f0        
        float m_flChannelingMaxFallSpeed; // 0x14f4        
        float m_flVerticalMoveSpeedTarget; // 0x14f8        
        [[maybe_unused]] std::uint8_t pad_0x14fc[0x4]; // 0x14fc
        // metadata: MPropertyGroupName "Modifiers"
        // m_LeapModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_LeapModifier;
        char m_LeapModifier[0x10]; // 0x1500        
        // metadata: MPropertyStartGroup "Visuals"
        // m_DustParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DustParticle;
        char m_DustParticle[0xe0]; // 0x1510        
        // m_TrailParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TrailParticle;
        char m_TrailParticle[0xe0]; // 0x15f0        
        // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
        char m_CastParticle[0xe0]; // 0x16d0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityHornetLeapVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityHornetLeapVData) == 0x17b0);
};
