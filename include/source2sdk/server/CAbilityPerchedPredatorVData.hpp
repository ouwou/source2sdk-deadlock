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
    // Size: 0x1810
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityPerchedPredatorVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_ExplodeBaseParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeBaseParticle;
        char m_ExplodeBaseParticle[0xe0]; // 0x1548        
        // m_ExplodeFriendlyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeFriendlyParticle;
        char m_ExplodeFriendlyParticle[0xe0]; // 0x1628        
        // m_ExplodeEnemyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeEnemyParticle;
        char m_ExplodeEnemyParticle[0xe0]; // 0x1708        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strExplodeSound; // 0x17e8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ModifierDragEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ModifierDragEnemy;
        char m_ModifierDragEnemy[0x10]; // 0x17f8        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flOnHitDetonateTimer; // 0x1808        
        float m_flTraceTravelRadius; // 0x180c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityPerchedPredatorVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityPerchedPredatorVData) == 0x1810);
};
