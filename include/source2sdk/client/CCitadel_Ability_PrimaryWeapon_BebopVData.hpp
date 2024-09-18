#pragma once
#include "source2sdk/client/CCitadel_Ability_PrimaryWeaponVData.hpp"
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
    // Size: 0x16c0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_PrimaryWeapon_BebopVData : public client::CCitadel_Ability_PrimaryWeaponVData
    {
    public:
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strWindupSound; // 0x1588        
        CSoundEventName m_strBeamStartSound; // 0x1598        
        CSoundEventName m_strBeamLoopSound1; // 0x15a8        
        CSoundEventName m_strBeamLoopSound2; // 0x15b8        
        CSoundEventName m_strBeamStopSound; // 0x15c8        
        // metadata: MPropertyStartGroup "Visuals"
        // m_szWeaponBeamParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szWeaponBeamParticle;
        char m_szWeaponBeamParticle[0xe0]; // 0x15d8        
        // metadata: MPropertyStartGroup "Misc"
        float m_flWindupRepeatCycle; // 0x16b8        
        [[maybe_unused]] std::uint8_t pad_0x16bc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon_BebopVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PrimaryWeapon_BebopVData) == 0x16c0);
};
