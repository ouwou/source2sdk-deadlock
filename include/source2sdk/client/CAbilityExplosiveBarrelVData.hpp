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
    // Size: 0x17f0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityExplosiveBarrelVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_BarrelExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BarrelExplodeParticle;
        char m_BarrelExplodeParticle[0xe0]; // 0x14f0        
        // m_MirvExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MirvExplodeParticle;
        char m_MirvExplodeParticle[0xe0]; // 0x15d0        
        // m_BarrelBurnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BarrelBurnParticle;
        char m_BarrelBurnParticle[0xe0]; // 0x16b0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strExplodeSound; // 0x1790        
        CSoundEventName m_strMirvExplodeSound; // 0x17a0        
        CSoundEventName m_strRiccochetSound; // 0x17b0        
        CSoundEventName m_strBarrelSoundLp; // 0x17c0        
        CSoundEventName m_strBarrelLaunchSound; // 0x17d0        
        CSoundEventName m_strBarrelMeleedSound; // 0x17e0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityExplosiveBarrelVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityExplosiveBarrelVData) == 0x17f0);
};
