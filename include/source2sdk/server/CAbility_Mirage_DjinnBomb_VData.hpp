#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x1630
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbility_Mirage_DjinnBomb_VData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_DetonateParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DetonateParticle;
        char m_DetonateParticle[0xe0]; // 0x1540        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strDetonateSound; // 0x1620        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Mirage_DjinnBomb_VData because it is not a standard-layout class
    static_assert(sizeof(CAbility_Mirage_DjinnBomb_VData) == 0x1630);
};
