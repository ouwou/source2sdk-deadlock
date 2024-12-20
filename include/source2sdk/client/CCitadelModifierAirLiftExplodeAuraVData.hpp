#pragma once
#include "source2sdk/client/CCitadelModifierAuraVData.hpp"
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
    // Size: 0x758
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelModifierAirLiftExplodeAuraVData : public client::CCitadelModifierAuraVData
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_empWaveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_empWaveParticle;
        char m_empWaveParticle[0xe0]; // 0x678        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelModifierAirLiftExplodeAuraVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelModifierAirLiftExplodeAuraVData) == 0x758);
};
