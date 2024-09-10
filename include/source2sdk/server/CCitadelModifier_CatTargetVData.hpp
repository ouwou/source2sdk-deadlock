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
    // Size: 0x7d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelModifier_CatTargetVData : public server::CCitadelModifierVData
    {
    public:
        float m_flBaseCatScale; // 0x5f8        
        float m_flMinPitch; // 0x5fc        
        float m_flMaxPitch; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x604[0x4]; // 0x604
        // metadata: MPropertyGroupName "Visuals"
        // m_CatPuffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatPuffParticle;
        char m_CatPuffParticle[0xe0]; // 0x608        
        // m_CatGlowParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatGlowParticle;
        char m_CatGlowParticle[0xe0]; // 0x6e8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strTurnIntoCatSound; // 0x7c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelModifier_CatTargetVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadelModifier_CatTargetVData) == 0x7d8);
};
