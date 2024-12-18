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
    // Size: 0x1668
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityGarbageVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_GarbageAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_GarbageAuraModifier;
        char m_GarbageAuraModifier[0x10]; // 0x1568        
        // metadata: MPropertyStartGroup "Visuals"
        // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
        char m_ExplodeParticle[0xe0]; // 0x1578        
        // metadata: MPropertyStartGroup "+Vacuum Properties"
        float m_flAirSpeedMax; // 0x1658        
        float m_flFallSpeedMax; // 0x165c        
        float m_flAirDrag; // 0x1660        
        float m_flMaxMovespeed; // 0x1664        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityGarbageVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityGarbageVData) == 0x1668);
};
