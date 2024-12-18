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
    // Size: 0x1680
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityStickyBombVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_BombAttachedModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BombAttachedModifier;
        char m_BombAttachedModifier[0x10]; // 0x1568        
        // m_KillCheckModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_KillCheckModifier;
        char m_KillCheckModifier[0x10]; // 0x1578        
        // metadata: MPropertyStartGroup "Visuals"
        // m_CastBombParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastBombParticle;
        char m_CastBombParticle[0xe0]; // 0x1588        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flPostRangeGravityScale; // 0x1668        
        float m_flAllyCollideRadius; // 0x166c        
        float m_flBombDragStartRange; // 0x1670        
        float m_flBombDragStartValue; // 0x1674        
        float m_flBombDragEndValue; // 0x1678        
        float m_flAllyTargetRangeMult; // 0x167c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityStickyBombVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityStickyBombVData) == 0x1680);
};
