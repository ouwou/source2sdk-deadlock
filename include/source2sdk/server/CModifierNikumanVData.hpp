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
    // Size: 0x848
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierNikumanVData : public server::CCitadelModifierAuraVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_SelfParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SelfParticle;
        char m_SelfParticle[0xe0]; // 0x678        
        // m_AOEFriendParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEFriendParticle;
        char m_AOEFriendParticle[0xe0]; // 0x758        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strAmbientLoopingLocalPlayerSound; // 0x838        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierNikumanVData because it is not a standard-layout class
    static_assert(sizeof(CModifierNikumanVData) == 0x848);
};
