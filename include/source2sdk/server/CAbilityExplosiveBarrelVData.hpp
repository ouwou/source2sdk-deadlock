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
    // Size: 0x1840
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityExplosiveBarrelVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_BarrelExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BarrelExplodeParticle;
        char m_BarrelExplodeParticle[0xe0]; // 0x1540        
        // m_MirvExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MirvExplodeParticle;
        char m_MirvExplodeParticle[0xe0]; // 0x1620        
        // m_BarrelBurnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BarrelBurnParticle;
        char m_BarrelBurnParticle[0xe0]; // 0x1700        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strExplodeSound; // 0x17e0        
        CSoundEventName m_strMirvExplodeSound; // 0x17f0        
        CSoundEventName m_strRiccochetSound; // 0x1800        
        CSoundEventName m_strBarrelSoundLp; // 0x1810        
        CSoundEventName m_strBarrelLaunchSound; // 0x1820        
        CSoundEventName m_strBarrelMeleedSound; // 0x1830        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityExplosiveBarrelVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityExplosiveBarrelVData) == 0x1840);
};
