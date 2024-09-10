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
    // Size: 0x728
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierVacuumAuraVData : public client::CCitadelModifierAuraVData
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_FinishParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FinishParticle;
        char m_FinishParticle[0xe0]; // 0x638        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_strAmbientLoopingLocalPlayerSound; // 0x718        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierVacuumAuraVData because it is not a standard-layout class
    
    static_assert(sizeof(CModifierVacuumAuraVData) == 0x728);
};
