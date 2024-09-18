#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x7c8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifier_Wrecker_UltimateGrabEnemyVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_EnemyHeroStasisEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyHeroStasisEffect;
        char m_EnemyHeroStasisEffect[0xe0]; // 0x608        
        // m_EnemyHeroGrabEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyHeroGrabEffect;
        char m_EnemyHeroGrabEffect[0xe0]; // 0x6e8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_Wrecker_UltimateGrabEnemyVData because it is not a standard-layout class
    static_assert(sizeof(CModifier_Wrecker_UltimateGrabEnemyVData) == 0x7c8);
};
