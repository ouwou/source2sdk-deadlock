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
    // Size: 0x6f8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifier_Synth_Grasp_Victim_VData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strVictimTetheredSound; // 0x608        
        // metadata: MPropertyStartGroup "Visuals"
        // m_GraspVictimParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GraspVictimParticle;
        char m_GraspVictimParticle[0xe0]; // 0x618        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_Synth_Grasp_Victim_VData because it is not a standard-layout class
    static_assert(sizeof(CModifier_Synth_Grasp_Victim_VData) == 0x6f8);
};
