#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x17e8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityHornetLeapVData : public server::CitadelAbilityVData
    {
    public:
        float m_flChannelingAirDrag; // 0x1528        
        float m_flChannelingMaxFallSpeed; // 0x152c        
        float m_flVerticalMoveSpeedTarget; // 0x1530        
        float m_flAirDrag; // 0x1534        
        // metadata: MPropertyGroupName "Modifiers"
        // m_LeapModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_LeapModifier;
        char m_LeapModifier[0x10]; // 0x1538        
        // metadata: MPropertyStartGroup "Visuals"
        // m_DustParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DustParticle;
        char m_DustParticle[0xe0]; // 0x1548        
        // m_TrailParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TrailParticle;
        char m_TrailParticle[0xe0]; // 0x1628        
        // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
        char m_CastParticle[0xe0]; // 0x1708        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityHornetLeapVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityHornetLeapVData) == 0x17e8);
};
