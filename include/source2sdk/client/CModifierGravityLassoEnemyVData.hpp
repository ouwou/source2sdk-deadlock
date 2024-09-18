#pragma once
#include "source2sdk/client/CCitadel_Modifier_StunnedVData.hpp"
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
    // Size: 0x7c8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierGravityLassoEnemyVData : public client::CCitadel_Modifier_StunnedVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_LassoEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LassoEffect;
        char m_LassoEffect[0xe0]; // 0x6e8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierGravityLassoEnemyVData because it is not a standard-layout class
    static_assert(sizeof(CModifierGravityLassoEnemyVData) == 0x7c8);
};
