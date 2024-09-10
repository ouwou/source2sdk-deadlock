#pragma once
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
    // Size: 0x16e0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityTokamakHeatSinksInherentVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_HotTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HotTracerParticle;
        char m_HotTracerParticle[0xe0]; // 0x14f0        
        // m_HotWeaponFxParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HotWeaponFxParticle;
        char m_HotWeaponFxParticle[0xe0]; // 0x15d0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strHotWeaponShootSound; // 0x16b0        
        CSoundEventName m_strOverheatRed; // 0x16c0        
        CSoundEventName m_strOverheatFull; // 0x16d0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityTokamakHeatSinksInherentVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityTokamakHeatSinksInherentVData) == 0x16e0);
};
