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
    // Size: 0x9b8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_LightningStrikeAreaVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_GroundParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundParticle;
        char m_GroundParticle[0xe0]; // 0x630        
        // m_StrikeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StrikeParticle;
        char m_StrikeParticle[0xe0]; // 0x710        
        // m_GroundParticleFriendly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundParticleFriendly;
        char m_GroundParticleFriendly[0xe0]; // 0x7f0        
        // m_StrikeParticleFriendly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StrikeParticleFriendly;
        char m_StrikeParticleFriendly[0xe0]; // 0x8d0        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flHeight; // 0x9b0        
        [[maybe_unused]] std::uint8_t pad_0x9b4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_LightningStrikeAreaVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_LightningStrikeAreaVData) == 0x9b8);
};
