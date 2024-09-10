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
    // Size: 0x1a58
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityPerchedPredatorVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_MineActiveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MineActiveParticle;
        char m_MineActiveParticle[0xe0]; // 0x14f0        
        // m_CatReappearParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatReappearParticle;
        char m_CatReappearParticle[0xe0]; // 0x15d0        
        // m_CatEyesParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatEyesParticle;
        char m_CatEyesParticle[0xe0]; // 0x16b0        
        // m_ExplodeBaseParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeBaseParticle;
        char m_ExplodeBaseParticle[0xe0]; // 0x1790        
        // m_ExplodeFriendlyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeFriendlyParticle;
        char m_ExplodeFriendlyParticle[0xe0]; // 0x1870        
        // m_ExplodeEnemyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeEnemyParticle;
        char m_ExplodeEnemyParticle[0xe0]; // 0x1950        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strExplodeSound; // 0x1a30        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ModifierDragEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ModifierDragEnemy;
        char m_ModifierDragEnemy[0x10]; // 0x1a40        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flOnHitDetonateTimer; // 0x1a50        
        float m_flTraceTravelRadius; // 0x1a54        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityPerchedPredatorVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityPerchedPredatorVData) == 0x1a58);
};
