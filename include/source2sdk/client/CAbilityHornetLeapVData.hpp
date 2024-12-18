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
    // Size: 0x1838
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityHornetLeapVData : public client::CitadelAbilityVData
    {
    public:
        float m_flChannelingAirDrag; // 0x1568        
        float m_flChannelingMaxFallSpeed; // 0x156c        
        float m_flVerticalMoveSpeedPercent; // 0x1570        
        float m_flAirDrag; // 0x1574        
        float m_flAirAcceleration; // 0x1578        
        float m_flLaunchAirDrag; // 0x157c        
        float m_flLaunchTime; // 0x1580        
        float m_flMoveSpeedAboveBaseScale; // 0x1584        
        // metadata: MPropertyGroupName "Modifiers"
        // m_LeapModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_LeapModifier;
        char m_LeapModifier[0x10]; // 0x1588        
        // metadata: MPropertyStartGroup "Visuals"
        // m_DustParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DustParticle;
        char m_DustParticle[0xe0]; // 0x1598        
        // m_TrailParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TrailParticle;
        char m_TrailParticle[0xe0]; // 0x1678        
        // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
        char m_CastParticle[0xe0]; // 0x1758        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityHornetLeapVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityHornetLeapVData) == 0x1838);
};
