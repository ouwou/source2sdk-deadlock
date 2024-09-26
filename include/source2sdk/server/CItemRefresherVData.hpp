#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CitadelItemVData.hpp"
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
    // Size: 0x1670
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CItemRefresherVData : public server::CitadelItemVData
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_RefreshParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RefreshParticle;
        char m_RefreshParticle[0xe0]; // 0x1590        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemRefresherVData because it is not a standard-layout class
    static_assert(sizeof(CItemRefresherVData) == 0x1670);
};
