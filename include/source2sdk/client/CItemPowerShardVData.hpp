#pragma once
#include "source2sdk/client/CitadelItemVData.hpp"
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
    // Size: 0x1668
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CItemPowerShardVData : public client::CitadelItemVData
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_RefreshParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RefreshParticle;
        char m_RefreshParticle[0xe0]; // 0x1588        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemPowerShardVData because it is not a standard-layout class
    static_assert(sizeof(CItemPowerShardVData) == 0x1668);
};
