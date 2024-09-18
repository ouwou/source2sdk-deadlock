#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifierAuraVData.hpp"
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
    // Size: 0x728
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CItemAOESilenceAuraVData : public server::CCitadelModifierAuraVData
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_empWaveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_empWaveParticle;
        char m_empWaveParticle[0xe0]; // 0x648        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemAOESilenceAuraVData because it is not a standard-layout class
    static_assert(sizeof(CItemAOESilenceAuraVData) == 0x728);
};
