#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Size: 0x7e8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelModifierAerialAssaultVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_FireRateModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_FireRateModifier;
        char m_FireRateModifier[0x10]; // 0x5f8        
        // metadata: MPropertyStartGroup "Visuals"
        // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
        char m_ExplodeParticle[0xe0]; // 0x608        
        // m_TracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerParticle;
        char m_TracerParticle[0xe0]; // 0x6e8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_ExplodeSound; // 0x7c8        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flAirDrag; // 0x7d8        
        float m_flAirSpeed; // 0x7dc        
        float m_flFallSpeed; // 0x7e0        
        [[maybe_unused]] std::uint8_t pad_0x7e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelModifierAerialAssaultVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadelModifierAerialAssaultVData) == 0x7e8);
};